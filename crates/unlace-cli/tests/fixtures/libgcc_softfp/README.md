# libgcc soft-float fixtures

`sf.c` built with zig 0.15.2 at `-O2 -g0` (no debug information, so every prototype comes from recovery or the built-in tables):

```sh
zig cc -target mipsel-freestanding -msoft-float -O2 -g0 -c sf.c -o mipsel.o
zig cc -target mips-freestanding -msoft-float -O2 -g0 -c sf.c -o mipsbe.o
zig cc -target riscv32-freestanding -mcpu=generic_rv32+m -mabi=ilp32 -O2 -g0 -c sf.c -o rv32.o
zig cc -target lanai-freestanding -O2 -g0 -c sf.c -o lanai.o
```

`corpus.c` built with GNU gcc 15.3 / binutils 2.45 cross compilers at `-O2` with no `-g`, unlinked:

```sh
csky-elf-gcc -O2 -c corpus.c -o gcc-csky.o           # ck810, ABIv2
or1k-elf-gcc -O2 -c corpus.c -o gcc-or1k.o
arc-elf-gcc -mcpu=hs -O2 -c corpus.c -o gcc-arc.o
xtensa-elf-gcc -O2 -c corpus.c -o gcc-xtensa.o       # little-endian windowed core (XCHAL_HAVE_BE 0)
```

Every floating-point operation, and `mul_wide`'s 64-bit multiply on Lanai, is a call to a libgcc routine (`__addsf3`, `__adddf3`, `__fixsfsi`, `__ltdf2`, `__muldi3`, ...).
