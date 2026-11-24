# IDA 9.5 processors and loaders vs unlace (2026-11-24)

Research only, no code changes. This note extends `notes/ida-gaps.md` (open gaps) and
`notes/ida-module-survey.md` (module survey) and covers only processors, loaders, and the
analysis tricks in the processor modules `pc.so` and `arm.so`. Topics those notes already
close (PE Load Config, the Thumb-1 switch helpers by body, Cortex-M volatility) are not
repeated here.

**Sources.** IDA side:
- `~/SiteResearch/ida-pro/ida_binaries/{procs,loaders}` (module inventory).
- `sqlite/x86__pc.sqlite` (pc.so) and `sqlite/apple__arm.sqlite` (arm.so; the `meta` table
  names `arm.so`). Function addresses come from the `strings` -> `xrefs` -> `functions` joins
  on those exports.

unlace side:
- `origin/main` at 2026-11-24, `specs/**/*.ldefs` (603 ids, of which 574 `<language>`
  rows), `crates/unlace-analysis/src/loader`, and the analyzers.
- `codegraph query` timed out syncing the index (over 120 s), so presence is checked with
  `git grep` for candidates and confirmed by reading the module headers named in the tables.
- IDA material is allowed in unlace (`.claude/rules/security.md`); this note describes
  mechanisms in our own words.

## 1. Processor modules (`ida_binaries/procs`, 69 modules)

IDA ships 69 processor modules. unlace has 177 processor directories (574 languages), so the
families IDA lacks (GPUs, VMs, retro consoles, newer RISC) are ours-better and not listed.
Each IDA module maps to unlace as follows:

| IDA module | covers | unlace language(s) | status |
|---|---|---|---|
| pc | x86 16/32/64 | `x86:LE:16:Real Mode`, `Protected Mode`, `32`, `64`, SMM | have |
| arm | ARMv4..v8.x A32/T32/A64, SVE/SME | `ARM:*`, `AARCH64:*` | have |
| mips | MIPS I..R6, MIPS16e, microMIPS | `MIPS:*` (+ nanoMIPS, Allegrex, R5900, Octeon) | have / ours-better |
| ppc | PowerPC 32/64, VLE, SPE | `PowerPC:*` (e200 SPE2, Xenon, Gekko, A2) | have |
| riscv | RV32/64 | `RISCV:*` (XThead, Zcmp, AndeStar) | have |
| sparc, hppa, alpha, ia, i860, i960 | | `sparc:*`, `pa-risc`, `21x64:*`, `IA64:*`, `i860:*`, `i960:*` | have |
| mc68k, mc6812, mc6816, mc8 | 68k/ColdFire, HC12, HC16, 6805/HC08/HCS08 | `68000:*`, `HC-12`/`HCS12*`, `68HC16:*`, `6805`/`HC05`/`HC08`/`HCS08` | have |
| m65, m65816, m740, m7700, m7900, spc700 | | `6502`/`65C02`, `65816`, `MELPS740`, `M7700`, `M7900`, `spc700` | have |
| i51, i196, xa, c166, st7, st9, st20, z8, z80, sam8 | | `8051*`/`80251`/`80390`, `MCS96`, `XA`, `C166`, `ST7`/`ST72`, `ST9`, `ST20`, `Z8`, `z80`/`z180`/`eZ80`, `SAM8` | have |
| h8, h8500, sh3, m32r, fr, nec850, rx, rl78, m16c, nds32, tricore, xtensa, unsp, kr1878, f2mc, avr, pic, pic16 | | `h8_300*`/`h8s`/`h8sx`, `H8500`, `SuperH*`/`sh3`/`SH4`, `M32R`, `FR`, `V850`/`RH850`, `RX`, `RL78`, `M16C`/`R8C`/`R32C`, `NDS32`, `tricore`, `Xtensa`, `unsp`, `KR1878`, `F2MC`, `avr8`/`avr32`, `PIC-12..18`, `PIC-24`/`dsPIC` | have |
| ad218x, dsp56k, tms32028, tms32054, tms320c3, tms320c5, tms320c6, pdp11 | | `ADSP218x`, `DSP56000`/`DSP56300`, `tms320c28`, `TMS320C54x`, `TMS320C3x`, `TMS320C5x`, `C6000`, `PDP-11` | have |
| cli, dalvik, java, wasm | bytecode | `CIL`, `Dalvik:*`, `JVM`, `Wasm` | have (see loaders for .class) |
| **arc** | ARCtangent-A4/A5, ARCompact (ARC600/700), ARCv2 | `ARC:*:ARCv2` only (`specs/Ghidra/Processors/ARC`, "ARCv2 (ARC EM / HS)") | **partial**: no ARCompact |
| **78k0, 78k0s** | NEC 78K0 / 78K0S | `upd78` is the uCOM-87AD (uPD78C1x), a different ISA | **missing** |
| **tms32055** | TMS320C55x | none (C54x only) | **missing** |
| **tms320c1** | TMS320C1x | `TMS320C1x` (`TMS320C1x:BE:16:default`, `:LE:`) | **done** |
| oakdsp | CEVA OakDSP | `oakdsp:LE:16:default`/`modulo`, generated from `teak` (TeakLite II) restricted to Oak's encodings (`tools/gen_oakdsp.py`) | have |
| **s390** | S/390 31-bit and z/Architecture | `s390x:BE:64` only | **partial**: no 31-bit ESA/390 |
| script | IDA's script-defined processors | n/a | n/a |

