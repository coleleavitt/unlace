# unlace

`unlace` is a multi-architecture decompiler engine written in Rust. The
long-term engineering target is high functional and structural parity with
industry-standard decompilers (Hex-Rays, Ghidra). Current support is **measured
fixture-by-fixture** and recorded in [`docs/status.md`](docs/status.md) — not
claimed as complete.

If you are evaluating unlace, start with the status matrix. Everything below is
either evidence that has already landed or design intent we have not yet
verified end-to-end.

## What ships today

| Area | Evidence | Source of truth |
|------|----------|-----------------|
| Architecture tiers (production / beta / fixture-only / stub) | `arch_support::support_matrix_markdown()` pinned by a unit test | [`docs/status.md`](docs/status.md) |
| Loader support (ELF, PE/COFF, Mach-O, dyld cache, Intel HEX, …) | Per-format parser + symbol/debug-ingest matrix | [`docs/status.md`](docs/status.md) |
| Expression printer (IDA `cot_*` coverage) | 36 explicit `CExpr` variants pinned by `cexpr_coverage_lists_every_variant`; remaining ~33 dispatch through `Binary` | [`crates/unlace-output/src/COVERAGE.md`](crates/unlace-output/src/COVERAGE.md) |
| Output quality counters (`nullderef`, `badret`, `badtok`, `empty_bodies`, `impossible_lvalue`, `lost_frame_offsets`) | Pinned at 0 for `hello_world.elf`, `branches.elf`, `loops.elf` | [`docs/status.md`](docs/status.md) §"Output quality counters" |
| Stylistic fixture score | `Stylistic Fixture Parity: 84.5%` from `bash scripts/score_parity.sh` on the current fixture metric | [`docs/status.md`](docs/status.md) §"Quality axes" |
| Quality-axis report | `bash scripts/quality_axes.sh` reports stylistic score, `xtask semantic-report` executable equivalence status, and the DWARF/source-backed type/variable score | [`docs/parity-quality-execution-plan-2026-05.md`](docs/parity-quality-execution-plan-2026-05.md) |
| Determinism in output-affecting crates | `cargo xtask lint-determinism` rejects `HashMap` / `HashSet` in `unlace-ir`, `unlace-passes`, `unlace-struct`, `unlace-output` (use `BTreeMap` / `BTreeSet` or `// determinism:allow`) | [`docs/determinism.md`](docs/determinism.md) |
| Reproducible-build / SBOM tooling | `cargo xtask sbom` emits a CycloneDX 1.4 BOM from `Cargo.lock` | [`crates/unlace-sbom`](crates/unlace-sbom/) |

The fixture score is a **stylistic regression watchdog** on a narrow fixture
metric. It is not semantic correctness, type recovery accuracy, or full
Hex-Rays parity. Anything claiming "100% parity" without that qualification is
wrong.

## What is experimental

Items where code exists and basic cases work, but full-corpus quality is not
yet measured. These are the *next* things to land, not what you can rely on
today.

- ABI / calling-convention recovery beyond x86_64 / AArch64 / x86.
- DWARF v5 split-DWARF (`.dwo` / `.dwp`) and full DW_OP location lists.
- PDB TPI/IPI walker beyond the slice currently surfaced in
  `composite_var_types`.
- dyld shared cache extraction past plan/assemble of standalone Mach-O blobs.
- Switch / EH structuring on broad real-binary corpora.
- Cross-statement expression folding and IDA-style helper macros
  (`LOBYTE`, `HIDWORD`, `COERCE_*`).

## What is aspirational

Listed in [`docs/roadmap.md`](docs/roadmap.md). These items have **no shipped
code** behind them yet:

- FLIRT/SIG-driven library name recovery wired into the active CLI path.
- Persistent `.unlace` project format with rename/comment/type round-trip.
- LSP / TUI / Web UI front-ends.
- Reproducible signed releases published to GitHub (the local
  [`docs/signed-releases.md`](docs/signed-releases.md) describes the intended
  layout; the workflow is not yet active).
- Plugin SDK with Rust + WASM sandbox + Python bindings.

If an item appears in `docs/roadmap.md` but not in `docs/status.md`, it has
**not landed**. The status file is the only authority for "shipped".

## Architecture overview

