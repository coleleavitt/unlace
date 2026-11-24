# ARM base-PCS fixtures

`funcs.c` built with zig 0.15.2, soft-float (`Tag_ABI_VFP_args` absent, `Tag_FP_arch` VFPv3 on the A-profile objects):

```sh
zig cc -target arm-freestanding -O2 -c funcs.c -o arm.o
zig cc -target armeb-freestanding -O2 -c funcs.c -o armeb.o
zig cc -target thumb-freestanding-eabi -mcpu=cortex_m3 -O2 -c funcs.c -o thumbv7m.o
```

Their external functions follow the base procedure-call standard (`armbasepcs`, #681): a `float` result is in `r0`.
