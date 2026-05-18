# Batch 01 Handoff: Wire Existing Passes into the Real Pipeline

## Status

Historical foundation. The plan marks the pass-wiring work complete.

## Mission

Make useful existing passes run in the actual CLI pipeline instead of existing
only as libraries or experiments.

## Current State

- Stack pointer tracking, prologue elimination, indirect call resolution,
  operand type binding, vararg recovery, language passes, and real type
  inference are listed as wired.
- Pipeline regressions now usually appear as pass-order, maturity, or output
  quality issues in later batches.

## Primary Entry Points

- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/lib.rs`
- `crates/unlace-passes/src/pass.rs`
- `xtask/src/dump_pipeline.rs`

## Next Worker Notes

- Before adding a new pass, confirm whether an unwired or partially wired pass
  already exists.
- Add every new pass to pipeline dumps and phase metadata.
- If output gets worse, inspect pass order before changing the pass itself.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo xtask dump-pipeline`
- `UNLACE_VALIDATE_PIPELINE=1 RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`

## Done When

The active CLI path runs the intended passes, exposes their order, and has tests
that fail if an important pass silently drops out.
