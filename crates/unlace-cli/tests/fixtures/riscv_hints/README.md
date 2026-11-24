# RISC-V hint, cache-block and CFI fixtures

Linked shared objects for `riscv.hints.sinc`. Built with the LLVM 23 `llc` and
`ld.lld` (rustc-master toolchain; LLD 23.1.6):

```sh
A=+c,+a,+zicbom,+zicboz,+zicbop,+zawrs,+zihintpause,+zihintntl,+zimop,+zcmop,+experimental-zicfiss,+experimental-zicfilp
llc -mtriple=riscv64-unknown-elf -mattr=$A -filetype=obj hints64.ll -o hints64.o
ld.lld -shared -o hints64.elf hints64.o
llc -mtriple=riscv32-unknown-elf -mattr=$A -filetype=obj hints32.ll -o hints32.o
ld.lld -shared -o hints32.elf hints32.o
```

| File | What |
|---|---|
| `hints64.elf` | `probe`: one row per encoding (cbo.*, prefetch.*, wrs.*, pause, fence.tso, ntl.*/c.ntl.*, mop.r.n/mop.rr.n/c.mop.n at the ends of their ranges, sspush/sspopchk in both sizes, ssrdp, lpad, ssamoswap.w/.d); hand-written `spin` (wrs.nto, pause), `zero_block` (cbo.zero, prefetch.w, cbo.flush), `cfi_add` (lpad, c.sspush, add, sspopchk), `maybe` (mop.r.3, c.mop.7) |
| `hints32.elf` | the same for RV32, without ssamoswap.d |

With `+c` LLVM assembles `sspush ra` and `sspopchk t0` to their compressed
forms, which SLEIGH names `c.sspush` and `c.sspopchk` (`llvm-objdump -M no-aliases`).
