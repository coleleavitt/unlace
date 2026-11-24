# x86-64 APX fixture

`apx.S` is assembled and linked with LLVM 22 (`llvm-mc`, `ld.lld`); `apx.bin` is its
`.text` (base 0x1000) for `--raw-image`:

```sh
llvm-mc -triple=x86_64 -mattr=+egpr,+ndd,+nf,+ccmp,+cf,+zu,+push2pop2,+ppx -filetype=obj -o apx.o apx.S
ld.lld -e 0 --image-base=0 --section-start=.text=0x1000 -o apx.elf apx.o
llvm-objcopy -O binary --only-section=.text apx.elf apx.bin
```

`probe` lists one instruction of each APX form (REX2 EGPRs, NDD, NF, CCMP/CTEST,
CFCMOVcc, CMOVcc NDD, SETcc.zu, PUSH2/POP2, IMUL.zu, JMPABS); the other functions
are small routines whose decompiled C the test checks.
