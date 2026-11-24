; TLCS-870 test routine, hand-assembled from the TLCS-870 instruction set opcode tables
; (cross-checked against MAME's tlcs870 disassembler). Argument in A, result in A. Base 0xE000.
; addr  bytes     instruction
  E000  71 05     ADD  A,5
  E002  77 10     CMP  A,0x10
  E004  D1 03     JR   NE,0xE009
  E006  2A 80     LD   (0x80),A
  E008  05        RET
  E009  30 00     LD   A,0
  E00B  05        RET
