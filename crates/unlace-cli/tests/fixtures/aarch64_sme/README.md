# AArch64 SME fixture

`sme.elf` holds the functions of `sme.c` (ACLE SME/SME2 intrinsics in
streaming functions: `svmopa_za32_f32_m` (fmopa), `svread_hor_za32_f32_m`
(mova), `svzero_za` (zero), `svst1_hor_za32` (st1w of a ZA slice) and
`svadd_za32_s32_vg1x2` (multi-vector add into ZA)) and `probe`: one word per
SME instruction record in LLVM 22's AArch64 TableGen (1074 records; predicates
HasSME, HasSME2, HasSME2p1, HasSME2p2, HasSME2p3, HasSMEF64F64,
HasSMEI16I64, HasSMEF16F16, HasSMEB16B16, HasSMEF8F16, HasSMEF8F32,
HasSME_LUTv2, HasSME_MOP4, HasSME_TMOP and the IsNonStreamingSafe forms,
without the records also predicated on SVE2, which `aarch64_sve2` covers),
emitted with `.inst`. `probe.txt` is LLVM's text for each word
(`llvm-mc --disassemble -M no-aliases -mattr=+all`, whitespace collapsed),
written by `tools/gen_aarch64_ext.py`. Built with clang/LLVM 22:

```sh
clang --target=aarch64-linux-gnu -march=armv9-a+sme2 -O2 -ffreestanding \
      -fno-asynchronous-unwind-tables -c sme.c -o smec.o
llvm-mc -triple=aarch64 -mattr=+all -filetype=obj probe.s -o probe.o
ld.lld -shared --build-id=none -o sme.elf smec.o probe.o
```
