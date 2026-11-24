# National SC/MP raw image

`fill_loop.bin`, loaded at 0x0000: `LDI 0x10; XPAH P1; LDI 0; XPAL P1; LDI 5; XAE;
loop: LDE; ST @1(P1); LDE; CCL; ADI 0xFF; XAE; LDE; JNZ loop; idle: JMP idle`
(c4 10 35 c4 00 31 c4 05 01 40 cd 01 40 02 f4 ff 01 40 9c f5 90 fe),
hand-assembled from the SC/MP manual's opcode table. It stores 5..1 through
the auto-indexed pointer P1 from 0x1000 and then idles.
