# SPEC Decompiler Benchmark Suite

A standardised benchmarking suite for evaluating decompiler quality and
performance, analogous to SPEC CPU for compilers.

## Overview

The suite measures:

1. **Throughput** — functions decompiled per second across varying binary sizes
2. **Correctness** — semantic equivalence of output against golden references
3. **Readability** — structural metrics (nesting depth, variable count, etc.)
4. **Scalability** — performance vs binary size (linear, sub-linear, or super-linear)

## Benchmark Categories

### Category A: Micro (single-function)
Small, well-understood functions exercising specific patterns:
- `a01_loop_counter` — simple for-loop with increment
- `a02_nested_branch` — if/else chains (3+ levels)
- `a03_switch_table` — dense switch with 16 cases
- `a04_struct_access` — field access through pointer chains
- `a05_call_chain` — 5 levels of non-inlined calls

### Category B: Meso (single translation unit)
Medium complexity (~50–200 functions):
- `b01_sqlite_vdbe` — SQLite virtual machine core
- `b02_zlib_inflate` — zlib decompression
- `b03_lua_parser` — Lua parser + code generator

### Category C: Macro (full binary)
Complete real-world binaries:
- `c01_coreutils_ls` — GNU coreutils `ls`
- `c02_busybox` — BusyBox multi-call binary
- `c03_nginx` — nginx web server

## Running

```bash
# Run all benchmarks
cargo bench --bench spec_suite

# Run a single category
cargo bench --bench spec_suite -- category_a

# Generate comparison report (JSON)
cargo bench --bench spec_suite -- --output-format json > report.json
```

## Scoring

Each category produces a score normalised to a baseline (unlace v0.1.0 on
the reference hardware). The geometric mean across categories gives the
composite "SPEC Decompiler" score, enabling cross-version comparisons.

## Adding New Benchmarks

1. Place the fixture binary in `fixtures/spec/<category>/`
2. Add the golden reference C output in `fixtures/spec/<category>/<name>.golden.c`
3. Register in `benches/spec/suite.rs` under the appropriate category

## Reference Hardware

Baseline measurements taken on:
- AMD Ryzen 9 7950X (16C/32T)
- 64 GB DDR5-5600
- NVMe SSD (7 GB/s seq read)
- Linux 6.8, Rust 1.82
