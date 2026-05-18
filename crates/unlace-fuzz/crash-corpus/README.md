# Persistent crash corpus

The `xtask fuzz` runner promotes every panic-inducing input it finds
into this directory:

```
crash-corpus/
├── inputs/
│   └── crash_<sha>.bin     # the minimal reproducing input
└── reports/
    └── crash_<sha>.json    # sidecar metadata (size, origin)
```

`crash_corpus_inputs_no_longer_panic` (in
`crates/unlace-fuzz/tests/fuzz_harness.rs`) walks `inputs/*.bin` on
every `cargo test --workspace` run and asserts none of them still
trigger `FuzzResult::Panicked`. That makes "fix" a binary, mechanical
outcome: once an input is here, the bug it represents stays fixed.

If you add a new entry by hand (e.g. while filing a bug report), keep
the filename `crash_<hash>.bin` and add a matching JSON sidecar.
