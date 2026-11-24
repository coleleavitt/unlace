; eZ80 (ADL mode) test routine, hand-assembled from the eZ80 CPU User Manual
; (UM0077) opcode maps: in ADL mode Mmn/nn operands are 24 bits, little endian.
; Input byte at 0xC000, result in HL.
; addr    bytes        instruction
  000000  3A 00 C0 00  LD   A,(0x00C000)
  000004  C6 03        ADD  A,3
  000006  FE 10        CP   A,0x10
  000008  30 09        JR   NC,0x000013
  00000A  32 00 80 00  LD   (0x008000),A
  00000E  21 05 00 00  LD   HL,0x000005
  000012  C9           RET
  000013  21 00 00 00  LD   HL,0x000000
  000017  C9           RET
