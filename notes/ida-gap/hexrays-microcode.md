# Hex-Rays microcode optimizer vs unlace's rule pools and P3/P4 passes (2026-11-24)

Scope: the microcode layer of Hex-Rays 9.5 (hexx64, same core in hexarm): the maturity pipeline,
preoptimization and propagation, assertions and value ranges, stack variables and local-variable
allocation, call-argument recovery, type derivation at microcode level. The named rules are already in
`notes/ida-hexrays-rules.md` and the module-level gaps in `notes/ida-gaps.md` /
`notes/ida-module-survey.md`; they are not repeated here, only referenced.

Method. IDA side: function names/addresses from `~/SiteResearch/ida-pro/hexx64.sqlite`
(`select text from pseudocode where ea=...`) and the derived string index
(`derived/ida-links.sqlite`, `select text, group_concat(distinct func_name) from string_users where mod='hexx64' and text like '%...%' group by text`).
The pipeline strings (`sub_A6240(mba, 1, "<step>")` is the per-step microcode dump) name each
step. unlace side: `codegraph query` over `nodes`/`files` on origin/main `a011085806`
(file:line below are struct/file starts from it) and the option catalog (`unlace catalog --json`,
372 rows). Status: have / partial / missing / ours-better.

## 1. Techniques

| # | technique | what Hex-Rays does (evidence) | unlace | status | proposed task |
|---|---|---|---|---|---|
| 1 | Maturity pipeline and per-step dumps | `MMAT_ZERO`, `GENERATED`, `PREOPTIMIZED`, `LOCOPT`, `CALLS`, `GLBOPT1`-`3`, `LVARS`, `FINAL` (`sub_45D940`, `sub_45F420`, `sub_45FCA0`, `sub_460AC0`); `-dump`, `-dump2` (during propagation), `-dump3` (during instruction optimisation), `-cdump` rule names (`sub_3C2F80`) | phase model P1-P9 with `universal_sched` (`crates/unlace-decomp/src/infra/universalaction.rs`), `kuna_maturity` (#189); `decomp_dbg` `print raw` after a decompile; `KUNA_*_TRACE` per module (atomics, jumptable, regnarrow, calleevote, callerargs, narrowargs, narrowret) | partial | S: one `UNLACE_DUMP=<action>` that prints the raw p-code after a named action of the pool, the analog of `-dump2`/`-dump3`; would have cut the atomics/jumptable debug rounds of #581/#871 |
| 2 | Two-round preoptimization and combined operand propagation | `sub_14F5A0`: `before preoptimize`, per-block `sub_E7F30(blk, 1)` then `(blk, 0)`, `after second preoptimize`, `sub_4A2D60` "after combined operand propagation" | Ghidra rule pools run to a fixpoint with restarts (`ActionPool` in `unlace-middle/src/infra/action.rs`), copy propagation `RulePropagateCopy` (`crates/unlace-bandb/src/p3_dataflow/ruleaction_3.rs:2222`), `RuleIndirectCollapse` (`ruleaction_3.rs:640`) | have | none |
| 3 | 64-bit values on x86-32 (row 10, measured in section 4) | 65 `CONCAT44` in one i386 DLL where IDA prints none; most are spurious `edx:eax` returns, not locals | M, split into 4a-4c |
| 4 | Assertions on branch edges | `gen_jnz_assertions` (`sub_1533A0` over every block via `sub_152CE0`), `gen_chain_assertions` (`sub_153420`), `delete_assertions` (`sub_152930`, `sub_166050`); user "Insert assertion" (`sub_454170`) | `ActionConditionalConst` (`crates/unlace-emit/src/p9_emit/coreaction_render.rs:3116`) propagates the constant an equality branch implies into the blocks it dominates; user assertions `--assert` (`crates/unlace-console/src/assertions.rs`, `crates/unlace-middle/src/p0_knowledge/assert.rs`) | have | none |
| 5 | Value ranges per block | `block.valranges_tail` (`sub_CEE20`), `REMOVE_USELESS_JX_VALRANGES`, `CMP64-VALRANGES-JMP2`, `OPT_VALRNG_JCND/AND/SWITCH_NCASES` (hexrays.cfg) | `rangefold` (`crates/unlace-bandb-base/src/p3_dataflow/rangefold.rs`), `phithread ranges` (`phithread.rs`), Ghidra `ValueSetSolver` used for jump tables only | partial | M: a dominating-range fact pass (ranges from guards, masks and zero-extensions, joined at merges) that `rangefold`, `condfold` and the jump-table guard search read; today each recomputes its own |
| 6 | Stack variable resolution | `resolve_stkvar_addresses` (`sub_152630`, maturity <= 6), `mba.corrected_stkvars` (`sub_CF420`), `stkvar du-ud` (`sub_126B10`) | `ActionStackPtrFlow` (`coreaction_render.rs:133`), `RuleSpacebase`, `ActionRestrictLocal` (`crates/unlace-bandb/src/p4_calls/coreaction_protos.rs:2216`), `stackviews` (off) | have | none |
| 7 | Aliased memory across calls | `mba.lv_aliased` (`sub_CF420`); `sub_1AEBE0` clears and recomputes the aliased set ("changed aliased memory") before propagation; option "Keep all indirect memory reads" | Heritage guards address-tied stack across calls; `indexaliasguard` (`crates/unlace-bandb/src/p3_dataflow/indexaliasguard.rs`, default `global`), `stackalias` (off, `crates/unlace-bandb/src/p6_variables/stackalias.rs`); `aliasblock` | **partial, wrong output seen**: PEGRP32F `sub_102fcc20` (#871) keeps a struct field's pre-call 0 although the struct's address is passed to the call, collapses a 13-target switch and drops the rest of the function | M (research-egraph has it): treat every field of a stack object whose address reaches a call as written by it, up to the object's extent, not the pointee type's |
| 8 | Local-variable allocation | `before prealloc_lvars` (`sub_22E570`) -> `sub_22B900` ("after prealloc_lvars", "restarting allocation loop", 2,143 lines) -> `after alloc_lvar` (`sub_22E770`); `max recursion depth reached during lvar allocation`; `straighten lvar pairs` (`sub_4B56B0`) | Ghidra Merge (`p6_variables`), `regnarrow` (`crates/unlace-bandb-core/src/p3_dataflow/regnarrow.rs`, on), `calleesaved` (off), `localstackviews` (`crates/unlace-bandb-core/src/p6_variables/localstackviews.rs`) | have (engine) | none here; see task 4 |
| 9 | User variable control | "Split variable" (`sub_43B730`), "Map variable" (`sub_4013E0`), "Split/Unsplit expression", "Split memory access", "Forbid assignment propagation" (`sub_43E530`), "User-defined micro instructions" and their reset (`sub_441A50`), stored in `lvar settings` (`sub_37AA70`) | `--assert` directives and the SQLite project file (`unlace project`): prototypes, types, names, no-return, register lifetimes (`crates/unlace-cli/tests/register_lifetime_assertions.rs`) | partial | M: project directives `split <func> <addr> <storage>`, `map <var> <var>`, `noprop <addr>` that the Merge and the rule pools honour, so an agent can repair a merged or over-propagated variable without patching code |
| 10 | Register pairs as one variable | `__SET_PAIR__`, `__%sPAIR%d__` (`sub_27D930`, `sub_282040`), "converted value pairs to scattered operands" (`sub_1F49A0`), `mba.scattered_pair_regs`, user "Create scattered pair" (`sub_43BE70`) | `pairparam`/`pairbranch` (inputs, `crates/unlace-bandb-base/src/p5_types/borrowcompare.rs`), `armpairparam` (`crates/unlace-middle/src/p4_calls/armpairparam.rs`), `returnpair` (`crates/unlace-bandb-base/src/p4_calls/returnpair.rs`), Ghidra `double.rs` | partial: parameters and returns pair; a 64-bit **local** on i386/ARM32 still prints as two words with `CONCAT44` (#581: `CONCAT44` 54 in TpmCoreProvisioning.dll) | M: pair a local's two register words when every def writes both halves from one 64-bit op (the scattered-pair rule for locals) |
| 11 | Non-standard register conventions (auto usercall) | `build_callinfo` (`sub_F2C20`, 546 lines) gives a callee with register inputs outside its ABI a `__usercall` prototype; `DISABLE_USERCALL` (`sub_3C2DD0`) | `calleereginputs` (`crates/unlace-bandb-core/src/p4_calls/calleereginputs.rs`, on) only for x86-32 Windows `__thiscall`/fastcall registers; `ActionActiveParam` (`coreaction_protos.rs:1451`) limits inputs to the model's parameter list | partial | M: for a static (non-exported) callee, add the registers its body reads before writing them and every caller sets as inputs, on x86-64/AArch64/MIPS too, behind an option (`usercall`) |
| 12 | Call arguments, spoiled registers, varargs | `callinfo.{args,solid_args,pass_regs,dead_regs,spoiled,return_regs,visible_memory}` (`sub_CE1F0`); "combine va_args: %s" (`sub_1C15E0`), "spoiled ellipsis regs" (`sub_1CC280`), "combined partial callarg" (`sub_1071A0`) | `calleevote`, `callervote`, `protoorder`, `calleearity*`, `argclobber`, `callerargs` (`crates/unlace-bandb-core/src/p4_calls/`), the vararg family (`varargsave.rs`, `varargstackargs.rs`, `varargtail.rs`, `varargtransfer.rs`, `darwinvarargs.rs` in `crates/unlace-bandb-base/src/p4_calls/`) | have, ours-better on measured corpora (the `argclobber`/`protoorder` rows record 770-binary runs) | none |
| 13 | Unused-argument removal | `UNUSED_ARG` (`sub_F8320`) | `calleedeadarg` (`crates/unlace-bandb-core/src/p4_calls/calleedeadarg.rs`) | have | none |
| 14 | Return-type refinement and write-back | "return type has been refined" (`sub_257150`, 2,029 lines) and the database type store after each decompile (`sub_2CE460`, survey §3.1) | `narrowret` (`crates/unlace-bandb-core/src/p4_calls/narrowret.rs`), `protoorder` callee-first, `storetype` (globals, default `uefi` only, `crates/unlace-bandb-base/src/p5_types/storetype.rs`) | partial | S-M: measure `storetype on` beyond UEFI (a global's type from the values stored into it) on the PE/ELF corpora, flip if neutral |
| 15 | Save/restore of callee-saved registers inside loops | `save_restore_in_loop: removing save=%a restore=%a (kreg=%s ...)` then "global dead elimination result" (`sub_162A30`, 1,089 lines) | Ghidra's unaffected/killed-by-call model plus `calleesaved` (off); no rule for a push/pop pair inside a loop body | missing (unmeasured) | S: measure first (count loops with a matching save/restore of one callee-saved register in the corpora); if it occurs, drop the pair as dead in the loop |
| 16 | Inlined string/memory routines | `handle_inlined_memcpy_strcpy33`, `handle_inlined_memset58`, struct copy as typed assignment (`sub_4C9AD0` -> `sub_4C8DE0`) | `copyrun` (`crates/unlace-bandb-base/src/p3_dataflow/copyrun.rs`), `memsetsequence` (`crates/unlace-bandb-base/src/p5_types/memsetsequence.rs`) | partial: memcpy and memset runs yes; the inlined `strcpy` of a literal (a run of immediate stores whose last byte is 0) prints as stores | S: extend `copyrun` to fold an immediate-store run ending in a NUL into `strcpy(dst, "...")` |
| 17 | Outlined code | "before handling outlines", "merged main & outline", "inlined callee %a from block %d into blocks %d..%d", "replaced jump to outline by goto" (`sub_209600`, 2,869 lines) | `outlinedinline` (`crates/unlace-lift/src/p2_lift/outlinedinline.rs`) | have | none |
| 18 | Microcode pattern language | `pattern ... transform ... typereq ... checker`: "Bad pattern type declaration" (`sub_472810`), "cannot add new lvars in a condition/typereq/postactions" (`sub_473DD0`) | rules are Rust; options turn them on and off | missing | L, low: a data-driven rule format is a large surface for a small gain; options already serve the agent use case |
| 19 | Microcode and pseudocode cache | "Use microcode and pseudocode cache", `-usecache` (`sub_3C1FF0`, `sub_3C2F80`) | none (each run decompiles again; the project file stores directives, not results) | missing | M, low: cache per-function output keyed by bytes + options hash for `decompile-all` reruns |

## 2. Ranked top 10

| rank | task | why | size |
|---|---|---|---|
| 1 | Aliased stack objects across calls (row 7) | wrong output: a switch and a whole post-call body disappear (#871, PEGRP32F `sub_102fcc20`) | M (research-egraph) |
| 2 | Auto usercall beyond x86-32 (row 11) | static callees with non-ABI register inputs lose arguments on x86-64/AArch64; Hex-Rays does it by default | M |
| 3 | Register-pair locals (row 10) | 64-bit locals on 32-bit targets still print as two words with `CONCAT44` (54 in one i386 DLL) | M |
| 4 | Shared value-range facts (row 5) | one dominating-range pass for `rangefold`, `condfold` and the jump-table guard search instead of three local searches (the trustd hardened-table misses of #871 are a guard the jump-table model never sees) | M |
| 5 | User variable directives: split / map / noprop (row 9) | lets an agent fix a merged or over-propagated variable per run, the control surface the product is about | M |
| 6 | Per-action p-code dump (row 1) | debugging aid; three trace PRs in #581/#871 were stand-ins for it | S |
| 7 | `storetype` beyond UEFI (row 14) | global types from stores on every whole-program batch, if a measurement is neutral | S-M |
| 8 | Inlined `strcpy` of a literal (row 16) | MSVC/clang -O2 inline short string copies as immediate stores | S |
| 9 | Save/restore in loops (row 15) | measure first; Hex-Rays has a dedicated pass | S |
| 10 | Output cache for reruns (row 19) | speed for repeated `decompile-all` over one image; low priority | M |

Not proposed: the pattern language (row 18) and everything marked have.


## 3. IDA dumps added 2026-11-24

Approved list from the survey follow-up. Exports are `idb-tools export-sqlite` (`~/RustProjects/forks/idb-rs`,
schema in its `doc/sqlite-export.md`) of the idalib run (`~/bin/ida-dump-all-idalib`), written to
`~/SiteResearch/ida-pro/sqlite/`; IDBs and the per-function `.c` files sit under `ida-9.5-dump/<group>/<name>/`.

| export | input | functions | pseudocode | what to read it for |
|---|---|---|---|---|
| `loaders__macho` | `loaders/macho.so` | 662 | 480 | was a 0-byte file; same input (md5 `3a90aec7`) as `apple__macho.sqlite`, so it is a duplicate kept for the naming scheme |
| `hexrays__hexmips` | `plugins/hexmips.so` | 8,953 | 8,282 | MIPS microcode lifter: `sub_75360` "MIPS: simplify dc", `sub_72070` the MIPS va_list adapter, `sub_77B10`/`sub_77FD0` the `__integer_overflow`/`__divide_by_zero`/`__trap` intrinsics behind the "Generate trap for arithmetic (MIPS)" option |
| `hexrays__hexppc` | `plugins/hexppc.so` | 9,023 | 8,353 | PPC lifter: `sub_77F10` "PPC optimizer %d", the `__tw*`/`__td*` trap-word and `__sync`/`__lwsync` intrinsics, `_cntlzw`/`_cntlzd` |
| `hexrays__hexrv` | `plugins/hexrv.so` | 8,929 | 8,258 | RISC-V lifter (the earlier run stopped at 6,276 of 8,907; rerun from scratch, the old unpacked IDB is in `hexrv/prev-unpacked/`) |
| `procs__mips`, `procs__ppc`, `procs__riscv` | `procs/*.so` | 682 / 793 / 514 | 445 / 529 / 328 | jump-table recognisers (kernel imports `match_jpt`, `find_jtable_size`, `check_for_table_jump`, RISC-V `check_flat_jump_table`), `set_noret_insn`, stack-pointer tracking, RISC-V `reg_finder_*` value emulation |
| `targets__TpmCoreProvisioning32` | `SysWOW64/TpmCoreProvisioning.dll` (i386 PE) | 4,252 | 4,178 | ground truth for section 4 |

## 4. Register pairs on x86-32: TpmCoreProvisioning.dll (SysWOW64), unlace `0a82c6883b` vs IDA 9.5

`unlace decompile-all --jobs 4` printed `CONCAT44` 65 times in 38 functions (the 54 quoted in row 10 came from
an older pin). IDA prints none: it declares `__int64` variables and writes their halves with
`HIDWORD()`/`LODWORD()` (234/77 uses) or `__PAIR64__` (18). The 65 uses, by cause:

- **29 in `return`** (top-10 #3a). unlace gives 34 functions a `long long` return. IDA's prototype is 64-bit for
  9 of them and 32-bit for 8; for example `CmdBufStartCommand` (`0x100A4BEC`, `int __fastcall`) ends in
  `return CONCAT44(a1,v1);`, where `a1` is the `edx` argument still live at the return. The other 17 start
  where IDA has no function (next item). Task: `returnpair` should not join `edx` when the value in it at every
  return is an input or a value written only as an argument. S-M, refines the existing option.
- **Function starts IDA does not have.** unlace finds 5,764 functions, IDA 4,252; 1,626 unlace starts are not IDA
  starts (114 the other way). Ten of them are inside `GetEventTypeFromID` (`0x100FC580`), and
  `sub_10001a68`/`sub_1000693d` decode data. This is the PE discovery bucket already with holley2.
- **5 partial writes** (#3b): `v12 = CONCAT44(((unsigned int *)&v12)[1],v3);` where IDA prints
  `LODWORD(v12) = v3;`. S: print a store of one half of a 64-bit local as a half assignment.
- **The rest**: a 64-bit global read as two words (`EventWriteTransfer(CONCAT44(dat_1012a004,dat_1012a000),...)`,
  a `REGHANDLE`), 64-bit compares and sums on split values (`basic_stringbuf::seekoff`), and the CRT helpers
  `__allmul`/`__aulldiv`/`__dtoul3` with four `int` parameters where IDA has two `__int64` (#3c, S: give the
  MSVC long-arithmetic helpers their prototypes from the type library by name).

A real register-pair local, the row-10 case, accounts for few of the 65; row 10's proposal stays but drops below 3a-3c.