## 2. Loaders (`ida_binaries/loaders`, 38 modules)

| IDA loader | format | unlace | status |
|---|---|---|---|
| elf, pe, macho, coff, wasmldr | | `loader/format/{elf,pe,macho,coff,wasm}.rs`, plus dyld cache, kernelcache, fat, chained fixups | have / ours-better (dyld cache, kernelcache, TE) |
| dex | Android DEX | `loadimage_dex.rs` | have |
| dos | MZ | `loadimage_mz.rs` (+ `pklite/`, `upx/`, `neolite.rs` unpackers) | have / ours-better (unpackers) |
| aout, amiga, pef, psx, n64rom | | `loader/retroimage/{aout,hunk,pef,psx,n64}.rs` | have |
| hex | Intel HEX / S-record | `loader/firmware/containers.rs` | have |
| archldr_zip | zip archives | `loader/firmware/containers.rs` (zip/tar) | have |
| **ne** | Win16 / OS/2 1.x NE | `loadimage_mz.rs:79` only recognises the `NE` signature (as "not a DOS stub"); no segment table, entry table or relocation chains are read | **missing** |
| **lx** | OS/2 2.x LX, Windows VxD LE | `loadimage_mz.rs:79`, signature only | **missing** |
| **javaldr** | Java `.class` | `JVM:BE:32` decodes raw bytecode (`crates/unlace-cli/tests/prototype_call_mechanisms.rs:341`); no class-file parser (constant pool, methods, `Code` attributes) | **missing** |
| **omf, intelomf** | Intel/Borland/Watcom OMF objects and libs | none | **missing** |
| **aif, aof** | ARM Image Format / ARM Object Format (ADS/RVCT era) | none (unlace's `analyzers/aif` is "address in function", unrelated) | **missing** |
| **epoc** | Symbian E32Image | none | missing (niche) |
| **xbe, snes, snes_spc, pilot, geos, nlm, os9, qnx, rt11, hpsom, w32run, expload, mas, sbn** | Xbox, SNES ROM, SPC dump, PalmOS PRC, GEOS, NetWare, OS-9, QNX, RT-11, HP-UX SOM, Watcom W32RUN, PharLap EXP, ... | none | missing (niche, raw image + `--target` works) |
| bochsrc, dump | debugger / memory-snapshot inputs | n/a (no debugger ports) | n/a |

## 3. Processor-module analysis tricks

| technique | IDA (module, function) | unlace | status | proposed task |
|---|---|---|---|---|
| i386 PIC base: `__x86.get_pc_thunk.*` and `call $+5; pop` resolve to a constant | pc `sub_2AF40` (string `.get_pc_thunk.` 0x17b463) | `listing/picbase.rs:1` ("resolve an i386 PIC base register to its constant") | have | - |
| Return / indirect-branch thunks (`__x86_return_thunk`, retpolines) | pc `sub_35930` (`x86_return_thunk` 0x17b5af) | `unlace-lift/src/p2_lift/retpolinethunk.rs:1`, `analyzers/callfixup/mod.rs` | have | - |
| Stack probes: `_alloca_probe(_8/_16)`, `__chkstk(_ms/_darwin)`, `__aFchkstk`, VB `__vbaChkstk` | pc `sub_23D50`, `sub_26780` | `analyzers/entry/patterns/x86win_patterns.xml`, callfixups in the x86 cspecs; `chkstkdarwin` | have (`__vbaChkstk` and `__aFchkstk` not checked) | S: add the two names to the x86win callfixup list after a test |
| `SEH_prolog`/`SEH_epilog`, scope tables, `mov fs:0` frames | pc `sub_34230`, `sub_34410`, `sub_34940` | `analyzers/entry/msvcseh.rs` | have | - |
| /GS cookie (x86/x64): `__security_check_cookie`, `__security_init_cookie` | pc `sub_51B20` | `unlace_msvcstackguard` (`unlace-decomp/src/infra/middle_tests/msvcstackguard.rs`) | have | - |
| **/GS cookie on Windows ARM: `__security_push_cookie` / `__security_pop_cookie`** | arm `sub_26770` (string 0xab068) | no match for either name in `crates/` | **missing** | S: extend the stackguard recogniser to the ARM64/ARM32 push/pop helpers (a test on an MSVC ARM64 `/GS` object) |
| x64 unwind codes: chained `RUNTIME_FUNCTION`s, function extents, prolog/epilog regions | pc `sub_6ED00` (`adjust_chained_rf`), `sub_6FA00` (UWOP decode), `sub_6E840` (`JMP [RIP]` epilog) | `analyzers/entry/unwindinfo.rs`, `pdatainterior.rs:1`, `pe_entry.rs` (UWOP), `pdb/pdbframe.rs` | have (extents, chained); **partial**: unwind codes are not used to fix SP deltas or saved-register slots during decompilation | M: an option to seed the P3 stack-pointer solve from UWOP `ALLOC`/`SET_FPREG`/`SAVE_NONVOL` |
| Stack-pointer and purge solving by linear programming (IDA links COIN-OR Clp: `MAX_SIMPLEX_SIZE`, "space=%a pre=%a post=%a", `verify_sp`) | pc `sub_78870`, `sub_7EAE0`; "Postponed purged byte analysis" `sub_46640`/`sub_86B40` | `unlace-bandb-base/src/p4_calls/spsolve.rs`, `unlace_calleepurge`, `calleeretpurge.rs` (callee walk + constraint solve) | have (different method: walk + solve, no LP) | - (compare on an i386 stdcall corpus before changing anything) |
| GCC vararg register save area (x64 GPR/XMM spill; AArch64 `gr_top`/`vr_top`) | pc `sub_6C2A0` ("GCC64 vararg info"), arm `sub_7AE60` | `unlace-bandb/src/p4_calls/vaarg.rs`, `vastart.rs` | have | - |
| Go `runtime.morestack` prologue split | pc `sub_38080` | `unlace-lift/src/p2_lift/gomorestack.rs`, `pclntab/gonoreturn.rs` | have | - |
| 8087 emulator interrupts (INT 34h-3Dh) as x87 | pc `sub_3A4C0` ("(emulator call)", "Hintable nop"); `analysis.enable_fpu_emulation_instructions` | option `fpuemu` (x86-16.sla context bit, `phases.toml`) | have | - |
| DOS memory-model detection (tiny/small/large...) for far/near pointer sizes | pc `sub_98900` ("Detected memory model: %s") | `loadimage_mz.rs`, `listing/mzsweep.rs`, `loader/realmodecs.rs` (per-segment CS) | partial: segments tracked, no model inference driving `far` pointer types | M: infer the model from far-call/far-return density and set the default pointer size for `x86:LE:16` |
| VxD descriptor block, VxD service naming (`int 20h` VxDcall) | pc `sub_A3200` (DDB field names), `analysis.interpret_int_20_as_vxdcall` | none | missing (needs the LE loader first) | L, low priority |
| Borland C++ RTTI (`tpid` descriptors), Delphi VMT | pc (`_tpidc*`, `borland_rtti.*` options) | `analyzers/delphi/` (Delphi RTTI/VMT) | partial: Delphi yes, Borland C++ `tpid` typeids no | M |
| Thumb IT blocks | arm `sub_25B60` ("bad it-block, ignored") | SLEIGH `ITSTATE` context in the ARM spec | have | - |
| ARM/Thumb mode tracking: mapping symbols, odd addresses, `bx`/`blx` targets | arm (`analysis.no_automatic_THUMB_switch`, `ARM_NO_ARM_THUMB_SWITCH`) | `loader/arm_markers.rs`, `loader/armfuncmode.rs:1`, `listing/picpool.rs:963` (`blx` mode switch) | have | - |
| **MOVW/MOVT (and AArch64 MOVZ/MOVK, ADRP+ADD) address pairs as one reference** | arm `sub_1F280`, `sub_50EE0` (`ARM_MOVT_CONVERT`, `analysis.MOVT_pair_handling_options`: leave / valid addresses only / aggressive) | P1 listing xrefs read one instruction's p-code (`listing/picbase.rs:7` describes this limit); `listing/floatglobals.rs:12` pairs `movw`/`movt` only for float-global typing; the decompiler folds the pair in P3 | **partial**: the decompiled C is right, but P1 function discovery, xrefs and data typing miss MOVW/MOVT-built addresses (ARMv7-M firmware, Thumb-2 -O2) | S-M fix: a listing pass pairing `movw rd,#lo` + `movt rd,#hi` (same `rd`, no write between) into one reference, with IDA's "valid addresses only" rule |
| **Thumb-1 `bl` used as a long jump** (BL to a target that is not a function: tail branches beyond B's range) | arm (`analysis.disable_BL_jumps_detection`, "Force BL jump", `ARM_DISABLE_BL_JUMPS`) | no match in `crates/` | **missing** | S-M: measure first (count BL targets inside another function's body on Thumb-1 firmware), then classify such a BL as a branch in P2 flow behind an option |
| **armcc / Apple switch helpers `__rt_switch8`, `___switch8/16/32`, `___switchu8`** | arm strings 0xaed16..0xaed45 (next to `__ARM_common_switch8` and `__gnu_thumb1_case_*`) | `analyzers/callfixup/thumb1casesig.rs` covers the libgcc helpers and `__ARM_common_switch8` only | **partial** | S: add the five helpers (bodies from the RVCT/Apple runtimes) to `unlace_thumb1casesig` |
| arm64e PAC operands and authenticated calls | arm `sub_46C00` ("bad PAC flags") | `loader/authptrcall.rs`, `rtti/arm64evcall.rs` | have | - |
| `OSMetaClass` vtables (XNU C++) | arm `sub_A8A40` | `analyzers/iokit/` | have | - |
| Literal pools, PIC loads through the pool | arm ("literal op", "Operand number of load literal instruction") | `analyzers/aif/poolentry.rs`, `framepool.rs`, `listing/picpool.rs` | have | - |
| Delay slots (MIPS, SPARC, SH, PA-RISC) | mips/sparc/sh3 modules | SLEIGH `delayslot` semantics in the specs | have | - |
| MIPS `$gp`/GOT and PPC64 TOC (`r2`) tracking | mips/ppc modules | `loader/mipsgot.rs`, `mipsstubs.rs`, `ppc64r12.rs`, `elf_plt.rs:282` (TOC base for PPC64 PLT) | have | - |

## 4. Ranked top 10

Ranked by corpus reach x evidence x size.

1. **MOVW/MOVT (and MOVZ/MOVK) address pairs as one P1 reference** (arm `sub_1F280`/`sub_50EE0`; unlace partial). Every ARMv7-M -O2 firmware and Thumb-2 binary builds addresses this way, so P1 xrefs, function discovery from address-taken tables, and string/data typing miss them. Fix, S-M, `unlace-analysis/src/listing/`.
2. **Thumb-1 `bl` as a long jump** (arm `ARM_DISABLE_BL_JUMPS`; missing). Cortex-M0 and armcc Thumb-1 tail branches beyond `b`'s range come out as calls followed by bogus fall-through. Measure first, then an option, S-M, P2 flow.
3. **Windows ARM `/GS` cookie helpers** `__security_push_cookie`/`__security_pop_cookie` (arm `sub_26770`; missing). Every MSVC ARM64 `/GS` function keeps the cookie dance in the C. Fix, S.
4. **NE (Win16) loader** (`ne.so`; missing). Win16 programs and DLLs, the second stage of many DOS/Win3.x samples. Segments, entry table, relocation chains and imported ordinals onto `x86:LE:16:Protected Mode`. M.
5. **ARCompact (ARC600/ARC700, A4/A5) language** (`arc.so`; partial). Wi-Fi and baseband firmware, older Intel ME and Synopsys cores. A SLEIGH spec, L (a #98 family row).
6. **armcc/Apple switch helpers** `__rt_switch8`, `___switch8/16/32`, `___switchu8` (arm strings 0xaed16..; partial). Same mechanism as the closed Thumb-1 row. S.
7. **Java `.class` loader** (`javaldr.so`; missing). The `JVM` language exists, but a `.class` or `.jar` cannot be opened. Constant pool, methods, `Code` attributes, names. M.
8. **x64 unwind codes seed the stack-pointer solve** (pc `sub_6FA00`; partial). Frames whose `sub rsp` sits behind a `__chkstk` or an unusual prologue. Option, M, P3.
9. **OMF object and library loader** (`omf.so`, `intelomf.so`; missing). Borland/Watcom/MS-DOS `.obj`/`.lib` inputs and FLIRT signature building from 16-bit libraries. M.
10. **Missing DSP/MCU languages**: TMS320C55x (`tms32055`), NEC 78K0/78K0S (`78k0`, `78k0s`), TMS320C1x, ESA/390 31-bit (`s390`). One SLEIGH spec each, L; route through #98.

Not ranked (niche or n/a): LX/LE and VxD naming (needs the LE loader, legacy), Borland C++ `tpid` RTTI,
DOS memory-model inference, `__vbaChkstk`/`__aFchkstk`, and the console/OS loaders
(XBE, SNES, PalmOS, GEOS, NetWare, OS-9, QNX, RT-11, HP-UX SOM, Symbian, PharLap). Raw image plus
`--target` already decompiles those.
