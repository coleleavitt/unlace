# IDA gap: per-architecture lifters in the Hex-Rays plugins (MIPS, PowerPC, RISC-V, AVX)

Area: hexrays-lifters. Extends the hexarm and microcode notes; it does not repeat them.

## Scope and method

IDA 9.5 keeps its own Hex-Rays plugins as analysed modules. The four databases read here:

| database | plugin | functions | pseudocode | strings |
|---|---|---|---|---|
| hexrays__hexmips.sqlite | hexmips.so (MIPS microcode lifter) | 8,953 | 8,282 | 3,561 |
| hexrays__hexppc.sqlite | hexppc.so (PowerPC lifter) | 9,023 | 8,353 | 3,659 |
| hexrays__hexrv.sqlite | hexrv.so (RISC-V lifter) | 8,929 | 8,258 | 3,596 |
| hexrays__avxlifter.sqlite | avxlifter.so (AVX/AVX-512/VMX intrinsic lifter) | 443 | 382 | 849 |

Read-only queries: `functions`, `strings`, `xrefs` (string to user, then to the containing function), `pseudocode` (LIKE over the text, because `pseudocode_fts` tokenises `aAtomicFetchAdd`-style symbols into one token and misses them).

Limits. Most plugin functions are `sub_*`. Names come from the strings each function uses, and from neighbouring routines. Many diagnostic strings have no code xref (they are read through tables), so the emitter is named only where the xref or the pseudocode shows it. Unlace status comes from reading the source on `origin/main` (grep and file reads). No unlace binary was run for this note.

Existing notes read first: `hexarm-specific.md` (ACLE, barriers, NEON on AArch64), `hexrays-microcode.md` and `hexrays-microcode-deep.md` (section 3 names the PPC `__tw*`, `__sync` and MIPS intrinsics but does not rank them), `processor-modules.md` (the procs modules: switches, SP, no-return) and `processors-loaders.md` (delay slots row). The rows below are the lifter-plugin side, which those notes do not cover.

## Ranked table

Impact is for decompiled output of compiled code. Size: S under a day, M a few days, L split into several PRs.

