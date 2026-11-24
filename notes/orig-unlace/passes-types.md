# Original unlace type inference and constraint solver vs main

Scope: `origin/master` (3aaf121866) `crates/unlace-passes/src/type_infer.rs`, `type_infer/simd.rs` and `type_constraint_solver.rs`, read against `origin/main` (88645838b2). Excluded: the weighted vote (`type_vote/`) and `object_widen/`, which `notes/orig-unlace/research-type-recovery.md` (#1235) and issues #1244 and #1246 already cover.

Master runs both passes in order, `TypeInferPass` then `TypeConstraintSolverPass` (`crates/unlace-cli/src/pipeline.rs:2854-2861`), with a 30,000-constraint budget (`crates/unlace-passes/src/options.rs:97-107`). Main has no flat `PrimitiveType` lattice. Its pass runs on the Ghidra `Datatype` model in `ActionInferTypes`, so most of `type_infer.rs` is already covered there.

Method: I read the master code bodies, not its comments, and read the main functions named below. No build or run was made. "have" means main does the job by a different mechanism. Nothing here is measured against decbench or the datatests.

## Ranked: techniques the original has that main lacks or only partly has

| # | Technique | origin/master | main status | Port? | Size |
|---|---|---|---|---|---|
| 1 | Capability lattice over polymorphic type variables (Any, Bool, Float32/64, Pointer, Address, Callable, signed and unsigned Integer). Same-width integers stay polymorphic until a use decides their signedness (Retypd-style) | `type_constraint_solver.rs:91` (`TypeCapability`), `:116` (`CapSet`), `:520` (`solve_polymorphic_constraints`), `:856` (`meet_dense`), `:1007` (`materialize_primitive`); test `:1479` | **missing**. Main has no capability bounds. Same-width signedness comes from use votes at seed (`typevote.rs:61-70`, `undefinedN` only) | Measure first, behind an option. Master's profile puts this at 19.3% of runtime (`docs/profiling.md:117`). Already tracked as #1302, so no new issue | L |
| 2 | Constraint IR: collect `Equal`, `Subtype`, `PointsTo` and `SameType` from every IR op before solving, so the list can be inspected and tested | `type_constraint_solver.rs:51` (`Constraint`), `:305` (`collect_constraints`); consumer `counterexample_refine.rs:15` | **missing**. Main propagates per op inside `ActionInferTypes` (`coreaction_infertypes.rs:1388` `propagate_type`, `:2142` `propagate_one_type`), with no list | Only as the prerequisite for #1. Alone it duplicates `propagate_one_type` | M |
| 3 | Constraint budget: skip solving when the collected count exceeds `max_constraints` (default 30,000) | `type_constraint_solver.rs:39` (`type_constraint_over_budget`); `options.rs:97-107` | **missing**, but there is no constraint list to budget. Main's bound is the 7-pass settle ceiling (`coreaction_infertypes.rs:22`, `:2610`) | Only with #1 and #2 | S |
| 4 | x86 SIMD operand typing from the `CALLOTHER` tag and register width: lane domain from the tag, XMM/YMM/ZMM from the width, so operands get `__m128` and similar | `type_infer/simd.rs:25` (`x86_simd_operands`), tag table `:33-40`; test `type_infer.rs:849` | **partial**. Main types user-op operands by op name: `coreaction_infertypes.rs:325-364` (`vector_userop_type_at`, `vector_userop_type`) through `arch.vector_userops` and `avxintrin::vector_type` (`crates/unlace-middle/src/substrate/avxintrin.rs:294`). The gate is `VectorAbi` on `x86:LE:64` (`crates/unlace-middle/src/infra/architecture.rs:2216`). I found no tag-keyed table on main. Whether main leaves SSE operands untyped on real binaries is not measured | Maybe. Port the tag table as data, not the pass. New issue | S |
| 5 | Index-stride annotation: an `INT_ADD` or `PTRADD` whose offset is `idx * K` or `idx << K`, with K in {1,2,4,8,16}, is recorded as an array stride | `type_infer.rs:102` (`detect_array_strides`), `:131` (`stride_of_varnode`), `:117` (the accepted set) | **partial**. `RuleArrayStride` (`crates/unlace-bandb-base/src/p3_dataflow/arraystride.rs:56`) rewrites loop phi accumulators only. Divisor-based index scaling is `indexrescale.rs:1`. Not checked: whether an `IntLeft` index prints as `p[i]` | Measure first with a stage test on an -O2 loop that uses `shl`. New issue | S |

## Already on main (no port)

| # | Technique | origin/master | main status |
|---|---|---|---|
| 6 | `refine` lattice: Bool with Int gives Int, Ptr beats Bool and Int at size 4 or more, integers sized to the varnode (`type_infer.rs:230-246`, test `:1624`) | have. Ordering by `type_order` (`coreaction_infertypes.rs:1219`, `:2390`). Bool against char in `boolbyte.rs:88` (`truth_value_type`). Compares stay neutral for pointers (`ptrfromuse.rs:346-361`) |
| 7 | Pointer chain capped at one level (`type_infer.rs:1492` test, `chain_promoted` `:35`) | have: `cap_pointer_depth` (`crates/unlace-bandb-base/src/p5_types/ptrdepth.rs:50`) |
| 8 | Struct field type from `INT_ADD(base, const)` into a composite (`type_infer.rs:685` `lookup_struct_field_type`) | have: `propagate_int_add` (`coreaction_infertypes.rs:1865`), `structsynth.rs:1` |
| 9 | Seed from composite types, Struct, Array or Ptr becoming Ptr (`type_infer.rs:185` `seed_from_composites`) | have: `buildLocaltypes` seed (`coreaction_infertypes.rs:1-30`) |
| 10 | Cast output rules: unsigned in gives unsigned out, float size gives Float or Double (`type_infer.rs:761` `cast_output_type`) | have: per-op `propagate_type` (`coreaction_infertypes.rs:1388`) |
| 11 | Monotone freeze: a variable that collapsed to Unknown on conflict stays frozen (`type_infer.rs:254` `set_type`; `type_constraint_solver.rs:856` `meet_dense`) | have: `type_order` guard refuses a less specific type (`coreaction_infertypes.rs:1219`); the 7-pass ceiling bounds oscillation (`:22`) |
| 12 | 100-round iteration cap with a trace event (`type_infer.rs:32-47`) | have: 7-pass settle ceiling (`coreaction_infertypes.rs:22`, `:2610`) |
| 13 | Comparison keeps a pointer a pointer (`type_infer.rs:1682` test) | have: `ptrfromuse.rs:346-361` (a compare is neutral unless the other side is a nonzero constant); LOAD address propagation (`coreaction_infertypes.rs:1593`) |

Not ranked: master's `PointsTo` records the pointee but does not act on it (`type_constraint_solver.rs:23-26`). Main's `Datatype` carries a pointee (`coreaction_infertypes.rs:1262` `propagate_to_pointer`), so there is nothing to port.

## Recommendation

- Row 1 is the only fully missing technique with real weight. It is already tracked as #1302. Port it only as an option, after a decbench measurement that shows same-width signedness errors. Its runtime cost on master is the reason to measure first.
- Rows 4 and 5 are partial gaps with a specific question each. Each has a new issue with a repro to run. Neither should land without a measured case.
- Rows 6 to 13 are covered on main by other mechanisms. No port.

Model: anthropic/claude-haiku-5-5:default
