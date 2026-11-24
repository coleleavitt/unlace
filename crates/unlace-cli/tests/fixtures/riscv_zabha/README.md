# RISC-V Zabha fixtures

Linked shared objects for `riscv.zabha.sinc`. Built with the LLVM 23 `llc` and
`ld.lld` (rustc-master toolchain; LLD 23.1.6):

```sh
llc -mtriple=riscv64-unknown-elf -mattr=+m,+a,+zabha,+zacas -O2 -filetype=obj zabha64.ll -o zabha64.o
ld.lld -shared -o zabha64.elf zabha64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+a,+zabha,+zacas -O2 -filetype=obj zabha32.ll -o zabha32.o
ld.lld -shared -o zabha32.elf zabha32.o
```

| File | What |
|---|---|
| `zabha32.elf`, `zabha64.elf` | `probe`: every byte and halfword AMO and `amocas.b/h`, plus an `.aqrl` form of each width; compiler-selected `fetch_add8` (amoadd.b.aqrl), `fetch_max16` (amomax.h), `cas16` (amocas.h.aqrl), `xchg8` (amoswap.b) |
