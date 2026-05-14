# Hex-Rays Throughput Benchmarks

Comparative benchmarks measuring unlace throughput against Hex-Rays
decompiler on identical binaries. Target: within 2× of Hex-Rays
wall-clock time for full-binary decompilation.

## Methodology

1. **Same binary, same functions**: Both tools decompile the same set of
   functions from identical stripped ELF/PE/Mach-O binaries.
2. **Wall-clock measurement**: Total time from "start" to "all functions
   decompiled", including I/O.
3. **Per-function granularity**: Individual function timings allow
   identification of pathological cases.
4. **Cold vs warm**: Measure both first-run (cold cache) and repeat-run
   (warm filesystem cache) performance.

## Metrics

| Metric | Definition |
|--------|-----------|
| `funcs/sec` | Functions successfully decompiled per second |
| `bytes/sec` | Input binary bytes processed per second |
| `p50_latency` | Median per-function decompilation time |
| `p99_latency` | 99th percentile per-function time |
| `timeout_rate` | Fraction of functions exceeding 30s timeout |

## Test Binaries

| Binary | Size | Functions | Arch |
|--------|------|-----------|------|
| `coreutils-ls` | 147 KB | 312 | x86-64 |
| `nginx` | 1.2 MB | 1,847 | x86-64 |
| `ffmpeg` | 12 MB | 18,432 | x86-64 |
| `chromium-renderer` | 89 MB | 142,000+ | x86-64 |
| `libcrypto.so` | 3.1 MB | 4,200 | AArch64 |

## Running

```bash
# Run unlace throughput measurement
cargo bench --bench hexrays_throughput

# Generate comparison CSV (requires IDA + idapython results in fixtures/)
python3 scripts/compare_throughput.py \
    --unlace results/unlace.json \
    --hexrays fixtures/hexrays_timings.json \
    --output comparison.csv
```

## Current Results (v0.1.0-dev)

Target is ≤2× Hex-Rays wall-clock time:

| Binary | Hex-Rays | unlace | Ratio |
|--------|----------|--------|-------|
| coreutils-ls | 0.8s | TBD | — |
| nginx | 3.2s | TBD | — |
| ffmpeg | 38s | TBD | — |

*Results will be populated as benchmarks mature.*

## Profiling Hot Spots

Known areas where unlace spends disproportionate time:
- Type constraint solving (quadratic in constraint count)
- Dominator tree computation (large CFGs)
- SSA phi-node placement (high fan-in merge points)
- C printer (string formatting overhead)
