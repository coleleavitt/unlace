# unlace

`unlace` is a multi-architecture decompiler engine written in Rust. The
long-term engineering target is high functional and structural parity with
industry-standard decompilers (Hex-Rays, Ghidra). Current support is **measured
fixture-by-fixture** and recorded in [`docs/status.md`](docs/status.md) — not
claimed as complete.

Unlace is headless: a command-line tool and a Rust library. It has no GUI,
TUI, or web UI. Results go to stdout or files, diagnostics go to stderr, and
every command runs without prompts, so it fits scripts, CI, and agent
pipelines.

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
| Stylistic fixture score | `Stylistic Fixture Parity: 83.0%` from `cargo xtask gate` on the current fixture metric | [`docs/status.md`](docs/status.md) §"Quality axes" |
| Quality-axis report | `cargo xtask gate` reports stylistic score, `xtask semantic-report` executable equivalence status, and the DWARF/source-backed type/variable score | [`docs/parity-quality-execution-plan-2026-05.md`](docs/parity-quality-execution-plan-2026-05.md) |
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
- Full DW_OP/location-expression breadth and robust split-DWARF sidecar
  discovery on real-world corpora. Initial DWO references, v5 loclists/rnglists,
  and merge hooks exist.
- PDB local-location breadth beyond the scoped `S_LOCAL` / `S_REGREL32` /
  defrange/IPI slice. Basic TPI lowering is wired into the active pipeline.
- dyld kernel-cache/fileset support and broad real-world cache coverage.
  Standalone Mach-O reassembly from dyld cache images exists.
- FLIRT/SIG library-quality coverage and confidence propagation beyond the
  currently wired CLI matching path.
- IDAPython xrefs and `ida_hexrays::decompile` compatibility beyond the current
  partial shim.
- Switch / EH structuring on broad real-binary corpora.
- Cross-statement expression folding and IDA-style helper macros
  (`LOBYTE`, `HIDWORD`, `COERCE_*`).
- Packer/protector and obfuscator support beyond today’s preliminary detection:
  UPX-family remnants, Scylla-rebuilt imports, damaged PE import sections,
  nonstandard executable sections, control-flow flattening, opaque predicates,
  string/API-hash decoding, and clear unsupported markers for protected samples.
- Large dumped PE support: `.pdata`/TLS/import/Go metadata function discovery,
  progress reporting, resumable per-function output, and AST/HIR/quality streams
  for binaries where whole-image decompilation is not practical.
- Initial-load packer diagnostics: deterministic JSON/Markdown handoff files for
  packer/obfuscator evidence, unsupported recovery steps, and optional LLM/agent
  planning without embedding provider secrets.

## What is aspirational

Listed in [`docs/roadmap.md`](docs/roadmap.md). These items have **no shipped
code** behind them yet:

- Persistent `.unlace` project format with rename/comment/type round-trip.
- Reproducible signed releases published to GitHub (the local
  [`docs/signed-releases.md`](docs/signed-releases.md) describes the intended
  layout; the workflow is not yet active).
- Plugin SDK with Rust + WASM sandbox + Python bindings.
- Opt-in LLM-assisted reverse engineering over CLI/SDK/MCP surfaces. Model
  output should propose packer IDs, names, comments, and triage hypotheses with
  provenance; deterministic evidence remains authoritative and secrets stay in
  user runtime configuration, never in repo docs or project state.
- IDA/Hex-Rays reference corpus ingestion from both headless `idat` batch dumps
  and idalib resumable per-function dumps.

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
- `crates/unlace-output` — C printer.
- `crates/unlace-cli` — CLI + end-to-end pipeline + `quality` subcommand.
- `crates/unlace-sbom` — CycloneDX SBOM generator.
- `crates/unlace-test-harness` — golden fixture scoring.

## Quickstart

```bash
# Decompile a function (production-tier archs only — see docs/status.md).
unlace decompile <binary> --addr <offset>

# Score recovered output against the IDA-style quality counters.
unlace quality <binary>

# Report all quality axes honestly (`--quick`: golden triage + stylistic score).
cargo xtask gate

# Generate a CycloneDX SBOM from Cargo.lock.
cargo xtask sbom --out sbom.json
```

## Verification gates

Run these locally. `docs/status.md` records the latest quality-axis snapshot;
older rebaseline notes are historical once the status matrix has moved.

```bash
RUSTC_WRAPPER= cargo check --workspace
RUSTC_WRAPPER= cargo nextest run --workspace
RUSTC_WRAPPER= cargo test --workspace --doc
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
RUSTC_WRAPPER= cargo xtask lint-determinism
cargo fmt --all -- --check
RUSTC_WRAPPER= cargo xtask gate
```

Disable `sccache` (`RUSTC_WRAPPER=`) — the workspace builds reliably without
it, and the cached macro-expansion can stale on this codebase.

## Coverage and benchmarks

The checkout has Criterion benches wired through `unlace-cli`. Use
`cargo-llvm-cov` for coverage and `cargo-codspeed` when a CodSpeed runner or
local simulation/walltime run is desired.

```bash
# LCOV for upload tools, or HTML for local inspection.
RUSTC_WRAPPER= cargo llvm-cov --workspace --all-features --lcov --output-path target/llvm-cov/lcov.info
RUSTC_WRAPPER= cargo llvm-cov --workspace --all-features --html --output-dir target/llvm-cov/html

# Existing Criterion benches.
RUSTC_WRAPPER= cargo bench -p unlace-cli --bench decompile_medium
RUSTC_WRAPPER= cargo bench -p unlace-cli --bench spec_suite
RUSTC_WRAPPER= cargo bench -p unlace-cli --bench hexrays_throughput

# CodSpeed build/run path.
cargo codspeed build -p unlace-cli --bench decompile_medium --bench spec_suite --bench hexrays_throughput
cargo codspeed run -p unlace-cli
```

## Documentation map

| File | Purpose |
|------|---------|
| [`docs/status.md`](docs/status.md) | **Source of truth.** Architecture, loader, type/debug, and output support matrices. |
| [`docs/architecture-audit-2026-06-21.md`](docs/architecture-audit-2026-06-21.md) | Current source-backed Rust architecture/style audit and next module-extraction queue. |
| [`docs/current-parity-ledger-2026-05-30.md`](docs/current-parity-ledger-2026-05-30.md) | Current stale/reframed parity reconciliation across status, golden triage, DREAM, and handoff docs. |
| [`docs/roadmap.md`](docs/roadmap.md) | Long-term parity direction. Bands, not schedule. |
| [`docs/research-ideas.md`](docs/research-ideas.md) | Speculative / parking-lot items with no commitment. |
| [`docs/historical-sessions.md`](docs/historical-sessions.md) | Older session-export claims, segregated from current status. |
| [`docs/rebaseline-2026-05-17.md`](docs/rebaseline-2026-05-17.md) | Older full-gate verification snapshot. Historical once `docs/status.md` has newer live evidence. |
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
