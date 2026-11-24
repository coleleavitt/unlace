# libida auto-analysis (IDA 9.5 kernel) vs unlace

Scope: IDA's auto-analysis driver and its work queues, function discovery and bounds, tails and chunks, no-return analysis, stack-pointer tracing, the switch and jump-table framework, xref creation, flow charts, the type-propagation hand-off, and FLIRT application. This note is a companion to [kernel-autoanalysis.md](kernel-autoanalysis.md), which covers the ANALYSIS flags, the measured function and string comparison, and the first-pass ranking. This note adds the driver and queue model, the entry points that file did not name, and the gaps that survive the comparison. Where both files cover a technique, the row here cites the same unlace location and does not restate the measurement.

## Sources and method

- IDA side: `~/SiteResearch/ida-pro/libida.sqlite` (1.3 GB; IDA 9.5 analysis of libida.so: 59,809 functions, 59,317 Hex-Rays pseudocode rows, 50,060 strings, 2.2 M xrefs). The brief named `core__libida.sqlite`; that path is a 0-byte file written 2026-11-24 15:12 and was not used or changed.
- Method: read-only sqlite3 and python3. Strings were joined to their referencing functions through `xrefs` and the `functions` ranges. Pseudocode was read by function name. IDA addresses are libida.so virtual addresses.
- unlace side: `origin/main` at b50c4b082f (worktree `unlace-wt-mine-autoanalysis`). File and line cites are in that tree. Option rows are from `crates/unlace-decomp/phases.toml`.
- Hex-Rays text was read for structure only. No decompiled bodies are copied here.

## How IDA's auto-analysis queue works

1. **One driver, fourteen queues.** Each queue is a tree of address ranges keyed by address. A 14-bit mask in the analysis state (offset +148) records which queues are empty; 0x3FFF means nothing is pending. `peek_auto_queue` (0x3B8DA0) reads one queue's head at an address, and `auto_is_ok` (0x3B91F0) is the "anything pending" test.
2. **One step.** The driver `sub_3C07C0` (0x3C07C0) calls `sub_3BB120` (0x3BB120), which walks the queues in fixed index order through `sub_3BACC0` and takes the first pending item at or after the range start. `sub_3BFC00` (0x3BFC00) dispatches it on the queue code. The dispatcher handles codes including 10, 60, 70, 80, 90 and 200 (0xC8). Range analysis and `auto_recreate_insn` (0x3BE230) enqueue at 40; range analysis also enqueues at 200 when the final flag is set.
3. **Enqueue by range.** `sub_3C0C60` (0x3C0C60, "Analyzing range") walks the heads in a range, keeps the code heads in a local tree, and enqueues them through `sub_3BD3F0` (0x3BD3F0). `auto_mark_range` (0x3BD670) is the public entry point for the same action.
4. **Resumable state.** State lives in netnodes, so an interrupted database resumes where it stopped. The tags are "$ Auto" (queue state), "$ auto type callees" and "$ auto tail parents" (set up by `sub_3BCC50`, 0x3BCC50), "$ hindering addrs", "$ postponed lastinsn", "$ stkargs propagated", "$ applied lumina" and "$ Auto ready". When every queue is empty, the driver applies Lumina once if `AutoUseLumina` is set, propagates stack arguments once, writes "$ Auto ready", and prints "The initial autoanalysis has been finished."
5. **Undo and rollback.** `sub_3BF280` (0x3BF280) rolls back earlier decisions that a new decision contradicts. When journalling is active, each change is recorded as an undo record (type 120), and the message is "rollback because of %a". The journal is what lets the queue be re-entered after a conflict.

unlace runs one fixed schedule, `universal_sched` (`crates/unlace-decomp/src/infra/universalaction.rs:438`). Fixed-point loops exist only where a fact feeds back into its own inputs: `noreturn_propagate` (phases.toml:6877) and `protoorder` (phases.toml:3968). There is no re-queue of a changed range and no undo journal. Row 17 of kernel-autoanalysis.md already records this difference as deliberate.

## Technique table

Status words follow kernel-autoanalysis.md: **have**, **partial**, **missing**, **different**, **ours-better**, **n/a**. Size is S, M or L.

