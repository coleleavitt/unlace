# Stub audit: live Rules and Actions whose apply body is a no-op

Scope: every Rule and Action registered in the live schedule (`crates/unlace-decomp/src/infra/universalaction.rs`) whose apply body does nothing, checked against `main` (this branch is cut from `origin/main`). `origin/master` ports are `crates/unlace-engine/...`. RulePtrArith (#1250) and RuleStructOffset0 (#1237) are excluded: they are already assigned.

Method: the registration rows give 103 Rule type names and 133 Action type names. Each `impl Rule for` / `impl Action for` block was located and its `apply_op` / `apply` body was stripped of comments and classified. Rule bodies that are only `return 0` or delegate to a stub were read by hand. The registration scan is regex-based; a registered type missing from it would not appear here.

## No-op stubs in the live schedule (ranked by impact)

| # | Kind | Name | Schedule group (universalaction.rs) | Main apply | Ghidra anchor | Live replacement on main | origin/master port | Blocker on main |
|---|---|---|---|---|---|---|---|---|
| 1 | Rule | RulePtrsubCharConstant | cleanup (row 1288) | `unlace-bandb/src/p3_dataflow/ruleaction_6.rs:1047` apply_op; every path returns 0 (1056, 1058); `push_const_further` (1018) also returns false | ruleaction.cc:7375 | none | `unlace-engine/src/ruleaction/pointer.rs:2021` (65 lines) | Stale. The W6 comment says the read-facing type is unavailable, but `Funcdata::vn_type_read_facing` exists (`unlace-bandb-core/src/p6_variables/funcdata_facing.rs:146`). `type_read_facing_stub` (ruleaction_6.rs:122) is a hard-coded Err. |
| 2 | Action | ActionParamDouble | protorecovery (row 1459) | `unlace-bandb/src/p4_calls/coreaction_protos.rs:1406` | coreaction.cc:1641 | none | `unlace-engine/src/coreaction/mod.rs:2768` (167 lines) | Stale. The STUB comment (coreaction_protos.rs:1418) cites an absent `getCallSpecs`; main has `Funcdata::get_call_specs` (funcdata.rs:1703), `FuncProto::is_input_active` (fspec.rs:7691), `split_trial` (fspec.rs:1745), `check_input_split` / `check_input_join` / `do_input_join` (fspec.rs:7059, 8010, 8062), and `is_double_precis_on` (funcdata.rs:3046). |
| 3 | Action | ActionLikelyTrash | protorecovery (row 1524) | `unlace-emit/src/p9_emit/coreaction_render.rs:1884` | coreaction.cc:2198 | none | `unlace-engine/src/coreaction/mod.rs:3534` (31 lines) | Mostly present: `FuncProto::trash_list` (fspec.rs:4502) and `Funcdata::find_covered_input` (funcdata_varnode.rs:1207). The trace helper that the port calls was not located on main; check the master body. |
| 4 | Action | ActionMultiCse | analysis (row 1391) | `unlace-emit/src/p9_emit/coreaction_render.rs:658` | coreaction.cc:894 | partial only: ActionLateCse (`unlace-bandb-base/src/p3_dataflow/latecse.rs`, row 1514) CSEs pure ops over readers; it does not merge MULTIEQUALs, which is what upstream ActionMultiCse does (latecse.rs:4-6) | `unlace-engine/src/coreaction/mod.rs:1162` (process_block loop) | none for the MULTIEQUAL merge |
| 5 | Action | ActionShadowVar | analysis (row 1392) | `unlace-emit/src/p9_emit/coreaction_render.rs:711` | coreaction.cc:907 | none. ActionHideShadow (`unlace-bandb/src/p6_variables/coreaction_cleanup.rs:2222`, row 1770) is coreaction.cc:4976, a different action | `unlace-engine/src/coreaction/mod.rs:1200` (52 lines) | none |
| 6 | Action | ActionForceGoto | blockrecovery (row 1462) | `unlace-emit/src/p9_emit/coreaction_render.rs:611` | coreaction.cc:686 | none | `unlace-engine/src/coreaction/mod.rs:998`: `Override::apply_force_goto(data, glb)` | Partly stale. The store exists: `Override` (`unlace-middle/src/p0_knowledge/overrides.rs:230`), `insert_force_goto` (overrides.rs:312), `Funcdata::get_override` (funcdata.rs:815). Missing: `apply_force_goto`. The console still reports `Override::insertForceGoto` unavailable (`unlace-console/src/console.rs:1312`). |
| 7 | Action | ActionNormalizeSetup | normalanalysis (row 1718) | `unlace-bandb/src/p3_dataflow/coreaction_early.rs:1158` | coreaction.cc:4801 | none | `unlace-engine/src/coreaction/prototype.rs:210` (6 lines): clear_input, set_model_lock(false), set_output_lock(false) | Stale. The STUB comment (coreaction_early.rs:1165) says FuncProto is an empty placeholder. Main has `Funcdata::get_func_proto_mut` (funcdata.rs:1523), `FuncProto::clear_input` (fspec.rs:6352, no glb argument), `set_model_lock` (fspec.rs:6110), `set_output_lock` (fspec.rs:6103). |

Notes on the table:
- Rows 1 to 7 have a body that does nothing, is registered in a group that runs on default options, and is not replaced by another live pass on main, except as noted for row 4.
- Row 6 runs in blockrecovery but only changes flow when a user force-goto override exists, so its impact is limited to that feature.
- Row 7 is in normalanalysis, which only runs for the normalize variant.

## Partial stubs, not filed

These rules have a live apply body with real code paths. A `STUB` annotation sits on a dead branch or a helper; they are not no-ops and were not filed. Not individually reviewed beyond the shape check: RuleDivTermAdd (ruleaction_6.rs:1877, `None => return 0`, STUB(W3-varnode)), RuleDivTermAdd2 (ruleaction_6.rs:2055), RulePositiveDiv, RuleEqual2Zero, Rule2Comp2Sub, RuleExtensionPush, RulePieceStructure, RuleBoolSignShift, RuleBoolSignLess, RuleSborrowGe, RuleOvLessSimplify, RuleAndDistribute, RuleSubvarSext, RuleStackProbeLoop, RuleArrayStride. RuleOrPredicate and RuleDumptyHumpLate delegate to real `apply_op_inner` bodies (condexe.rs:1480, subflow.rs:6281).

Stale annotation: RulePushPtr (`unlace-bandb/src/p3_dataflow/ruleaction_5.rs:1305`) is marked STUB-stubbed, but its apply body (1345-1420) rewrites the add tree. It is live.

Three rules without a direct `impl Rule for` hit are live: RuleEarlyRemoval (`unlace-bandb-core/src/p3_dataflow/ruleaction_1.rs:115`), RuleDoubleInputPair (`unlace-bandb-base/src/p5_types/borrowcompare.rs:1035`), RuleSwiftString (`unlace-bandb-base/src/p5_types/swiftstr.rs:828`).

## Not verified

- Actions were checked for direct no-op bodies. An action whose body calls a helper that is itself a no-op was not traced.
- Rule apply bodies that return 0 only on a guard failure were judged by shape, not by running them. Nothing was built or run, per the audit rules.
