# Batch 20 Handoff: Type and Symbol Fluency

## Status

Open roadmap batch.

## Mission

Turn type propagation and symbol recovery into a production subsystem that
survives into final output.

## Current State

- Type foundations exist, but auditability and broad sidecar integration are
  still open.
- The plan calls for `TInfo` propagation audits, recursive member resolution,
  active FLIRT/SIG support, deeper DWARF/PDB, and language metadata tracks.

## Primary Entry Points

- `crates/unlace-ir/src/tinfo.rs`
- `crates/unlace-ir/src/types.rs`
- `crates/unlace-passes/src/type_infer.rs`
- `crates/unlace-flirt/src/prologue.rs`
- `crates/unlace-loader/src/elf.rs`
- `crates/unlace-loader/src/macho.rs`
- `crates/unlace-loader/src/go_types.rs`

## Implementation Plan

1. Add a type audit that explains every type on variables, expressions, fields,
   call args, returns, and casts.
2. Verify recursive member resolution for nested structs, arrays, unions,
   bitfields, typedefs, function pointers, and anonymous aggregates.
3. Wire FLIRT/SIG support into the active CLI path with confidence output.
4. Deepen DWARF support for v5 loclists/rnglists, split DWARF, DW_OP variable
   locations, inline records, templates, and useful macros.
5. Deepen PDB support for TPI/IPI, UDTs, classes, enums, members, calling
   conventions, inlinee data, and FPO.
6. Add language metadata fixtures for C++, Rust, Go, ObjC, Swift, and plain C
   ABI runtimes.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-ir tinfo`
- `RUSTC_WRAPPER= cargo test -p unlace-passes type`
- `RUSTC_WRAPPER= cargo test -p unlace-loader`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`

## Done When

Debug binaries render meaningful names and prototypes, and stripped libc-using
binaries recover library calls without hiding user code.

## Hazards

- Do not make type guesses look like debug facts.
- Confidence and provenance must be visible for recovered names/prototypes.