| # | Technique | What IDA does (libida) | unlace status (file:line) | Impact | Size |
|---|---|---|---|---|---|
| 1 | Multi-queue driver, fixed priority, range trees | `sub_3C07C0` 0x3C07C0; `sub_3BB120` 0x3BB120; `sub_3BFC00` 0x3BFC00; `peek_auto_queue` 0x3B8DA0 | different: fixed schedule `universal_sched` (universalaction.rs:438) | M | L |
| 2 | Re-queue of a changed range | `sub_3C0C60` 0x3C0C60; `sub_3BD3F0` 0x3BD3F0; `auto_mark_range` 0x3BD670 | missing; only fixed-point loops at phases.toml:6877 and :3968 | M | L |
| 3 | Undo journal and rollback of a contradicted decision | `sub_3BF280` 0x3BF280 (undo type 120; "rollback because of %a"; tags "$ hindering addrs", "$ postponed lastinsn") | missing: rg for rollback and undo in unlace-analysis and unlace-decomp finds no journal | S-M for batch use | L |
| 4 | Persistent pending work (callees to re-type, tail owners to revisit) | `sub_3BCC50` 0x3BCC50 writes "$ auto type callees" and "$ auto tail parents" | n/a: one-shot run, nothing to resume | S | n/a |
| 5 | Discovery from code (create_insn, add_func_ex) | create_insn 0x5CB7F0; add_func_ex 0x638880 | have: listing walk (kernel-autoanalysis.md row 1) | - | - |
| 6 | Function bounds with stop rules | find_func_bounds 0x627760 to `sub_626900` 0x626900; find_function_bounds 0x629D20 | have: funcboundflow (phases.toml:2393) | - | - |
| 7 | Tail append, removal, and bad-chunk checks | `append_func_tail` to `sub_6327A0` 0x6327A0 (2 KB); "tail has no referers" in `sub_7463C0` 0x7463C0; "skipped bad chunk" in `sub_625670` 0x625670 | partial: functails (phases.toml:6098), funcchunks (:7025), ehcold (:6078); kernel-autoanalysis.md row 3 | M | M |
| 8 | Owners revisited when a tail changes (tag "$ auto tail parents") | `sub_3BCC50` 0x3BCC50 | partial, same as 7 | S | with 7 |
| 9 | Xref creation dispatched on head flags | `create_xrefs_from` 0x3FF830: code goes to `sub_5CB380` 0x5CB380, data to `sub_431920`; add_cref 0x3FE120; add_dref 0x432B10 | have: listing/xrefs.rs | - | - |
| 10 | Instruction analysis through processor hooks | `sub_5CB380` calls the processor analysis hook through `sub_5CAD40` and a second processor hook (id 0xB) | have: SLEIGH decode and listing/walk.rs | - | - |
| 11 | Switch recognition through the processor module | `calc_switch_cases` 0x488990 forwards to `sub_487EC0` 0x487EC0, which calls processor hook 0x29 and reports "bad response from processor_t::calc_switch_cases"; kernel gate flag 0x4000 | have: listing/switchtable.rs:109 (targets), switchflow.rs, thumbswitch.rs, x86listingswitch.rs; option switch-model (phases.toml:332) | - | - |
| 12 | Table entry shape: width 1, 2, 4 or 8; signed; relative or absolute; default case | `sub_483A70` 0x483A70 (3 KB) behind find_defjump_from_table 0x485C20; `sub_48AAC0` behind check_for_table_jump 0x48AC10; `sub_48AC70` 0x48AC70 ("switch %d cases"; "low/high halves of switch values") | have: switchselector (phases.toml:2579), switchreturn (:4657), relative_targets (switchtable.rs:480). Two-level low and high halves: not located | - | - |
| 13 | Table size with a "jump table at %a size %lld" report | `sub_4AE5A0` 0x4AE5A0 | have: switchextent (phases.toml:2784) | - | - |
| 14 | No-return flag and lazy re-check | `reanalyze_noret_flag` 0x62E010 (sets the 0x200 pending bit and calls two helpers that propagate the change); `set_noret_insn` 0x62E140; reanalyze_callers 0x3BEEE0; pending bit 0x200 | have: noreturn_known (phases.toml:5581), noreturn_disc (:6656), noreturn_propagate (:6877), noreturn_reach (:6895), listed_noreturn (loader/noreturn.rs:257) | - | - |
| 15 | No-return name rule file with rename rules | `sub_511080` 0x511080 (11 KB) loads noret.cfg: named rules with a pattern (ptn) and a replacement (rpl); errors "duplicated rule name" and "empty rule name or empty pattern" | partial: exact and wildcard path lists (loader/noreturn.rs:230 path_matches, :257 listed_noreturn); no pattern-to-replacement rules | S | S |
| 16 | Stack-pointer tracing with cross-path consensus | `find_sp_value` 0x54DCF0 calls `sub_54D470` 0x54D470; all traced deltas must agree before the value is sign-extended and returned | have at decompile time (kernel-autoanalysis.md row 6). The consensus rule was not located by rg | - | - |
| 17 | Whole-function SP delta recalculation including tails | `recalc_spd` 0x618260 to `sub_618110` 0x618110 (walks the items of the function and its tails); per-block variant `sub_618280` | have, decompile time | - | - |
| 18 | User-pinned SP delta points | `add_user_stkpnt` 0x616170; `del_stkpnt` 0x615F70; `extract_user_stkpnts_from_metadata` 0x8800E0 | missing: no user SP pin in unlace-analysis or unlace-decomp; spsolve (phases.toml:8969) infers and does not pin | S-M | S |
| 19 | Flow charts, including multi-range charts | create_func_flow_chart 0x644AD0; create_multirange_func_flow_chart; "Generating the flowchart" in `sub_644AF0` 0x644AF0 | have: per-function CFG (docs/spec/02-lift-and-flow.md). Multi-range over tails not checked | - | - |
| 20 | Type propagation hand-off | `sub_6DD440` 0x6DD440 is a single callui(25) to the type module, which prints "Propagating type information" | partial: protoorder (phases.toml:3968), calleevote (:3987), typelib (:5639). No persisted pending set (see row 4) | - | n/a |
| 21 | FLIRT: plan and load a signature | `sub_701770` 0x701770 ("Plan FLIRT signature"; "Could not find signature file"; "_legacy" suffix check); `sub_6FC990` 0x6FC990 ("Using FLIRT signature") | partial: flirt (phases.toml:6692), load_sigs (flirt/mod.rs:107), applies_to (:146), match_all (:240), accepted_matches (:253) | M | S (kernel-autoanalysis.md row 14) |
| 22 | Type library autoloaded beside a signature | `sub_6849A0` 0x6849A0 "%s.sig autoloads %s.til"; `sub_691270` 0x691270 "ids/idsnames: %s autoloads %s.til" | missing: no autoload, .til or _legacy handling in analyzers/flirt/ | M | S |
| 23 | FLIRT tail-byte skip at apply time | `sub_700DB0` 0x700DB0 "flirt: skip tail bytes", called from the dispatcher for codes 60, 70 and 80 | unverified: analyzers/flirt/ has no tail-owner check; signature-side tail bytes are in flirtsig.rs:11 | S | S |
| 24 | Lumina applied once before the queues drain | `sub_3C07C0` (tags "$ applied lumina", "AutoUseLumina") | partial: type-chunk decoders in unlace-lumina (tinfo.rs:390 decode_func, :428 decode_type_chunk); no ordering marker, not needed for a batch run | - | n/a |
| 25 | IDA config keys (analysis.*) | about forty keys near strings 37263017 to 37264417 | mostly have under other names; mapping below | S (audit) | S |

