# Batch 02 Handoff: IDA-Style Stack Pointer and Stack Variable Recovery

## Status

Historical foundation with active follow-up in Batch 17.

## Mission

Recover stack variables from SP/BP-relative memory access in an
architecture-neutral way.

## Current State

- `StackSpec`, operand-to-frame resolution, stack arg/local classification,
  dynamic stack support, and frame member refinement are marked complete.
- Current remaining stack work is not basic discovery; it is provenance
  preservation through SSA, lvar allocation, and final printing.

## Primary Entry Points

- `crates/unlace-passes/src/stack_pointer_tracking.rs`
- `crates/unlace-passes/src/stack_context.rs`
- `crates/unlace-passes/src/prologue_elim.rs`
- `crates/unlace-ir/src/lvar.rs`
- `crates/unlace-output/src/c_printer.rs`
- `research/prologue_sp_notes.md`

## Next Worker Notes

- Do not solve stack output failures only in the printer. Batch 17 should move
  frame facts into storage/lvar provenance.
- Keep saved-register spill slots separate from source locals.
- Distinguish real absolute null memory access from lost frame-relative
  provenance.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-passes stack`

## Done When

Stack locals and args render from stable provenance rather than late fallback
string cleanup.
