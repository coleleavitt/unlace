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
| AMDGPU gfx900 | `AMDGPU:LE:64:GFX9` | 13/13 | 13/13 | -O0 all 13, -O2 3: `src_private_base` source, `v_swap_b32` | | #663 (now 0 bad), #666; e_machine routing #676; gfx9/10/11 OpenCL kernels: see "Bytecode and GPU families" below |
| AVR | `avr8:LE:16:default` | 0/13 (.o), 13/13 (linked) | 0/13 (.o), 13/13 (linked) | none | | .o base 0x400000 overflows the 16-bit space #678; e_machine #676 |
| MSP430 | `TI_MSP430:LE:16:default` | 0/13 (.o), 13/13 (linked) | same | none | `RRA` sign shifts printed as a seven-deep `x & 0x8000 \| x >> 1` chain | #668 (now `x >> 7`); #678, #676 |
| Hexagon | `Hexagon:LE:32:default` | 0/13 | 0/13 | | every function: `Could not obtain cached crossbuild instruction` | #679; relocations #677; e_machine #676 |
| Lanai | `lanai:BE:32:default` | 1/13 clean | 4/13 clean | | branches flow to 0 (`R_LANAI_25` not applied) | #677, #676 |
| LoongArch64 | `Loongarch:LE:64:lp64d` | 11/13 clean | 12/13 clean | | switch tables flow to unmapped memory; `0.5f` reads as `1.4013e-45f` (PCALA not applied) | #677, #676 |
| NVPTX (ptxas `sm_80` cubin) | `SASS:LE:64:SM80` (`--target`) | 13/13 | 13/13 | none | `CALL.ABS.NOINC` device calls were the opaque `sass_CALL` op (calls dropped). Still open: `BRX` jump tables, and `ISETP`/`P2R`/`I2F` user ops. -O2 `classify` returns the pre-branch value. `str_len` is `void` | `CALL.ABS` fixed in #750. Engine: e_machine 190 (CUDA) not routed and R_CUDA relocations 56-69 not applied (#676, #677) |
| ARCv2 (arc-elf-gcc 15.3 `-mcpu=hs`) | auto (`ARC:LE:32:ARCv2`) | 13/13 (.o, linked) | 13/13 (.o, linked) | none | -O2 `list_sum`: `jeq.d [blink]` skipped its `mov_s r0,0` delay slot on the fall-through path, so the sum started at the list pointer | #766 |
| Xtensa | `Xtensa:LE:32:default` (`--target`) | 13/13 (gcc windowed .o/linked, clang CALL0 .o) | 13/13 | none | `L32R` printed its literal address with bit 32 set (`l32r a8, 0x4003c04d0`). In the unlinked .o, literal-pool loads read unrelocated words (`R_XTENSA_SLOT0_OP`/`R_XTENSA_32` not applied). `mul_wide`/`str_len`/`scale` return `void` when their libcall is unresolved (`sub_0`) | #772 (L32R). Toolchain notes: binutils' default xtensa core has `XCHAL_HAVE_BE 1` but LE-encoded instructions with BE data, which the ISA-encoded `Xtensa:BE` spec cannot decode. Built instead with `XCHAL_HAVE_BE 0` (gcc 15.3 windowed ABI) and with clang 22 `-S` plus `llvm-mc` (CALL0 ABI); clang `-c` hits the fixup alignment error |
| C-SKY (csky-elf-gcc 15.3, ck810 ABIv2) | `CSKY:LE:32:v2` | 13/13 (.o, linked) | 13/13 (.o, linked) | none | none. `scale`'s tail call to an unresolved `__addsf3` is `void` | e_machine 252 routed in #776 |
| m68k (m68k-elf-gcc 15.3, default `-m68020`) | `68000:BE:32:MC68020` | 13/13 | 13/13 | none | none. `mul_wide`'s 64-bit `>> 3` prints as the `asr`/`roxr` bit chain. The stack-argument tail call in `dispatch` loses its argument (`fib()`) | e_machine 4 routed in #ELFPR |
| OpenRISC (or1k-elf-gcc 15.3) | `OpenRISC:BE:32:default` | 13/13 | 13/13 | none | none. The varargs pointer in `add_all` prints as `Register00001004` (the incoming `r1`) | e_machine 92 routed in #ELFPR |
| loongarch32, xcore, propeller, kalimba, spirv | | | | | No C compiler output. GCC 15 and LLVM 22 have LoongArch64 only, and XCore was removed from LLVM. There is no free C compiler for Propeller 1 or Kalimba. clang 22 crashes on the SPIR-V backend, and there is no SPIR-V spec | |

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

## Re-run on `unlace-5aa8c751b1` (2026-11-24)

