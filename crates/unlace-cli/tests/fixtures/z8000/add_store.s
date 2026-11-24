; Zilog Z8002 (Z8002:BE:16:default), load at 0x1000, entry 0x1000.
; Hand-assembled from the Z8000 CPU Technical Manual opcode tables (cross-checked with MAME z8000tbl.hxx).
; f(R7, R6): R7 += R6; if (R7 > 100) *(u16 *)0x2000 = R7; return.
1000: 81 67          ADD   R7, R6
1002: 0b 07 00 64    CP    R7, #100
1006: e2 03          JR    LE, 0x100e
1008: 6f 07 20 00    LD    0x2000, R7
100c: 9e 08          RET
100e: 9e 08          RET
