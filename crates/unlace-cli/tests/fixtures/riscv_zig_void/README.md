`void_return.so` is built from `void_return.zig` with Zig 0.15.2:

    zig build-lib -dynamic -target riscv64-linux-musl -O ReleaseFast void_return.zig -femit-bin=void_return.so

The build is reproducible (sha256 `7529be9629b0e5ce2d3bcb71115d5dbb8d338382344d7135a9285456bae26ffe`).
Zig describes the `void` return as a `DW_TAG_base_type` named `void` with size 0, which
the DWARF reader cannot build, so `f`'s prototype is parked with no return type.
