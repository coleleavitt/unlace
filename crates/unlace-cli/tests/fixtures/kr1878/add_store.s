; KR1878VE1, hand-assembled from the ChipNews 2000/1 instruction table.
; Word addresses; each word is stored little-endian in add_store.bin.
; addr  word    instruction
  000:  2200    ldr   SR0, 0x40     ; window A -> data 0x40-0x47
  001:  40A0    movl  %a0, 0x5
  002:  1020    add   %a0, %a1
  003:  3060    addl  %a0, 0x3
  004:  6200    cmpl  %a0, 0x10
  005:  F007    jc    0x007         ; C = borrow: skip when %a0 < 0x10
  006:  40E2    movl  %a2, 0x7
  007:  000C    rts
