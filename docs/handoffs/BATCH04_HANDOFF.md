# Batch 04 Handoff: TInfo-Style Type System and Type Propagation

## Status

Historical foundation with active expansion in Batch 20.

## Mission

Make type information a central analysis fact that flows through variables,
expressions, calls, fields, and casts.

## Current State

- Canonical `tinfo_t`-style structures, UDTs, enums, bitfields, function
  pointers, SIMD, aliases, `TypeDb`, type dispatch, member resolution, and type
  validation are marked as present.
- The open work is auditability, recursive propagation depth, and debug/symbol
  source integration.

## Primary Entry Points

- `crates/unlace-ir/src/tinfo.rs`
- `crates/unlace-ir/src/types.rs`
- `crates/unlace-passes/src/type_infer.rs`
- `crates/unlace-passes/src/op_type_binding.rs`
- `crates/unlace-loader/src/go_types.rs`

## Next Worker Notes

- Add type audits before expanding heuristics.
- Prefer carrying type facts through IR/HIR over printing casts to compensate.
- Verify recursive member lookup against nested structs, arrays, unions, and
  bitfields.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-ir tinfo`
- `RUSTC_WRAPPER= cargo test -p unlace-passes type`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`

## Done When

Types in final C can be traced back to debug info, signatures, propagation, or a
documented fallback.
