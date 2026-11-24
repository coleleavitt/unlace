# ARM run-time ABI helper fixtures

`sf.c` built with zig 0.15.2:

```sh
zig cc -target arm-freestanding-eabi -O2 -c sf.c -o arm.o
zig cc -target armeb-freestanding-eabi -O2 -c sf.c -o armeb.o
zig cc -target thumb-freestanding-eabi -mcpu=cortex_m3 -O2 -c sf.c -o thumbv7m.o
zig cc -target thumb-freestanding-eabihf -mcpu=cortex_m4+vfp4d16sp -O2 -c sf.c -o thumbv7em-hf.o
zig cc -target thumb-freestanding-eabi -mcpu=cortex_m0 -O2 -c sf.c -o thumbv6m.o
```

The first three are soft-float (the A-profile ones state a VFPv3 FPU, `-mfloat-abi=softfp`); every
floating-point operation is a call to an `__aeabi_*` helper. The last is hard-float on a
single-precision FPU: its `double` operations call the helpers, passing the values in core
registers (`vmov r0, r1, d0`).

`libm.c` is built the same way at `-O2 -g0` for `arm-freestanding-eabi` (`libm-arm.o`) and Cortex-M0 (`libm-thumbv6m.o`).

The `-nodebug.o` objects are the soft-float ones with `llvm-objcopy --strip-debug`.
