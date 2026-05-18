# Batch 06 Handoff: Calling Conventions, Params, Varargs, and Noreturn

## Status

Historical foundation.

## Mission

Make calls print like source-level calls, with correct arguments, returns,
varargs, and noreturn behavior.

## Current State

- Stack-spec-driven arguments, printf format parsing, noreturn wiring, return
  merging, implicit `main` returns, void returns, and non-standard ABI recovery
  are marked as present.
- Recent fixes improved direct-call ABI argument preservation and hidden fortify
  argument handling.

## Primary Entry Points

- `crates/unlace-passes/src/calling_convention.rs`
- `crates/unlace-passes/src/calling_conv_finalize.rs`
- `crates/unlace-passes/src/calling_conv_coverage.rs`
- `crates/unlace-passes/src/noreturn.rs`
- `crates/unlace-passes/src/vararg_detect.rs`
- `crates/unlace-passes/src/libc_signatures.rs`
- `crates/unlace-struct/src/return_merge.rs`

## Next Worker Notes

- Keep ABI hidden arguments out of canonical libc output.
- Return merging must not invent stale `return result;`.
- Noreturn facts should remove unreachable tails without dropping live side
  effects before the call.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test printf_format_parse_wiring`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-struct --lib`

## Done When

Supported calls have stable prototypes, correct visible arguments, and no fake
return expressions.
