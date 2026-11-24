; ST20-C2 test routine, hand-assembled from the ST20C2/C4 Core Instruction Set
; Reference Manual (72-TRN-273-01). Argument in local 1 (Wptr+4), result in Areg.
; addr  bytes        instruction
  0000  71           ldl   1            ; Areg = arg
  0001  83           adc   3            ; Areg = arg + 3
  0002  25 FA        dup                ; opr 0x5a
  0004  28 20 20 40  ldc   0x8000
  0008  E0           stnl  0            ; word[0x8000] = arg + 3
  0009  4A           ldc   10
  000A  F9           gt                 ; Areg = (arg + 3) > 10
  000B  A3           cj    0x000F       ; Areg == 0: jump
  000C  45           ldc   5
  000D  22 F0        ret                ; opr 0x20
  000F  40           ldc   0
  0010  22 F0        ret
