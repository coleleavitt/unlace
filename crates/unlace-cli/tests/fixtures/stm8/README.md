# STM8 raw image

`add_store.bin`, loaded at 0x8000: `LD A,#5; ADD A,#3; LD $0010,A; RET`
(a6 05 ab 03 c7 00 10 81), hand-assembled from the STM8 programming manual
(PM0044) opcode map.
