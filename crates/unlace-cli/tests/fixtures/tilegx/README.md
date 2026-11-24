# TILE-Gx raw image

`bundles.bin`, loaded at 0x0, assembled with GNU as (`tilegx-linux-gnu-as`, binutils
2.45) and copied out with `objcopy -O binary -j .text`:

```
sum:     { move r2, zero ; addi r3, r1, 0 }
         { beqz r1, 2f }
1:       { ld r4, r0 ; addi r0, r0, 8 }
         { add r2, r2, r4 ; addi r1, r1, -1 }
         { bnez r1, 1b }
2:       { move r0, r2 ; jrp lr }
caller:  { addi sp, sp, -16 ; st sp, lr }
         { movei r0, 5 ; movei r1, 7 }
         { jal sum }
         { addi r0, r0, 1 ; addi r29, sp, 8 }
         { ld lr, sp }
         { addi sp, sp, 16 ; jrp lr }
umax:    { cmpltu r2, r0, r1 }
         { cmovnez r0, r2, r1 ; jrp lr }
swapsub: { move r0, r1 ; move r1, r0 }
         { sub r0, r0, r1 ; jrp lr }
field:   { bfextu r0, r0, 8, 15 }
         { shl16insli r0, r0, 0x1234 ; jrp lr }
```

Bytes: c2 ff 07 d1 21 00 08 18 00 30 48 51 22 00 40 14 00 80 00 04 00 40 26 9e 82 40 0c d0 20 f8 0f 18 00 30 48 51 3f f8 ff 17 80 f0 07 51 e0 6e 6a 28 b6 0d 6f 07 00 40 be df c0 5f 10 c0 e0 3f 08 18 00 30 48 51 fc ff ff 23 00 10 10 c0 ce 46 08 18 00 30 6c 37 00 40 be 9f b6 0d 11 40 e0 6e 6a 28 00 30 48 51 01 08 16 28 80 10 18 50 e0 6e 6a 28 40 f0 07 d1 00 f8 3b 28 00 10 44 51 e0 6e 6a 28 00 f0 20 35 00 30 6a 28 00 40 23 71 e0 6e 6a 28

`sum` (0x0) is a counted load loop, `caller` (0x30) calls it with two register
arguments, `umax` (0x60) is a conditional move, `swapsub` (0x70) swaps two
registers inside one bundle (both moves read the old values), and `field` (0x80)
extracts a bit field and inserts a 16-bit immediate.
