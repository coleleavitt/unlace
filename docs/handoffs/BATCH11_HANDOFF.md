# Batch 11 Handoff: C Printer, CTree-Like Output, and Formatting

## Status

Historical foundation with active parity follow-up in Batch 19.

## Mission

Make final C output readable, stable, properly parenthesized, and usable by
interactive tools.

## Current State

- CExpr routing, CTree opcode model, precedence rules, line breaking,
  IDA-helper macros, and tagged output streams are marked as present.
- Recent output fixes live mostly in the C printer, but future work should move
  facts down into HIR/lvar/type layers where possible.

## Primary Entry Points

- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-output/src/expr_ast.rs`
- `crates/unlace-output/src/stream.rs`
- `crates/unlace-output/src/lib.rs`
- `crates/unlace-cli/tests/cli_smoke.rs`

## Next Worker Notes

- Printer cleanup should not compensate for missing analysis forever.
- Preserve side effects when folding expressions.
- Add snippet-level printer tests before broad C formatting changes.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-output --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`

## Done When

Supported constructs print valid, readable C without fake assignments, stale
temps, or helper spam.
