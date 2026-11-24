# KVX raw image

`bundles.bin`, loaded at 0x0, assembled with GNU as (`kvx-elf-as`, binutils 2.45,
kv3-1) and copied out with `objcopy -O binary -j .text`:

```
sum:     make $r2 = 0 ;;
         cb.deqz $r1? 2f ;;
1:       ld $r3 = 0[$r0]  addd $r0 = $r0, 8  addd $r1 = $r1, -1 ;;
         addd $r2 = $r2, $r3  cb.dnez $r1? 1b ;;
2:       copyd $r0 = $r2  ret ;;
caller:  addd $r12 = $r12, -32  get $r16 = $ra ;;
         sd 24[$r12] = $r16  make $r0 = 5  make $r1 = 0x123456789 ;;
         call sum ;;
         ld $r16 = 24[$r12]  addd $r0 = $r0, 100000 ;;
         set $ra = $r16  addd $r12 = $r12, 32 ;;
         ret ;;
max:     compd.lt $r2 = $r0, $r1 ;;
         cmoved.dnez $r2? $r0 = $r1  ret ;;
swapsub: copyd $r0 = $r1  copyd $r1 = $r0 ;;
         sbfd $r0 = $r1, $r0  ret ;;
index:   ld.xs $r0 = $r0[$r1]  ret ;;
```

`sum` (0x0) is a counted load loop, `caller` (0x24) calls it with a 43-bit
immediate whose extension syllable sits at the end of the bundle, `max` (0x58)
is a compare and conditional move, `swapsub` (0x64) swaps two registers inside
one bundle and `index` (0x74) is a scaled indexed load.
