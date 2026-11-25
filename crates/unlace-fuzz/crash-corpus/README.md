# Persistent crash corpus

A panic-inducing input becomes a regression fixture with one command:

```
unlace-fuzz --minimise crates/unlace-fuzz/crash-corpus < crash.bin
```

The command shrinks the input to the shortest prefix that still panics (`minimise_crash`),
then writes it under this directory. Nothing is written if the input does not panic (exit 3).

```
crash-corpus/
├── inputs/
│   └── crash_<hash>.bin     # the minimal reproducing input
└── reports/
    └── crash_<hash>.json    # sidecar: size, origin, stage, panic payload
```

`<hash>` is the 64-bit FNV-1a of the input bytes, as 16 hex digits.

`crash_corpus_inputs_no_longer_panic` (in `crates/unlace-fuzz/tests/integration.rs`) walks
`inputs/*.bin` on every `cargo test -p unlace-fuzz` run and asserts none of them still
trigger `FuzzResult::Panicked`. So once an input is here, the bug it represents stays fixed.
Commit the fix and the input together: the regression test must pass after the fix.
