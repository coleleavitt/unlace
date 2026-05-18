# Batch 05 Handoff: Whole-Program Interprocedural Recovery

## Status

Historical foundation.

## Mission

Stop treating functions as isolated units by propagating signatures, return
types, `this` facts, and vararg information across the call graph.

## Current State

- Whole-program interproc helper, SCC fixed point, signature propagation,
  return type propagation, `this` propagation, variadic callee detection, and
  callsite argument naming are marked as present.
- Later work should make the interproc facts visible in quality output and type
  audits.

## Primary Entry Points

- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-passes/src/whole_prog_type_unify.rs`
- `crates/unlace-passes/src/whole_prog_cc.rs`
- `crates/unlace-passes/src/caller_param_propagate.rs`
- `crates/unlace-passes/src/vararg_detect.rs`

## Next Worker Notes

- Preserve deterministic iteration order over functions and call graph edges.
- Keep source-known call fixtures in sync with signature propagation changes.
- Make unknown interproc facts explicit rather than guessing prototypes.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test interproc_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test printf_format_parse_wiring`
- `RUSTC_WRAPPER= cargo xtask lint-determinism`

## Done When

Call signatures improve final output without non-deterministic naming or
prototype churn.
