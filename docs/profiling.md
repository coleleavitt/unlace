# Profiling unlace

Three complementary profiling paths, from coarsest to finest:

| Tool | What it measures | When to use |
|------|------------------|-------------|
| `--stats` flag           | per-phase + per-function wall-clock, quality counters | first triage: find slow functions |
| `UNLACE_TIMING=1`        | per-pass aggregate wall-clock                          | second pass: find slow *passes* |
| `UNLACE_FLAME=<path>`    | call-stack-sampled span tree → folded → SVG flamegraph | deep dive into where a pass spends its time |

## --stats

Wall-clock + quality scorecard. The most useful starting point.

```bash
cargo run --release -p unlace-cli -- decompile <binary> --stats -o /tmp/out.c
```

Prints a per-phase table, the 5 slowest functions, and aggregate quality
counters (FLIRT-annotated calls, UNIMPLEMENTED leaks, goto survivors,
`__stack_chk_fail` calls, etc.) to stderr.

Empirical baseline (May 2026, /usr/bin/* x86_64):

| binary       | size  | functions | total time | hot fn share | UNIMPL | CALLOTHER | FLIRT |
|--------------|------:|----------:|-----------:|-------------:|-------:|----------:|------:|
| /usr/bin/true |  43 KB |  94 | 3.0 s   | top-2 = 50% | 0 | 0 | 8 |
| /usr/bin/wc   |  66 KB | 142 | 25.8 s  | top-3 = 75% | 0 | 3 | 13 |

## UNLACE_TIMING=1

Per-pass aggregate (count, total\_ms, avg\_ms, max\_ms):

```bash
UNLACE_TIMING=1 ./target/release/unlace decompile <binary> \
    --function <hot_fn> -o /dev/null
```

Real finding on `/usr/bin/wc` → `sub_3b30`:

| pass                   | count | total_ms | avg_ms |
|------------------------|------:|---------:|-------:|
| **TypeConstraintSolver** | 3     | 4041     | **1347** |
| condition-simplify     | 10    | 708      |   70   |
| TypeInfer              | 3     | 520      |  173   |
| algebraic-simplify     | 10    | 146      |   14   |

One pass burns 50% of the function's decompile budget. That's the bug.

There's also a CSV export:

```bash
UNLACE_TIMING_CSV=passes.csv ./target/release/unlace decompile ...
```

## UNLACE_FLAME=<path>

[`tracing-flame`](https://docs.rs/tracing-flame) captures the per-pass
span tree and writes folded stacks. Renders via
[`inferno`](https://crates.io/crates/inferno):

```bash
UNLACE_FLAME=/tmp/u.folded ./target/release/unlace decompile <binary> \
    --function <hot_fn> -o /dev/null
inferno-flamegraph < /tmp/u.folded > /tmp/u.svg
```

Existing artefacts under `docs/profiling/`:

* `wc-sub_3b30.flamegraph.svg` — flamegraph of the worst function in `wc`
* `wc-sub_3b30.folded-summary.txt` — deduped stack totals
* `zulip-techniques-digest.txt` — rust-lang Zulip extracts on
  worklist / fixed-point / interning / quadratic blowups

### Caveats

* `tracing-flame` records by **static span name + source location**, not
  by dynamic field. That's why every per-pass span appears in the folded
  output as `unlace_passes::instrument::pass:crates/.../instrument.rs:418`
  regardless of which pass was actually running. For pass-name-level
  attribution, use `UNLACE_TIMING=1` instead — that records by dynamic
  pass name.

* Sampling resolution is wall-clock between span enter/exit, not CPU
  cycles. For instruction-level hot-spot analysis we'd need a real
  sampling profiler (`perf record` + `cargo-flamegraph`), but `perf` is
  not always available — this path works on any host with no kernel
  permissions.

## When to reach for which tool

```
slow on a real binary?
        |
        v
[--stats]   → narrows to <= 5 hot functions
        |
        v
[UNLACE_TIMING=1 --function <hot>] → narrows to one pass
        |
        v
[UNLACE_FLAME=... --function <hot>] → flamegraph of internal hot-paths
```

## Reproducing the wc finding

```bash
cp /usr/bin/wc tmp/wc.elf
cargo build --release -p unlace-cli

# 1. find the slow function
./target/release/unlace decompile tmp/wc.elf --stats -o /dev/null

# 2. find the slow pass inside it
UNLACE_TIMING=1 ./target/release/unlace decompile tmp/wc.elf \
    --function sub_3b30 -o /dev/null 2>&1 | grep TypeConstraint

# 3. dump a flamegraph for that function
UNLACE_FLAME=/tmp/wc.folded ./target/release/unlace decompile tmp/wc.elf \
    --function sub_3b30 -o /dev/null
inferno-flamegraph < /tmp/wc.folded > /tmp/wc.svg
```
