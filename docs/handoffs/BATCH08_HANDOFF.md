# Batch 08 Handoff: Indirect Calls, Vtables, Function Pointers, and Dispatch

## Status

Historical foundation.

## Mission

Recover high-level dispatch for C++ vtables, Objective-C selectors, Rust/Go
dynamic dispatch, and function pointers.

## Current State

- C++ vtable dispatch, ObjC selector/prototype recovery, and Rust/Go dispatch
  recognition are marked as present.
- Open future work is better type/symbol propagation and source-level call
  rendering for real-world stripped binaries.

## Primary Entry Points

- `crates/unlace-passes/src/indirect_call_resolve.rs`
- `crates/unlace-passes/src/cpp_vtable.rs`
- `crates/unlace-passes/src/cpp_method.rs`
- `crates/unlace-loader/src/objc.rs`
- `crates/unlace-cli/tests/cli_smoke.rs`

## Next Worker Notes

- Do not hide unresolved indirect calls behind overconfident names.
- Preserve confidence and provenance for recovered targets.
- Keep vtable/itab facts connected to type recovery, not only call printing.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke cpp`
- `RUSTC_WRAPPER= cargo test -p unlace-passes vtable`
- `RUSTC_WRAPPER= cargo test -p unlace-loader objc`

## Done When

Recovered dynamic dispatch improves call readability while unresolved targets
remain honest and annotated.
