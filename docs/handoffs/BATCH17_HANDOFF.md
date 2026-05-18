# Batch 17 Handoff: Stack and Frame Provenance

## Status

Active current target.

## Mission

Close the gap where frame-relative memory loses provenance and prints as
nonsensical C, especially the historical `*(_QWORD *)(0LL)` failure class.

## Current State

- Copy propagation no longer lets later physical-register copies poison earlier
  raw-register uses.
- SCCP treats first-use register reads as runtime values instead of `COPY 0`.
- The C printer has a stack-frame fallback for RSP/RBP-derived memory
  expressions.
- Prologue/SP passes detect split-block callee-saved stores and suppress
  visible frame setup.
- Current anchors have zero final-C null deref, stale bad return, and bad token
  counters.
- `sum_for` no longer emits `v20`, stale `result`, placeholder `cond`, empty
  then/else scaffolding, or bare non-void tail `return;`.
- Remaining work is to move printer fallbacks into lvar/storage provenance and
  finish loop-helper guard shaping, lvar splitting, and for-loop promotion.

## Primary Entry Points

- `crates/unlace-passes/src/stack_pointer_tracking.rs`
- `crates/unlace-passes/src/prologue_elim.rs`
- `crates/unlace-passes/src/stack_context.rs`
- `crates/unlace-passes/src/lvar_collect.rs`
- `crates/unlace-ir/src/lvar.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-struct/src/loop_classify.rs`
- `crates/unlace-struct/src/return_merge.rs`
- `research/prologue_sp_notes.md`

## Implementation Plan

1. Add explicit stack-access provenance records: instruction address, base
   register, delta, access width, dtype, resolved slot, and confidence.
2. Carry those records into lvar/storage objects so final printing can render
   locals/args without reparsing address expressions.
3. Move saved-register, entry-arg, and frame-slot suppression decisions out of
   C-printer cleanup where possible.
4. Add tests for frame-pointer omission, dynamic `alloca`, red-zone use,
   saved-register stores, stack args, byref locals, and overlapping slots.
5. Finish optimized loop-helper cleanup from analysis facts: split loop counter
   lvars, shape guards, and promote safe induction-variable loops to `for`.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-struct --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-output --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke loops_sum_for_avoids_placeholder_condition_loop -- --nocapture`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke baseline_loops -- --nocapture`
- `cargo fmt --all -- --check`
- `git diff --check`

## Done When

Stack variables in debug and stripped fixtures render as stable locals or args
from provenance-backed lvars, and loop-helper C is structured without
printer-only synthesis.

## Hazards

- Do not collapse unknown frame references to address zero.
- Do not turn saved-register spills into source locals.
- Do not fake `for` loops unless HIR carries the induction update and bounds
  safely enough.
