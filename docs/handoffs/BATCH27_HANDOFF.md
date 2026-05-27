# Batch 27 Handoff - Quality Axes And Real Metrics

## Purpose

Stop treating one fixture-style score as "parity." Batch 27 owns the real
measurement split:

- stylistic fixture similarity,
- semantic correctness,
- type/variable recovery accuracy.

The motivating research is `docs/research-ida-parity-gaps-2026-05.md`; the
execution plan is `docs/parity-quality-execution-plan-2026-05.md`.

## Landed Slice

- `scripts/score_parity.sh` now reports `Stylistic Fixture Parity`.
- `xtask semantic-report` captures original-binary stdout/stderr/exit status,
  recompiles the decompiled C subset, compares behavior, synthesizes rodata
  format strings for the C subset, and reports PASS/XFAIL/unsupported rows.
  Current result: 15 passed, 2 XFAIL, 0 unexpected failed, 3 unsupported.
- The golden fixture metrics summary now emits fidelity taxonomy counters:
  control-flow, expressions, types, declarations, names, memory/stack, and
  unknown-helper artifacts.
- `xtask type-recovery-report` scores recovered C facts against DWARF/source
  ground truth for C debug fixtures:
  `fixtures=4 functions=17 recovered=73 expected=101 accuracy=72.3%`
  with `source_known=20 dwarf_candidates=5`.
- Added `type_stack_o2` (`-O2 -g -fno-omit-frame-pointer`) so type/stack
  recovery is not measured only on easy debug builds.
- `scripts/quality_axes.sh` runs the style score, semantic report, and
  type/variable recovery score.
- README/status/plan now describe the style score as a regression watchdog,
  not semantic or type parity.

## Next Work

1. Convert the remaining semantic XFAIL rows into PASS rows. The only current
   host/source-known XFAILs are `medium` and `stripped`; both time out because
   optimized `main` still loses loop-carried lvar/phi and x86 subregister
   state.
2. Keep non-host semantic rows unsupported until an emulator or architecture
   runner is part of the gate.
3. Add per-fixture budgets for the fidelity counters so artifact categories can
   fail independently of exact-line goldens.
4. Add type-recovery precision and richer fact normalization; the current
   scorer reports recovered/expected exact textual accuracy only.
5. Extend type scoring to C++ templates/RTTI and non-host fixtures where debug
   facts can be normalized.
6. Add per-optimization summaries for recovered/expected type facts, not just
   fixture denominator counts.
7. Keep the CLI compileable-subset tests as focused regressions, but treat
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
- Exact-line golden fixtures are still stale and should not be treated as a
  semantic-quality claim until rebaselined intentionally.
