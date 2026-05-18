# Batch 12 Handoff: Loader, Scalability, and Project Memory

## Status

Historical foundation. The plan groups several completed loader and project
support slices here, with broader follow-up in Batches 23 through 25.

## Mission

Improve binary loading, scalability foundations, project scaffolding, PLT/GOT
resolution, and DWARF parameter extraction.

## Current State

- Loader clippy cleanup, `xtask scaffold`, musl build support, PLT/GOT symbol
  resolution, and DWARF parameter extraction are marked present.
- Future work must broaden format coverage, persistence, and scale behavior.

## Primary Entry Points

- `crates/unlace-loader/src/lib.rs`
- `crates/unlace-loader/src/elf.rs`
- `crates/unlace-loader/src/macho.rs`
- `crates/unlace-cli/src/batch.rs`
- `xtask/src/validate_corpus.rs`

## Next Worker Notes

- Loader facts should feed decompilation, not stop at parse-only structs.
- Keep malformed-input diagnostics structured and panic-free.
- Reuse this foundation for Batch 23 loader breadth and Batch 25 hardening.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-loader`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- `RUSTC_WRAPPER= cargo xtask validate-corpus`

## Done When

Loader-derived symbols, relocations, and debug facts survive into final
analysis and output where relevant.
