# Rebaseline Evidence - 2026-05-17

This is the current Batch 14 verification snapshot for the active checkout.
The narrow parity metric is useful as a regression signal, but it is not proof
of full IDA/Hex-Rays parity.

| Command | Result | Notes |
|---|---:|---|
| `RUSTC_WRAPPER= cargo check --workspace` | pass | Full workspace check completed. |
| `RUSTC_WRAPPER= cargo test --workspace` | pass | Full workspace tests and doctests completed. |
| `RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings` | pass | Full workspace clippy-clean after mechanical lint cleanup. |
| `cargo fmt --all -- --check` | pass | Formatting clean. |
| `RUSTC_WRAPPER= cargo xtask lint-determinism` | pass | `lint-determinism: OK`. |
| `RUSTC_WRAPPER= bash scripts/score_parity.sh` | pass | `Aggregate Parity: 100.0%` on the current narrow fixture metric. |
| `git diff --check` | pass | No whitespace errors in the current diff. |

Focused output check:

```c
int main(void) {
    puts("Hello"); return 0;
}
```

This confirms the focused `hello_world.elf --function main` failure class is
closed for the current pipeline: no synthetic null return-address write, the
`puts` string argument is recovered, and the immediate return temporary folds
to `return 0;`.

Additional CLI smoke evidence is covered by
`crates/unlace-cli/tests/cli_smoke.rs::batch14_rebaseline_cli_fixture_evidence`
for:

- `hello_world.elf:main`
- `medium.elf:main`
- `debug_calls.elf:compute`
- `cpp_vtable.elf:main`
- `arm64_features.elf:_start`
