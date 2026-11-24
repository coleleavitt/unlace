# x86-64 AMX fixture

`amx.elf` (built with the LLVM 23 `llc` and `ld.lld`, rustc-master toolchain):

```sh
llc -mtriple=x86_64-unknown-linux-gnu -mattr=+amx-tile,+amx-int8,+amx-bf16,+amx-fp16,+amx-complex -filetype=obj amx.ll -o amx.o
ld.lld -shared -o amx.elf amx.o
```

`probe` holds every AMX-TILE, AMX-INT8, AMX-BF16, AMX-FP16 and AMX-COMPLEX
instruction once; `kernel` is a hand-written int8 tile multiply (ldtilecfg,
tilezero, two tileloadd, tdpbssd, tilestored, tilerelease, ret).
