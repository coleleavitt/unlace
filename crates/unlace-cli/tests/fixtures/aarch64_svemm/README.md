# AArch64 SVE matrix-multiply / BF16 fixture

`svemm.elf` holds the functions of `svemm.c` (ACLE intrinsics: `svmmla_f64`,
`svmmla_s32`, `svbfdot_f32`, `svbfmlalb_f32`/`svbfmlalt_f32`, `svld1ro_s32`) and
`probe`: one word per instruction record in `AARCH64_svemm.sinc` (32 records of LLVM
22's AArch64 TableGen: HasMatMulFP64, HasMatMulInt8, HasMatMulFP32,
HasNonStreamingMatMulFP64_or_SVE_PERM256, HasBF16 and HasSVE_F16F32MM records that also
carry an SVE predicate), emitted with `.inst` in `probe.s`. `probe.txt` is LLVM's text
for each word (`llvm-mc --disassemble -M no-aliases -mattr=+all`, whitespace collapsed),
written by `tools/gen_aarch64_ext.py`. Built with clang/LLVM 22:

```sh
clang --target=aarch64-linux-gnu -march=armv8.6-a+sve+f64mm+i8mm+bf16 -O2 -ffreestanding \
      -fno-asynchronous-unwind-tables -c svemm.c -o svemmc.o
llvm-mc -triple=aarch64 -mattr=+all -filetype=obj probe.s -o probe.o
ld.lld -shared --build-id=none -o svemm.elf svemmc.o probe.o
```
