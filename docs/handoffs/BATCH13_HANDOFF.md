# Batch 13 Handoff: Lifter Coverage and Architecture Tuning

## Status

Historical foundation with deeper architecture accountability in Batch 22.

## Mission

Reduce architecture-specific blind spots and measure decoder/lifter coverage.

## Current State

- Architecture fixture tuning, per-architecture coverage metrics, priority
  architecture ordering, x86/AArch64/ARM gap reduction, Callother lowering, and
  lifter conformance tests are marked present.
- Batch 22 must separate production-quality architecture support from
  fixture-only or stub support.

## Primary Entry Points

- `crates/unlace-lift*/`
- `crates/unlace-test-harness/src/regfile_coverage.rs`
- `xtask/src/lifter_coverage.rs`
- `tests/golden/expected/*features.c`

## Next Worker Notes

- Do not equate crate existence with architecture support.
- Track decode, lift, ABI, branch, SIMD/FPU, and real-binary pass rates
  separately.
- Prioritize x86_64 and AArch64 depth before adding new names.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-lift`
- `RUSTC_WRAPPER= cargo test --workspace lifter`
- `RUSTC_WRAPPER= cargo xtask lifter-coverage`

## Done When

Architecture support claims match measured scorecards and real fixture output.
