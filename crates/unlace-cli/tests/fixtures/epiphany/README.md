# Epiphany hardware-loop fixtures

`loop.s` holds three functions: `f` (0x1000) and `g` (0x1048) set up a hardware loop as the
Epiphany Architecture Reference's example does (`mov`/`movt` of the loop start and of the
last body instruction, `movts ls`, `movts le`, `movts lc`), `f` with 16-bit `movts` from
r1 and the count in r2, `g` with 32-bit `movts` from r20-r22 and the count 16; `h` (0x1098)
writes LS and LE from loaded values, which mark nothing. `loop.bin` is its `.text`, loaded
at 0x1000, built with binutils 2.45 configured `--target=epiphany-elf`:

```sh
epiphany-elf-as -o loop.o loop.s
epiphany-elf-ld -Ttext=0x1000 -e f -o loop.x loop.o
epiphany-elf-objcopy -O binary -j .text loop.x loop.bin
```
