# 65816 raw image

`add16_store.bin`, loaded at 0x8000 in native mode with a 16-bit accumulator
(the language's default context): `LDA #$1234; CLC; ADC #$0001; STA $2000; RTS`
(a9 34 12 18 69 01 00 8d 00 20 60), hand-assembled from the WDC W65C816S
datasheet opcode table.
