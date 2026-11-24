# AArch64 RME raw image

`rme.bin`, loaded at 0x1000 (little-endian words):

| word | instruction |
|---|---|
| d50e8460 | tlbi rpaos, x0 |
| d50e7e21 | dc cipapa, x1 |
| d50e879f | tlbi paall |
| d50e7942 | at s1e3a, x2 |
| d5387400 | mrs x0, par_el1 |
| d65f03c0 | ret |

Hand-assembled from the SYS encodings in the Arm ARM (DDI 0487, C5.3-C5.5) and
checked against `llvm-objdump --mattr=+all` (LLVM 22).
