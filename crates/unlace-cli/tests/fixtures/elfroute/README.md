# ELF routing and relocation fixtures

`fx.c` built for each machine routed by header (#706) or relocated by #713-#737, loaded by the
`loader = "auto"` rows of `crates/unlace-cli/tests/processors.toml` with no `--target`:

- `<arch>.o`: `zig cc -target <arch>-freestanding -O2 -fno-inline-functions -c fx.c` (zig 0.15.2);
  `gfx900.o`, `gfx1030.o`, `gfx1100.o`: `clang --target=amdgcn-amd-amdhsa -mcpu=<gfx> -O2 -c fx.c`
  (LLVM 22).
- `<arch>.elf`: `ld.lld -N --image-base=0 --unresolved-symbols=ignore-all -e 0 -Ttext=<base> <arch>.o`
  with base 0x0 (avr), 0x4400 (msp430), 0x100000 (sparc64), 0x1000 (gfx900), 0x10000 (the others).
  Lanai has no linker, so only `lanai.o`.
