# RISC-V XThead fixtures

For `riscv.xthead.sinc` (languages `RISCV:LE:64:XThead`, `RISCV:LE:32:XThead`).
Built with the LLVM 23 `llc` and `ld.lld` (rustc-master toolchain):

```sh
A=+m,+a,+f,+d,+c,+xtheadba,+xtheadbb,+xtheadbs,+xtheadcondmov,+xtheadmac,+xtheadmempair,+xtheadmemidx,+xtheadfmemidx,+xtheadcmo,+xtheadsync
llc -mtriple=riscv64-unknown-elf -mattr=$A -O2 -filetype=obj xthead64.ll -o xthead64.o
ld.lld -shared -o xthead64.elf xthead64.o
llc -mtriple=riscv32-unknown-elf -mattr=$A -O2 -filetype=obj xthead32.ll -o xthead32.o
ld.lld -shared -o xthead32.elf xthead32.o
```

`xthead64.bin` is the `.text` of `th.lrd a0,a0,a1,3; th.mula a0,a2,a3; ret`
assembled by LLVM 20 (`zig cc -target riscv64-freestanding`, `.option arch,
+xtheadmemidx, +xtheadmac, +c`) and cut with `llvm-objcopy -O binary -j .text`.

| File | What |
|---|---|
| `xthead64.elf`, `xthead32.elf` | `probe`: every XThead encoding the language decodes (RV32: the RV64-only ones dropped); compiler-selected `scaled_index` (`th.lrd`/`th.lrw`), `field` (`th.extu`), `pick` (`th.mvnez`), `mac` (`th.mula`) |
| `probe64.txt`, `probe32.txt` | the expected `unlace disassemble ... probe` rows; they agree with `llvm-objdump -M no-aliases --mattr=$A` on every XThead row (102/102 RV64, 80/80 RV32) once spacing and hex/decimal immediates are normalised; the last row is `ret` where LLVM prints `c.jr ra` |
| `xthead64.bin` | raw image loaded at 0x1000 |
