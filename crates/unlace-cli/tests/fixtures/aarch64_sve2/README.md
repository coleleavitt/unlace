# AArch64 SVE2 fixture

`sve2.elf` holds the functions of `sve2.c` (ACLE intrinsics: `svqrdmlah`,
`svaddp`, `svwhilege` with `svptest_first`, and a `svhistcnt` loop) and
`probe`: one word per SVE2 / SVE2.1 instruction record in LLVM 22's AArch64
TableGen (1066 records; predicates HasSVE2, HasSVE2_or_SME, HasSVE2p1*,
HasSVEAES/AES2/SHA3/SM4/BitPerm, HasNonStreamingSVE*_or_SSVE_*, HasSVEB16B16),
emitted with `.inst`. `probe.txt` is LLVM's text for each word
(`llvm-mc --disassemble -M no-aliases -mattr=+all`, whitespace collapsed),
written by `tools/gen_aarch64_ext.py`. Built with clang/LLVM 22:

```sh
clang --target=aarch64-linux-gnu -march=armv9-a+sve2 -O2 -ffreestanding \
      -fno-asynchronous-unwind-tables -c sve2.c -o sve2c.o
llvm-mc -triple=aarch64 -mattr=+all -filetype=obj probe.s -o probe.o
ld.lld -shared --build-id=none -o sve2.elf sve2c.o probe.o
```
