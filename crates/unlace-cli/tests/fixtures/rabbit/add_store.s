; Rabbit 2000/3000 test routine, hand-assembled from the Rabbit 2000/3000
; Instruction Reference Manual opcode tables. Argument in L (Dynamic C), result in HL.
; addr  bytes     instruction
  0000  7D        LD   A,L
  0001  C6 03     ADD  A,3
  0003  FE 10     CP   0x10
  0005  30 07     JR   NC,0x000E
  0007  32 00 80  LD   (0x8000),A
  000A  21 05 00  LD   HL,0x0005
  000D  C9        RET
  000E  21 00 00  LD   HL,0x0000
  0011  C9        RET
