# Original unlace type recovery vs main

Source: `research/hexrays-type-recovery.md` (Hex-Rays 9.3sp1 type recovery, sections S1 lvar typing,
S2 pointer typing, S3 struct fields, S4 arrays, S5 signatures) and its 1,879-row call-site TSV. The
"original" is `origin/master` (the archived research decompiler). "Main" is `origin/main` at 188480126a.
`notes/archived-master-inventory.md` is on neither branch, so I started from `notes/ida-gap/`
(`types-plugins-sigs.md`, `hexrays-ctree-printer.md`, `hexrays-microcode.md`) to avoid repeating what
those already record.

Status: **have** = main does the job; **partial** = a piece is there; **missing** = absent. Paths are
relative to the repo root. Main's lvar typing runs on Ghidra's `Datatype` model, so the research doc's
"no pointee" gap (its section 4, item 8) does not hold for main.

## Ranked: techniques the original has that main lacks or stubs

| # | Technique (Hex-Rays ref) | origin/master | main status | Port? | Size |
|---|---|---|---|---|---|
| 1 | Pointer arithmetic correction: split a pointer expression into a typed root and a scaled offset, then print `p[i]`, `p->m`, `p[i].m` (S2, `sub_270860`/`sub_276380`) | `crates/unlace-output/src/c_printer/cpa/mod.rs:1` (`plan_access` :144, `struct_member` :297) | **partial**. `RulePtrArith` is a stub: its `applyOp` is a no-op (`crates/unlace-bandb/src/p3_dataflow/ruleaction_5.rs:885-895`), so INT_ADD trees are not turned into PTRADD/PTRSUB. Index forms come from `arraynotation` (`phases.toml:1376`) and `castindex` (`phases.toml:5373`) | yes: the stub is the gap | L |
| 2 | Weighted candidate vote for a variable's type: each use votes, the best-supported type wins, and "unknownness" ranks candidates before support (S1, `sub_2A1C00`, `sub_2A3210`, `sub_2A3780`) | `crates/unlace-passes/src/type_vote/ballot.rs:38` (`unknownness`), :91 (`decide`); run from `crates/unlace-cli/src/pipeline.rs:2866` | **missing**. Conflicts resolve by Ghidra's `type_order` fold, first in order wins (`crates/unlace-bandb-core/src/p5_types/coreaction_infertypes.rs:772`, `crates/unlace-bandb-base/src/p6_variables/declhightype.rs:89`). `typevote.rs:1` votes only for `undefinedN` variables | yes, behind an option: measure first on decbench | M |
| 3 | Whole-object retyping for globals and frame members: record every access to an object, then rebuild the object as an array or struct with gap bytes when accesses run past its extent (S3/S4, `sub_27E790`, `sub_27BC20`, `sub_27AE10`) | `crates/unlace-passes/src/object_widen/mod.rs:1`, `widen.rs:108` (`room`), `access.rs`, `synthesize.rs` | **partial**. Frame arrays: `arrayextent.rs:1` (lifts the 4-element cap), `arraysize.rs:1`, `stackstruct.rs:1` (address-taken records). Globals: `globalarrayanchor.rs:315` keeps bases apart; no whole-object rebuild | yes for globals | M |
| 4 | Ranked merge of a recovered prototype with a declared one, slot by slot, scored (S5, `sub_381E90` rank-aware `set_type`, `score_tinfo`) | `crates/unlace-passes/src/caller_param_propagate.rs:1` (call-site vs callee-body rank) | **partial**. `protomerge.rs:1` merges two declared prototypes slot by slot and names `score_tinfo` as its model. `protoorder.rs:9` and `calleevote.rs:1` carry recovered types across callers. No scored choice between a recovered and a declared slot | yes | M |
| 5 | Array-of-struct loop recovery: a loop whose base is `arr + STRIDE*i` with fixed-offset stores gives a struct layout keyed by the base (research S4 array access map; original's "t213") | `crates/unlace-passes/src/struct_field_recovery.rs:38` (`recover_structs`), :122 (`struct_tile_address`) | **partial**. `arraystride.rs:1` rewrites the stride accumulator as `cnt*STRIDE`; `structsynth.rs:1` synthesizes only from constant-offset dereferences of pointer parameters. No indexed-base layout | yes | M |
| 6 | Own calling convention from body register reads, scored per model with a fit check (S5, `guess_func_cc`) | `crates/unlace-passes/src/calling_convention.rs:87` (`detect_calling_convention`), :495 (`score_convention`) | **partial**. Model choice is Ghidra's `select_model` over cspec models (cited by `crates/unlace-decomp/tests/verify_w6_s4_fspec_2.rs:516`); `calleedeadarg.rs:1` does entry liveness. No body-read scoring | maybe: measure first | S |
| 7 | Byte-swapped load pattern recovered as a packet struct (not in the Hex-Rays doc; unlace-original) | `crates/unlace-passes/src/packet_struct.rs:56` (`detect_packet_struct`), :211 (`output_is_byte_swapped`) | **missing** (no match in `unlace-bandb*`, `unlace-emit`, `unlace-structure`) | defer: only for network or firmware code | S |
| 8 | Minimum arity over all call sites for an unknown callee (S5, min stack bytes over sites) | `crates/unlace-passes/src/callee_guess/guess.rs:25` (`guess_from_call_sites`), `vararg_detect.rs:68` (`detect_variadic_callees`) | **partial**: `calleeprotostack.rs`, `calleedeadarg.rs:1`, per-site trials in `calleevote.rs:1` | no: no corpus gap shown | S |
| 9 | Scalar fallback that a later pass may replace (S1, `sub_29E310`, `CVAR_PARTIAL`) | missing | **partial**: `typevote.rs:1` covers `undefinedN`; no replaceable marker | no | S |
| 10 | Shifted-pointer marker (S2 section 5, `GTA_IS_SHIFTED_PTR`, 3 call sites) | missing | **missing** | no: three call sites in 9.3sp1, no evidence in our corpus | S |

## Already on main (no port)

| Technique (Hex-Rays ref) | origin/master | main status |
|---|---|---|
| Pointer lattice with pointee and a ctree retype fixpoint (S2, `sub_2523C0`) | flat `PrimitiveType::Ptr`, no pointee (research gap 8) | **have** on the Datatype model (`coreaction_infertypes.rs:772`); the 10-round rebuild is replaced by the `universal_sched` fixpoint |
| Printf/scanf format typing of varargs (S5, `sub_EB240`) | `printf_type_infer.rs:54`, `vararg_detect.rs:120` | **have**: `crates/unlace-bandb/src/p4_calls/varargformat.rs`, `crates/unlace-bandb-base/src/p4_calls/formatwitness.rs` |
| Union member choice (S3, `sub_272540`) | none | **have**: `crates/unlace-bandb-base/src/p5_types/unionresolve.rs:1` (`ScoreUnionFields`) |
| Member path from offset access, nearest member (S3, `sub_272C50`, `sub_273A40`) | `cpa/mod.rs:297` | **have**: `structsynth.rs:1`, `fieldtype.rs:34` |
| Callee purge and purged bytes (S5) | none verified | **have**: `crates/unlace-bandb-base/src/p4_calls/calleepurge.rs:1`, `calleeretpurge.rs` |
| `_BYTE[n]` gap members in a frame struct (S3, `sub_2309F0`) | `object_widen/synthesize.rs` | **have**: `stackstruct.rs:1` |
| Divisor-scaled index (S4, `lvar_t::divisor`) | none | **have**: `crates/unlace-bandb-base/src/p5_types/indexrescale.rs:1` |
| Backward propagation of call-site evidence into callee prototypes (S5, `sub_2A1800`) | `caller_param_propagate.rs:1`, `interproc_types/apply.rs` | **have**: `protoorder.rs:9`, `calleevote.rs:1` |

## Notes

- Items 1-3 are where main is clearly behind the original by code reading. None of the gaps is measured here
  (no cargo runs were made for this note), so each port needs its own decbench or corpus check first.
- Items 4-6 are partial on main and need a measurement before a port. Items 7-10 are low value for now.
- Out of scope per owner: lifters, MCP, debugger, emulator. Nothing here proposes porting hand-written lifters.
