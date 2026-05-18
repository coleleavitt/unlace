# Batch 00 Handoff: Ground Truth, Safety, and Baselines

## Status

Historical foundation. The plan marks this complete, but use it as current
baseline infrastructure rather than as proof of parity.

## Mission

Prevent fake progress by making output regressions, fixture coverage, and
IDA-vs-Unlace gaps observable.

## Current State

- Regression corpus, corpus manifest, golden comparison tooling, structural
  counters, quality reporting, and initial regression gates exist.
- The quality command and smoke tests are the main active evidence surfaces.
- Later batches depend on these counters to prove output got better.

## Primary Entry Points

- `crates/unlace-cli/src/quality.rs`
- `crates/unlace-cli/tests/quality_smoke.rs`
- `xtask/src/compare_corpus.rs`
- `xtask/src/compare_golden.rs`
- `tests/golden/expected/`
- `docs/rebaseline-2026-05-17.md`

## Next Worker Notes

- When a later batch changes output, update or add quality counters before
  changing golden expectations.
- Prefer source-known fixture assertions over token-density claims.
- Keep historical parity claims quarantined unless they reproduce in the current
  checkout.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`
- `RUSTC_WRAPPER= cargo xtask lint-determinism`
- `RUSTC_WRAPPER= bash scripts/score_parity.sh`

## Done When

This batch stays done as long as later work cannot silently regress output
without a quality, golden, or fixture test noticing.
