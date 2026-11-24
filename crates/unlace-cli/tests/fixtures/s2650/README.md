# Signetics 2650 raw image

`sum_loop.bin`, loaded at 0x0000: `EORZ R0; LODI,R1 H'05'; loop: ADDZ R1;
BDRR,R1 loop; STRA,R0 H'1000'; RETC,UN` (20 05 05 81 f9 7d cc 10 00 17),
hand-assembled from the 2650 manual's opcode table. It sums 5..1 into R0 with
a decrement-and-branch loop and stores the result at 0x1000.
