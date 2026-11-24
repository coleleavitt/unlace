# TMS320C3x raw image

`sum_store.bin`, loaded at word 0x100 (little-endian 32-bit words):
`LDI 0,DP; LDI 0,R0; LDI 9,AR0; LDI 0x200,AR1; loop: ADDI *AR1++(1),R0;
DBU AR0,loop; STI R0,@0x300; ADDI3 R0,R0,R1; STI R1,@0x301; RETSU`
(08700000 08600000 08680009 08690200 02402101 6e00fffe 15200300 21010000
15210301 78800000), hand-assembled from the TMS320C3x User's Guide instruction
formats and checked against the binutils tic4x opcode table. It sums the ten
words at 0x200 with a decrement-and-branch loop, stores the sum, and stores
twice the sum through a three-operand add.

`repeat.bin` (load at word 0x100): `repeat.s` assembled with `tic4x-coff-as -mcpu=31` (binutils 2.45), `.text` only. `RPTB 0x104` repeats the ADDI/NOP block; `RPTS RC` repeats the next ADDI.
