# Hexagon HMX fixtures

For `specs/Ghidra/Processors/Hexagon/data/languages/hexagon_hmx.sinc`. The ten
encodings are the ones LLVM's own MC tests check
(`llvm/test/MC/Hexagon/HexagonTestWriter/v73_hmx.s`, LLVM commit 34f2fb6b56),
with the register fields varied. No released LLVM decodes HMX yet, so the words
are written as `.word` directives.

`hmx.elf` is built with the LLVM 23 `llc` and `ld.lld` (rustc-master toolchain):

```sh
llc -mtriple=hexagon -filetype=obj hmx.ll -o hmx.o
ld.lld -shared -o hmx.elf hmx.o
```

`hmx.bin` is eight little-endian words loaded at 0x1000, one instruction per
packet (parse bits 11), written with `xxd -r -p`:

```
9200c1e4  activation.hf = mxmem(r0,r1)
9202e3ef  weight.hf = mxmem(r2,r3)
9204c3fe  bias = mxmem2(r4)
a6e5da10  cvt.hf = acc(r5)
a6e0c118  mxmem(r0,r1) = cvt
a6e4c016  mxmem2(r4) = bias
a6e0c013  mxclracc.hf
529fc000  jumpr r31
```

| File | What |
|---|---|
| `hmx.ll`, `hmx.elf` | `probe`: three activation/weight packets (plain, `:deep`, `:single` activation; plain and `:deep` weight), bias load, convert, convert store, bias store, clear accumulator |
| `hmx.bin` | raw image for the lift test |
