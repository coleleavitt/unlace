# TMS320C54x raw image

`rptb.bin`: `rptb.s` assembled with `tic54x-coff-as` (binutils 2.45), `.text` only, with each 16-bit
word byte-swapped to the big-endian language. `STM #9,BRC; RPTB end-1` repeats the ADD/NOP block.
