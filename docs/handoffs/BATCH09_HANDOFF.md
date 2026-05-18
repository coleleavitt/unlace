# Batch 09 Handoff: Control Flow, Switches, Loops, and Exception Handling

## Status

Historical foundation with major quality follow-up in Batch 21.

## Mission

Reduce arbitrary gotos and recover source-level conditionals, loops, switches,
and exception handling.

## Current State

- Switch recovery, HIR refinement, condition simplification, nested-if collapse,
  null-check recovery, loop recovery, for-loop promotion, loop normalization,
  and C++ EH recovery are marked as present.
- Current loop-helper output still needs guard shaping, lvar splitting, and safe
  for-loop promotion.

## Primary Entry Points

- `crates/unlace-struct/src/structurer.rs`
- `crates/unlace-struct/src/loop_classify.rs`
- `crates/unlace-struct/src/switch_cleanup.rs`
- `crates/unlace-passes/src/switch_table_recovery.rs`
- `crates/unlace-passes/src/condition_simplify.rs`
- `crates/unlace-passes/src/msvc_seh.rs`

## Next Worker Notes

- Structure only from facts carried by HIR/SSA, not printer-only synthesis.
- Classify gotos by root cause before deleting labels.
- Keep irreducible CFG fallback explicit and readable.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-struct --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test jump_table_wiring`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke baseline_loops -- --nocapture`

## Done When

Reducible compiler-generated CFGs emit structured C, and irreducible or EH-heavy
cases produce clear annotated fallbacks.
