# RISC-V vector fixtures

`vector64.elf`'s `probe` holds one instruction per encoding shape of RVV 1.0
and the ratified Zvbb, Zvbc, Zvkg, Zvkned, Zvknha/b, Zvksed, Zvksh, Zvfbfmin and
Zvfbfwma (1258 words: every riscv-opcodes entry, unmasked and masked, and
segment counts 1-8 for the segment loads and stores), emitted with `.insn 4`.
`probe64.txt` is `llvm-objdump -M no-aliases` of those words with the operand
separators written as SLEIGH prints them. The other functions are LLVM-lowered
fixed-length vector IR (`vadd4`: vle32/vadd.vv/vse32, `vsum8`: vredsum.vs and
vmv.x.s, `vfma4`: vfmacc.vf, `vsel16`: vmaxu.vv); `vector32.elf` has the same
functions for RV32. Built with the LLVM 23 `llc` and `ld.lld` (rustc-master
toolchain; LLD 23.1.6):

```sh
A=+m,+v,+zvbb,+zvbc,+zvkg,+zvkned,+zvknha,+zvknhb,+zvksed,+zvksh,+zvfbfmin,+zvfbfwma,+zvfh,+f,+d
llc -mtriple=riscv64-unknown-elf -mattr=$A -target-abi=lp64d -O2 -filetype=obj vector64.ll -o vector64.o
ld.lld -shared -o vector64.elf vector64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+v,+f,+d -target-abi=ilp32d -O2 -filetype=obj vector32.ll -o vector32.o
ld.lld -shared -o vector32.elf vector32.o
```
