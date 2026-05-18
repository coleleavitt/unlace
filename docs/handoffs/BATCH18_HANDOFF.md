# Batch 18 Handoff: Lvar Allocation, Merge Safety, and Naming Verification

## Status

Open active roadmap batch.

## Mission

Verify lvar allocation, merging, and naming decisions instead of assuming they
are correct because lvar objects exist.

## Current State

- Historical lvar collection and naming exist.
- Final C cleanup currently suppresses some synthetic temps after printing; this
  should become lvar-layer behavior.
- The plan calls for lvar dumps, interference tests, naming priority tests, and
  declaration-count tracking.

## Primary Entry Points

- `crates/unlace-ir/src/lvar.rs`
- `crates/unlace-passes/src/lvar_collect.rs`
- `crates/unlace-passes/src/var_naming.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-cli/tests/lvar_collect_smoke.rs`

## Implementation Plan

1. Add lvar dump output with storage class, live range, type, address-taken
   state, volatile/barrier state, merge group, chosen name, and provenance.
2. Add interference graph tests for overlapping stack slots, register aliases,
   subregisters, address-taken locals, volatile/MMIO locals, and phi-connected
   SSA versions.
3. Add naming priority tests for `this`, debug names, args, locals, and
   assigned-only `result`.
4. Move flag-register, instruction-pointer, and one-shot temp suppression into
   lvar allocation.
5. Track declaration counts against source-known fixtures without making token
   count the goal.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test lvar_collect_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-passes lvar`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke`

## Done When

No fixture emits source variables solely for flags, IPs, or one-shot temps, and
lvar merge decisions are explainable from a dump.

## Hazards

- Avoid merge rules that improve one fixture by aliasing unrelated stack slots.
- Do not remove address-taken locals just because their values look unused.
