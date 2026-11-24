# movwpairs fixtures

`pairs.c` reads, writes and passes globals and a function pointer whose addresses the compiler builds
in 16-bit halves: `movw`/`movt` for Thumb-2 (Cortex-M3), `movz`/`movk` for AArch64 `-mcmodel=large`.
Built with clang version 22.1.8 (https://github.com/llvm/llvm-project.git ca7933e47d3a3451d81e72ac174dcb5aa28b59d1) and ld.lld:

```sh
clang --target=thumbv7m-none-eabi -mcpu=cortex-m3 -O2 -ffreestanding -fno-pic -c pairs.c -o t.o
ld.lld -e reset --no-gc-sections --build-id=none t.o -o pairs_thumb.elf
clang --target=aarch64-none-elf -O2 -ffreestanding -fno-pic -mcmodel=large -c pairs.c -o a.o
ld.lld -e reset --no-gc-sections --build-id=none a.o -o pairs_a64.elf
```

| file | SHA-256 |
|---|---|
| `pairs_thumb.elf` | `0f2b43e3f8eca30bcb632b7763e848c8560c91b63a85dd4c9ddcb2d93b6a4add` |
| `pairs_a64.elf` | `392d1f253f5aa448ba5987aea4fa4c62a87067523abb96a135209b2552a2ac04` |
