# Batch 21 Handoff: Control Flow, Switches, Loops, and EH Quality

## Status

Open roadmap batch.

## Mission

Raise structured output quality for branches, loops, switches, and exception
handling beyond the current fixture-level foundation.

## Current State

- Control-flow recovery exists, but optimized loop helpers still need guard
  shaping and `for`-loop promotion.
- The plan calls for goto classification, region-structuring tests, expanded
  switch recovery, loop recovery, and EH reconstruction.

## Primary Entry Points

- `crates/unlace-struct/src/structurer.rs`
- `crates/unlace-struct/src/loop_classify.rs`
- `crates/unlace-struct/src/switch_cleanup.rs`
- `crates/unlace-passes/src/switch_table_recovery.rs`
- `crates/unlace-passes/src/indirect_jump_resolve.rs`
- `crates/unlace-passes/src/msvc_seh.rs`

## Implementation Plan

1. Rebaseline gotos per fixture and classify each one as reducible,
   irreducible, artifact, tail jump, switch artifact, or EH artifact.
2. Add region-structuring tests for diamonds, nested conditionals,
   short-circuit chains, guarded exits, shared-exit loops, and irreducible CFGs.
3. Expand switch recovery for compressed jump tables, branch-table-of-branches,
   binary-search switches, string hash switches, computed gotos, and ranges.
4. Expand loop recovery for while/do normalization, induction-variable `for`
   loops, break/continue, and loop-invariant cleanup after structuring.
5. Deepen EH for Itanium LSDA, `.eh_frame`, `.gcc_except_table`, MSVC SEH,
   cleanup/destructor paths, and typed catch rendering.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-struct --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test jump_table_wiring`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-passes switch`

## Done When

Reducible compiler-generated CFGs avoid arbitrary gotos, and EH-heavy C++
fixtures produce source-level try/catch or clear annotated fallback.

## Hazards

- Do not erase labels in irreducible CFGs just to improve a metric.
- Preserve exception cleanup paths even when they do not render cleanly yet.
