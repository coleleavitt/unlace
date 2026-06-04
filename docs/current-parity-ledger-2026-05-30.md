# Current Parity Ledger - 2026-05-30

This ledger reconciles the stale/reframed parity notes across
`docs/status.md`, `docs/golden-triage-2026-05-29.md`, the parity execution
plan, DREAM rollout notes, and Batch 27 handoff. Use it as the current
operator ledger when those documents disagree; `docs/status.md` remains the
public support matrix and should mirror the measured facts here.

## Current Measured State

| Area | Current truth | Remaining work |
|------|---------------|----------------|
| Stylistic fixture score | `bash scripts/score_parity.sh` reports `Stylistic Fixture Parity: 87.1%` on the current golden stream. | Keep it as a regression watchdog only. It is not semantic correctness or type parity. |
| Semantic report | `xtask semantic-report` has 20 passing host/source-known executable cases, 0 host/source-known XFAILs, 4 passing qemu-user non-host executable rows, 9 source-known shape PASS rows, 0 failures, and 0 unsupported source-known fixtures. | Keep the optimized branch/label-hoist regression covered, broaden executable argument cases, and add equivalent runners before promoting more shape rows into executable semantic pass/fail. `debug_cpp_rtti` and `debug_cpp_vtable` are shape-only until behavioral helpers can preserve RTTI/vtable semantics. |
| Type/variable report | `xtask type-recovery-report` reports `recovered=960 expected=960 reported=1407 recall=100.0% precision=68.2% raw_precision=66.6% raw_reported=1486 leaked_temp_decls=102` (29 fixtures / 131 functions); the missing ledger has 0 recoverable gaps and 57 source-oracle-only facts. Precision shares recall's fact scope (source-oracle-only emissions route to `raw_precision`) and excludes printer-marked synthetic carriers — local register/flag/temp carriers AND synthetic `__anon*` composites / `field_N` members; real DWARF structs and named fields still count. See the `precision excess ledger` / `reported local-decl classes` report sections. | Dominant remaining recoverable gap is local decls (+412 of the 447 excess) — `debug_medium`'s extra `v_NN` stack slots + param home-slots. Real lvar recovery needs a coordinated stack-frame change (CFA offset reconciliation + fusion guard + struct-type calibration + param decl-suppression/self-copy), validated holistically — five incremental attempts each regressed a different fixture. |
| Golden fixtures | `xtask golden-triage` is now the source-of-truth exact-line triage gate: 0 exact-pass rows and 15 review rows on the current worktree, classified row-by-row in `tests/golden/triage.toml` as 3 producer-bug and 12 mixed rows. | Do not blanket-refresh. Keep every expected-output change classified as producer bug, stale-golden, exact-pass, or mixed before changing stored C. |
| DREAM structuring | DREAM is default-on for accepted regions; `UNLACE_DREAM_STRUCT=0` is the rollback path. The multi-entry cyclic frontier is implemented as dispatch-free labelled abnormal-entry control. `medium` accepts the 68-block `f_ackermann` candidate without a synthetic dispatcher. Initial label-tail duplication, final dead-tail cleanup, and post-emission fallthrough-goto pruning reduce the measured `medium` emitted `goto label_*` / label counts from 81/57 to 75/51 while keeping `xtask semantic-report` green. | Continue reducing preserved irreducible labels/gotos through real tail duplication, trace scheduling, or stronger abnormal-entry structuring while keeping the no-dispatch rule. |
| SAILR cleanup | Broad cleanup passes are wired: loop/condition cleanup, short-circuit and condition normalization, safe duplication shapes, switch/condition normalization hooks, and per-fixture quality budgets in `quality_smoke`. | Tighten budgets as producers improve; do not relax them without a documented fixture reason. |
| Lvar quality and naming | Coalescing, coalesced-temp clusters, fact-derived names (`this`, `len`, `i`, `buf`, `result`), and role-over-generic handling for ABI argument names are partly wired. | Finish the real misses exposed by semantic/type metrics: loop-carried lvar loss, weak optimized params, stack-slot provenance, subregister aliases, and leaked temps. |

## Stale Or Reframed Claims

| Older claim | Current framing |
|-------------|-----------------|
| Type metrics are a 73/101 C/DWARF subset. | Stale. The current scorer covers 20 fixtures and 323 expected facts, including C++, optimized, source-only, non-host signature facts, precision, pointer, array, and struct-reference counters. |
| Lvar quality is wholly missing. | Reframed. Naming/coalescing work landed, and the prior `type_stack_o2` / `medium` / `stripped` semantic XFAILs now pass, but type precision and golden readability still show real lvar-quality gaps. |
| SAILR cleanup passes need to be added. | Reframed. Broad pass wiring and per-fixture budgets exist; the remaining work is tightening measured residual artifacts. |
| The real DREAM frontier is missing for `f_ackermann`. | Stale. The frontier is implemented with real labels/gotos and no synthetic dispatcher. The remaining work is quality: reduce preserved abnormal-entry labels/gotos without changing semantics. |
| The exact-line golden failures are simply stale. | Too broad. `xtask golden-triage` currently classifies 0 stored fixture goldens as exact-pass and 15 as review rows: some remaining failures are producer bugs and some are mixed stale/producer diffs. Use `tests/golden/triage.toml`. |

## Active Priority List

1. Keep `docs/status.md`, golden triage, and the parity execution plan
   reconciled with this ledger.
2. Keep the now-green host semantic gate covered with focused regressions for
   optimized stack/lvar recovery and empty-branch label-hoist control flow.
3. Keep `scripts/quality_axes.sh` running all axes even though the exact-line
   golden test exits nonzero; `score_parity.sh` reports the style score from
   emitted `[score]` lines and records the golden exit as a note.
4. Keep per-fixture quality budgets tight for allowed gotos, leaked temps, raw
   stack ops, unknown helpers, bad type facts, and semantic failures.
5. Continue DREAM quality work with trace scheduling / abnormal-entry structuring
   that lowers goto count without a synthetic dispatcher.
6. Use the type/variable report to target producer-side facts: optimized C/C++
   params and locals, pointer targets, array bounds, struct references,
   long-double/x87 types, and precision from temp suppression.
7. Keep the non-host semantic execution path enabled and extend qemu-user or
   `UNLACE_SEMANTIC_RUNNER_*` coverage before treating additional non-host
   source-known rows as pass/fail.
8. Track broader shipped-feature gaps separately: active FLIRT/SIG CLI wiring,
   split DWARF and full DW_OP location lists, PDB TPI/IPI breadth,
   dyld/kernel-cache filesets, Authenticode/SHA-2 verification, persistent
   `.unlace` projects, UI frontends, signed releases, and SBOM publishing.

## Verification Commands

Run these when moving claims in this ledger:

```bash
RUSTC_WRAPPER= bash scripts/score_parity.sh
RUSTC_WRAPPER= cargo run -p xtask -- golden-triage
RUSTC_WRAPPER= cargo run -p xtask -- semantic-report
RUSTC_WRAPPER= cargo run -p xtask -- type-recovery-report
RUSTC_WRAPPER= cargo run -p xtask -- validate-corpus-toml
RUSTC_WRAPPER= bash scripts/quality_axes.sh
```

`quality_axes.sh` should print all three axes. If it does not, run the
individual commands above and fix the wrapper before moving this ledger.
