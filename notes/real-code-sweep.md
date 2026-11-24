# Real-code validation sweep (2026-11-24)

Every processor family with a compiler on this machine compiled one small C corpus at -O0 and
-O2. Each object then went through `unlace decompile-all --json` with the pinned
`unlace-bin/unlace-4cf984406c`.

The corpus has 13 functions:
- `sum_array` (loop)
- `classify` (sparse switch)
- `dispatch` (9-case switch with calls and a tail call)
- `make_point` (struct return)
- `scale` (`v * n + 0.5f`)
- `point_dot`, `list_sum` (pointer chase)
- `add_all` (varargs)
- `fib`, `str_len`, `fill_table` (global array)
- `caller` (calls through the others)
- `mul_wide` (64-bit multiply)

## How each family was built

- Compilers: zig 0.15.2 (`zig cc -target <arch>-freestanding -c`), and clang 22 for `bpfel`/`bpfeb`, `amdgcn -mcpu=gfx900`, `armv7a-none-eabi` and `thumbv7m-none-eabi`.
- BPF: built with `-DNO_VARARGS -DNO_AGGRET -DNO_FLOAT`, so it has 10 functions instead of 13.
- AVR and MSP430: also linked with `ld.lld -Ttext=0x100 --image-base=0 --unresolved-symbols=ignore-all` (see #678).
- No usable compiler: xtensa (clang fixup alignment error); csky, m68k, arc, or1k, xcore, nvptx, spirv, loongarch32, propeller and kalimba (no object output from the installed toolchains). VE has no spec.

## How each result was checked

- Exit code.
- Functions decompiled against `llvm-nm` text symbols.
- Markers in the output: `halt_baddata`, bad instruction, unimplemented, `halt_missing` or unmapped flow, and per-function errors.
- A read of the C for each function, against the source.

## Results

| family | target | O0 | O2 | bad/unimpl. | wrong C | fixed by / filed as |
|---|---|---|---|---|---|---|
| x86, x86_64 | auto | 13/13 | 13/13 | none | none | |
| aarch64 | auto | 13/13 | 13/13 | none | none | |
| aarch64_be | auto | 13/13 | 13/13 | none | -O2 `dispatch` tail call `b fib` is `while(true){}` (JUMP26 patched in data byte order) | #677 |
| arm, armv7a, thumb | auto | 13/13 | 13/13 | none | none | |
| armeb, thumbv7m | auto | 13/13 | 13/13 | none | soft-float `scale` returns `s0` (armeb) or is `void` (v7-M) | #681 |
| mips, mipsel, mips64, mips64el | auto | 13/13 | 13/13 | none | none | |
| powerpc, powerpcle, powerpc64 | auto | 13/13 | 13/13 | none | none | |
| powerpc64le | auto (`PowerPC:LE:64:default`) | 13/13 | 13/13 | -O0 `scale`, -O2 6 functions: VSX/`isel` not in the generic ISA | with `--target PowerPC:LE:64:A2ALT`: VSX scalar float were user ops on the wrong doubleword | #674 (VSX). Default ISA choice is by design (`powerpc_isa_selection.rs`): the halt names the `--target` |
| riscv32, riscv64 | auto | 13/13 | 13/13 | none | `fmadd.s` is the `fmadd_s` user op (by design: `gen_riscv_sail.py` keeps fused multiply-add opaque) | |
| s390x | auto | 13/13 | 13/13 | none | -O2 `dispatch`: `larl` resolves to unmapped 0x400c86, jump table lost | #677 |
| sparc | auto | 13/13 | 13/13 | none | none | |
| sparc64 | auto | 13/13 | 13/13 | none | `scale` loads its constant from 0 (`return v;` / `return _Reset;`), `call fib` is `sub_4001f4`: WDISP30/H44/M44/L44 not applied | #677 |
| wasm32 | auto | 13/13 | 13/13 | none | every function `sub_8000xxxx` (names in the `linking` section) | #680 |
| bpfel, bpfeb | auto | 10/10 | 10/10 | none | none | |
| AMDGPU gfx900 | `AMDGPU:LE:64:GFX9` | 13/13 | 13/13 | -O0 all 13, -O2 3: `src_private_base` source, `v_swap_b32` | | #663 (now 0 bad), #666; e_machine routing #676 |
| AVR | `avr8:LE:16:default` | 0/13 (.o), 13/13 (linked) | 0/13 (.o), 13/13 (linked) | none | | .o base 0x400000 overflows the 16-bit space #678; e_machine #676 |
| MSP430 | `TI_MSP430:LE:16:default` | 0/13 (.o), 13/13 (linked) | same | none | `RRA` sign shifts printed as a seven-deep `x & 0x8000 \| x >> 1` chain | #668 (now `x >> 7`); #678, #676 |
| Hexagon | `Hexagon:LE:32:default` | 0/13 | 0/13 | | every function: `Could not obtain cached crossbuild instruction` | #679; relocations #677; e_machine #676 |
| Lanai | `lanai:BE:32:default` | 1/13 clean | 4/13 clean | | branches flow to 0 (`R_LANAI_25` not applied) | #677, #676 |
| LoongArch64 | `Loongarch:LE:64:lp64d` | 11/13 clean | 12/13 clean | | switch tables flow to unmapped memory; `0.5f` reads as `1.4013e-45f` (PCALA not applied) | #677, #676 |

"n/13" counts functions whose body decompiled. "clean" counts functions with no `halt_missing`.

## Spec fixes (merged)

- #663 AMDGPU: aperture source operands 235-239 on GFX9/10/11 and GFX9 `v_swap_b32`. #666 removed a merge marker it left in the README.
- #668 MSP430: `RRA.W`/`RRA.B` lifted as `s>> 1`.
- #674 PowerPC VSX: 41 scalar arithmetic, multiply-add and conversion forms lifted exactly on doubleword 0. Also `xsadddp`/`xscvdpspn`/`lxsdx`/`lxsd`, which wrote the low doubleword.

## Engine issues filed

- #676 ELF e_machine not routed (AVR, MSP430, Hexagon, LoongArch, Lanai, AMDGPU).
- #677 ET_REL relocations (SPARC64, s390x, Hexagon, Lanai, LoongArch, AArch64 BE).
- #678 ET_REL base 0x400000 vs 16-bit spaces.
- #679 Hexagon crossbuild.
- #680 wasm object names.
- #681 ARM soft-float return on armeb and v7-M.
