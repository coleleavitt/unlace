# Phase 10 Learnings

## P10-0: Baseline Metrics (2026-04-30)

Captured pre-Phase-10 per-fixture metrics. Aggregate parity: **52.9%** (down from 59.6% at Phase 9 end — likely due to new cpp/x87 fixtures added in Phase 8-9 that have lower parity).

Key observations:
- **medium.c** dominates complexity: gotos=30, ifs=39, vars=82
- **cpp_rtti.c** is the only C++ fixture with gotos (2) — others are goto-free
- **debug_calls.c** has high var count (48) but zero gotos/ifs — pure declaration-heavy
- All debug fixtures (calls/hello/structs) have zero gotos — good baseline
- Total gotos across all fixtures: 32 (30 from medium alone = 94%)
- Phase 10 goal: reduce medium.c gotos via structured control flow recovery

Evidence: `.sisyphus/evidence/p10-baseline-metrics.txt`
