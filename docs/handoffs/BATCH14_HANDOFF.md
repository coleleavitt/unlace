# Batch 14 Handoff: Reality Rebaseline and Claim Cleanup

## Status

Mostly complete. Keep this as the current truth checkpoint and refresh it when
the quality baseline materially changes.

## Mission

Replace stale "100% parity" claims with reproducible current evidence.

## Current State

- `docs/rebaseline-2026-05-17.md` records the current verification snapshot.
- Workspace check, fmt, tests, clippy, determinism lint, and narrow parity score
  are recorded as passing in the rebaseline.
- CLI smoke evidence covers representative fixtures.
- Output sanity counters exist for null dereference sites, stale bad returns,
  and `Unimplemented` token leaks.
- Remaining quality-gate work is for empty structured bodies, impossible
  lvalues, and lost stack-frame offsets once provenance is rich enough.

## Primary Entry Points

- `docs/rebaseline-2026-05-17.md`
- `plan.md`
- `README.md`
- `crates/unlace-cli/src/quality.rs`
- `crates/unlace-cli/tests/quality_smoke.rs`
- `crates/unlace-cli/tests/cli_smoke.rs`

## Next Worker Notes

- Any broad output change should update the rebaseline or clearly explain why
  no baseline change is needed.
- Do not promote parity claims based only on the narrow score script.
- Hard gates should distinguish true binary behavior from recovery artifacts.

## Verification

- `RUSTC_WRAPPER= cargo check --workspace`
- `RUSTC_WRAPPER= cargo test --workspace`
- `RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings`
- `cargo fmt --all -- --check`
- `RUSTC_WRAPPER= cargo xtask lint-determinism`

## Done When

Project status docs and public claims match measured behavior in the current
checkout.
