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

`loops.bin` (hardware loops; `[1w p]`/`[1w j]` is a one-word prefix with LPMARKB/LPMARKA):

```
0x00  DOSETUP0 >label (0x0a)
0x04  DOEN0 R1
0x06  SKIPLS >label (0x12)
0x0a  [1w p] MOVE.W (R0)+,D1                ; LA-2 of a three-set long loop
0x0e  ADD D0,D1,D0
0x10  ADD D0,D1,D0                          ; LA
0x12  RTS
0x20  DOSETUP0 >label (0x26)
0x24  DOEN0 R1
0x26  DOENSH1 #4                            ; outer loop start
0x28  [1w j] MOVE.W (R0)+,D1  ADD D0,D1,D0  ; one-set short inner loop
0x2e  [1w p] ADD D0,D1,D0                   ; outer LA-2
0x32  ADD D0,D1,D0
0x34  ADD D0,D1,D0                          ; outer LA
0x36  RTS
0x40  DOENSH0 R1
0x42  [1w j] MOVE.W (R0)+,D1  ADD D0,D1,D0  ; one-set short loop
0x48  RTS
0x50  DOENSH0 R1
0x52  [1w p] MOVE.W (R0)+,D1                ; two-set short loop
0x56  ADD D0,D1,D0
0x58  RTS
0x60  BREAK >label (0x64)
0x64  RTS
0x70  DOSETUP0 >label (0x76)
0x74  DOEN0 R1
0x76  [1w] MOVE.W (R0)+,D1
0x7a  [1w] CMPGT D1,D0
0x7e  [1w IFT] CONT >label (0x8c)              ; skip the rest of the body when T
0x84  [1w p] ADD D0,D1,D0                   ; LA-2
0x88  ADD D0,D1,D0
0x8a  ADD D0,D1,D0                          ; LA
0x8c  RTS
```

The gaps are filled with RTS. Bytes: 03280a80499803210c80d0921851516c516c719f719f719f719f719f719f719f0328068049984495c8941851516cd092516c516c516c719f719f719f719f719f499cc8941851516c719f719f719f719f499cd0921851516c719f719f719f719f03200480719f719f719f719f719f719f032806804998c0921851c0927170c29403230e80d092516c516c516c719f
