# x86-64 AVX10.2 fixture

`avx10.S` is assembled and linked with LLVM 22 (`llvm-mc`, `ld.lld`):

```sh
llvm-mc -triple=x86_64 -mattr=+avx10.2,+amx-avx512,+amx-tile,+movrs,+sm4,+egpr -filetype=obj -o avx10.o avx10.S
ld.lld -e 0 --image-base=0 --section-start=.text=0x1000 -o avx10.elf avx10.o
```

`probe` holds one instance of every AVX10.2 instruction record of LLVM's X86
TableGen (the plain, broadcast and {sae}/{rc} forms; the masked forms share
their constructors), with the VEX AVX-VNNI-INT8/INT16 forms LLVM picks for the
unmasked 128/256-bit dot products. `probe.txt` is the expected listing: every
row was checked against `llvm-objdump -d -M intel` (case and spacing aside). `gt`, `mm`, `cvt` and `mvrs` are small routines whose
decompiled C the test checks.

`base_fixes.S` (assembled the same way with `-mattr=+avx512f,+avx512bw,+avx512vl,+avx512fp16`)
holds one instruction per AVX-512 base-spec fix; its rows match `llvm-objdump`.
