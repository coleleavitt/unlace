# Blackfin raw image

`sum_loop.bin`, loaded at 0x1000, assembled with GNU as (`bfin-elf-as`, binutils
2.46.50) and copied out with `objcopy -O binary -j .text`:

```
sum:    P0 = R0; P1 = R1; R0 = 0;
        LSETUP (1f, 2f) LC0 = P1;
1:      R1 = [P0++];
2:      R0 = R0 + R1;
        RTS;
caller: LINK 12; R0 = 5; R1 = 7; CALL sum; R0 += 1;
        A0 = 0 || R2 = [P0] || NOP;
        UNLINK; RTS;
```

Bytes: 00 32 09 32 00 60 a2 e0 03 10 01 90 08 50 10 00 00 e8 03 00 28 60 39 60 ff e3 f4 ff 08 64 08 cc 00 00 02 91 00 00 01 e8 00 00 10 00

`sum` (0x1000) is a zero-overhead hardware loop; `caller` (0x1010) calls it with
two register arguments and uses one 64-bit multi-issue bundle.
