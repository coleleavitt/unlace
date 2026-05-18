# Batch 24 Handoff: Interactive Project Model and Ecosystem

## Status

Open roadmap batch.

## Mission

Turn batch decompilation into a persistent reverse-engineering workflow.

## Current State

- Tagged output streams and plugin-related crates exist.
- The plan calls for a persistent `.unlace` project format, graph/hex APIs,
  stable plugin SDK boundaries, opt-in shared annotations, and UI tracks only
  after persistence is real.

## Primary Entry Points

- `crates/unlace-output/src/stream.rs`
- `crates/unlace-ir/src/xref.rs`
- `crates/unlace-plugin/src/lib.rs`
- `crates/unlace-plugin/src/registry.rs`
- `crates/unlace-plugin/src/wasm_sandbox.rs`
- `crates/unlace-plugin/src/python_bridge.rs`
- `crates/unlace-lumina/src/lib.rs`

## Implementation Plan

1. Define a persistent `.unlace` project format for renamed symbols, comments,
   user types, function boundaries, analysis cache, and annotation provenance.
2. Add xrefs, call graph, CFG graph, and hex-view APIs using `TaggedStream`.
3. Stabilize Rust plugin, WASM sandbox, Python bindings, and sample plugins.
4. Add Lumina-like shared annotations as opt-in only, with privacy and conflict
   rules.
5. Add TUI/LSP/web UI tracks only after user edits survive reanalysis.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-plugin`
- `RUSTC_WRAPPER= cargo test -p unlace-lumina`
- `RUSTC_WRAPPER= cargo test -p unlace-output stream`
- Round-trip project persistence tests.

## Done When

A user can rename a variable, type, or function, rerun analysis, and keep the
edit without plugins corrupting deterministic output.

## Hazards

- Do not start with UI before persistence semantics are real.
- Plugin APIs must not allow silent non-deterministic output changes.
