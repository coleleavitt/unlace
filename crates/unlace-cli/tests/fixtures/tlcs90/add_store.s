; Toshiba TLCS-90, loaded at 0x1000 (TLCS90:LE:16:default)
; address  bytes         instruction
  1000     68 03         ADD  A,3
  1002     EB 00 80 26   LD   (8000H),A
  1006     6F 0A         CP   A,10
  1008     CE 03         JR   NZ,100DH
  100A     36 05         LD   A,5
  100C     1E            RET
  100D     36 00         LD   A,0
  100F     1E            RET
