# RISC-V Zacas register-pair fixtures

For `riscv.zacas.sinc`. The ELF probes are built with the LLVM 23 `llc` and
`ld.lld` (rustc-master toolchain):

```sh
llc -mtriple=riscv32-unknown-elf -mattr=+m,+a,+zacas -O2 -filetype=obj zacas32.ll -o zacas32.o
ld.lld -shared -o zacas32.elf zacas32.o
llc -mtriple=riscv64-unknown-elf -mattr=+m,+a,+zacas -O2 -filetype=obj zacas64.ll -o zacas64.o
ld.lld -shared -o zacas64.elf zacas64.o
```

The raw images are the `.text` of `amocas.d a0,a2,(a4); ret` (RV32) and
`amocas.q a0,a2,(a4); ret` (RV64), assembled by LLVM 20 (`zig cc`) and cut
with `llvm-objcopy -O binary -j .text`.

| File | What |
|---|---|
| `zacas32.elf`, `zacas64.elf` | `probe`: the plain, `.aqrl` and x0-pair forms |
| `zacas32.bin`, `zacas64.bin` | raw images loaded at 0x1000 |
