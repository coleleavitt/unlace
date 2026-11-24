# Intel 4004 raw image

`add_store.bin`, loaded at 0x000: `LDM 0; DCL; FIM P0,#0x12; CLC; LD R1; ADD R0;
SRC P0; WRM; BBL 0` (d0 fd 20 12 f1 a1 80 21 e0 c0), hand-assembled from the
MCS-4 manual's opcode table. It computes 2 + 1 with carry clear and stores the
result in RAM bank 0, register 1, character 2.
