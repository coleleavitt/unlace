# Batch 19 Handoff: CTree and Printer Parity

## Status

Open active roadmap batch.

## Mission

Make final output quality a first-class system with coverage for expression,
statement, and top-level printing behavior.

## Current State

- The C printer has a CExpr/CTree-like foundation and many recent quality fixes.
- Some cleanup still happens late in final C text, which should be reduced as
  HIR/lvar/type facts improve.
- The plan calls for a CTree coverage table, final-output tests, readability
  rewrites, cross-statement folding, and HIR-level CSE/LICM gates.

## Primary Entry Points

- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-output/src/expr_ast.rs`
- `crates/unlace-output/src/stream.rs`
- `crates/unlace-struct/src/structurer.rs`
- `crates/unlace-passes/src/cse.rs`
- `crates/unlace-passes/src/licm.rs`

## Implementation Plan

1. Build a printer coverage table for every C expression and statement node:
   arity, precedence, side effects, type behavior, and tests.
2. Add final-output tests for parenthesization, casts, helper macros, wrapping,
   comments, xrefs, source-line provenance, and semantic tokens.
3. Add readability rewrites with side-effect guards: byte/word macros only when
   clearer, `MEMORY[addr]` only for truly unanalyzable globals, no fake
   assignments, and no redundant casts.
4. Add cross-statement expression folding only when it cannot duplicate side
   effects.
5. Gate post-structuring CSE/LICM with final-C tests.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-output --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-struct --lib`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`

## Done When

The printer can fail gracefully with annotated helper calls, but it does not
emit invalid C for ordinary supported constructs.

## Hazards

- Do not duplicate volatile or call side effects while folding.
- Do not hide missing analysis behind prettier text output.
