# Batch 10 Handoff: Maturity-Level Orchestration and Microcode Optimization

## Status

Historical foundation. A deeper handoff exists at `../BATCH10_HANDOFF.md`.
Active scheduler verification continues in Batch 16.

## Mission

Formalize the decompiler pipeline into IDA-like maturity stages from raw lifted
IR through final C output.

## Current State

- Maturity concepts, phase-driven scheduling, 64-bit demotion, combiner passes,
  and CMOV preservation are marked as present.
- The current gap is auditability: schedule snapshots, explicit exceptions, and
  tests that prevent phase oscillation.

## Primary Entry Points

- `crates/unlace-passes/src/pass.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/instrument.rs`
- `xtask/src/dump_pipeline.rs`
- `../BATCH10_HANDOFF.md`

## Next Worker Notes

- Keep the historical Batch 10 design as context, but implement new scheduler
  work through Batch 16.
- Every pass exception should have a reason string and test.
- Opt-in scheduler validation should remain available without noisy default CLI
  output.

## Verification

- `UNLACE_VALIDATE_PIPELINE=1 RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-passes pass`
- `RUSTC_WRAPPER= cargo xtask dump-pipeline`

## Done When

The pipeline order is observable, enforceable, and free of ambiguous phase
warnings in normal CLI output.
