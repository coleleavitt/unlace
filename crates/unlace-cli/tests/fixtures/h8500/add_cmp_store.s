; Hitachi H8/500, minimum mode, raw image at 0x0000. Hand-assembled from the
; H8/500 programming manual's encoding tables (checked against MAME h8500dasm.cpp).
; Argument in R0, result in R0.
; addr  bytes         instruction
  0000  0C 00 03 20   ADD.W   #H'0003, R0
  0004  48 00 10      CMP.W   #H'0010, R0      ; CMP:I
  0007  24 08         BCC     0011             ; branch if no borrow (R0 >= 0x10)
  0009  1D F0 00 90   MOV.W   R0, @H'F000:16
  000D  58 00 05      MOV.W   #H'0005, R0      ; MOV:I
  0010  19            RTS
  0011  58 00 00      MOV.W   #H'0000, R0
  0014  19            RTS
