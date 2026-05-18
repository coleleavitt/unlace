# Batch 07 Handoff: Struct, Union, Array, and Field Recovery

## Status

Historical foundation with deeper type/member work continuing in Batch 20.

## Mission

Recover memory layout as source-level fields, array indices, bitfields, and
nested aggregate accesses.

## Current State

- Member/index/deref CExpr wiring, struct operand tracing, nested aggregate
  recovery, bitfield pattern recovery, and DWARF-backed member names are marked
  present.
- Future work should verify recursive member resolution and avoid fallback array
  syntax for known struct accesses.

## Primary Entry Points

- `crates/unlace-output/src/expr_ast.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-struct/src/bitfield_recovery.rs`
- `crates/unlace-passes/src/union_recovery.rs`
- `crates/unlace-passes/src/sizeof_recognition.rs`

## Next Worker Notes

- Prefer typed aggregate recovery over textual pointer arithmetic rewrites.
- Ensure low-address globals and RIP-relative globals are resolved before array
  fallback logic.
- Add tests where nested fields survive all the way to emitted C.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-struct bitfield`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-output --lib`

## Done When

Known aggregate accesses print as fields or indices with explainable type and
offset provenance.
