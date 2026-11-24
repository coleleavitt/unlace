# RISC-V Zfa fixtures

Linked shared objects for `riscv.zfa.sinc` (and the corrected `fli` constant
0 display in `riscv.rv32f.sinc`). Built with the LLVM 23 `llc` and `ld.lld`
(rustc-master toolchain; LLD 23.1.6):

```sh
llc -mtriple=riscv64-unknown-elf -mattr=+m,+f,+d,+zfh,+zfa -target-abi=lp64d -O2 -filetype=obj zfa64.ll -o zfa64.o
ld.lld -shared -o zfa64.elf zfa64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+f,+d,+zfh,+zfa -target-abi=ilp32d -O2 -filetype=obj zfa32.ll -o zfa32.o
ld.lld -shared -o zfa32.elf zfa32.o
```

| File | What |
|---|---|
| `zfa32.elf` | `probe`: `fli.d` with all 32 constants, `fli.s`/`fli.h`, `fminm`/`fmaxm`, `fround`/`froundnx` (static and dynamic rounding), `fcvtmod.w.d`, `fleq`/`fltq` in S, D and H, then `fmvh.x.d`/`fmvp.d.x`; compiler-selected `dmin` (fminm.d), `fmaxf` (fmaxm.s), `dfloor` (fround.d rdn), `half` (fli.d 0.5), `quietle` (fleq.d) |
| `zfa64.elf` | the same without the RV32-only moves |