The same objects were run again with no `--target`, on the build that has the loader fixes (#706, #707,
#710, #713-#737). AVR and MSP430 ran both as `.o` and linked. All 66 objects now load by
auto-detection, and every function is found: 13/13 everywhere, 10/10 for BPF. VE still has no spec.

| family | O0 | O2 | was | now |
|---|---|---|---|---|
| x86, x86_64, aarch64, arm, armv7a, thumb, mips*, powerpc, powerpcle, powerpc64, riscv32/64, sparc, bpf | 13/13 | 13/13 | clean | clean |
| aarch64_be | 13/13 | 13/13 | tail call `b fib` as `while(true){}` | `return fib(a); // tail-call` (#716) |
| armeb | 13/13 | 13/13 | soft-float return in `s0` | `return (float)__aeabi_fadd(...)` (#681) |
| thumbv7m | 13/13 | 13/13 | soft-float `scale` is `void` | unchanged; noted on #681 |
| powerpc64le | 13/13 | 13/13 | VSX/`isel` halt on the generic ISA | unchanged by design; with `--target PowerPC:LE:64:A2ALT` exact since #674 |
| riscv32/64 | 13/13 | 13/13 | `fmadd_s` user op | unchanged by design |
| s390x | 13/13 | 13/13 | `dispatch` jump table lost | `switch(op)` with all 9 cases (#713) |
| sparc64 | 13/13 | 13/13 | calls `sub_4001f4`, `scale` constant from 0 | calls named (#721); `scale` still `return v;`, lifted p-code is right: #765 |
| wasm32 | 13/13 | 13/13 | every function `sub_8000xxxx` | named from the `linking` symbol table (#710) |
| AVR | 13/13 (.o and linked) | 13/13 | .o unloadable (0x400000) | loads by header (#706, #707); .o calls stay `sub_xxx`: #757 |
| MSP430 | 13/13 (.o and linked) | 13/13 | .o unloadable | loads by header; `RRA` as `>> 7` (#668); globals off the register file from 0x200 (#754) |
| Hexagon | 13/13 | 13/13 | every function failed (crossbuild) | decompiles by header (#706), with calls, `switch(op)` and `0.5f` (#737, #679) |
| Lanai | 13/13 | 13/13 | branches flow to 0 | branches, calls and globals relocated (#732) |
| LoongArch64 | 13/13 | 13/13 | switch tables unmapped, `0.5f` as `1.4013e-45f` | relocated (#726); the `1.4013e-45f` was the `fmadd.s` fourth operand read as the constant 1, fixed in #768 |
| AMDGPU gfx900 | 13/13 | 13/13 | bad instructions in all -O0 functions | 0 bad (#663), routed by `EF_AMDGPU_MACH` (#706); .o calls unrelocated: #757 |

Follow-ups from the re-run:
- Spec fixes: #754 (MSP430 base 0x200), #755 (GFX10 `s_xor_saveexec_b32`, found by the gfx1030 routing fixture), #768 (LoongArch `frA`/`drA`).
- Issues: #756 (linked SPARC64 marks a leaf no-return), #757 (AVR and AMDGPU ET_REL relocations), #765 (SPARC64 float result returned in `fs0`).
- Regression rows: `processors.toml` `elfroute_*` (#760) loads ET_REL and ET_EXEC builds of every routed or relocated machine through auto-detection.

## Bytecode and GPU families (sleigh-fam-e, 2026-11-24)

Real artifacts decompiled one function or code object at a time with the pinned
`unlace-bin/unlace-c720410c75` (`decompile <image> <addr> --raw-image --target <lang> --base 0`,
30 s timeout). "Clean" means exit 0 and no bad instruction, unimplemented or `halt_baddata`.

| Family | Corpus | Units | Clean | Spec fixes | Engine issues |
|---|---|---|---|---|---|
| `CPython:LE:32:3.12` | every code object of 40 python3.12 stdlib modules (argparse, typing, enum, inspect, _pydecimal, tarfile, zipfile, logging, asyncio.tasks, ...) | 3242 | 3240, then 3242 after #684 | #684: FOR_ITER without an internal p-code branch | #686 (Could not find op at target), #690 (tailcallframe, 5 objects) |
| `Lua:LE:32:5.1` | every prototype of the Lua 5.1 test suite, luac 5.1.5 | 371 | 371 | none | none |
| `Lua:LE:32:5.2` | Lua 5.2.2 test suite, luac 5.2.4 | 529 | 529 | none | none |
| `Lua:LE:32:5.3` | Lua 5.3.4 test suite, luac 5.3.6 | 666 | 666 | none | none |
| `Lua:LE:32:5.4` | Lua 5.4.6 test suite, luac 5.4.8 | 1034 | 1033 | none | #688 (kuna_selectdiv overflow on bitwise.lua's main chunk) |
| `V8Ignition:LE:32:13.6` | `node --no-lazy --print-bytecode` of npm's semver package and the Node internals it loads | 682 | 682 | none | none |
| `EVM:BE:32:Cancun` | solc 0.8.24 runtime code of an ERC-20 and a vault (mapping, array, call, selfdestruct), optimizer off and on | 4 | 2 | none | #687 (jump-table shift overflow on the ERC-20 runtimes) |
| `AMDGPU:LE:64:GFX9/10/11` | 8 OpenCL kernels (matmul, tiled matmul, histogram, LDS scan, float4 saxpy, clamp, f64 math, string scan) at -O2/-O3 for gfx900, gfx1030, gfx1100 | 96 | 82, then 96 after #685 | #685: v_div_scale/fmas/fixup_f64, v_cmp_class_f64/f32, gfx11 s_sendmsg_rtn_b32; f64 literals are the high half on GFX10/11. #702: RDNA v_cmpx writes only EXEC (it also wrote VCC), and restores #663's aperture operands and `v_swap_b32`, which #685 had dropped; the same 96 functions pass on GFX10-W64/GFX11-W64 | none |

Notes:
- Lua and V8 warnings are informational only (`iteboolean` re-rolls in Lua; none in V8).
- EVM: the two contracts that decompile are hard to read. Internal Solidity functions return
  through a JUMP to an address on the stack, so the dispatcher becomes indirect jumps
  ("Re-entered indirect jump"), and many JUMPI conditions print as bare expression
  statements. That is the dynamic-jump structure of EVM code, not a decode error; every
  instruction lifts.
- Lua corpus prototypes come from a small chunk parser for each luac format (5.1 to 5.4 headers,
  constants, nested prototypes, debug info); CPython code objects come from
  `co_code` of every nested code object.
- Java Card and MULTOS MEL had no real artifacts beyond the public MULTOS ALU already used for
  #650 (33 functions, clean).
