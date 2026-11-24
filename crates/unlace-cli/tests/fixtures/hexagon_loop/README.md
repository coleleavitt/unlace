# Hexagon hardware-loop fixtures

`loop.s` holds two one-level hardware loops: `f` (offset 0x0) closes a `loop0` with
`:endloop0`, `g` (offset 0x20) closes a `loop1` with `:endloop1`. `loop.bin` is its
`.text`, loaded at 0x1000, built with zig 0.15 (LLVM's Hexagon assembler) and checked with
the rustc-master toolchain's `llvm-objdump --triple=hexagon`:

```sh
zig cc -target hexagon-linux-musl -c loop.s -o loop.o
zig objcopy -O binary -j .text loop.o loop.bin
```