```
loaders → lifters (per-arch) → IR (pcode-like + SSA) → passes
       → control-flow structuring (HIR) → C printer → output
```

Key crates:

- `crates/unlace-ir` — core IR, SSA, arch ids, types.
- `crates/unlace-loader` — binary loaders, DWARF/PDB/signature support.
- `crates/unlace-lift-*` — per-architecture lifters.
- `crates/unlace-passes` — IR and SSA recovery passes.
- `crates/unlace-struct` — HIR and control-flow structuring.
- `crates/unlace-output` — C printer with `TaggedStream` token model.
- `crates/unlace-cli` — CLI + end-to-end pipeline + `quality` subcommand.
- `crates/unlace-sbom` — CycloneDX SBOM generator.
- `crates/unlace-test-harness` — golden fixture scoring.

## Quickstart

```bash
# Decompile a function (production-tier archs only — see docs/status.md).
unlace decompile <binary> --addr <offset>

# Score recovered output against the IDA-style quality counters.
unlace quality <binary>

# Stylistic parity score on the current fixture set.
bash scripts/score_parity.sh

# Report all quality axes honestly.
bash scripts/quality_axes.sh

# Generate a CycloneDX SBOM from Cargo.lock.
cargo xtask sbom --out sbom.json
```

## Verification gates

Run these locally — the rebaseline note records the last set of pass results.

```bash
RUSTC_WRAPPER= cargo check --workspace
RUSTC_WRAPPER= cargo test --workspace
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
RUSTC_WRAPPER= cargo xtask lint-determinism
cargo fmt --all -- --check
RUSTC_WRAPPER= bash scripts/score_parity.sh
RUSTC_WRAPPER= bash scripts/quality_axes.sh
```

Disable `sccache` (`RUSTC_WRAPPER=`) — the workspace builds reliably without
it, and the cached macro-expansion can stale on this codebase.

## Documentation map

| File | Purpose |
|------|---------|
| [`docs/status.md`](docs/status.md) | **Source of truth.** Architecture, loader, type/debug, and output support matrices. |
| [`docs/current-parity-ledger-2026-05-30.md`](docs/current-parity-ledger-2026-05-30.md) | Current stale/reframed parity reconciliation across status, golden triage, DREAM, and handoff docs. |
| [`docs/roadmap.md`](docs/roadmap.md) | Long-term parity direction. Bands, not schedule. |
| [`docs/research-ideas.md`](docs/research-ideas.md) | Speculative / parking-lot items with no commitment. |
| [`docs/historical-sessions.md`](docs/historical-sessions.md) | Older session-export claims, segregated from current status. |
| [`docs/rebaseline-2026-05-17.md`](docs/rebaseline-2026-05-17.md) | Most recent verification snapshot. |
| [`docs/parity-quality-execution-plan-2026-05.md`](docs/parity-quality-execution-plan-2026-05.md) | Current plan for semantic correctness, fidelity taxonomy counters, and DWARF/type-variable accuracy gates. |
| [`docs/handoffs/README.md`](docs/handoffs/README.md) | Per-batch handoffs and the active implementation backlog. |
| [`docs/determinism.md`](docs/determinism.md) | Why output-affecting crates use ordered maps. |
| [`docs/signed-releases.md`](docs/signed-releases.md) | Intended reproducible-build / signed-release layout. |
| [`docs/PARITY_PLAN.md`](docs/PARITY_PLAN.md) | Long-range roadmap. Numbers inside are *historical* — use `docs/status.md` for current state. |
| [`plan.md`](plan.md) | Active backlog with batch boundaries. |
| [`CLAUDE.md`](CLAUDE.md) | Guidance for AI agents working in this repo. |

If two documents disagree about what is "done", `docs/status.md` wins for
public support claims and the current parity ledger explains stale/reframed
implementation details.

## License

Dual-licensed under either of:

- Apache License, Version 2.0 — <https://www.apache.org/licenses/LICENSE-2.0>
- MIT license — <https://opensource.org/licenses/MIT>

at your option. This matches the `license = "MIT OR Apache-2.0"` field in the
workspace `Cargo.toml`. Local `LICENSE-APACHE` / `LICENSE-MIT` files are not
yet committed — adding them is tracked in
[`docs/roadmap.md`](docs/roadmap.md) under "production hardening".
