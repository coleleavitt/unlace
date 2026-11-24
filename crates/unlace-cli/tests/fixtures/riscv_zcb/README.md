# RISC-V Zcb and Zacas fixtures

Linked shared objects for the Zcb compressed instructions (`riscv.zcb.sinc`) and
the Zacas compare-and-swap (`riscv.rv32a.sinc`, `riscv.rv64a.sinc`). Built with
the LLVM 23 `llc` and `ld.lld` (rustc-master toolchain; LLD 23.1.6):

```sh
llc -mtriple=riscv64-unknown-elf -mattr=+m,+a,+c,+zcb,+zbb,+zba,+zacas -O2 -filetype=obj zcb64.ll -o zcb64.o
ld.lld -shared -o zcb64.elf zcb64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+a,+c,+zcb,+zbb,+zba,+zacas -O2 -filetype=obj zcb32.ll -o zcb32.o
ld.lld -shared -o zcb32.elf zcb32.o
```

| File | What |
|---|---|
| `zcb32.elf` | `probe`: one row per Zcb encoding (both byte offsets of `c.lbu`/`c.sb`, both forms of `c.lhu`/`c.lh`/`c.sh`), then `amocas.w` plain and `.aqrl`; compiler-selected `ldbyte` (c.lbu), `ldhalf` (c.lh), `stbyte` (c.sb), `notmul` (c.mul, c.not), `cas` (amocas.w.aqrl) |
| `zcb64.elf` | the same plus `c.zext.w` and `amocas.d`; `cas` is `amocas.d.aqrl` |
