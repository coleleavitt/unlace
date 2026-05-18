# Batch 15 Handoff: End-to-End Output Correctness

## Status

Active and partially implemented.

## Mission

Prove final emitted C is semantically plausible, not only token-similar to an
expected file.

## Current State

- Source-known fixture gates exist for the first simple programs.
- Compileable-subset tests cover `hello_world.elf:main`, `branches.elf:main`,
  `loops.elf:main`, and `calls.elf:main`.
- Normal CLI output no longer emits phase-monotonicity noise by default.
- Negative-output checks catch null-address writes, stale placeholder returns,
  `Unimplemented` leaks, and related bad shapes in the current anchors.
- More fixture breadth is still open: arithmetic, stack locals, structs,
  switches, C++ vtables, and EH.

## Primary Entry Points

- `crates/unlace-cli/tests/cli_smoke.rs`
- `crates/unlace-cli/tests/quality_smoke.rs`
- `crates/unlace-cli/src/quality.rs`
- `tests/golden/expected/`
- `fixtures/`

## Implementation Plan

1. Add one new source-known fixture category at a time.
2. Decompile the target function, wrap only the needed typedefs/macros, compile
   with `cc` when available, and run behavioral checks.
3. Add negative assertions for bad C shapes seen in that fixture.
4. Update the quality report only when the metric is general enough to help
   future batches.
5. Review emitted C for semantic plausibility before accepting snapshots.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-output --lib`
- `git diff --check`

## Done When

Every major fixture family has at least one semantic final-C check, and simple
source-known outputs compile and behave like the source.

## Hazards

- Do not count an output as correct only because it matches a golden token file.
- Do not paper over invalid C with a compatibility prelude unless the helper is
  intentionally part of the emitted dialect.
