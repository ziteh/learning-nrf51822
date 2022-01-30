/**
 * @file   main.c
 * @brief  Blinking LED example.
 * @author ZiTe (honmonoh@gmail.com)
 */

#include "nrf_delay.h"
#include "nrf_gpio.h"
#include <stdio.h>
#include <stdlib.h>

#define LED_PIN (18)

int main(void) {
  nrf_gpio_cfg_output(LED_PIN);

  while (1) {
    nrf_gpio_pin_toggle(LED_PIN);
    nrf_delay_ms(100);
  }

  return 0;
}