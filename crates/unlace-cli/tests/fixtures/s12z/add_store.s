; NXP S12Z test routine, hand-assembled from the S12Z CPU Reference Manual opcode
; tables. Argument and result in D2.
; addr    bytes         instruction
  000000  50 00 03      ADD  D2,#3
  000003  E0 00 10      CMP  D2,#0x10
  000006  24 0A         BCC  0x000010
  000008  D0 00 80 00   ST   D2,0x008000
  00000C  90 00 05      LD   D2,#5
  00000F  05            RTS
  000010  90 00 00      LD   D2,#0
  000013  05            RTS
