# ELF routing and relocation fixtures

`fx.c` built for each machine routed by header (#706) or relocated by #713-#737, loaded by the
`loader = "auto"` rows of `crates/unlace-cli/tests/processors.toml` with no `--target`:

- `<arch>.o`: `zig cc -target <arch>-freestanding -O2 -fno-inline-functions -c fx.c` (zig 0.15.2);
  `gfx900.o`, `gfx1030.o`, `gfx1100.o`: `clang --target=amdgcn-amd-amdhsa -mcpu=<gfx> -O2 -c fx.c`
  (LLVM 22).
- `<arch>.elf`: `ld.lld -N --image-base=0 --unresolved-symbols=ignore-all -e 0 -Ttext=<base> <arch>.o`
  with base 0x0 (avr), 0x4400 (msp430), 0x100000 (sparc64), 0x1000 (gfx900), 0x10000 (the others).
  Lanai has no linker, so only `lanai.o`.

- `csky.{o,elf}`, `m68k.{o,elf}`, `or1k.elf`, `xtensa.elf` (the machines routed by #776):
  `<target>-gcc -O2 -fno-inline-functions -c fx.c` with GNU gcc 15.3 for `csky-elf`,
  `m68k-elf`, `or1k-elf` and `xtensa-elf` (the xtensa core built with `XCHAL_HAVE_BE 0`, windowed
  ABI). Linked with `<target>-ld -e 0 -Ttext=0x10000` and stripped with `--strip-debug`.
  `or1k.o` and `xtensa.o` are the unlinked objects.
- `sparc64_float.o`: `zig cc -target sparc64-freestanding -O2 -c sparc64_float.c`, single and double float
  returns under the V9 ABI (#765).
- `sm80.o`: `clang --target=nvptx64-nvidia-cuda -march=sm_80 -O2 -fno-inline-functions -S fx.c` (LLVM 22),
  then `ptxas -c -arch=sm_80 -O3` (CUDA 13).
- `sm80_strlen.o`: `clang --target=nvptx64 -march=sm_80 -O2 -fno-builtin -S sm80_strlen.c` (LLVM 22),
  then `ptxas -c -arch=sm_80` (CUDA 13.4): the `retindexuse` default on SASS (#865).
