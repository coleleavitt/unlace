# Batch 16 Handoff: IDA Evidence-Driven Maturity Scheduler

## Status

Open active roadmap batch.

## Mission

Make the pipeline order observable and enforceable, following the maturity
orchestration pattern visible in `sub_14B8B0.c`.

## Current State

- Batch 10 introduced the maturity model as a foundation.
- Current CLI scheduler validation is opt-in via `UNLACE_VALIDATE_PIPELINE=1`.
- Normal CLI output should remain free of ambiguous phase warnings.
- The plan still calls for pass-schedule audits, per-maturity snapshots,
  explicit exception metadata, and oscillation tests.

## Primary Entry Points

- `crates/unlace-passes/src/pass.rs`
- `crates/unlace-passes/src/instrument.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `xtask/src/dump_pipeline.rs`
- `docs/BATCH10_HANDOFF.md`

## Implementation Plan

1. Add a machine-readable schedule audit showing pass name, phase/maturity
   before, maturity after, changed flag, and reason for any exception.
2. Add opt-in IR snapshots for generated SSA, preoptimization, local
   optimization, stack recovery, call recovery, global optimization, lvars, and
   final HIR/CTree.
3. Replace generic out-of-order warnings with explicit allowed backedges,
   fixed-point loops, maximum iteration counts, and reason strings.
4. Add regression tests proving rerunning stack, lvar, type, and output passes
   does not oscillate or undo prior facts.

## Verification

- `UNLACE_VALIDATE_PIPELINE=1 RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-passes pass`
- `RUSTC_WRAPPER= cargo xtask dump-pipeline`
- `RUSTC_WRAPPER= cargo xtask lint-determinism`

## Done When

A representative decompile can explain scheduler order without ambiguous
warnings, and inserting a pass into the wrong phase fails a test.

## Hazards

- Avoid making normal CLI output noisy.
- Snapshot output must be deterministic.
- Do not use the scheduler to hide pass regressions; make exceptions explicit.
