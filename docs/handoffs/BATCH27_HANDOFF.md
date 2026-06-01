# Batch 27 Handoff - Quality Axes And Real Metrics

## Purpose

Stop treating one fixture-style score as "parity." Batch 27 owns the real
measurement split:

- stylistic fixture similarity,
- semantic correctness,
- type/variable recovery accuracy.

The motivating research is `docs/research-ida-parity-gaps-2026-05.md`; the
execution plan is `docs/parity-quality-execution-plan-2026-05.md`. Current
stale/reframed claim reconciliation lives in
`docs/current-parity-ledger-2026-05-30.md`.

## Landed Slice

- `scripts/score_parity.sh` now reports `Stylistic Fixture Parity`.
- `xtask semantic-report` captures original-binary stdout/stderr/exit status,
  recompiles the decompiled C subset, compares behavior, synthesizes rodata
  format strings for the C subset, and reports PASS/XFAIL/unsupported rows.
  Current result: 17 total PASS rows (14 executable equivalence + 3 non-host
  shape-only), 3 XFAIL, 0 unexpected failed, 0 unsupported.
- The golden fixture metrics summary now emits fidelity taxonomy counters:
  control-flow, expressions, types, declarations, names, memory/stack, and
  unknown-helper artifacts.
- `xtask type-recovery-report` scores recovered DWARF and parsed-source facts
  against source/debug ground truth:
  `fixtures=20 functions=63 c_functions=49 cpp_functions=14 recovered=206 expected=323 reported=1115 recall=63.8% precision=18.5%`
  with `source_known=20 source_only=15 source_parsed=15
  dwarf_candidates=5 cpp_candidates=4 scored_cpp=4 optimized_scored=15
  scored_source_only=15 non_host_candidates=3 scored_non_host=3`.
- Added `type_stack_o2` (`-O2 -g -fno-omit-frame-pointer`) so type/stack
  recovery is not measured only on easy debug builds.
- `scripts/quality_axes.sh` runs the style score, semantic report, and
  type/variable recovery score. `scripts/score_parity.sh` reports the style
  score even though the exact-line golden test exits nonzero.
- README/status/plan now describe the style score as a regression watchdog,
  not semantic or type parity.

## Next Work

1. Convert the remaining semantic XFAIL rows into PASS rows. The current
   host/source-known XFAILs are `type_stack_o2`, `medium`, and `stripped`;
   `type_stack_o2` returns a stale optimized stack initializer instead of the
   call-result sum, while `medium`/`stripped` time out because optimized `main`
   still loses loop-carried lvar/phi and x86 subregister state.
2. Keep non-host semantic rows shape-only until an emulator or architecture
   runner is part of the gate.
3. Add per-fixture budgets for the fidelity counters so artifact categories can
   fail independently of exact-line goldens.
4. Use the expanded source-only/non-host score to drive producer-side recovery:
   optimized C/C++ params, locals, pointer targets, long-double/x87 types, and
   source struct refs are now visible as concrete misses.
5. Use the new precision denominator to drive producer-side temp/local
   suppression instead of only chasing recall.
6. Keep the CLI compileable-subset tests as focused regressions, but treat
   `xtask semantic-report` as the broader quality gate.

## Gates

```bash
RUSTC_WRAPPER= bash scripts/quality_axes.sh
RUSTC_WRAPPER= cargo run -p xtask -- validate-corpus-toml
RUSTC_WRAPPER= cargo run -p xtask -- semantic-report
RUSTC_WRAPPER= cargo run -p xtask -- type-recovery-report
RUSTC_WRAPPER= cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture
```

## Definition Of Done

- `docs/status.md` reports all three axes.
- Semantic correctness has a broad recompile-and-compare gate, and every
  unsupported source-known fixture is reported with a reason.
- Type/variable recovery has a denominator and then reports coverage, accuracy,
  and precision.
- Any axis that remains unmeasured is printed as unmeasured, not implied by the
  style score.
- Exact-line golden fixtures are mixed producer bugs plus stale/lossy expected
  output and should not be treated as a semantic-quality claim until each row
  is classified intentionally.
