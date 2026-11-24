; Samsung SAM8 add/compare/store routine, hand-assembled from the S3C8-series
; user's manual chapter 6 (opcode map, per-instruction formats). Base 0x0100.
; SAM88RCRI decodes the same bytes from 0x0102 (it has no SRP).
0100  31 C0      SRP   #C0h          ; RP0 = C0h, RP1 = C8h
0102  1C 07      LD    R1, #07h      ; reg C1h = 7
0104  08 30      LD    R0, 30h       ; reg C0h = reg 30h
0106  06 C0 05   ADD   C0h, #05h     ; reg C0h += 5, C/Z/S/V/H set
0109  A6 C0 0A   CP    C0h, #0Ah     ; C = reg C0h < 0Ah (borrow)
010C  7B 04      JR    ULT, 0112h    ; skip the stores when C
010E  09 40      LD    40h, R0       ; reg 40h = R0
0110  19 41      LD    41h, R1       ; reg 41h = R1
0112  AF         RET
