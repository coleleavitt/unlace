# TMS320C28x raw image

`addb_lret.bin`, two 16-bit little-endian words loaded at word address 0x8000:
`ADDB ACC,#5` (0x0905) and `LRET` (0x7614), encoded from the opcode
patterns in `tms320c28.sinc` (`op8_8=0b00001001` with an 8-bit immediate;
`op0_16=0b0111011000010100`).
