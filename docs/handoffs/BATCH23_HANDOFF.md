# Batch 23 Handoff: Loader, Format, and Debug Breadth

## Status

Open roadmap batch.

## Mission

Make binary ingestion competitive on real-world files and ensure loader/debug
facts feed decompilation.

## Current State

- ELF, Mach-O, Go type, ObjC, and other loader code exists, but format breadth
  and sidecar integration need hardening.
- The plan calls for deeper ELF, PE/COFF, Mach-O/dyld, firmware/container, and
  managed/VM format support.

## Primary Entry Points

- `crates/unlace-loader/src/lib.rs`
- `crates/unlace-loader/src/elf.rs`
- `crates/unlace-loader/src/macho.rs`
- `crates/unlace-loader/src/objc.rs`
- `crates/unlace-loader/src/ttd_trace.rs`
- `xtask/src/validate_corpus.rs`

## Implementation Plan

1. Complete ELF relocations, PLT/GOT, IFUNC, TLS, GNU hash, compressed debug,
   core dump, and Android note handling.
2. Add PE/COFF relocations, delay imports, resources, Authenticode, CFG/CET,
   PDB lookup, and SEH `.pdata`/`.xdata`.
3. Expand Mach-O/dyld shared cache extraction, chained fixups, slide info,
   ObjC/Swift sections, and kernel cache filesets.
4. Add firmware/container formats: Intel HEX, S-record, ESP32, STM32, UEFI,
   Android boot/vendor images, and iOS IMG4.
5. Add managed/VM formats: Wasm/WASI/component, eBPF/BTF, EVM, Java, Android
   dex/oat/art, .NET CIL, Python `.pyc`, and Lua bytecode.

## Verification

- `RUSTC_WRAPPER= cargo test -p unlace-loader`
- `RUSTC_WRAPPER= cargo xtask validate-corpus`
- `RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke`
- Malformed fixture tests for every new parser path.

## Done When

Loader tests cover malformed inputs with structured diagnostics, and parsed
debug/type sidecars are tied into decompilation.

## Hazards

- Parse-only support is not enough; loader facts need consumer tests.
- Treat all input files as attacker-controlled.
