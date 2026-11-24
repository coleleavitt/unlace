# RISC-V bit manipulation and Zicond fixtures

Linked shared objects for the ratified Zba, Zbb, Zbc, Zbs, Zbkb, Zbkx and Zicond
encodings (`riscv.rv32b.sinc`, `riscv.rv64b.sinc`). Built with the LLVM 23
`llc` and `ld.lld` (rustc-master toolchain; LLD 23.1.6):

```sh
llc -mtriple=riscv64-unknown-elf -mattr=+m,+zba,+zbb,+zbc,+zbs,+zbkb,+zbkx,+zicond -O2 -filetype=obj bitmanip64.ll -o bitmanip64.o
ld.lld -shared -o bitmanip64.elf bitmanip64.o
llc -mtriple=riscv32-unknown-elf -mattr=+m,+zba,+zbb,+zbc,+zbs,+zbkb,+zbkx,+zicond -O2 -filetype=obj bitmanip32.ll -o bitmanip32.o
ld.lld -shared -o bitmanip32.elf bitmanip32.o
```

| File | What |
|---|---|
| `bitmanip64.elf` | `probe`: one row per RV64 encoding (the common forms, then the word, unsigned-word and RV64-only forms, and 6-bit shift amounts); one-instruction functions the compiler selected: `imax` (max), `iminu` (minu), `pop` (cpop), `lead` (clz), `trail` (ctz), `keepif` (czero.eqz), `swap` (rev8), `andnot` (andn), `setbit` (bset), `index` (sh3add.uw) |
| `bitmanip32.elf` | `probe` for RV32 (with the RV32 rev8 and zext.h encodings, zip and unzip); `imax`, `pop`, `trail`, `keepif`, `swap` |

The expected rows in `riscv_bitmanip.rs` are `llvm-objdump --mattr=...` of each
`probe` with the operand separators written as SLEIGH prints them.
