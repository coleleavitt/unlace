# Batch 25 Handoff: Performance, Scale, and Hardening

## Status

Open roadmap batch.

## Mission

Make the decompiler reliable on large binaries and adversarial inputs.

## Current State

- Some batch and loader foundations exist.
- The plan calls for lazy lifting, persistent caches, deterministic parallel
  decompilation, memory-mapped binary access, fuzzing, panic-free paths, and
  throughput/RSS benchmarks.

## Primary Entry Points

- `crates/unlace-cli/src/batch.rs`
- `crates/unlace-cli/src/pipeline.rs`
- `crates/unlace-loader/src/lib.rs`
- `benches/spec/suite.rs`
- `xtask/src/validate_corpus.rs`

## Implementation Plan

1. Add lazy lifting and per-function on-demand decompilation.
2. Add persistent SSA/HIR/type cache keyed by binary hash, function range, and
   analysis configuration.
3. Add parallel decompilation with deterministic collection order.
4. Use memory-mapped binary access for large files and dyld shared caches.
5. Add whole-pipeline fuzz harness with crash corpus and minimized repros.
6. Make loader/decompiler paths panic-free for attacker-controlled inputs.
7. Add benchmarks for throughput, peak RSS, and worst-case pass iterations.

## Verification

- `RUSTC_WRAPPER= cargo test --workspace`
- `RUSTC_WRAPPER= cargo xtask lint-determinism`
- `RUSTC_WRAPPER= cargo bench`
- Fuzz repro tests for every fixed crash.

## Done When

Large binary analysis has bounded memory growth, usable progress reporting, and
new crashes become corpus entries with regression tests.

## Hazards

- Parallelism must not change output order or names.
- Caching must include all analysis inputs that affect output.
