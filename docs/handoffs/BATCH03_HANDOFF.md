# Batch 03 Handoff: LVAR Allocation, Merging, and Naming

## Status

Historical foundation with active verification follow-up in Batch 18.

## Mission

Create a real local-variable layer between raw SSA temporaries and final C.

## Current State

- `Lvar` collection, storage-aware merging, interference rules, temporary and
  flag suppression, naming priority, `result` handling, and remapping are marked
  present.
- Batch 18 must prove these decisions with dumps, tests, and source-known
  declaration counts.

## Primary Entry Points

- `crates/unlace-ir/src/lvar.rs`
- `crates/unlace-passes/src/lvar_collect.rs`
- `crates/unlace-passes/src/var_naming.rs`
- `crates/unlace-output/src/c_printer.rs`
- `crates/unlace-cli/tests/lvar_collect_smoke.rs`

## Next Worker Notes

- Treat printer-side suppression of temps as a temporary compatibility layer.
- Add explainable lvar dumps before broad merge-rule changes.
- Keep `result` only when it is assigned and source-visible.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-cli --test lvar_collect_smoke`
- `RUSTC_WRAPPER= cargo test -p unlace-passes lvar`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`

## Done When

Lvar names, merges, and suppressed declarations can be explained from lvar data,
not inferred from final C text after the fact.
