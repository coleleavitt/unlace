# IDA 9.5 module survey: what unlace still lacks (2026-11-22)

Scope: research only, no unlace code changes. Companion to `notes/ida-apple-mechanisms.md` (Apple modules) and
`.claude/skills/decompiler-structure-quality/references/hexrays-structuring.md` (Hex-Rays structuring); neither
area is repeated here. Every IDA mechanism is described in our own words; addresses are offsets inside the IDA 9.5
Linux modules, read from the idb-rs SQLite exports in `~/SiteResearch/ida-pro/sqlite/<category>__<module>.sqlite`
(pseudocode, strings, xrefs) and from `~/.local/share/ida/9.5/cfg/*.cfg`. unlace side: branch `all`, catalog of
308 options (`target/debug/unlace catalog --json`), `unlace-analysis/src/analyzers/`, phase folders of
`unlace-decomp`. "Live unlace" means a run of the debug `unlace decompile` on a small clang/gcc test written for this
survey (sources in the research session's scratchpad, not in the repo).

## 1. Dumps and exports made for this survey

Dumped with `~/bin/ida-dump-all-idalib` (idalib, full auto-analysis, every function through Hex-Rays) into
`~/SiteResearch/ida-pro/ida-9.5-dump/<category>/<module>/` and exported with
`idb-tools -i <module>.so.i64 export-sqlite ... --pseudocode-dir out/all`, at most two IDA processes at a time
(driver: `/home/cole/.prime/agent/session-artifacts/01a1ecd1-9a79-739c-9b0a-635e5ed5ffe1/session-artifacts/01a20412-580e-7281-a606-e1773987a8db/scratchpad/dump_more.py`, log `dump_more.log`):

| category | module | status |
|---|---|---|
| plugins | rtti, rust, patfind, svdimport, strings, makesig, pdb, uefi | exported |
| loaders | pe, coff, elf, dex, uefi_fv | exported |
| hexrays | hexrv, then hexmips, hexppc | dumping in sequence (~7,500 functions each); these were surveyed from strings, their sqlite files appear when the driver finishes |
| hexrays | hexarc | dumped earlier but the database was left unpacked (`.id0/.id1/.nam/.til`, no `.i64`), so not exported; ARC is out of unlace's priorities |
| loaders | cortex_m.py / cortex_m.json | plain Python + JSON, read directly |

`plugins/strings.so` turned out to be IDA's sample plugin (prints a message), not a strings analyzer. Debugger
modules (bochs_user, dbg, gdb_user, *_stub, *_user, dalvik_user) were not surveyed: no decompiler relevance.

## 2. Top 15 gaps (ranked by impact x evidence x size)

| # | gap | impact | evidence (IDA / unlace) | unlace owner | fix or option | size |
|---|---|---|---|---|---|---|
| 1 | Peripheral memory is not volatile on Cortex-M **ELF** images: device-register stores are deleted, polling loops come out tangled | ARM firmware (cleanflight, betaflight, libopencm3, crazyflie, chibios, nuttx are ELF): GED and correctness | cortex_m.py maps SRAM/PPB segments; live unlace repro on a clang thumbv7m ELF loses `REG(0x40021000)=1` and recovers with `--assert volatile 0x40000000+0x20000000`; unlace marks the regions only in `unlace-cli/src/rawfront.rs` (`DEVICE_REGIONS`), raw images only | unlace-analysis `loader/` (next to the pcmemory volatile painting), P1, M-profile images | fix | S |
| 2 | No type-library input: library prototypes cannot carry named struct pointers beyond 23 libc shells (glibc x86-64 layouts for 9); Win32 handles/structs are `void *` | Windows/PE type match, drivers, Android/ARM POSIX, UEFI. (DecBench Linux: small, see note) | IDA ships 154 TILs (mssdk_win10 222k symbols / 92k types, gnuunx64 45k symbols, ntddk, ntapi, wdk, uefi64, android); Hex-Rays imports `get_named_type` and applies callee prototypes; libida embeds clang to parse headers. unlace: `protos/libcsigs.rs` (~685), `win32sigs.rs` (~180, `void *` by design), `libctypes`, `objcsdk` (ObjC subset) | unlace-analysis `analyzers/protos/`: a runtime type-archive option (read a user's IDA `.til` with idb-rs's Apache-2.0 TIL parser, or a header dir via a C-declaration reader like objcsdk's); never commit SDK-derived tables | option | L |
| 3 | MSVC C++ class typing: no `X` struct with `__vftable` to a typed `X_vtbl`, no `this` typing of vfuncs/ctors, no rule "a load typed `X_vtbl` retypes its base as `X`" | Windows C++ type match (named struct pointers) and virtual-call rendering | rtti.so names RTTI; libida builds `<Class>_vtbl`; hexx64 sub_4311A0 back-propagates from vtable type to object type; unlace `rtti/` names `vfunc_i` only, `vtabletypes.rs` is Itanium-only | unlace-analysis `rtti/` + unlace-decomp P5 (`vtabletypes` extended to PE; back-propagation rule as option) | option | M |
| 4 | 64-bit values on 32-bit targets: `long long` params split in two, hi/lo compare chains print as SBORROW4/CONCAT44 | i386 PE, ARM32 firmware, MIPS32/PPC32 | hexx64 rules 3CHECK64/CMP64/JNZ64 (sub_129630, sub_1F49A0, sub_282040); live unlace i386 -O2 test | unlace-decomp P4 (pair parameters) + `p5_types/double.rs` (compare-chain fold) | fix (fold) + option (param pairing) | M |
| 5 | PDB: only names and extents are read; no TPI types, prototypes with `this`, register/stack locals, line numbers, PDB-derived vtables, symbol-server fetch | Windows/PE with PDBs (every system DLL via msdl): large type-match gain | pdb.so sub_6F920 (types), sub_50C20 (prototypes), sub_4F240 (locals), sub_34C10 (vtables), 0x76EA0/0x77DD0 (symbol path + download); unlace `analyzers/pdb/` | unlace-analysis `pdb/` (import = fix; network fetch = option, off like IDA's `PDB_NETWORK`) | fix + option | L (+S-M fetch) |
| 6 | MSVC exceptions: no FuncInfo/FH4/IP-to-state parsing, catch funclets stay separate functions, no `throw` from `_CxxThrowException`+ThrowInfo, no x86 SEH4 `__try/__except` | Windows C++ and 32-bit PE (malware, crackmes) | eh34 sub_3F6E0, sub_3CB60, 0x16560, sub_39140; eh_parse struct layouts; x86 pc 0x34230/0x2DA10; rtti.so ThrowInfo markup; unlace has `itaniumeh` only | unlace-analysis `entry/` (new `msvceh.rs`) + P2/P8, sibling of `itaniumeh` | option | L (throw helper alone S) |
| 7 | Thumb/ARM switch helpers (`__gnu_thumb1_case_*`, `__ARM_common_switch8`) recognised by name only; stripped M0/-Os firmware loses every such switch | ARM firmware GED | arm.so sub_87DC0 matches the helper body (up to 16 code words, tolerant to one swap) then names it; unlace `listing/thumbswitch.rs:107` name table, ARM.cspec callfixups by name | unlace-analysis `listing/` (body signature -> name -> existing callfixup) | fix | S-M |
| 8 | Atomic idioms: x86 `lock` forms print `LOCK(); ... UNLOCK();`, AArch64 LSE CAS prints as plain compare-and-store, no LL/SC loop folding | kernels, C++ `shared_ptr`, Rust `Arc`, firmware RTOS | hexx64 sub_8AC80 (`_Interlocked*` table), hexarm sub_899B0 (C11 `atomic_*`); live unlace tests | unlace-decomp new `p3_dataflow/atomics.rs` | fix (fixed forms) + option (LL/SC loops) | M |
| 9 | Cortex-M core peripherals unnamed without an SVD (NVIC, SCB, SysTick, MPU, DWT...), and `--svd` is silently ignored for ELF inputs | ARM firmware readability | cortex_m.json (~1,900 SCS registers in 29 blocks); svdimport works on any database; unlace `0xE000ED0C` -> `dat_e000ed0c`; `rawfront.rs` returns before the SVD branch for object files | unlace-analysis `loader/firmware/cortexm.rs` (table built from the ARM ARM, typed structs like the SVD path) + move SVD application into an analysis pass | fix | S-M |
| 10 | PE Load Config not read: Control Flow Guard function table (every address-taken function), guard dispatch/check slots, SafeSEH / EH-continuation tables; delay-load imports not named | Windows/PE function recall and indirect-call fidelity; delay imports common in MSVC DLLs and malware | loaders__pe sub_18EE0 -> sub_8540 (`___guard_fids_table`), delay-load descriptor walk sub_9B20; unlace: no `GuardCF` / delay-load code (`loader/pe_iat.rs` regular IAT only) | unlace-analysis `analyzers/entry/pe_entry.rs` (new oracles) + `loader/pe_iat.rs` | fix | S each (dispatch rewrite M) |
| 11 | DWARF location lists: only `fbreg` locals are imported; register variables (`DW_OP_reg`/`breg`/`piece` over PC ranges) are dropped | Linux ELF with debug info: named/typed register locals at -O2, merged-variable reduction | dwarf.so sub_83140 (`add_func_regvar` per loclist range); unlace `dwarf/dwarfscopes.rs` reads frame offsets only | unlace-analysis `dwarf/` (extend `dwarfscopes`) | fix | M |
| 12 | Merged variables: no block duplication before variable allocation (Hex-Rays UNMERGE_CALLS / BREAK_PHI_ARM_MERGES duplicate a call block or a one-register join per predecessor) | DecBench merged variables, GED | hexx64 sub_191D80, sub_1915E0; unlace's `returndup`/`crossjumprevert`/`dedupitetail` act after structuring | unlace-decomp P3 (before Merge) | option | M |
| 13 | Variable names: no names from arbitrary callee parameter names, struct field names, or type-based fallbacks; demangled names not simplified (`std::basic_string<char,...>` -> `std::string`) | readability; name-scoring benchmarks; C++ output | hexx64 sub_4CE070/sub_4CC7C0/sub_4CA750; IDA cfg/goodname.cfg (32 PCRE rewrite rules); unlace `libcnames` (libc tables only), `contextnames` (off), no name rewrite in `analyzers/demangle/` | unlace-decomp P6 (extend `libcnames`) + unlace-analysis `demangle/` | option | S-M |
| 14 | UEFI: no protocol/PPI interface typing from the GUID at `LocateProtocol`/`HandleProtocol`/`LocatePpi`, no install-to-implementation links, no table-pointer inference from call usage | UEFI firmware type match | uefi.so (`UEFI_TYPE_PROTOCOLS`, sub_10BC0 summary, sub_29D00 interface synthesis, sub_14820 cross-module xrefs; its own microcode dataflow sub_48A80); unlace `analyzers/uefi/types.rs` defines only the console protocols | unlace-analysis `analyzers/uefi/` + P5 per-call output type (like `gonewtype`) | fix on UEFI images | M-L |
| 15 | Go interface dispatch: itabs named but not typed, so `tab->fun[i]` calls show no method | Go binaries (interface calls everywhere) | golang.so sub_17960 builds an `iface.I.T` struct with typed method pointers; unlace `gotypes/itabs.rs` defers method resolution | unlace-analysis `gotypes/` + P5 (extend `gotypeglobals`) | option | M |

Note on DecBench and named struct pointers: on the decbench Linux corpus unlace already leads on `ptr_struct`
(4.1% vs IDA 2.4%, `docs/decbench/typecampaign/results.md`); 10,559 of the 14,252 ground-truth struct pointers
carry program-defined names that no stripped decompiler recovers. A type-library input (gap 2) therefore moves
the libc/POSIX slice of DecBench a little, but its main payoff is Windows/PE (where IDA applies mssdk/ntddk to
every import), Android and UEFI. The DecBench-facing type levers in this list are 4 (pairs), 11 (DWARF loclists,
for debug builds), 12 (merged variables) and 13 (names).

## 3. Per-module findings

### 3.1 Hex-Rays core: hexx64, hexarm, avxlifter, goomba (hexrv/hexmips/hexppc from strings)


#### hexx64 (decompiler core)

| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Choosing a variable's type | For each local it collects typed candidates from every use. It sorts them by how many uses voted (ties go to priority), then scores pointer candidates (`score_tinfo`; a generic `LPVOID` loses). It keeps the new type only if the type ranking says it is better than the current one. A narrower winner can split the variable. Repeats until stable. | sub_30E790 → sub_30E260 (introsort sub_30D260), score_tinfo import, rank sub_3AD540, split helper sub_1334A0 | PARTIAL: `typevote`, `ptrfromuse`, `fieldtype`. There is no explicit score for how specific a pointee is. |
| Named struct pointers | No automatic struct creation (only the user's "Create new struct type"). The names come from the 154 shipped type libraries (mssdk, ntddk, gnulnx, arm, android, uefi, …) through callee prototypes, from structure offsets the database records on operands (`get_stroff_path`), and from types already in the database. | `til/` (154 files); imports get_named_type/get_numbered_type; get_op_tinfo in sub_FD810 | PARTIAL: `structsynth`/`structmerge` synthesize `struct_N`. `libctypes` covers 23 libc shells, with field layouts only for x86-64 glibc. `win32sigs.rs` (372 lines) types every HANDLE or struct parameter as `void *` on purpose. Nothing covers Windows SDK, DDK, POSIX on ARM, or Android structs. |
| Writing inferred types back to the database | After a decompile it types globals and struct members from the types of the locals that read and write them, and stores them with `apply_tinfo` and `set_tinfo` (it restarts when flags change). The next decompile of any function starts from them. It also refines return types (`MBA_RETREF`). | sub_2CE460 (apply_tinfo on a global or member found by `udm_by_tid`); "return type has been refined" in sub_257150 | PARTIAL: `storetype` (default `uefi` only, batch mode), `protoorder`, `calleevote`, `callervote`. These work across a whole-binary batch only. Inferred global types do not persist for single-function runs. |
| Where callee prototypes come from | In order: the callee's own type, a type the user set on the call operand, the type of the data slot an indirect call goes through (IAT/GOT), and the callee's demangled C++ name parsed with `parse_decl`. | sub_FD810 (get_op_tinfo, get_first_dref_from, demangle_name, parse_decl) | YES mostly: `cppsig`, `importvote`, `calltargettype`, `fidproto`. |
| Call argument detection | Builds per-call info for every call block in reverse post-order, retrying from a worklist until nothing changes and relaxing strictness when stuck. Uses value numbering (sub_21C480) and save/restore analysis (sub_162A30). Automatic `__usercall` (non-standard register) prototypes are on for x86, ARM64 and MIPS (`DISABLE_USERCALL="X64,ARM,PPC,PPC64"` only disables them on the listed archs). Argument sizes are refined (`refine_input_argument_sizes`). | sub_10E880 (analyze_calls), sub_F2C20 (build_callinfo), sub_164BD0 | PARTIAL: `narrowargs`, `calleeargs`, `calleereginputs` (only ECX/EDX on x86-32), `spillargtrial`. No general non-standard register convention on every arch. |
| 64-bit values on 32-bit targets | Joins register pairs into one variable or argument (scattered/pair variables, `__SET_PAIR__`, `LODWORD`/`HIDWORD`). Rules `3CHECK64`, `CMP64-JMP2`, `JNZ64` and `UNSIGNED-CMP64` fold hi/lo compare chains. `straighten lvar pairs`. | sub_129630 (3CHECK64), sub_1F49A0, sub_282040, sub_4B56B0 | PARTIAL: `returnpair` and Ghidra's double-precision rules (`p5_types/double.rs`). Live unlace on i386 -O2: a `long long` parameter prints as two `unsigned int` parameters, `a<b` prints as an SBORROW4 chain, and `a<<n` prints as hand-written CONCAT44 code. |
| Variable allocation, merging and splitting | Builds def-use chains per storage location, widens narrow chains of the same location (fake chains created by `widen_chains`), marks pass-through and terminating chains, then gives each chain web a variable. Copy-related variables are merged automatically (`CVAR_AUTOMAP`, `CVAR_SHARED`). Users can map, unmap and split variables; a user split is stored (`LVINF_SPLIT`). | hexrays.hpp CHF_*/CVAR_* flags; sub_22E570 → sub_22B900 (allocation loop with restart); WARN_WIDEN_CHAINS (11) | PARTIAL: Ghidra Merge plus `regnarrow`, `regsigned` (off), `stackviews` (off). No persistent per-variable split, map or no-pointer setting (`LVINF_NOPTR`). |
| Narrowing 64-bit ops | `DEMOTE64` tracks, per block, registers whose high half is zero and lowers 64-bit operations to 32-bit ones. | sub_E1990 | YES ≈ `regnarrow` (on). Live: `sum()` still declares `long v3` with an `int v2 = v3` copy, so the loop counter stays wide. |
| Microcode rule families | Named rules: REMOVE_USELESS_JX, INVERT_JX_GOTO, SDIV/SMOD power-of-two, UMOD-30BIT, FLATTEN_JNS, CONVERT_IF_TO_SET (sub_18D990), RECOGNIZE_SETNZ/SETX (sub_18DE60), BACKPROP_CC. Also a pattern language (`pattern … transform … typereq … checker`), value-range optimizations (`OPT_VALRNG_JCND/AND/SWITCH_NCASES=32`) and assertion propagation (gen_jnz_assertions). | strings near 0x4dd3a5; hexrays.cfg | YES ≈ Ghidra rule set plus `condfold`, `iteboolean`. Value-range pruning: PARTIAL. |
| UNMERGE_CALLS / BREAK_PHI_ARM_MERGES | Duplicates a call block (or a join block that only merges one register) once per predecessor, before variables are allocated. This stops one variable from collecting unrelated values. | sub_191D80, sub_1915E0 | PARTIAL: `crossjumprevert`, `returndup`, `dedupitetail` work at the structure level. Nothing duplicates blocks before variable allocation in order to avoid merged variables. |
| Multiply-overflow guard | Folds the `count*size` overflow check before `operator new[]` into `saturated_mul`. | sub_18DC60 | YES: `satmul` (default off). |
| CONTAINING_RECORD | For `p - c` where `p` has type `T*` and the outer type is known (a user structure offset, or the recorded offset map at mba+1368), it searches the outer struct recursively for a member of type `T` at that offset and prints `CONTAINING_RECORD(p, Outer, path)`. It also folds the Windows list check (`RtlpCheckListEntry`). | sub_4AC0F0 → sub_4AB4F0, sub_4A3EA0; sub_4B56B0 | NONE (no container_of or CONTAINING_RECORD in unlace-decomp). |
| Inline memset/memcpy/strcpy and struct copy | Recognizes inlined helpers. A memcpy whose size equals the struct size becomes a typed assignment `a = b`, and back. | sub_4C9AD0, sub_4C8DE0/sub_4C8BB0 | PARTIAL: `repstring`, `copyrun`, `memsetrecover`, `strlenscan` print `builtin_memcpy`. None of them turns it into a struct assignment. |
| Atomic, bit-test and rotate intrinsics | A large x86 table maps `lock` instructions to `_Interlocked*`; also `_bittest*`, `_BitScan*`, popcnt/lzcnt, `__ROL4__`/`__ROR4__`, bswap. | sub_8AC80 (39 KB); strings | PARTIAL: `bitidioms` covers bswap and constant rotates. Live: `lock xadd` and `cmpxchg` print as `LOCK(); …; UNLOCK();`, and a rotate by a variable amount stays as shifts. |
| Naming | Names a local from the callee's parameter name when the local is passed as an argument, from the struct field it was read from, or names the callee's parameter from the caller's variable. It rejects generic names. Fallback from the type: `p_<Type>`, `str`, `wstr`, `ptr`, `chr`, `ok`. Limited by `MAX_NICE_NAME_LENGTH=42`. | sub_4CE070, sub_4CC7C0, sub_4CD780, sub_4CAE60, sub_4CA750 | PARTIAL: `libcnames` (libc tables only), `contextnames` (off, loop and result names). No names from arbitrary prototypes, fields or types. |
| Switch handling | `MERGE_GUARDED_SWITCHES`, `ABSORB_EQ_GUARD` and `MERGE_SWITCH_TREES` at the C-tree level; `RESOLVE_TABLE_JUMP`; jump tables of instructions. | sub_2F6EB0 | YES ≈ `switchguardmerge`, `switchsharedcase`, `loweredswitch`, `jumpassist`. |
| Outlined code | Merges outlined fragments back into the main function. | sub_209600, `MBA2_HAS_OUTLINES` | YES: `outlinedinline`. |
| Exceptions | Builds try blocks, finally blocks, MSVC `__wind` regions and SEH metadata (`TryBlockMapEntry`, `IPtoStateMap`, eh34); SjLj; `HO_KEEP_EH_CODE`. | sub_2FCD20, sub_2FB550, sub_2B79C0, sub_4D8360 | PARTIAL: `itaniumeh` (Itanium only). No MSVC C++ EH, no SEH `__try`. |
| Go runtime | `duffzero`/`duffcopy` become helpers, `gcWriteBarrier` is folded, `runtime.newobject`/`makechan` results get the RTYPE type. | sub_382C50, sub_37F7A0, sub_3837F0 | YES ≈ `gowritebarrier`, `gonewtype`, `gotypeglobals`. |
| Bitfields and C-tree cosmetics | `HO_BITFIELD_ACCESS` (`bf_` fields), sign-bit checks, enum constants (`AUTOCONV_TO_ENUM`), integer promotion fixes. | sub_40A380, sub_2D8BD0, sub_2EF2F0 | PARTIAL: DWARF bitfields only, as far as I could tell (not checked). No automatic enum conversion from TIL enums. |

#### hexarm, avxlifter, hexrv/hexmips/hexppc (from `hexarm-avx`)

| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| AArch64 LSE atomics and LL/SC loops | CAS, SWP, LDADD… and LDAR/STLR become C11 `atomic_*`; variables get `atomic_uintN` types. | hexarm sub_899B0 | NONE. Live: CAS prints as a plain compare-and-store. |
| NEON | A name table of about 250 entries builds `vaddq_u8`-style names. | hexarm sub_8C3F0 | NONE: 16 per-lane statements. `lanefuse`/`vectorabi` are x86 only. |
| ACLE (ARM32 and AArch64) | `__clz`, `__rbit`, `__ssat`, `__ldrex`, `__dmb`, `__disable_irq`, `__mcr`… | hexarm sub_8E980 | PARTIAL: `acleintrinsics` covers AArch64 barriers, hints and MTE only. |
| System call names | Takes the number from r7/x8/x16 and names it from the Linux or Darwin (including Mach traps) enum, then applies the libc prototype. | hexarm sub_99540, sub_990E0 | PARTIAL: `syscallregs` adds register effects only; `linuxsyscall` is x86 only. |
| AVX-512 | Handles EVEX, mask and zeroing-mask forms, compress/expand, gather/scatter, k-registers; about 400 intrinsic names; virtual ZMM registers. | avxlifter sub_89D0, sub_17A30, sub_35E30 | PARTIAL: `avxintrinsics` (~80 mnemonics). Wrong output seen for unnamed register reads in compares, a raw `CALLOTHER` for compress, and a gather that loses its base. |
| Windows-on-ARM `brk` codes, soft-float `__aeabi_*`, MIPS/PPC traps | Named helpers. | hexarm, hexmips, hexppc strings | PARTIAL: `arithhelpers` covers integer helpers only; `fastfailnoreturn` is x86 only. |

#### goomba (from `goomba-vs-mba`)

| feature | goomba | unlace `mba` / PR #1804 |
|---|---|---|
| Linear MBA | Truth table over up to 16 variables, Möbius inversion (sub_37D00) | YES, but at most 6 leaves (`MAX_LEAVES`, `mba.rs:47`). unlace's boolean synthesis for 4-6 variables is stronger than goomba's table, which covers at most 3. |
| Width changes and shifts | Accepted: emits zero-extend, sign-extend and truncate casts (sub_1ACE0) | NONE: every leaf must have the root's width (`mba.rs:678`). |
| Affine guess by emulation | Black-box evaluation finds c + Σaᵢxᵢ even for opaque subtrees (sub_1B360) | NONE |
| Oracle database | msynth corpus index (`MBA_ORACLE_PATH`, sub_40F80) | NONE |
| z3 proof | `MBA_Z3_TIMEOUT=1000` ms; accepts on timeout by default | NONE, by design: unlace's classes are exact. |
| Non-linear / polynomial | Normal form Σc·Π(terms) (sub_3C9C0) | YES: degree ≤ 4 |
| Opaque predicates | Only through comparison roots | `opaquepredicate`, stronger on low-bit cases such as x·(x+1) parity. |


### 3.2 Loaders and firmware: pe, elf, coff, dex, uefi_fv, cortex_m.py, svdimport, patfind, uefi, arm (non-Apple)


#### loaders/cortex_m.py + cortex_m.json
| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Vector-table probe | Word 0 is the stack pointer: 8-aligned and inside SRAM. The 15 system slots must be zero or odd pointers into Code, and must be zero where reserved. IRQ slots run until the first invalid word. | `VectorTable.probe` | **Present**, ported from it: `loader/firmware/cortexm.rs`, used by `unlace-cli/src/rawfront.rs` |
| Base-address vote | Scans the image for dummy-handler byte patterns (`bx lr`, `b .`, `nop; b .`, ...). Votes on `handler - pattern_offset`, 0x1000-aligned, needs at least 15 votes. Otherwise falls back to the reset handler's page. | `Application._probe_base_address`, `MIN_CONFIDENCE=15` | **Present**: `cortexm.rs` (`MIN_VOTES`, plus a common-flash-base fallback) |
| Handler functions and names | Creates a function at every non-zero vector, named `<Exception>_handler` or `IRQ_n_handler`. Marks the slots as offsets. | `load_file` | **Present**: rawfront `--define-function`; SVD gives `*_IRQHandler` names. ELF: `cortexmvectors` |
| Memory map | Adds an SRAM segment from 0x20000000 up to the initial SP, and a PPB segment at 0xE0000000. | `load_file` / `add_32bit_segm` | **PARTIAL**: on a raw image rawfront asserts `volatile` over 0x40000000 and 0xE0000000 (`DEVICE_REGIONS`). On an ELF there is no volatile marking at all (shown above). |
| Core-peripheral register names | About 1,900 named System Control Space registers in 29 blocks (NVIC, SCB, SysTick, MPU, SAU, DWT, ITM, FPB, FPU, cache maintenance, debug), with `NS_` names for the Non-secure SCS alias. Applied to every image the loader accepts. | `cortex_m.json` `components[]` | **NONE**. Only the 15 exception names exist (`cortexm.rs:41`). `0xE000ED0C` prints as `dat_e000ed0c`, not as the SCB AIRCR register. |

#### plugins/svdimport
| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Peripheral segments | One segment per peripheral, resized when peripherals overlap. | imports `add_segment_ex`; its log/UI strings  | **Present (raw only)**: rawfront asserts a `typedef struct` plus `data <base> struct` plus `volatile` per peripheral (`firmware/svd.rs`) |
| Register names and sizes | Names each register `PERIPH_REG` (its log/UI strings ) and creates a byte, word or dword item at its size. | `create_data`, `set_name`; its log/UI strings  | **Present (raw)**, as struct members instead of flat names |
| Field comments | Comments each register with its fields, bit offsets, widths, access and enum values. | its log/UI strings  | **NONE**: fields are not modelled, so a bitfield mask is never named |
| `derivedFrom`, `dim`, `cluster` | Resolved, including a circular `derivedFrom` check. | its log/UI strings  | **Present**: `svd.rs` |
| SVD library | Fetches SVD files from GitHub cmsis-svd trees and keeps a local index. | `http_get_file`, `/raw.githubusercontent.com/`, `codeViewTreeRoute` | NONE (not a decompiler concern) |
| Applies to any database | A plugin, so it works on an ELF too. | — | **GAP**: rawfront returns early for an object file before the SVD branch, so on an ELF `--svd` is silently ignored |

#### plugins/patfind
| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Ghidra pattern corpus plus extensions | Reads `cfg/ghidra_patterns/<P>/data/patterns/*.xml` plus `patternconstraints.xml`. Adds `endianness`, `itemsize`/`<item>` (byte-reversal), `alignment` and `<optional_post>`. Covers ARM, MIPS, PPC, SH4, V850. | `patfind.cfg`; the parser `sub_6350` | **PARTIAL**: `funcstart_patterns` is a faithful port of Ghidra's FunctionStartAnalyzer, but it has no `optional_post`, `alignment` or endianness reuse |
| Accepting a start | Multi-pattern `bin_search` for postpatterns. Then `optional_post` may move the start earlier. The prepattern must match before it. The address must be aligned, and either unexplored or code that belongs to no function. On a hit: set the Thumb register (`T`) if the pattern says `setcontext TMode`, then queue the address for code and function creation. No scoring. | `sub_9000`, around lines 780-798: `get_flags_ex & 0x600`, `get_func_num`, `split_sreg_range(T)`, `auto_mark_range(...,20)` and `(...,30)` | unlace's version is stricter (Ghidra's thresholds and validity checks) but is **off by default** (`funcstart_patterns off`). It is also never enabled for raw images, which is the only case where IDA runs it by default (`AUTO_RUN = 1`, binary-like files only) |

#### apple__arm (non-Apple parts: Thumb, firmware)
| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Switch-helper recognition | First looks the call target up by name in two tables (`ARM_switch8`, `___switch8/16/32`, `__rt_switch8`, `__gnu_thumb1_case_{uqi,sqi,uhi,shi,si}`). If unnamed, compares up to 16 code words (2 or 4 bytes each) against a stored body, tolerating swapped instructions 2 and 3. On a match it renames the helper, then builds the switch table at the caller. | `sub_8C410` → `sub_8C370` (name) and `sub_87DC0` (bytes); interr 10568/10569 | **PARTIAL**: `listing/thumbswitch.rs` and `poolextents.rs` recognise these helpers **by name only** (`RETURNS_PAST_TABLE`, line 107). On stripped Thumb-1 (Cortex-M0) firmware the helper is unnamed, so every such switch is lost |
| `tbb`/`tbh` tables | `check_for_table_jump`, `create_switch_table` | imports | **Present**: `thumbswitch.rs`, `switchtable.rs`, A32: `a32switch.rs` |
| Indirect `blx Rn` / `bx Rn` | A register tracker resolves the set of possible targets. IDA adds a code reference to each, marks the call no-return if the target never returns, and applies the target's type when all targets share one. | `sub_33700` → `sub_2B040` (`func_does_return`, `set_noret_insn`, `auto_apply_type`) | **PARTIAL**: `listing/regcarry.rs` and `ptrentry` find targets. I did not check whether no-return is propagated through a register call |
| BL used as a far jump | Detects Thumb `BL` used as a long jump inside a function; user overrides exist. | its log/UI strings  | Not found under that name. Closest are `tailcallentry` and `funcboundflow` (unverified) |
| Automatic ARM/Thumb switching | On by default, can be turned off. | `analysis.no_automatic_THUMB_switch`, `ARM_NO_ARM_THUMB_SWITCH` | **Present**: `armwalkmode` (on), `flowmode` (off), `armfuncmode.rs` |

#### loaders/pe
| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Load Config: CFG function table | Reads the table (RVA records, stride 4 plus the extra-byte count in the top nibble of `GuardFlags`). Each entry becomes a code start and a function start. | `sub_18EE0` calls the table walker `sub_8540` for the guard function table (record stride from the GuardFlags top nibble), queuing each entry as code and as a function start | **NONE**: no `GuardCF` anywhere in unlace. In a /guard:cf binary this table lists every address-taken function. |
| Load Config: named pointers | Names `__security_cookie`, `__guard_check_icall_fptr`, `__guard_dispatch_icall_fptr`, the XFG variants, `__guard_memcpy_fptr` and others. Recognises the do-nothing check/dispatch stubs by their bytes (`ret`, `jmp rax`) and names them. | `sub_18EE0` (lines ~296-480), `sub_7950` | **NONE**. unlace finds the cookie by its arithmetic (`p7_regions/msvcstackguard.rs`). Unchecked: whether a CFG call through `__guard_dispatch_icall_fptr` (target in RAX) decompiles as an indirect call |
| SafeSEH, EH-continuation and longjmp tables | `SEHandlerTable`/`Count`, `GuardEHContinuationTable`, `GuardLongJumpTargetTable` are each walked the same way (`sub_8540`). | strings; `sub_18EE0` | **NONE** |
| TLS callbacks | Named `TlsCallback_<n>` and made functions. | `sub_B130`, `sub_B6E0` | **Present**: `analyzers/entry/pe_entry.rs`, oracle 3 |
| `.pdata` | Function starts and extents. | — | **Present**: `pe_entry.rs` oracle 2 (chain-info aware); `pdatainterior.rs` |
| Delay-load imports | Walks the delay-load descriptors and their IAT, INT and bound tables, and names the slots. | its log/UI strings  | **NONE**: `loader/pe_iat.rs` reads only the regular IAT. Calls through a delay slot stay as `(*dat_)()` |
| Ordinals, forwarders | `set_import_ordinal`, `set_entry_forwarder` | imports | **Present**: `loader/peordinal.rs` |
| Dynamic value relocations, CHPE (ARM64EC/ARM64X) | Parsed and named. | `DynamicValueRelocTable`, `___chpe_metadata` | **NONE** |
| .NET (CLR) | Detects the CLR header and loads the metadata. | `Bad .NET header`, `Microsoft.Net assembly` | NONE (out of scope) |
| Debug directory, overlay, Rich header | Parsed (CodeView, POGO, REPRO, ...). | strings | PDB path: **Present** (`pdb`) |

#### plugins/uefi + loaders/uefi_fv
| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Entry prototype, GUID naming, static service tables | Done at load time. | `uefi.cfg` | **Present**: `uefi` (`analyzers/uefi/`) |
| `gBS`/`gST`/`gRT` | Follows stores up to `UEFI_MAX_DEPTH=4` calls from the entry, and also infers a table pointer from the call offsets used through an untyped global (`UEFI_INFER_TABLES`). | its log/UI strings  | **PARTIAL**: `storetype=uefi` follows stores across the batch, but has no inference from call usage |
| Protocol and PPI interface typing | For `LocateProtocol`, `HandleProtocol`, `OpenProtocol`, `LocatePpi` and the SMM/MM variants, the GUID's name gives the protocol type, which is applied to the output pointer. Uses `uefi.til`/`uefi64.til` and `uefi_guids.json`. | `UEFI_TYPE_PROTOCOLS`; its log/UI strings  | **NONE**: `types.rs` defines only the text-console protocols, so every other interface is `VOID*` |
| Installed interfaces | `Install*ProtocolInterface` and `InstallPpi`: types the installed structure and marks the functions it points to as implementations. Synthesizes a structure when the GUID is unknown. Adds cross-module references from protocol calls to the implementations. | its log/UI strings  | **NONE** |
| PEI and SMM | PPI descriptor lists, notify descriptors, `EFI_MM_SYSTEM_TABLE`, the getter for the PEI services pointer. | strings | **PARTIAL**: only the getter and `PEI SERV` |
| Inline-string constness, DebugPrint/DebugAssert prototypes | Applied. | `UEFI_CONST_STRINGS`; prototype strings | NONE (minor) |
| Whole firmware volume in one database | Each module is relocated (`Relocated from`) and typed by kind: PEIM, DxeMain, StandaloneMm, ModuleEntryPoint. Capsule formats: UEFI, AMI, Toshiba; Intel flash descriptor. | `uefi_fv.so` strings | **PARTIAL**: `firmware/uefifv.rs` plus `unlace unpack` extract the modules, but each is decompiled alone, with no PEIM or MM entry prototype and no cross-module links |

#### loaders/elf, coff, dex (lower priority, mostly covered)
| feature | evidence | unlace |
|---|---|---|
| Relocations for about 40 architectures (AArch64 209 names, SH 165, NDS32 153, PPC 151, ARM 149, ...) | `elf.so` `R_*` strings | **Present** for x86/ARM/AArch64/MIPS/PPC/PPC64/RISC-V/SPARC/390: `loader/reloc_apply.rs`, `reloc_object.rs`. Missing SH, Xtensa, TriCore, V850 (minor) |
| Android packed relocations and RELR | `.android.rel(a).dyn`, `DT_RELR` | **Present**: `loader/unlace_dynrelocs` |
| Rewriting the PIC GOT form (`name@GOT[ebx]`) to a plain offset | strings | Partly: `importdata`, `relronoreturn` |
| ARM build attributes (`aeabi`) | `ARM_ATTRIBUTES` | **Present**: `armfloatabi.rs` |
| Linux kernel module loading | `mimic the Linux kernel loader` | Partial: the `ET_REL` relocation engine |
| COFF: TI TMS320, ECOFF, XCOFF, bigobj | `coff.so` | **PARTIAL**: `format/coff.rs` |
| DEX: multidex APK, OAT/VDEX, cross-file method links, override references | `dex.so`, `dex.cfg` `OVERRIDE_XREFS_APP_ONLY` | APK multidex **Present** (`loadimage_dex.rs`); OAT/VDEX and override references NONE |


### 3.3 C++, exceptions, debug info and languages: rtti, pdb, eh34, eh_parse, dwarf, golang, rust, x86 pc, small plugins


#### plugins__rtti (MSVC RTTI and throw info)
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| MSVC RTTI0–4 markup and naming | Walks back from each Complete Object Locator to its vftable. It adds comments on every TD/COL/CHD/BCA/BCD field, names `??_R0..R4` and `??_7..6B@`, and qualifies the name with the base class under multiple inheritance. | rtti sub_7EC0 (its log/UI strings ), 0x8780, 0xD7A0, 0x6E20 | `rtti` (`analyzers/rtti/mod.rs`, `vftable.rs`): names TD, COL and vftable, slots become `vfunc_i` |
| Base-class displacement rendering | Prints each base as `class X /* mdisp pdisp vdisp */` and `offset to this` / `offset vbase` | 0x5C10, 0xEAF0 | PARTIAL: the BCD chain is validated but not turned into a class layout |
| Throw info | Names `__TI%u`, `__CTA%u` and `__CT…`, types the catchable-type array, the destructor and the copy constructor, and declares the CT_/TI_ flag bitmask enums through `parse_decls` | 0x9B90, 0x123A0 | NONE (no ThrowInfo anywhere in the tree) |
| Class/vtable struct types | rtti.so creates none. That work is done in libida (see C++ row below) | imports: only `demangle_name`, `get_named_type_tid`, `set_name` | — |

#### C++ class typing (x86__pc, libida, hexx64)
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| vftable extent from a demangled name | A rename hook demangles each new name. If it ends in ``::`vftable'``, IDA marks the following pointer-size words as code offsets until the first non-code word, after analysis finishes | x86__pc sub_26D60 → sub_27340 → sub_26350 | `vftable.rs` walk_vftable (null / non-.text bound): parity |
| Class model `X` with `__vftable` → `X_vtbl` | The type system stores a vftable ordinal per class. Struct `X_vtbl` and `X_vtbl_layout` hold typed function-pointer slots | libida 0x77F120 (builds `<Class>_vtbl` and `<Class>_vtbl_layout` names), 0x650DB0 (`__vftable`), APIs `get_vftable_ea`, `set_vftable_ea` | Itanium only: `vtabletypes` (`rtti/vtabletypes.rs`). MSVC: NONE |
| Back-propagation from vtable type to object type | In Hex-Rays, when a loaded value's type is a struct named `X_vtbl`, it strips `_vtbl`, looks up `X`, and retypes the base object variable as `X`. A typed vtable read then types `this` / the receiver | hexx64 sub_4311A0 | NONE as a general rule. unlace goes the other way (from a known receiver to its slot) |
| PDB-derived vftable types | Merges each class's LF_METHOD list into `X_vtbl` by vtable offset, preferring a real name over `__vecDelDtor` | pdb sub_34C10 (log line about creating virtual function tables), sub_34510 | NONE |

#### plugins__pdb
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| Own PDB reader plus an MSDIA fallback | Parses the TPI, IPI, DBI and /NAMES streams. Provider is chosen by `PDB_PROVIDER` in pdb.cfg | 0x5B9E0, 0x554D0, 0x5A1B0, 0x59660, 0x40850 | `pdb` (`analyzers/pdb/`): public and procedure names, function extents (`pdbinterior.rs`) |
| Symbol server | Reads the RSDS GUID and age from the debug directory, parses `_NT_SYMBOL_PATH` `srv*cache*http`, downloads into the cache (two-tier layout), and checks signature and age | 0x76EA0, 0x77DD0, 0x78830, 0x417D0 (msdl default) | NONE (no http or symbol-path code in pdb/) |
| Types into the type library | Every LF_ leaf becomes a type, including unions, enums, bitfields, member alignment, forward references, base classes and anonymous types | 0x6F920, 0x6D4A0, 0x66A10, 0x45F20, 0x57040 | NONE |
| Function prototypes | `apply_tinfo` with the PDB function type and a `this` parameter name | 0x50C20, 0x628F0 | NONE |
| Locals | sub_4F240 handles two location kinds. Register-relative: offset rebased by whether the base register is the frame or the stack pointer, then `define_stkvar_ea` with the PDB type. Enregistered: `add_func_regvar` over the whole function | 0x4F240 | NONE |
| Line numbers | `sip_retrieve_lines_by_va`, `iterate_file_compilands` | 0x52300, 0x52FB8 | NONE |
| Other symbol kinds | Inline sites, thunks, COFF groups and COFF symbols are enumerated | 0x70FD0, 0x7CBD0 | NONE |

#### plugins__eh34 (Hex-Rays MSVC C++ EH, x64)
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| FuncInfo parsing | Accepts magic 0x19930520..22 (masked with 0x1FFFFFFF). Reads the unwind map, try map, handler array and IP-to-state map | sub_3F6E0 | NONE |
| FH4 (`__CxxFrameHandler4`) | Decodes the compressed unwind-map and state entries (`eh4_unwind_map_entry_t`) | sub_3CB60 | NONE |
| x64 UNWIND_INFO | Decodes UWOP codes, epilog split addresses, and a RUNTIME_FUNCTION lookup cache | sub_51140, 0x22E00, 0x1C9A0 | PARTIAL: `entry/unwindinfo.rs` / `pdatainterior.rs` use it only for extents, not states |
| Catch funclets inlined into the parent | Copies the separately compiled catch blocks into the parent function's microcode as try/catch bodies | 0x16560, 0x19200 | NONE (funclets stay separate functions) |
| State machine to structured try/catch | Computes states, finds state transitions by walking the state tree, builds wind/unwind scaffolding blocks, pairs ascend/descend transitions, and scores splits. Output is structured or unstructured (`OUTPUT_TYPE` in eh34.cfg), with `SHOW_WIND_STATES` and a warning for hidden states | 0x421A0, 0x42980, `find_ascend_descend_pairs`, `test_split_range` | NONE |
| `throw` rendering | A call to `[_]CxxThrowException` with a ThrowInfo first argument becomes a throw helper, and the catch object becomes a `caught_obj` helper | sub_39140, 0x6C830 | NONE |

#### plugins__eh_parse (EH markup and types, all ABIs)
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| MSVC FuncInfo structs for every magic/variant | x86 (EHContextDelta), x64 (dispUnwindHelp), ESTypeList, bbtFlags; plus TryBlockMap, HandlerType, UnwindMap and IPtoState | string table 0x2BFA0–0x2CF30 | NONE |
| x86 SEH4 scope table | `_EH4_SCOPETABLE` (GS and EH cookie offsets; per record EnclosingLevel, Filter, Handler) | 0x2D140 | NONE |
| `.pdata` creates functions | x64, ARM, ARM64, WinCE and SH. Skips entries with bad unwind data | sub_1CDB0 | PARTIAL: `pdatainterior` |
| C scope table (`__C_specific_handler`) | Begin/End/Handler/Target records | 0x2CA28 | NONE |
| GCC `.eh_frame` and LSDA | Classifies the personality routine (gxx, gcc, rust, objc, gnat, seh0) and types `__cxa_*` and `_Unwind_*` | 0xAB60, 0x9D60 | `itaniumeh` (`entry/itaniumeh.rs` and `p2_lift/itaniumeh.rs`), `eh_frame_full` (off) |
| ARM EHABI `.ARM.exidx` | Handles the `__aeabi_unwind_cpp_pr0/1/2` personality routines | 0xDF10 | NONE (only mentioned in `fdeinterior.rs:49`) |
| SjLj | `SjLj_Function_Context` struct and `_Unwind_SjLj_Register` | 0xF350 | PARTIAL: name only, in `entry/mod.rs` |

#### plugins__dwarf
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| Location-list register variables | Each loclist range `[lo,hi)` with a DW_OP_reg becomes a typed register variable via `add_func_regvar` | sub_83140 | NONE: `dwarf/dwarflocation.rs` accepts only `fbreg` and `plus_uconst` |
| Stack variables | `define_stkvar_ea` | 0x86460 | `dwarfscopes` (fbreg only, including inlined and lexical scopes) |
| Calling convention from parameter locations | Derives a usercall convention from where parameters live (`DWARF_CC_ALLOW_USERCALL`), creates tuple types for multi-register returns, and trusts prototypes when `FPROTS_ARE_DEFINITIVE` is set | 0x93860, 0x90560 | PARTIAL: `dwarf/cppproto.rs`, `callwide.rs` |
| Source lines | `set_source_linnum` (`DWARF_IMPORT_LNNUMS`) | 0x186C0 | `dwarf_lines` (off) |
| Separate debug files | Finds debug files by build-id or `.gnu_debuglink`; reads DWZ `.gnu_debugaltlink` and `.debug_addr`/`addrx` | 0x25020, 0x2B100 | PARTIAL: `debuglink` loads names only (`loader/elf_debuglink.rs`), not types; no DWZ |
| Lazy types, unit filter, GCC typedef fix | `DWARF_LAZY_TYPES`, CU filter, `UNQUALIFY_BROKEN_GCC_TYPEDEFS` | dwarf.cfg | `dwarfglobaltypes` (off) |

#### plugins__golang
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| pclntab and moduledata | Section-name search plus a byte search action | 0xC0C0, 0xC550, 0xF0F0 | `pclntab/gomoduledata.rs`: parity |
| rtype → types | Builds type names for maps and functions, gives anonymous names over 42 characters an MD5 name, applies the type to the descriptor, and groups types into folders per package | 0x15F80, 0x143E0 | `gotypes/`, `gotypeglobals`, `gonewtype` |
| itab → `iface.I.T` struct | Creates a struct with `tab` (typed method function pointers) and `data`, so interface calls show method names | sub_17960 | PARTIAL: `gotypes/itabs.rs` names itabs only. Its header says method resolution is deliberately out of scope |
| Calling conventions | `go_std`, ABI0, abi-internal, and a `force_regabi` setting | 0x6B20 | `goabi`, `godwarfsig` |
| Function end from pcvalue tables | `FUNC_END_FROM_PCVAL_TABS` | 0x23950 | `fdeflowbound` (functab only) |
| FUNCDATA markup | GCArgs/Locals, StackObjects, InlTree, OpenCodedDeferInfo, ArgInfo, ArgLiveInfo, WrapInfo | sub_22C80 | NONE (InlTree and ArgInfo unused) |
| Go source lines | `GOLANG_IMPORT_LNNUMS` | golang.cfg | NONE |

#### plugins__rust
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| rustc version | Reads the `/rustc/<commit>/` path and looks the commit up in a version table | 0xB7E0 | `sourcelang/rustversion.rs` + `rustreleases.rs`: parity |
| Crate list | `.cargo/registry/src` and `/vendor/` paths | 0x70A0 | `rustcrates.rs`: parity |
| Splitting string literals | Splits each string run at the next referenced address. A length is accepted when every (ptr,len) descriptor that references it agrees on it, with code references as fallback (`RTUNE_UNREF_DESC`) | 0xA8D0 → 0x6E60 → 0x68B0 | `strcodelen`, `fatstr`: parity |
| `RustStrSlice` and `core::panic::Location` types | Declares both types | 0xB7E0 | `panicloc`, `rustabi`, `rustfmt`: unlace is ahead (also format machinery, `cleanupcode`) |

#### x86__pc (processor module)
| feature | how IDA does it | evidence | unlace |
|---|---|---|---|
| SP analysis by linear programming | Collects SP-delta constraints over the function, including try-block handler entries, and solves them with the simplex method | sub_7B800 | PARTIAL: `stackexitanchor`, `calleeretpurge`, `calleeargs` (no global solver) |
| x86 SEH frames | Recognises `SEH_prolog`/`epilog`, declares a `CPPEH_RECORD ms_exc` frame struct and `_EH4_SCOPETABLE`, extends the function over its `__except` blocks (`expand_func_seh`), and builds FILTER/HANDLER/FINALLY try blocks | 0x34230, 0x2A960, 0x2B2A0, 0x2DA10, 0x6D2B0 | PARTIAL: only the stack effect in `p4_calls/calleepurge.rs`; no ms_exc struct or handler blocks |
| `/GS` cookie names | Names `security_cookie`, `check_cookie` and `init_cookie` | 0x5B340, 0x51B20, 0x62400 | `msvcstackguard` (strips the cookie code) |
| Stack probes, PIC thunks, retpolines, Go morestack | `alloca_probe`/`chkstk_ms`/`chkstk_darwin`, `get_pc_thunk`, `x86_return_thunk`/`indirect_thunk`, `runtime.morestack` | 0x23D50, 0x2AF40, 0x35930, 0x38080 | `alloca`, `listing/picbase.rs`, `retpolinethunk`, `gomorestack`: parity |
| `_RTC_Check_x_to_y` prototypes | Typed scalar prototypes for MSVC runtime-check helpers | 0x26D60 | NONE (minor) |
| FLIRT signatures for SEH helpers | `vcseh.sig`, `vc64seh.sig` | 0x98900 | `flirt` (off) |

#### Small plugins
| module | feature | evidence | unlace |
|---|---|---|---|
| callee | Manual "set callee of `call esi`" action | 0x1390 | not needed (manual UI) |
| comhelper | On a PE that imports `CoCreateInstance`: formats each 16-byte GUID, looks it up in `clsid.cfg` and the type libraries, names it `IID_`/`CLSID_`, and imports the matching interface `Vtbl` type | 0x3280, 0x46F0 | NONE |
| bdescr | Borland RTTI descriptors (manual action) | 0x3610 | NONE (low value) |
| dku | DriverKit (Apple, out of scope). Shows IDA's vtable naming (`<Class>_vtbl`, `vf<offset>`, `dtr_<Class>` names) | 0xC8C0 | — |
| makesig | Makes pat/sig files from a linked database: masks fixups (`IDA_SIGMAKE_NOMASK`), skips `.cold`, `??_C@`, `??_R`, `__real@` | 0xA870, 0x9320 | PARTIAL: `flirt/flirtpat.rs` (relocatable objects only), `fid/build.rs` (linked images) |
| tds / makeidt | Borland TDS debug info; `.idt` ordinal tables from DLLs | strings only | NONE (low value) |


## 4. IDA core (libida, cfg, shipped data)

Read from `core__libida.sqlite` strings, `cfg/ida.cfg`, `cfg/noret.cfg`, `cfg/goodname.cfg`, the TIL export
`~/SiteResearch/ida-pro/ida-9.5-tils.sqlite`, `sig/` and `plugins/ida_feeds/`.

| feature | how IDA does it | evidence | unlace equivalent |
|---|---|---|---|
| Type libraries | 154 TIL files: Windows SDK per version (mssdk_win10: 221,872 symbols, 91,863 types), DDK/WDK, NT native API, VC runtimes, GNU unix (gnuunx64: 44,787 symbols, 13,371 types), GNU Linux per arch, Android, macOS/iOS SDKs, XNU, DriverKit, UEFI (uefi64: 13,573 symbols). Chosen by compiler/OS and applied by name to imports and FLIRT hits. | `ida-9.5-tils.sqlite` `tils` table | PARTIAL: hand tables `protos/libcsigs.rs` (~685 sigs), `win32sigs.rs` (~180), `libctypes` (23 aggregates; field layouts for 9, x86-64 glibc only), `swiftrt` (~180), `uefi/types.rs`, `objcsdk` (runtime ObjC header reader). No general archive. |
| Header parsing | libida embeds clang (`TYPE_PARSER = "clang"`, `CC_PARMS` header paths); headers become local types | ida.cfg; clang strings in libida | NONE beyond `objcsdk`'s declaration subset |
| Lumina | Hash-keyed function metadata server (names, prototypes, comments), applied automatically when `AutoUseLumina` | libida its log/UI strings  | NONE (FID with a user `.fid` db is the nearest; Lumina itself is a proprietary service) |
| FLIRT auto-selection | `sig/<proc>/autoload.cfg` maps a startup-code signature to library signature sets; 172 x86 sigs, 24 ARM sigs (glibc_arm64, android_arm, vc64*), Go std sigs per ABI | `sig/` tree | PARTIAL: `flirt` reads `.sig` (off; `UNLACE_FLIRT_SIGS`), no autoload rules, no shipped sigs (cannot ship IDA's) |
| Rust std signatures on demand | `ida_feeds` builds FLIRT sigs for the detected rustc version from crate git tags | `plugins/ida_feeds/feeds/rust/*`, `rust-git-tags.json` | PARTIAL: `flirt/rustprofiles.rs`, `fid build` |
| Analysis flags | Function tails (`AF_FTAIL`), propagate stack/register argument info into callers (`AF_STKARG/REGARG`), guess function types, `j_` jump-function and `nullsub_` renames, hide outlined functions, merge string literals, instruction macros, register-value tracker (`REGTRACK_*`, NUMLOOP on ARM/MIPS/RISC-V) | ida.cfg AF_*/AF2_*; libida `analysis.*` keys | YES or PARTIAL: `funcchunks` (off), `calleevote`/`callervote`/`protoorder`, `nameladder` (reads `j_`), `outlinedinline`, `listing/regcarry.rs`. No `j_`/`nullsub_` naming of stubs on arm64 (also gap 11 of the Apple notes). |
| No-return names | `noret.cfg`, about 198 names | cfg | unlace `unlace-analysis/data/*FunctionsThatDoNotReturn` (~511 names). Missing from unlace: MSVC `__report_gsfailure`, `__report_securityfailure(Ex)`, `std::_Xlength_error`; MFC `AfxThrow*Exception` (6); `_com_issue_error`, `_com_raise_error`; VB6 `__vba*` (7); `KeBugCheck2`, `HalReturnToFirmware`; `_Unwind_SjLj_Resume*`, `__cxa_call_terminate`, `__cxa_end_cleanup`; `std::__throw_bad_cast/bad_function_call/bad_weak_ptr/system_error`; newlib `__assert_func` (firmware); `__android_log_assert`; `Py_FatalError`; Rust `panic_const_*` (10), `__rust_alloc_error_handler`, `__rdl_alloc_error_handler`; Go `runtime.goexit`, `runtime.morestackc`, `runtime.dieFromException`. (The ARM `__gnu_thumb1_case_*`/`switch8` entries are covered by ARM.cspec callfixups.) Size S. |
| Demangled-name simplification | `goodname.cfg`: 32 ordered PCRE rewrite rules (drop `__cxx11`/`__1`/`__ndk1` inline namespaces, collapse default template arguments, `basic_string<char>` -> `string`, streams, allocators) | cfg | NONE (`analyzers/demangle/` has no rewrite step) |

## 5. Further gaps (ranked after the top 15)

| gap | evidence | owner | size |
|---|---|---|---|
| NEON and ACLE naming / lane fusion on ARM (`vaddq_u8`, `__clz`, `__ldrex`, `__disable_irq`, ...) | hexarm sub_8C3F0 (~250-entry name table), sub_8E980 | P2 `unlace_lanefuse` / P9 `unlace_acleintrinsics` (today AArch64 barriers/MTE only) | L |
| ARM EHABI `.ARM.exidx` and SjLj contexts for extents and landing pads | eh_parse 0xDF10, 0xF350 | `entry/` (`itaniumeh`, `fdeinterior`) | M |
| PDB symbol-server download (if split from gap 5) | pdb 0x76EA0, 0x78830 | `pdb/` or unlace-cli | S-M |
| x86 SEH frame struct `ms_exc` / `_EH4_SCOPETABLE`, handler blocks attached to the parent | x86 pc 0x34230, 0x2A960, 0x2DA10 | `entry/` + P2 | M |
| Persistent global/member type write-back for single-function runs (Hex-Rays stores inferred global and member types into the database after each decompile) | hexx64 sub_2CE460, sub_257150 | P5 `storetype` (default `uefi` only) | M |
| MBA: leaves of other widths and shifts (zext/sext/trunc), affine guess by evaluation, optional oracle db | goomba sub_1ACE0, sub_1B360, sub_40F80; unlace `p3_dataflow/mba.rs:678` requires equal widths, `MAX_LEAVES` 6 | P3 `mba` | M |
| `CONTAINING_RECORD`/`container_of` and the Windows list-entry check | hexx64 sub_4AC0F0, sub_4A3EA0 | P5 | S-M |
| Struct-sized copy as a typed assignment; `saturated_mul`; rotate by a variable amount; `_bittest*` | hexx64 sub_4C8DE0, sub_18DC60 | P3 `bitidioms`, `copyrun` | S |
| AVX-512 coverage (~400 intrinsics, masks, compress/expand, gather/scatter); system-call names on ARM/AArch64/MIPS/PPC | avxlifter sub_17A30; hexarm sub_99540 | P9 `avxintrinsics`, P2 `syscallregs` | M / S |
| Go FUNCDATA (InlTree names inlined callees, ArgInfo stack layout) and Go line numbers | golang sub_22C80 | `pclntab/` | M |
| DWARF types from build-id / debuglink companions and DWZ `.gnu_debugaltlink` (unlace reads names only) | dwarf 0x25020, 0x2B100 | `loader/elf_debuglink.rs` + `dwarf/` | M |
| Global SP solver (simplex over SP constraints incl. handler entries) for unknown callee purge | x86 pc sub_7B800 | P4 `calleepurge.rs` | M-L |
| COM GUID naming (`IID_`/`CLSID_`) and interface vtables for `CoCreateInstance` out-params | comhelper sub_3280, 0x46F0 | new analyzer, runtime GUID/type input | M |
| `funcstart_patterns` on by default for `--raw-image`, plus patfind's `optional_post`, alignment and endianness extensions | patfind.cfg `AUTO_RUN`, sub_9000 | P1 `funcstart_patterns` | S |
| UEFI firmware volume: PEIM/DxeMain/StandaloneMm entry prototypes by FFS type, cross-module protocol links | uefi_fv.so strings | unlace-cli unpack + `analyzers/uefi` | M |
| SVD field bit names/enums | svdimport field strings | `firmware/svd.rs` + P9 | M |
| Throw-info markup for MSVC (`__TI`, `__CTA`, `__CT`) | rtti.so 0x9B90, 0x123A0 | `rtti/` | S |
| Non-standard register conventions on every arch (Hex-Rays automatic `__usercall` on x86/ARM64/MIPS) | hexx64 sub_10E880, sub_F2C20; hexrays.cfg `DISABLE_USERCALL` | P4 (`calleereginputs` is x86-32 ECX/EDX only) | M |

## 6. Where unlace is at parity or ahead (not gaps)

- Rust: rustc version and crate detection, string-literal splitting, panic `Location`, plus unlace-only format-machinery and cleanup folding (`rustfmt`, `panicloc`, `cleanupcode`).
- Go core: moduledata/pclntab, `_type` globals, ABI selection, morestack and write-barrier folds, typed `newobject`.
- Itanium RTTI and vtable typing (`itaniumrtti`, `vtabletypes`), arm64e vcall by discriminator: IDA's rtti.so is MSVC-only.
- `/GS` and stack-protector stripping, retpolines, stack probes, PIC thunks, outlined-function inlining, switch guard merging.
- Cortex-M vector-table probe and base-address vote for raw images (ported from cortex_m.py), SVD on raw images incl. `derivedFrom`/`dim`/`cluster`.
- MBA: unlace's boolean synthesis for 4-6 variables and its opaque-predicate folds are stronger than goomba's 3-variable table; unlace's classes are exact where goomba accepts on a z3 timeout.
- No-return name coverage overall (~511 names vs IDA's ~198), embedded image/archive detection (`blobs`, vs IDA's GUI-only picture_search).
- DecBench type match: unlace leads all five decompilers on perfect functions and on `ptr_struct` (4.1% vs IDA ~2.4%, `docs/decbench/typecampaign/results.md`).

## 7. Per-area ranked lists (as returned by each area's survey)

### Hex-Rays core

1. **Full type libraries plus struct-typed library prototypes.** IDA's named struct pointers on PE, drivers, Android and UEFI mostly come from the shipped TILs applied through prototypes. unlace's `win32sigs` uses `void *` for every handle or struct, and `libctypes` field layouts are x86-64 glibc only.
   - Impact: DecBench type match (named struct pointers, the top miss); Windows/PE; ARM firmware SDKs.
   - Evidence: the `til/` directory; get_named_type callers (sub_414DD0, sub_7C540); win32sigs.rs header.
   - Owner: `unlace-analysis/src/analyzers/protos/`. A runtime type-archive input, like `objcsdk`, built from user-supplied headers (vendoring SDK-derived tables is not allowed). Shipped as an option. Size L.
2. **64-bit register pairs on 32-bit targets.** Join split `long long` parameters and variables, fold hi/lo compare chains (3CHECK64/CMP64) and pair shifts.
   - Impact: i386 PE, ARM32 firmware. Live: the SBORROW4 chain and two-word parameters.
   - Evidence: sub_129630, sub_1F49A0, sub_282040.
   - Owner: unlace-decomp `p4_calls` (pair parameters) plus `p5_types/double.rs`. The compare-chain fold is a correctness fix; pair-joining for parameters should be an option. Size M.
3. **Atomic idioms (x86 `lock`, AArch64 LSE and LL/SC, RISC-V AMO).**
   - Impact: kernels, C++ `shared_ptr`, Rust `Arc`. Today's output (`LOCK();` …, plain compare-and-store) misstates the meaning.
   - Evidence: sub_8AC80; hexarm sub_899B0; live `inc`/`cas`.
   - Owner: new `p3_dataflow/atomics.rs`. Naming the fixed instruction forms is a fix; folding LL/SC loops is an option. Size M.
4. **Database-level global and member type inference that persists.**
   - Impact: type match in single-function runs and in the Ghidra/IDE front-ends.
   - Evidence: sub_2CE460 (apply_tinfo to a global or member found by `udm_by_tid`), sub_257150.
   - Owner: make `storetype` default-on beyond UEFI, and add member typing; `p5_types`. Option refinement. Size M.
5. **Names from prototypes, fields and types.** Take names from any declared callee parameter (DWARF, `cppsig`, Win32) and from field names, push names back to callee parameters, and use type-based fallbacks (`p_<Type>`, `str`).
   - Impact: readability and benchmarks that score names.
   - Evidence: sub_4CE070, sub_4CC7C0, sub_4CD780, sub_4CA750.
   - Owner: `p6_variables`. Extend `libcnames` (on) and `contextnames` (off). Size S-M.
6. **NEON and ACLE naming, lane fusion on ARM.**
   - Impact: ARM firmware, Android NDK, codecs.
   - Evidence: hexarm sub_8C3F0, sub_8E980.
   - Owner: `p2_lift/lanefuse.rs`, `p4_calls/vectorabi.rs`, `p9_emit/acleintrinsics.rs`. Option. Size L.
7. **Duplicating blocks before variable allocation to avoid merged variables (UNMERGE_CALLS / BREAK_PHI_ARM_MERGES).**
   - Impact: DecBench merged variables, GED.
   - Evidence: sub_191D80, sub_1915E0.
   - Owner: unlace-decomp `p3_dataflow` (before Merge). Option. Size M.
8. **MSVC C++ EH and SEH try/except/finally.**
   - Impact: Windows/PE C++.
   - Evidence: sub_2FCD20, sub_2FB550, sub_2B79C0, sub_4D8360.
   - Owner: `unlace-analysis` (parse the EH metadata) plus `p8_structure`. Option. Size L.
9. **MBA: width changes and shifts, plus an affine guess by emulation.**
   - Impact: OLLVM/Tigress obfuscation.
   - Evidence: goomba sub_1ACE0, sub_1B360.
   - Owner: `p3_dataflow/mba.rs`. Width support is a fix; the emulation guess goes behind `mba affine`. Size M.
10. **CONTAINING_RECORD / container_of plus the list-entry idiom.**
    - Impact: Windows drivers, the Linux kernel.
    - Evidence: sub_4AC0F0, sub_4A3EA0.
    - Owner: `p5_types` (needs an outer-type hint from `structsynth` or the user). Option. Size S-M.
11. **Typed struct assignment from a struct-sized copy, `saturated_mul`, rotates by a variable amount, `_bittest`.**
    - Evidence: sub_4C8DE0, sub_18DC60; live `rot`.
    - Owner: `p3_dataflow/bitidioms.rs` and `unlace_copyrun`. Fixes. Size S.
12. **AVX-512 coverage and correctness, plus system-call names on non-x86 targets.**
    - Evidence: avxlifter sub_17A30; hexarm sub_99540.
    - Owner: `substrate/avxintrin.rs`, `p2_lift/syscallregs.rs`. Size M, S.


### Loaders and firmware

1. **Peripheral memory is not volatile on Cortex-M ELF images.** Writes to device registers are deleted and polling loops come out wrong.
   - Impact: ARM firmware on DecBench (cleanflight, betaflight, libopencm3, crazyflie, chibios, nuttx are all ELF), both GED and fidelity.
   - Evidence: the repro above; raw images get the regions only from rawfront's `DEVICE_REGIONS`; IDA maps PPB/SRAM segments.
   - Owner: unlace-analysis `loader/` (next to `unlace_pcmemory::paint_volatile`, with the rawfront regions moved down into it), P1, on an ARM M-profile image. It is a correctness fix, so no option. **S.**
2. **No Cortex-M core-peripheral names** (NVIC, SCB, SysTick, MPU, DWT, ...) without an SVD.
   - Impact: ARM firmware readability.
   - Evidence: `cortex_m.json` components; unlace prints `dat_e000ed0c`.
   - Owner: unlace-analysis `loader/firmware/cortexm.rs`. A built-in table (better as typed CMSIS `SCB_Type`/`NVIC_Type`-style structs, like the SVD path) applied to raw and ELF M-profile images, P1, option-free or a default-on option. Generate the table from the ARM architecture manual, not from IDA's json. **S/M.**
3. **`--svd` is ignored on ELF firmware.**
   - Impact: ARM firmware.
   - Evidence: rawfront returns early for an object file before the SVD branch.
   - Owner: move SVD application out of `unlace-cli/src/rawfront.rs` into an analysis pass. **S.**
4. **Switch helpers are recognised by name only.** Stripped Thumb-1 / M0 firmware loses every switch built on `__gnu_thumb1_case_*` or armcc's `__ARM_common_switch8`.
   - Impact: ARM firmware GED (M0 parts, -Os builds).
   - Evidence: apple__arm `sub_87DC0` byte-signature matcher; unlace `thumbswitch.rs:107`.
   - Owner: unlace-analysis `listing/`. Identify the helper by its body (it is a small fixed sequence), name it, and let the existing cspec callfixup apply. Fix. **S/M.**
5. **CFG function table not read** (PE built with /guard:cf).
   - Impact: Windows/PE function recall on stripped MSVC x64 and ARM64; it also names indirect-only callbacks.
   - Evidence: `loaders__pe` `sub_8540` via `sub_18EE0`.
   - Owner: unlace-analysis `analyzers/entry/pe_entry.rs`, a new oracle. Fix. **S.**
6. **CFG dispatch and check pointers not named or modelled.** If unhandled, a /guard:cf indirect call `call [__guard_dispatch_icall_fptr]` (target in RAX) loses its real target and arguments. The decompile side is unverified.
   - Impact: Windows x64 output fidelity.
   - Evidence: `sub_18EE0` names the slots and recognises the nop stubs.
   - Owner: the loader names the slots; a P2 or P4 call fixup rewrites the dispatch as `(*rax)(args)`. Fix. **M.**
7. **Delay-load imports not named.**
   - Impact: Windows/PE (common in MSVC DLLs and malware such as mydoom and dexter).
   - Evidence: pe.so delay-load descriptor strings.
   - Owner: unlace-analysis `loader/pe_iat.rs`, plus treating the delay IAT slots as import slots (`importdata`). Fix. **S.**
8. **No UEFI protocol or PPI interface typing, and no install-to-implementation links.**
   - Impact: UEFI firmware type match; IDA's main UEFI value.
   - Evidence: `uefi.cfg` `UEFI_TYPE_PROTOCOLS`; uefi.so strings.
   - Owner: unlace-analysis `analyzers/uefi/` (protocol structs from the EDK2 headers, mapping the `g*Guid` name to its protocol type) plus a P5 per-call output type for `LocateProtocol`'s third argument, like `gonewtype`'s output lock. Option-free on UEFI images. **M/L.**
9. **SafeSEH, EH-continuation and longjmp tables, and SEH handler or funclet entries.**
   - Impact: PE exceptions and recall.
   - Evidence: `sub_18EE0` `SEHandlerTable`, `GuardEHContinuationTable`.
   - Owner: `pe_entry.rs` (SafeSEH gives function starts on x86; EH-continuation targets are points inside functions, useful for `pdatainterior`-style containment). **S.**
10. **Pattern function starts are not run on raw firmware, and lack IDA's `optional_post`/`alignment` additions.**
    - Impact: raw ARM, MIPS, PPC and V850 blobs.
    - Evidence: `patfind.cfg` `AUTO_RUN=1`; `sub_9000` acceptance rule.
    - Owner: P1 `funcstart_patterns`. Make it the default for `--raw-image` (an option refinement), and add `optional_post` to the parser. **S.**
11. **Firmware volume modules are decompiled alone.** There are no PEIM, DxeMain or StandaloneMm entry prototypes and no cross-module protocol links.
    - Impact: UEFI firmware.
    - Evidence: uefi_fv.so prototype strings.
    - Owner: `unlace-cli` unpack/project plus `analyzers/uefi` (entry prototype chosen by FFS file type). **M.**
12. **Field bit names from SVD.** IDA comments each register's fields and enum values; unlace drops fields, so masks stay numeric.
    - Impact: ARM firmware readability.
    - Owner: `firmware/svd.rs` emitting enums or bitfield constants for the P9 printer. **M.**


### C++, exceptions, debug info, languages

1. **Typed `this` and class structs for MSVC C++ (the MSVC counterpart of `vtabletypes`).** For each RTTI class, build a struct `X` whose first member is a `__vftable` pointer to a typed `X_vtbl`. Type the `this` of every `vfunc_i` and constructor as `X*`. Add the Hex-Rays rule that a load typed `X_vtbl` retypes its base pointer as `X`.
   - Impact: Windows/PE C++ type match (named struct pointers, the biggest miss) and virtual-call rendering.
   - Evidence: hexx64 sub_4311A0; libida 0x77F120; unlace `rtti/mod.rs` only names `vfunc_<i>`; `vtabletypes.rs` is Itanium-only.
   - Owner: unlace-analysis `rtti/` plus unlace-decomp p5 (`unlace_vtabletypes`). Extend the `vtabletypes` option to PE; the back-propagation rule is an option. Size M.
2. **PDB types, prototypes and locals.** Read TPI into the type factory, apply function types with `this`, place register-relative and enregistered locals, and build `X_vtbl` from method lists.
   - Impact: Windows/PE with PDBs (system DLLs, MS samples); large type-match gain.
   - Evidence: pdb sub_6F920, sub_50C20, sub_4F240, sub_34C10; unlace `pdb/` has names and extents only.
   - Owner: unlace-analysis `pdb/`. Strict import, so a fix (default on when a PDB is present). Size L.
3. **PDB symbol-server fetch.** Parse `_NT_SYMBOL_PATH` / `srv*cache*url`, download by RSDS GUID and age, check signature and age.
   - Impact: makes gap 2 work on any Windows system binary.
   - Evidence: pdb 0x76EA0, 0x77DD0, 0x78830.
   - Owner: unlace-analysis `pdb/` or unlace-cli; network access must be an option (it is off in IDA too: `PDB_NETWORK`). Size S–M.
4. **MSVC C++ EH (FuncInfo/FH4 to try/catch, throw helper).**
   - Parse FuncInfo and FH4 and the IP-to-state map.
   - Inline catch funclets into the parent.
   - Turn `_CxxThrowException(obj, &TI)` into `throw`, typed from the throw info.
   - Impact: Windows x64 C++. Without it, catch blocks are orphan functions and state stores are noise.
   - Evidence: eh34 sub_3F6E0, sub_3CB60, 0x16560, sub_39140; eh_parse struct layouts.
   - Owner: unlace-analysis `entry/` (new `msvceh.rs`) plus p2/p8 rendering behind a new option, a sibling of `itaniumeh`. Size L. The throw-helper part alone is S.
5. **x86 SEH frames.** Recognise `SEH_prolog4` and `_EH4_SCOPETABLE`, declare the `ms_exc` frame struct, attach `__except`/`__finally` blocks to the parent, and render state stores as try regions.
   - Impact: 32-bit PE (most malware and crackme corpora).
   - Evidence: x86__pc 0x34230, 0x2A960, 0x2DA10, 0x6D2B0.
   - Owner: unlace-analysis `entry/` plus p2. Option. Size M.
6. **DWARF location lists and register variables.** Support loclists with `DW_OP_reg`/`breg`/`piece`, so `-O2` binaries with DWARF get named and typed register locals; today only `fbreg` is read.
   - Impact: Linux ELF with debug info, DecBench type match and merged variables.
   - Evidence: dwarf sub_83140, 0x86460.
   - Owner: unlace-analysis `dwarf/dwarflocation.rs`, `dwarfscopes.rs`. Fix, extending `dwarfscopes`. Size M.
7. **Go interface method dispatch.** Build an `iface.I.T` struct per itab with typed method function pointers, and type interface calls through `tab->fun[i]`.
   - Impact: Go binaries (interface calls are everywhere).
   - Evidence: golang sub_17960; `gotypes/itabs.rs` header explicitly defers it.
   - Owner: unlace-analysis `gotypes/` plus p5. Extend `gotypeglobals`. Size M.
8. **Go FUNCDATA (InlTree, ArgInfo) and source lines.** InlTree names inlined callees inside a body. ArgInfo gives the stack argument layout for ABI0 functions.
   - Impact: Go readability and parameter count.
   - Evidence: golang sub_22C80; `GOLANG_IMPORT_LNNUMS`.
   - Owner: unlace-analysis `pclntab/`. Option. Size M.
9. **Debug types from separate files.** Use build-id / `.gnu_debuglink` companions for DWARF types and prototypes, not just names, and add DWZ `.gnu_debugaltlink`.
   - Impact: distro ELF binaries (Debian/Fedora debuginfo).
   - Evidence: dwarf 0x25020, 0x2B100.
   - Owner: `loader/elf_debuglink.rs` plus `dwarf/`. Extend `debuglink`. Size M.
10. **ARM EHABI `.ARM.exidx` and SjLj.** Function extents and landing pads for 32-bit ARM ELF and Android, where there is usually no `.eh_frame`.
    - Impact: ARM firmware and Android native code (a structure weak spot).
    - Evidence: eh_parse 0xDF10, 0xF350; unlace only mentions exidx in `fdeinterior.rs`.
    - Owner: unlace-analysis `entry/`. Extend `itaniumeh` / `fdeinterior`. Size M.
11. **Global SP solver for unknown callee purge (simplex over SP constraints, including handler entries).**
    - Impact: 32-bit PE stdcall-heavy code, wrong stack slots.
    - Evidence: x86__pc sub_7B800.
    - Owner: unlace-decomp p4 (`calleepurge.rs` area). Option. Size M–L.
12. **COM GUID naming and interface vtables.** Name each GUID as `IID_`/`CLSID_` and type the `ppv` out-parameter with `IFooVtbl`, so COM calls through the out-pointer show method names.
    - Impact: Windows PE using COM.
    - Evidence: comhelper sub_3280, 0x46F0.
    - Owner: unlace-analysis (new analyzer); needs a GUID table and interface types, which are runtime inputs and cannot be committed. Option. Size M.


## 8. Limits

- IDA was not run on targets; IDA behaviour comes from its own modules' pseudocode, strings, cfg files and the
  9.5 SDK header `hexrays.hpp`. The internal variable-merging machinery is described from SDK flags and the shape
  of the allocation loop, not traced line by line.
- The elf, coff, dex, uefi_fv and hexrv/hexmips/hexppc rows come from strings and cfg files (their exports were not
  ready when those areas were read); uefi's mechanism strings were then confirmed in `plugins__uefi.sqlite`
  (sub_10BC0 summary, sub_29D00 interface synthesis, sub_14820 cross-module references, sub_48A80 its own
  microcode dataflow with a block-visit budget).
- Live unlace checks used relocatable objects or tiny linked tests; options at `auto` may behave differently on real
  linked images. DecBench binaries are not on this machine.
