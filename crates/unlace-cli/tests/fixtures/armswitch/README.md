# armswitch fixture

`sw_stripped.elf` holds five Thumb functions (0x200cc, 0x200e8, 0x20104, 0x20124, 0x2014e) that
switch through the ARM-mode helpers `___switch8`, `___switchu8`, `___switch16`, `___switch32`
and `__rt_switch8` (Apple's libgcc and armcc), each called with `blx` and followed by its case
table. All symbols except the `$t`/`$a`/`$d` mapping symbols are stripped. Built with
clang version 22.1.8 (https://github.com/llvm/llvm-project.git ca7933e47d3a3451d81e72ac174dcb5aa28b59d1) and ld.lld:

```sh
clang --target=armv7-none-eabi -c sw.s -o sw.o
ld.lld -e start --no-gc-sections sw.o -o sw.elf
llvm-objcopy --strip-all --keep-symbol='$t' --keep-symbol='$a' --keep-symbol='$d' sw.elf sw_stripped.elf
```

SHA-256 `dcb4f79298f494282677793d18fff7762319387fafae1415cfd9cb7f0fc1d7fd`.
