# StarCore SC140 raw images

Assembled by hand from the encoding tables of the SC140 DSP Core Reference Manual
(revision 4.1), loaded at 0x0.

`sets.bin`:

```
0x00  ADD D0,D1,D0                          ; serial bit set
0x02  RTS
0x04  CMPGT D1,D0
0x06  BT <label (0x0a)
0x08  TFR D1,D0
0x0a  RTS
0x0c  [2-word prefix, 4 words, E3 of DALU 0]  ADD D0,D5,D10  MOVE.W (R0)+,D1
0x14  ADD D1,D2,D0
0x16  RTS
0x18  MOVE.W (R0+8),D0
0x1c  RTS
0x1e  BSR >label (0x06)
0x22  ADD #1,D0
0x24  RTS
```

Bytes: 516c719f717005805174719f003601a0412d1851586c719f00100880719fff2be99f4178719f

`max.bin`:

```
0x00  ADD D0,D5,D2  TFR D0,D3               ; one serial set of two instructions
0x04  CMPGT D1,D0
0x06  BT <label (0x0a)
0x08  TFR D1,D0
0x0a  RTS
```

Bytes: 412dd075717005805174719f
