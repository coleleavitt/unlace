# RISC-V Zfh fixtures

Linked shared objects for the Zfh half-precision instructions
(`riscv.zfh.sinc`). Built with the LLVM 23 `llc` and `ld.lld` (rustc-master
toolchain; LLD 23.1.6):

```sh
llc -mtriple=riscv64-unknown-elf -mattr=+m,+f,+d,+zfh -target-abi=lp64d -O2 -filetype=obj zfh64.ll -o zfh64.o
ld.lld -shared -o zfh64.elf zfh64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+f,+d,+zfh -target-abi=ilp32d -O2 -filetype=obj zfh32.ll -o zfh32.o
ld.lld -shared -o zfh32.elf zfh32.o
```

| File | What |
|---|---|
| `zfh64.elf` | `probe`: one row per Zfh encoding (static and dynamic rounding modes), then the RV64-only `fcvt.{l,lu}.h`/`fcvt.h.{l,lu}`; compiler-selected `hadd` (fadd.h), `hmuladd` (fmadd.h), `widen` (fcvt.s.h), `narrow` (fcvt.h.d), `toint` (fcvt.l.h), `hless` (flt.h), `hload` (flh) |
| `zfh32.elf` | the RV32 `probe` (the common rows) and the same functions (`toint` is fcvt.w.h) |

Expected rows are `llvm-objdump -M no-aliases`, with the `rne` rounding mode
LLVM omits on the exact widening conversions written out as SLEIGH prints it.
