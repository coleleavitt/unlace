# IDA kernel auto-analysis vs unlace-analysis

This note surveys IDA 9.5's kernel auto-analysis (libida), organised by its `ANALYSIS` flags (`AF_*`,
`AF2_*` in `ida.hpp`) and its auto-analysis queues (`AU_*` in `auto.hpp`). It compares each one with
unlace's analysis tier. Hex-Rays microcode rules, plugins and loaders are in `ida-hexrays-rules.md`,
`ida-module-survey.md` and `ida-gaps.md`; this note does not repeat them.

## Sources and method

- **IDA side.**
  - `~/SiteResearch/ida-pro/libida.sqlite` (core libida, names and pseudocode). Most exported entry points are
    thin wrappers into the auto-analysis object at `qword_2D960F8+1680`, so the cited `sub_*` are the real
    bodies.
  - The derived string database `derived/ida-links.sqlite` (`string_users`), used to tie messages to
    functions.
  - `sqlite/loaders__{pe,elf,coff,dex}.sqlite`: IDA 9.5 databases of four IDA loader binaries, used as ground
    truth for discovery, tails and strings.
- **unlace side.** Code locations come from `codegraph query` over `origin/main` (`nodes`, `calls`). Option
  defaults come from `unlace-f7e6edec8e catalog --json`.