| # | technique | what IDA does (own words) | IDA function / address | unlace status (file:line) | impact | size |
|---|---|---|---|---|---|---|
| 1 | AVX-512 family naming beyond AVX2 and FMA | One printf template per family builds the intrinsic name from the mnemonic (`_mm%s_%s_%s`), with `_mask` and `_maskz` infixes. Dedicated handlers cover compress and expand, gather and scatter, the k-mask ops, FP16 scalars, VNNI, IFMA, BF16, 4FMAPS, 2INTERSECT, popcnt, lzcnt, conflict, ternarylogic, permutex2var, multishift, GFNI, VAES, CLMUL and SHA | sub_1C1A0 (template, `_mm%s_add_pd` family), sub_18D20 compress, sub_19420 expand, sub_19AD0 gather, sub_1A740 scatter, sub_37AF0 k-ops, sub_15470 FP16 converts, sub_20720 IFMA, sub_20A60 VNNI, sub_27BB0 4FMAPS, sub_27F50 2INTERSECT, sub_2D290 ternarylogic, sub_2CB10 permutexvar, sub_2DE80 GFNI, sub_2E1F0 CLMUL, sub_2E530 AES, sub_25D90 SHA | **partial**. `avxintrin.rs:149-183` maps about 35 AVX2 integer and shuffle mnemonic arms; `:184` returns `None` for everything else. FMA is at `:240-266` (reorder already matches IDA's `sub_1F660`). Masked forms come from the generic suffix rewrite at `:18-46` (lanefuse). Other AVX-512 forms stay SLEIGH user ops (`specs/Ghidra/Processors/x86/data/languages/avx512.sinc`) | high | L (split: masks + compress/expand/gather; k-ops; FP16, VNNI, IFMA; permutes and ternlog) |
| 2 | Element-pair conversions as named intrinsics | Reads operand and result sizes and element types, then names the conversion from the element pair (`epi8_epi16`, `epu8_epi32`, ...). Separate routines for zero-extension, for narrowing (truncate and saturate: `cvtepi32_epi8`, `cvtusepi64_epi16`) and for FP16 | sub_34ED0 `handle_vpmovsx`, sub_35320 zero-extend, sub_355D0 narrowing, sub_27360 down-converts, sub_15470 FP16 | **missing**. No `pmovsx`, `pmovzx`, `cvtepi` or `vcvt` mapping in `unlace-middle` or `unlace-lift` (grep: 0 hits); `avxintrin.rs` has no conversion arm | high (vectorised code is full of them) | M |
| 3 | Barrier and sync intrinsics outside AArch64 | Names fences and syncs as intrinsics: PowerPC `__sync`, `__lwsync`, `__isync`, `__ptesync`; MIPS `_sync`, `_synci`; RISC-V `atomic_thread_fence`, `_sfence` | hexppc strings 0x4C99BC (`__sync`), 0x4C99C3 (`__lwsync`), 0x4C99CC (`__ptesync`), 0x4C99D6 (`__isync`); hexmips `_sync` 0x4BD12C, `_synci` 0x4BD13F; hexrv `atomic_thread_fence` 0x4B812D, `_sfence` 0x4B814E | **partial**. AArch64 barriers print as names through `acleintrinsics` (`memtag.rs:41-43`, option at `phases.toml:2305`). The `atomics` rule names a full fence only for x86 `lock or` (`atomics.rs:604-606`). No `lwsync`, `isync`, `ptesync`, `synci` or `sfence` names in the crates | medium | S |
| 4 | MIPS ll/sc and the `_ll` / `_sync` atomic names | Names MIPS load-linked as `_ll` and synchronisation as `_sync`, `_synci` (the instruction-cache sync). The emitter is not located in this pass: the strings have no code xref, so only the name list is confirmed | hexmips `_ll` 0x4BD132, `_sync` 0x4BD12C, `_synci` 0x4BD13F | **missing**. `atomics.rs:1-9` covers x86 `lock`, AArch64 LSE and RISC-V AMO only; there is no MIPS arm (grep: 0 hits in `atomics.rs`). `llscfold` is AArch64 and ARM (`phases.toml:2025`) | medium | M |
| 5 | RISC-V CSR access as named read, write, set and clear intrinsics | Seven forms chosen by the CSR instruction's read and write behaviour: `riscv_read_csr`, `riscv_write_csr`, `riscv_read_write_csr`, `riscv_read_set_csr`, `riscv_read_clear_csr`, `riscv_set_csr`, `riscv_clear_csr` | hexrv sub_77E30 (0x77E30) | **missing**. No `csr` intrinsic naming in `unlace-lift`, `unlace-middle`, `phases.toml` or `docs/spec` (grep: 0 hits). CSR appears only in test fixtures (`processors.toml`) | medium (cycle counters, feature and mode probes) | S |
| 6 | PowerPC trap-word intrinsics | `__tw<cond>` and `__twi<cond>` (ten register and ten immediate forms, in the trap-word TO-field order), and the `td` family | hexppc strings 0x4C9880 onward (`__twlgt`, `__tweq`, `__twlgei`, ...) | **missing by name** (grep `__tw`, `twlgt`: 0 hits in crates). Trap words reach output as their SLEIGH user ops; not run to confirm | medium (compilers spell an unconditional trap as `tw 31,0,0`) | S |
| 7 | PowerPC count-leading-zeros as a builtin | Recognises the `cntlzw` and `cntlzd` shape on microcode and emits `_cntlzw` or `_cntlzd`, the width chosen from the operation | hexppc sub_74720 (0x74720) | **partial**. `bitidioms` covers AArch64 clz and x86 bsr loops (`phases.toml:1685`), not `cntlzw`. A PowerPC `lzcount` fixture exists (`printc_parity.rs:64`, `decompile_all_cli.rs:13043`) but asserts no builtin name | low-medium | S |
| 8 | MIPS overflow and divide traps as intrinsics | Signed add and sub overflow as `__integer_overflow`, divide by zero as `__divide_by_zero`, `__trap`, and FP invalid as `__fp_invalid_operation`; the emission path is gated by an option (`Generate trap for arithmetic`) | hexmips sub_77B10 (overflow, 0x77B10), sub_77FD0 (divide and trap), sub_77800 (FP invalid) | **missing**. No `integer_overflow`, `divide_by_zero` or `__trap` naming in the crates (grep: 0 hits) | low | S |
| 9 | Vector register views and the mask-register model | Keeps xmm, ymm and zmm as views of one register through helpers (`__readzmm`, `__writezmm`, `__readmask`, `__writemask`), syncs the views on entry, and reports a failed sync | avxlifter sub_9C20 (ENTER, `failed to sync vector register views`), sub_CBE0 (virtual ZMM write), sub_FB90 read zmm, sub_D920 write zmm, sub_10450 read mask, sub_10600 write mask | **partial**. `lanefuse` (`phases.toml:5868`) and `vexzeroupper` (`phases.toml:5827`) cover lanes and upper-zeroing. Masked forms are named (`avxintrin.rs:18-46`). The k-register ops are not named (no `kand`/`kor`/`kunpack` mapping) | medium | M |
| 10 | AVX itype coverage manifest | The MATCH routine is a generated chain of predicates over itype ranges, and dispatch goes through an ordered map keyed by itype. The `AVX_COV` and `AVX_COV_MANIFEST` variables make the plugin write its itype coverage to a file | avxlifter sub_89D0 (MATCH), sub_9520 (init, reads the variables), sub_98B0 (writes `%u\t%s` rows) | **missing**. No coverage manifest or itype dump in the crates, docs or notes (grep `AVX_COV`, `coverage manifest`: 0 hits) | low (a measurement tool; it would make row 1 countable) | S |
| 11 | VMX instructions as named intrinsics | Names twelve VMX instructions (`__vmxoff`, `__vmcall`, `__vmlaunch`, `__vmresume`, `__vmfunc`, `__vmxon`, `__vmptrld`, `__vmclear`, `__vmptrst`, `__vmread`, `__vmwrite`, `__invept`, `__invvpid`) and logs and fails when an operand cannot be loaded | avxlifter sub_389B0 (MATCH), sub_394E0 (APPLY) | **partial**. Decode and flag lift are tested (`crates/unlace-sleigh/tests/x86_vmx_status.rs:169-219`). No `__vmread`-style names in the crates | low (hypervisor and kernel code) | S |
| 12 | PowerPC optimizer hook that reports a change count | Runs a PowerPC-only rule pool after the generic pool and prints `PPC optimizer %d` with the number of changes | hexppc sub_77F10 (0x77F10) | **partial**. Per-architecture hook slots exist (`crates/unlace-middle/src/substrate/passhooks.rs`); no PowerPC pass or change-count report was located | low | S |

Rows 1 to 5 are the top five for follow-up issues.

## Checked, no lifter technique found

- **MIPS delay slots.** Not in the plugin: `delay` has 0 pseudocode hits in hexmips and procs__mips. The core handles them. Unlace models them in SLEIGH; `inject_sleigh.rs:1164` rejects them only inside inject snippets. Covered by `processors-loaders.md`.
- **RISC-V compressed (RVC).** Not in the plugin: `compressed` appears once (sub_3D36E0, an options table). Decode-level, not lifter-level.
- **MIPS "simplify dc" (sub_75360).** A MIPS-only peephole that matches a fixed microcode shape and calls a constant helper. The message is confirmed; the exact rule was not established, so it is not ranked.
- **RISC-V AMO naming.** Already present: `atomics.rs:2` says RISC-V AMO becomes an atomic builtin. IDA names the same operations `atomic_fetch_add`, `atomic_fetch_and`, `atomic_exchange` and so on (strings 0x4B81A8-0x4B821D). Unlace uses `__sync` or stdatomic per the `atomics` option (`phases.toml:2006`).

## Relations to other notes

- Row 3 extends `hexarm-specific.md` row 11 (ACLE barriers) to the other three targets.
- Row 1 builds on the existing IDA-informed mapper: `avxintrin.rs:1-12` already cites `avxlifter.so 0x1c1a0` and `0x1f660`. This note widens the family list, not the mechanism.
- Row 6 and row 7 are the plugin-side view of the PowerPC rows in `hexrays-microcode.md` section 3.
