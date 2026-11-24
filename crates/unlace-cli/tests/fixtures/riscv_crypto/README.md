# RISC-V scalar cryptography fixtures

Linked shared objects for the ratified Zknh, Zkne, Zknd, Zksh and Zksed
encodings (`riscv.rv32k.sinc`, `riscv.rv64k.sinc`). Built with the LLVM 23
`llc` and `ld.lld` (rustc-master toolchain; LLD 23.1.6):

```sh
llc -mtriple=riscv64-unknown-elf -mattr=+m,+zkn,+zks -O2 -filetype=obj crypto64.ll -o crypto64.o
ld.lld -shared -o crypto64.elf crypto64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+zkn,+zks -O2 -filetype=obj crypto32.ll -o crypto32.o
ld.lld -shared -o crypto32.elf crypto32.o
```

| File | What |
|---|---|
| `crypto64.elf` | `probe`: one row per RV64 encoding (SHA-256, SM3, SM4 with two `bs` values, SHA-512, AES with two `rnum` values); intrinsic-selected `sig0` (sha256sig0), `sum0` (sha512sum0), `aesround` (aes64es), `sm4` (sm4ed) |
| `crypto32.elf` | `probe` for RV32 (SHA-512 halves, AES32 with several `bs` values); `sig0`, `sum0r` (sha512sum0r), `aesround` (aes32esmi), `sm4` |