- **Measurement.** `unlace-f7e6edec8e functions` and `strings` were run on the same four inputs IDA analysed
  (`ida-9.5-dump/loaders/<m>/<m>.so`, matched by the databases' `input_file` and sha256), and their function
  starts and string addresses were compared.

## Measured: function starts and strings, IDA 9.5 vs unlace

| binary | IDA funcs | unlace funcs | same start | IDA-only (`extern` / `.text`) | unlace-only (`.got` / `.text`) | unlace-only `.text` that are IDA tail chunks | IDA tail chunks (owners) |
|---|---|---|---|---|---|---|---|
| pe.so | 417 | 427 | 246 | 170 / 1 | 166 / 15 | 13 | 62 (62) |
| elf.so | 836 | 906 | 644 | 190 / 2 | 186 / 76 | 68 | 383 (150) |
| coff.so | 314 | 312 | 186 | 127 / 1 | 122 / 4 | 4 | 24 (24) |
| dex.so | 755 | 783 | 567 | 187 / 1 | 183 / 33 | 32 | 145 (145) |

- **Imports.** The `extern`/`.got` columns are the same imports placed differently: IDA gives each import a
  function in its synthetic `extern` segment, unlace keys it to the `.got` slot.
- **Discovery.** Outside imports, discovery agrees almost exactly: IDA has 1-2 `.text` starts unlace lacks.
- **Tails.** The real `.text` difference is function tails. Between 4 and 68 of the starts only unlace reports
  are chunks IDA attaches to an owner function (`AF_FTAIL`), and that is 13 of 15, 68 of 76, 4 of 4 and 32 of 33
  of the unlace-only `.text` starts.

| binary | IDA strings | unlace strings | same address | unlace-only (no xref) | IDA-only |
|---|---|---|---|---|---|
| elf.so | 4,114 | 5,036 | 3,973 | 1,063 (913) | 141 |
| pe.so | 819 | 1,313 | 758 | 555 (475) | 61 |

IDA creates a string where a data xref points (`AF_STRLIT`, `coagulate_dref`) and in the final pass. unlace
scans every section. Most strings only unlace reports have no reference at all.

IDA also names 8, 41, 2 and 4 empty functions `nullsub_N` (`AF_NULLSUB`) in pe/elf/coff/dex; unlace prints them
`sub_<addr>`.

## Technique table

Status: **have** (unlace does the same job), **partial**, **missing**, **ours-better**, **n/a** (interactive or
database-only).

| # | IDA technique (flag / queue) | What IDA does (libida, cited) | unlace (codegraph `file:line`) | status | evidence | proposed task (size) |
|---|---|---|---|---|---|---|
| 1 | Flow tracing, functions from calls (`AF_CODE`, `AF_PROC`, `AU_CODE`/`AU_PROC`) | `create_insn` 0x5CB7F0, `add_func_ex` 0x638880; queue-driven (`auto_mark_range` 0x3BD670, the body at `sub_3BD3F0`; `peek_auto_queue` 0x3B8DA0) | recursive-descent Listing walk `listing/walk.rs`; `entry_disc` `analyzers/entry/mod.rs:172` | have | 1-2 IDA-only `.text` starts per binary (table above) | - |
| 2 | Function bounds (`find_func_bounds`) | `find_func_bounds` 0x627760 -> `sub_626900` (stop at a no-return call, at a known function, at data) | `funcboundflow` (on) `p2_lift/funcboundflow.rs`; FDE/`.pdata` extents `fdeinterior.rs:103` (`suppress_interior_entries`), `pdatainterior.rs`; `mappedflowboundary.rs` | have | - | - |
| 3 | **Function tails / chunks** (`AF_FTAIL`, `AU_TAIL`, `AU_FCHUNK`) | `sub_6327A0` (`append_func_tail`, tails and referers), `sub_638A00` (`merge_func_tail`), `sub_3BCC50` ("auto tail parents"); a tail has `FUNC_TAIL` 0x8000 and an owner (`sub_62EE60` follows `v7[3]` to it) | `funcchunks` (off) builds `ChunkModel` `listing/funcchunks.rs`, consumed only by FID (`analyzers/fid/mod.rs:123,181`) and `passes.rs:1889`; `ehcold` (on) withholds only EH `.cold` parts (`ehcold.rs:127`); `coldentry` makes other `.cold` parts functions (`coldentry.rs:123`) | **partial** | 13/68/4/32 IDA tail chunks are separate unlace functions (pe/elf/coff/dex) | Option `functails`: commit a ChunkModel tail as part of its owner (no entry of its own, decompiled inside the owner's body; a tail shared by several owners stays a function). Measure on the four loaders and decbench. **M** |
| 4 | Jump tables / switches (`AF_JUMPTBL`) | `find_jtable_size` 0x485C00 -> `sub_485A10`, `trim_jtable` 0x4859E0, `get_jtable_target` 0x485D50; `sub_48AC70` builds switch info ("low/high halves of switch values" for two-level tables); `sub_4AE5A0` | Ghidra jump-table recovery in `p2_lift/flow.rs` plus about 25 `unlace_*switch*`/`loweredswitch*` refinements; discovery-tier tables `listing/switchtable.rs:109` (`targets`), `calltable.rs` (on), `a32switch.rs`/`a64switch.rs`/`x86listingswitch.rs` | have / ours-better | switch options measured in `option-firing-audit.md` | - |
| 5 | No-return analysis (`AF_ANORET`) | `func_does_return` 0x62EF30 -> `sub_62EE60`: `FUNC_NORET` bit 1; `FUNC_NORET_PENDING` 0x200 triggers a lazy re-analysis (`sub_62E930`, recursion capped at 511); `reanalyze_noret_flag` 0x62E010, `reanalyze_callers` 0x3BEEE0; user list `noret.cfg` (`sub_511080`) | `noreturn_known` (on, `loader/noreturn.rs:386`), `noreturn_disc` (on), `noreturn_propagate` (on): `propagate_noreturn` `noreturn_propagate/mod.rs:876` is a call-graph fixpoint; `gonoreturn`, `fastfailnoreturn`, `noreturnextern`; user list: `--option noreturn NAME true` | have | - | Small: report the propagation depth like IDA's 511 cap (already bounded) - none needed |
| 6 | SP tracing, frames, stack variables (`AF_TRACE`, `AF_VERSP`, `AF_LVAR`) | `recalc_func_spd_for_basic_block` 0x618410, `get_func_spd` 0x6144A0, `add_stkvar` 0x61C370, `define_stkvar` 0x61C0E0, `build_stkvar_xrefs` 0x400FF0 | the decompiler's own stack analysis (heritage of the stack space, `ActionStackPtrFlow`) and P6 variable recovery; frame helpers in `aif/unlace_frame*.rs` for discovery | have (decompile-time, not a database) | - | - |
| 7 | Argument propagation to call sites (`AF_STKARG`, `AF_REGARG`, `AU_TYPE`) | `apply_tinfo_to_stkarg` 0x676320, `add_func_regarg` 0x6E34C0, `apply_tinfo` 0x683C80, `guess_tinfo` 0x67AF30 | `protoorder` (cycles: callees first, recovered parameter types to callers), `calleevote` (fields: the callers decide a callee's parameters), `typelib` (auto) | ours-better (both directions) | - | - |
| 8 | Member function types (`AF_MEMFUNC`) | guess `this` for member functions | `vtabletypes`, `itaniumrtti`, `objc` `self` typing (`ida-gaps.md` gap 4) | have | - | - |
| 9 | Functions from data xrefs to code (`AF_PROCPTR`, `coagulate_dref: mark code`) | `sub_42DFC0` marks a data-xref target in code as code | `addrtakenentry` (on), `ptrentry` (on, ARM), `msvcptrentry`, `callbackentry.rs`, `addrtable` (off) | have | - | - |
| 10 | Typical code sequences (`AF_MARKCODE`, final-pass code coagulation `AF_DOCODE`) | prologue patterns and unexplored-byte conversion in the final pass | `funcstart_patterns` (off; on in aggressive), `aif` (off; on in aggressive), `unflaggedcode.rs` | partial (off under `reliable`) | firing audit: no change on stripped decbench ELF or MinGW PE | Keep off; the corpus shows no gain |
| 11 | **String literals from data xrefs** (`AF_STRLIT`, `AF_CHKUNI`, `AF2_MERGESTR`) | `coagulate_dref` `sub_42D7A0` -> length by `sub_42CD30` -> `create_strlit` 0x3699B0, only where a data xref points or at the final pass; Unicode probe; merges adjacent literals | `strings` scans every section (`analyzers/strings/mod.rs:210` `scan_strings`), IDA's code-section rule `code_section_string` `:242`; `widestrings`/`widestrings32`/`utf8strings`; `strcodelen`, `fatstr` | partial (different policy) | +1,063/+555 strings (913/475 unreferenced) vs IDA on elf/pe | Option `strxref`: plant a `char[N]` data symbol only when a reference (Listing xref or relocation) reaches the run's start, or merge it into a referenced neighbour (`AF2_MERGESTR`). This affects data symbols and `unlace strings`, not most C output. **M** |
| 12 | **Data to offsets** (`AF_DATOFF`, `AF_DREFOFF`, `AF_IMMOFF`, `coagulate_dref: op_offset`) | `sub_42E380` turns a data word (or a 32-bit immediate) whose value is a mapped address into an offset, so the referenced object gets an xref and a type | relocations `loader/dynrelocs.rs`, `dataptrs.rs`; `operand_refs` (off), `addrtable` (off) | partial | `operand_refs` and `addrtable` fire only on fixtures or in aggressive (`option-firing-audit.md`) | Measure `addrtable on` on stripped non-PIE binaries (where no relocation marks a pointer) and flip it if it gains. **S** to measure, **M** to fix misfires |
| 13 | Offsets and segments from fixups (`AF_FIXUP`) | relocation-driven offsets | `reloc_object.rs`, `dynrelocs.rs`, `relocrebase.rs` | have | - | - |
| 14 | Library signatures (`AF_FLIRT`, `AF_SIGMLT`, `AU_LIBF`/`LBF2`/`LBF3`/`AU_CHLB`) | `plan_to_apply_idasgn` 0x701DB0; three signature passes; IDA ships `sig/` per compiler | `flirt` (off, three rounds, `UNLACE_FLIRT_SIGS`), `fid` (off, `unlace_fid_db`) | partial (no shipped signatures) | firing audit: both fire only with a supplied database | Build `.fid` and `.sig` sets from distro static libraries with `unlace fid build` and `flirt make`, and default `fid` on when a set matches the target. **L** |
| 15 | **Hide or mark library functions** (`AF_HFLIRT`, `AF_SIGCMT`) | library functions are hidden or commented in the listing | none: `decompile-all` prints a FLIRT/FID-named library function like any other | missing | - | `decompile-all --skip-library` (or the `library` field in the JSON) for functions a signature named. **S** |
| 16 | **Empty and jump function names** (`AF_NULLSUB`, `AF_JFUNC`) | `sub_633B40` names `nullsub_%zu`; `j_<target>` for jump functions | `thunknames` (on) names a jump thunk after its target; nothing for empty functions | partial | 8/41/2/4 `nullsub_` in IDA on pe/elf/coff/dex, `sub_` in unlace | Name an otherwise unnamed function whose body is a bare return `nullsub_<addr>` under `namestyle`, as a refinement of `thunknames`. **S** |
| 17 | Re-analysis queues (`AU_USED`, `AU_USD2`, `AU_FINAL`, `plan_and_wait` 0x3C12C0) | a priority worklist: every change re-queues the affected range; a second reanalysis pass and a final pass | a fixed pass order at load and commit (`passes_for`, `run_listing_consumers`); fixpoints inside `noreturn_propagate` and `protoorder` | different (one-shot) | - | No task: only the no-return, switch and type facts benefit from iteration, and those three already iterate |
| 18 | EH information (`AF2_DOEH`) | `.eh_frame`/LSDA, MSVC EH | `itaniumeh` (on), `msvceh` (off), `ehcold` (on); `eh_frame_full` is inert by construction (`option-firing-audit.md`) | have | - | Drop or rework `eh_frame_full` (it adds only landing pads `fdeinterior` then removes). **S** |
| 19 | RTTI (`AF2_DORTTI`) | rtti.so | `rtti`, `itaniumrtti`, `vtabletypes` | have (`ida-gaps.md` gap 4) | - | - |
| 20 | Instruction macros (`AF2_MACRO`) | arm.so `sub_20E30` folds PAC and branch sequences into one macro instruction | SLEIGH p-code per instruction; `authptrcall`, `ptrauthtrap` fold the PAC sequences in the decompiler | have (decompile-time) | - | - |
| 21 | Xref database (`AF_USED`, `add_cref` 0x3FE120, `add_dref` 0x432B10, `insn_add_cref` 0x400350) | every instruction's code and data references | `listing/xrefs.rs`, `unlace xrefs` | have | - | - |
| 22 | Interactive and final-pass housekeeping (`AF_UNK`, `AF_TRFUNC`, `AF_PURDAT`, `AF_DODATA`) | delete orphan instructions, truncate functions on undefine, data coagulation | - | n/a | - | - |

## Top 10, ranked

1. **Function tails as chunks of their owner** (#3, `AF_FTAIL`). This is the one measured `.text` disagreement
   with IDA: 68 of 76 unlace-only `.text` starts on elf.so are IDA tail chunks. Commit `ChunkModel` tails into
   the owner behind option `functails`. Size M.
2. **Data to offsets** (#12, `AF_DATOFF`/`AF_DREFOFF`). Measure `addrtable` and `operand_refs` on stripped
   non-PIE and firmware images, where no relocation marks a pointer, and flip what gains. Size S, then M.
3. **Library signature sets** (#14, `AF_FLIRT`/`AU_LIBF`). `fid` and `flirt` work but have no shipped
   databases. Generate sets from distro static libraries and default `fid` on when a set matches. Size L.
4. **Hide or mark library functions** (#15, `AF_HFLIRT`). `decompile-all --skip-library`, or a `library` flag
   in the JSON, for signature-named functions. Size S, and depends on 3 to matter.
5. **`nullsub_` names** (#16, `AF_NULLSUB`). Name empty functions as IDA does: 41 on elf.so. A refinement of
   `thunknames`. Size S.
6. **Xref-driven string planting** (#11, `AF_STRLIT`/`AF2_MERGESTR`). An option that plants only referenced
   runs, with adjacent merging: 913 of 1,063 extra strings on elf.so are unreferenced. Size M.
7. **`eh_frame_full`** (#18). Inert by construction. Either let landing pads seed body coverage rather than
   entries, or delete the option. Size S.
8. **Tails of the `.cold` split beyond EH** (#3). `coldentry` makes non-EH `.cold` parts separate functions
   while IDA attaches them. Fold this into 1, or as a smaller first step make `ehcold`'s suppression cover every
   `.cold` part that only its owner jumps to. Size S.
9. **Code-pattern discovery defaults** (#10, `AF_MARKCODE`). `funcstart_patterns` and `aif` stay off; the
   corpus shows no gain. Keep the measurement current; no task until a corpus shows misses. Size S
   (measurement only).
10. **No-return lazy re-check** (#5). IDA re-derives `FUNC_NORET_PENDING` on demand. unlace's fixpoint covers the
    same cases, so the only action is a regression stage test for a no-return status learned late (from FLIRT,
    FID or a typelib) that must reach its callers. Size S.

Have or better, no task: discovery and bounds (#1, #2), switches (#4), argument and type propagation (#7),
member and RTTI typing (#8, #19), `AF_PROCPTR` (#9), fixups (#13), xrefs (#21).

## Done since

- **#1 / #8, `functails`** (default off): a single-owner `.cold` part is its owner's, `ehcold.rs (cold_tails)`.
  Measured end to end against IDA 9.5's own loader databases. The IDA tail chunks unlace lists as functions drop
  from 9/51/4/18 to 2/12/0/5 on pe/elf/coff/dex.so. One function IDA keeps is lost (pe.so 0x62fe, an unaligned
  function that only one other function jumps to). The owners print the same C as before.
- **#5, `nullsubs`** (default off): unlace names the same 8/41/2/4 functions IDA names `nullsub_` on the four
  loaders.


## Deepened 2026-11-24

[libida-autoanalysis.md](libida-autoanalysis.md) covers the auto-analysis driver and its fourteen queues, the undo journal and rollback, the processor-hook dispatch for switches and instruction analysis, the noret.cfg rule file, the user-pinned stack-pointer points, the FLIRT type-library autoload, and the mapping of IDA's analysis.* settings to unlace options. Its ranked missing items are the type-library autoload, the user-pinned SP points, the no-return rename rules, the FLIRT tail-byte skip (to be verified), and the undo journal.
