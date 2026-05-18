# Batch 22 Handoff: Architecture Depth, Not Architecture Count

## Status

Open roadmap batch.

## Mission

Separate reliable architecture support from crate existence or fixture-only
coverage.

## Current State

- Many lifter crates and some architecture metrics exist.
- The plan calls for architecture scorecards, support-tier reclassification,
  x86_64/AArch64 depth first, expanded high-value instruction coverage, and
  per-architecture golden IR/final C fixtures.

## Primary Entry Points

- `crates/unlace-lift*/`
- `crates/unlace-test-harness/src/regfile_coverage.rs`
- `xtask/src/lifter_coverage.rs`
- `tests/golden/expected/*features.c`
- `README.md`

## Implementation Plan

1. Define a scorecard with decoder coverage, lift semantics coverage, ABI
   coverage, branch/return/switch coverage, SIMD/FPU/atomic coverage, and real
   binary corpus pass rate.
2. Reclassify every architecture as production, beta, fixture-only, or stub.
3. Prioritize x86_64 and AArch64 before broadening support claims.
4. Expand x86, AArch64, ARM32, MIPS, PPC, and RISC-V high-value semantics.
5. Add per-architecture golden IR and final C fixtures.

## Verification

- `RUSTC_WRAPPER= cargo xtask lifter-coverage`
- `RUSTC_WRAPPER= cargo test --workspace lifter`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo xtask lint-determinism`

## Done When

README support claims match scorecards, and stub lifters cannot be presented as
full architecture support.

## Hazards

- Do not add architecture names without corpus and final-C evidence.
- Decoder coverage alone is not decompiler support.