## Config keys: meaning-based mapping

These are IDA's analysis settings. The mapping is by meaning, not by code path.

- analysis.noret_ana: noreturn_known, noreturn_disc, noreturn_propagate.
- analysis.use_flirt: flirt.
- analysis.create_func_tails: functails, ehcold.
- analysis.create_jump_tables: the switch options.
- analysis.create_func_from_ptr: addrtakenentry.
- analysis.rename_nullsub: nullsubs (phases.toml:7176). analysis.rename_jumpfunc: thunknames (:7157).
- analysis.handle_eh: itaniumeh (:5805). analysis.handle_rtti: rtti (:6747).
- analysis.propagate_stkargs and analysis.propagate_regargs: calleevote (:3987), protoorder (:3968).
- analysis.op_offset and analysis.data_offset: addrtable (:6505), operand_refs (:6524).
- analysis.guess_func_type: typelib (:5639).
- analysis.should_trace_sp and analysis.full_sp_ana: decompile-time stack analysis (rows 16 and 17).
- analysis.del_no_xref_insns and analysis.truncate_on_del: no unlace row. Both act on edits made in the interactive database, which a batch run does not make.

## Top five missing, ranked for issues

1. **Type library autoload beside a signature** (row 22). Missing. Impact M: a matching .til gives the library functions prototypes and types. Size S.
2. **User-pinned SP delta points** (row 18). Missing. Impact S-M on functions whose stack analysis fails. Size S-M.
3. **No-return rename rules** (row 15). Partial: wildcard lists exist, rename rules do not. Impact S-M. Size S.
4. **FLIRT tail-byte skip at apply time** (row 23). Unverified: confirm in the matcher before building. Impact S. Size S.
5. **Undo journal with rollback** (row 3). Missing by design. Impact S-M for batch use. Size L. Open only if a corpus shows an order-dependent conflict.

Row 2 (re-queue of a changed range) is also missing, but kernel-autoanalysis.md row 17 records a decision not to add it, so it is not an issue.

## What this note adds to kernel-autoanalysis.md

- The driver, the fourteen-queue model, the resumable netnode tags, and the undo journal (rows 1 to 4). That file named the queue but not the driver.
- The processor-hook dispatch for switches and instruction analysis (rows 10 and 11).
- Entry points that file did not name: the xref dispatch (9), noret.cfg (15), the SP pin points (18), the FLIRT til autoload (22), and the config-key mapping (25).
