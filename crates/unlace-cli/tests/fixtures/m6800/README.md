# M6800-family raw images

Hand-assembled raw images loaded at 0x8000 (`--raw-image --base 0x8000`):

| File | Language | Code |
|---|---|---|
| `mc6800.bin` | `MC6800:BE:16:default` | `LDAA \$10; ADDA \$11; STAA \$12; RTS` (96 10 9b 11 97 12 39) |
| `hd6301.bin` | `HD6301:BE:16:default` | `AIM #\$0F,\$20; OIM #\$80,\$21; EIM #\$01,5,X; TIM #\$04,\$22; XGDX; RTS` (71 0f 20 72 80 21 65 01 05 7b 04 22 18 39) |
| `mc68hc11.bin` | `MC68HC11:BE:16:default` | `LDY #\$0010; LDAA 2,Y; INY; RTS` (18 ce 00 10 18 a6 02 18 08 39) |
