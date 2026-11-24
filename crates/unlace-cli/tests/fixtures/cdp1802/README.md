# RCA CDP1802 raw image

`fill_loop.bin`, loaded at 0x0000 and read as `CDP1802:BE:16:SCRT`: `LDI 0x10; PHI R1;
LDI 0; PLO R1; LDI 5; loop: STR R1; INC R1; SMI 1; BNZ loop; SEP R5`
(f8 10 b1 f8 00 a1 f8 05 51 11 ff 01 3a 08 d5), hand-assembled from the
CDP1802 data sheet's opcode table. It stores 5, 4, 3, 2, 1 at 0x1000.. and
returns through the SCRT return (`SEP R5`).
