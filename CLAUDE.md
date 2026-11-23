# unlace — Claude Instructions

Primary guide for this repo. `AGENTS.md` is a symlink to this file; `docs/dev-setup.md` holds
the build recipe, gates, hooks and worktree layout; `CLAUDE.local.md` (git-excluded, optional)
holds machine-local notes; `MEMORY.md` holds local handoff notes. Look things up on demand via the **doc map** at the bottom — don't preload it.

## Mission
unlace is an **agent-first decompiler written in Rust**: a decompilation engine + a SLEIGH
compiler, organized around an explicit phase model whose decision points are exposed as
per-run flippable options — **the LLM control surface is the product**. It began as a Rust
port of Ghidra's decompiler (Apache-2.0; see `LICENSE`/`NOTICE`, origin in `docs/history.md`)
and has diverged on its own defaults.

unlace (`coleleavitt/unlace`) is a fork of [Noelo-Lab/kuna](https://github.com/Noelo-Lab/kuna).
It adds **Apple support** ported from Cole's earlier research decompiler (the old unlace code,
archived on branch `master` and tag `unlace-v1-final`; do not touch either) plus fixes from an
IDA 9.5 comparison. **Preserve** upstream's phase model, option catalog, parity gates, and speed.

## Naming: what is unlace and what stays kuna
The crates (`unlace-*`, `use unlace_*`) and the CLI binary (`unlace`; also `unlace_ghidra`,
`unlace_wasm`, `unlace-lift-diff`) carry the new name. These internal identifiers keep the
upstream name on purpose, because renaming them would change baselines and make every upstream
merge conflict: the `kuna_<slug>.rs` module files and their `kuna_*` items, option names,
stage-test names and IDs (`tests/stages/kuna-*.xml`, `KUNA-CATALOG`, ...), ElementIds,
`docs/baseline*.json`, the `KUNA_*` environment variables, the Ghidra extension
(`KunaDecompiler`, its `/* Kuna v... */` marker), the `kuna:` prefix of Rust-output goto
markers, and the archived evidence under `docs/features/`. Keep new code consistent with this
split: new modules are still `kuna_<slug>.rs`.

## Architecture First
Each tier only builds on the ones below it; new behavior ships behind a named option.

| Path | What it owns |
|---|---|
| `Cargo.toml` + `crates/` | The engine (the cargo workspace is the repo root). `unlace-decomp` = the decompiler's driver and facade (`src/infra/`: scheduling, `decompile_drive`, the pass-hook composition; `src/p0_knowledge/kuna_option_dispatch.rs`; `phases.toml`), re-exporting `unlace-middle`, `unlace-lift`, `unlace-structure`, `unlace-bandb` and `unlace-emit`, so callers keep `unlace_decomp::` paths; `unlace-emit` = its emit band (`p9_emit/`: the printers, the output-language plane, final casts and rendering; same folder layout, builds on the four bands below it); `unlace-bandb` = its Band B (`p3_dataflow/`…`p6_variables/`: dataflow, calls, types, variables; same folder layout): the passes above the fixpoint's cyclic core, building on `unlace-bandb-core` = that core (the strongly connected modules of all four phases) and `unlace-bandb-base` = the Band B modules below or beside the core (same four folders, builds on the three bands below it; `notes/crate-architecture.md` step 10); `unlace-structure` = its structure band (`p7_regions/`, `p8_structure/`: regions and control-flow structuring; same folder layout, builds on `unlace-middle` and `unlace-lift`); `unlace-ctree` = the C syntax tree between structuring and printing (`docs/architecture/ctree.md`; builds on `unlace-middle`); `unlace-lift` = its lift band (`p1_partition/`, `p2_lift/`: partition, flow, switch recovery, call fixups; same folder layout, builds only on `unlace-middle`); `unlace-middle` = its IR band (`substrate/`: the IR incl. `typeop`/`variable`/`cover`/`dynamic`; `p0_knowledge/`: the option/catalog plane; `infra/`: `Architecture`, actions; `engine/`: the SLEIGH engine seam, injection, emulation; `spec/`: modelrules, prefersplit, segmentop; phase folders keep only fspec, heritage, merge, varmap, jump tables; the pass-hook table; `build.rs` generates the catalog tables from `unlace-decomp/phases.toml`); `unlace-analysis` = loader/analyzer tier (ELF/Mach-O, chained fixups, dyld cache, kernelcache, ObjC, Swift, DWARF, DEX, strings, function discovery); `unlace-sleigh`/`unlace-slacomp` = SLEIGH runtime/compiler (`slacomp`); `unlace-console` = `decomp_dbg`; `unlace-cli` = the `unlace` binary; `unlace-ghidra`/`unlace-wasm` = Ghidra and browser front-ends; `unlace-harness` = the datatest runner, the parity gates (`tests/parity.rs`) and `decomp_test_dbg`; `unlace-base`/`unlace-num`/`unlace-lift-diff` = support. |
| `tests/datatests/` | Vendored XML regression corpus (675 assertions) vs `docs/baseline.json` — `cargo test -p unlace-harness --test parity datatests`. |
| `tests/stages/` | kuna-owned issue testcases vs `docs/baseline-stages.json` — `cargo test -p unlace-harness --test parity stage_tests` (`tests/stages/README.md`). |
| `tests/golden/` | Differential golden vectors for the workspace suite. |
| `specs/Ghidra/Processors/` | Vendored SLEIGH sources. Each `.sla` is compiled from its `.slaspec` on first use into the `.sla` cache (`$XDG_CACHE_HOME/unlace/sla`, `crates/unlace-slacomp/src/slacache.rs`); nothing to build by hand. |
| `scripts/` + `tools/` | Python helpers + the improvement pipeline, RE-friction loop, decbench campaign drivers. |
| `integrations/` | Front-ends embedding the engine: `ghidra/` (unlace as Ghidra's decompiler core), `web/` (the in-browser build; upstream hosts it at `decompile.run`). |

- **Apple/loader work** → `unlace-analysis`, behind a `phases.toml` option.
- **Decompiler phases P1–P9** (partition → lift/flow → dataflow → calls → types → variables →
  regions → structure → emit) + an orthogonal **P0** knowledge/config plane. Source folders
  are a taxonomy; the real pass order is `universal_sched` in
  `crates/unlace-decomp/src/infra/universalaction.rs`. One-screen model: `docs/phases.md`;
  normative algorithms: `docs/spec/`.
- **Maturity** (`docs/spec/00-overview.md` §0.10): each function records how far the current pass has
  got (`fd.maturity()`, `fd.is_settled(Fact::…)`); a pass that relies on an earlier phase asks that
  or states it with `debug_assert_settled!` instead of reading ad-hoc flags. A restart resets it.
- Decisions are flipped per run with `--option NAME VALUE`; discover them via `unlace catalog --json`.

## Current State
- `main` (the default branch) is the combined build: upstream kuna merged in plus the
  IDA-informed Apple tracks. It continues the kuna fork's `all` branch. Merge `upstream/main`
  (Noelo-Lab/kuna) into it; never rebase it.
- Anything sent to Noelo-Lab/kuna comes from an upstream-clean branch cut from `upstream/main`,
  never from `main`.
- Live branch/PR state, open decisions, and session handoffs live in **`MEMORY.md`**; the
  build recipe and worktree layout live in **`docs/dev-setup.md`**. Read both before deep work.

## Working Rules
- **A judgement call ships behind a named option; a fix does not** (upstream #1521,
  `docs/option-surface-study.md`). An option is a `settableTable` row in
  `crates/unlace-decomp/phases.toml` (all fields incl. `tier`+`symptoms`) + a
  handler in `src/p0_knowledge/kuna_option_dispatch.rs`; keep `unlace catalog --check` green.
  It exists only where the outcome is questionable (faithfulness vs readability, a
  speculative recovery, a speed trade, a heuristic scanner); a strict correctness fix
  ships unconditional, and a refinement extends the option it refines. New logic goes in
  a `kuna_<slug>.rs` module in its owning phase folder (template:
  `p2_lift/kuna_loweredswitch.rs`). Adding or dropping an option also changes hard-coded
  catalog counts (`kuna_phases/tests.rs`, `tests/catalog_bytecompat.rs`,
  `tests/stages/kuna-catalog.xml`).
- **The spec is live**: describe every feature/behavior change in prose in the owning
  `docs/spec/` chapter in the same change; run `python3 tools/check_spec.py`.
- **Speed is a core principle**: a new default-ON must change 0/675 datatest assertions and
  pass the speed budget. Record what a default does in its `phases.toml` row + spec chapter.
- `docs/options.md` is generated: after touching option metadata,
  `target/release/unlace catalog --markdown > docs/options.md`.
- **Never re-pin `docs/baseline.json` to hide a regression** — fix the code or make it opt-in.
  Sanctioned re-pins (upstream sync / deliberate default change) say so in the message
  (`UNLACE_BLESS=1 cargo test -p unlace-harness --test parity`). Adding a stage test re-records `docs/baseline-stages.json`
  and bumps the corpus count in `unlace-base/src/xml.rs`.
- **Edition 2024 and rustfmt**: the workspace is edition 2024; run `cargo fmt --all`
  (2024 style, `rustfmt.toml`) before committing. CI and the `fast` gate check it.
- **IDA/Hex-Rays material is allowed** (since 2026-11-23): unlace has diverged from upstream kuna
  and sends nothing to Noelo-Lab/kuna, so IDA-informed features, readers for IDA formats (TIL,
  `.sig`/FLIRT, Lumina), IDA comparison output and IDA-derived notes may be committed.
- **Comments are rare**: file header or function header only; inline only for a genuinely
  confusing hack. New functionality → new modules matching surrounding conventions (ported
  files name methods after their C++ originals).
- kuna ElementIds use the 4000+ range; kuna PcodeOp addlflags bits start at 0x1000. Code
  comments citing `decompiler/cpp/<file>.{cc,hh}` are **upstream Ghidra anchors**, not repo paths.
- Don't commit build artifacts (`target/`, `*.sla`). Commit at milestones with
  descriptive messages. Public auto-created things (PRs/issues/comments) start with `[AUTOMATED]`.
- Opening a PR: no issue first (the PR describes the problem), no @-mention of the maintainers,
  and the body ends with the line `Model: <model id>` naming the generating model (`docs/pr-bodies.md`).
- **RAM guard**: stay under 90% RAM during builds/tests; if it climbs, kill the job and ask
  before retrying. No Windows-only work.
- **Worktrees**: one per agent (`../unlace-wt-<name>`, target dir `../unlace-target/<name>`
  through a `target` symlink); specs need no setup (the `.sla` cache compiles them); **never
  `git stash`** (`refs/stash` is shared across worktrees); build with the recipe in
  `docs/dev-setup.md` and never set `CARGO_INCREMENTAL=0`.
- **Before you finish in a worktree**: commit your work (a worktree can be removed once its
  session ends, and only committed work survives), then remove the worktree and its build dir
  if you are done with it (`tools/hooks/unlace-wt-rm <name>` refuses anything unsaved or unpushed).
- **Specs**: the engine and the tests compile each `.slaspec` they need into the `.sla` cache on
  first use and reuse the image while the sources and the compiler are unchanged, so a pull that
  changes `specs/**/*.{slaspec,sinc}` needs no rebuild step (details in `docs/dev-setup.md`).

## Validation
Only prerequisite: a Rust toolchain. The repo root is the cargo workspace; every command runs
from it, and binaries land in `target/<profile>/`. There is no Makefile. The full build recipe
(jobserver, sccache, worktree `CARGO_TARGET_DIR`, dev binaries) and the local gate script
`tools/hooks/unlace-ci-gates.sh` are in **`docs/dev-setup.md`** — it overrides generic advice.

**The gates — run all before every commit:**
```sh
cargo fmt --all --check
cargo build -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli
cargo test -p unlace-harness --test parity   # tests/datatests vs docs/baseline.json (PARITY OK 675/675)
                                             # + tests/stages vs docs/baseline-stages.json (PARITY OK)
python3 tools/check_spec.py              # docs/spec anchors + phase-folder ownership resolve
PYTHONPATH=. python3 -m unittest discover -s scripts/tests -p 'test_*.py'   # Python tooling + test layout + layering
target/debug/unlace catalog --check
cargo nextest run --workspace --exclude unlace-wasm --profile ci   # the workspace suite (CI-required)
```
The parity target runs both corpora in-process (each `.sla` compiles into the `.sla` cache on first use);
`UNLACE_BLESS=1` re-records a baseline instead of comparing. `scripts/check_layers.py` (run by the unittest line)
fails on a new module path (`crate::`, `super::`, `self::`) from a lower
band of unlace-decomp to a higher one (middle < lift < structure < bandb < emit < driver; the
bands are listed in the script). Invert the dependency instead of adding it to
`scripts/layers-allowlist.txt`; that list only shrinks.
CI runs all of these + clippy (`-D warnings` on CLI/base/num) on push to main. On a PR from a
branch in this repo the workspace suite is skipped — **you are the gate for the nextest
run** (or add the `full-ci` label). Workspace integration tests need built specs; missing
specs are failures, not skips.

A PR labelled **`needs rebase`** no longer merges cleanly into main
(`.github/workflows/conflicts.yml` sets and clears the label). Its green checks are stale;
bringing it up to date with main is the author's job. Do not resolve its conflicts or review
it until the label is gone.

## Project Claude Layout
- `CLAUDE.md` (this file, = `AGENTS.md`): the authoritative guide.
- `docs/dev-setup.md`: the build recipe, gates, git hooks and worktree layout.
- `CLAUDE.local.md`: git-excluded, optional machine-local notes.
- `MEMORY.md`: local scratch/handoff state (git-ignored).
- `.claude/` (local-only): `agents/` (researcher, verifier), `commands/` (audit, repro),
  `rules/` (code-style, security, testing), `skills/kuna-apple-port/`.

## Doc map (look up on demand — don't preload)
| Doc | Open it when you need |
|---|---|
| `docs/phases.md` | The phase model on one screen (P0–P9, Band B, feedback edges). |
| `docs/spec/` | How any algorithm/pass actually works (start `00-overview.md`). |
| `docs/options.md` | The generated option catalog (tiers, symptoms, flip guidance). |
| `docs/dev-setup.md` | Build recipe, local gates (`tools/hooks/`), git hooks, worktree layout. |
| `docs/cli.md` | The full `unlace` CLI reference (flags, JSON schemas, watchdog, export). |
| `docs/pr-bodies.md` | How to write a PR body (read before opening/editing any PR). |
| `docs/prepr.md` | Optional pre-PR helpers: a call-arity diff over real MSVC binaries, and a diff lint. |
| `docs/improvement-pipeline.md` | The autonomous improvement pipeline + feature-PR requirements. |
| `docs/re-pipeline.md` | The RE-friction loop (agents solve crackmes, record gaps, self-merge). |
| `docs/decbench-loop.md` | The decbench benchmark / improvement campaign. |
| `docs/modes.md` | `--mode auto\|reliable\|aggressive\|fast` presets and thresholds. |
| `docs/multilang.md` | Multi-language source support (Rust/Go/Swift): sourcelang plane, idiom engine. |
| `docs/observatory.md` | The local codebase observatory (`PYTHONPATH=. python3 -m scripts.observatory.generate --out observatory --kuna target/release/unlace`). |
| `docs/missing-ghidra-analyses.md` | The `unlace-analysis` tier: analyzer gap vs Ghidra. |
| `docs/ghidra-integration.md` | unlace as Ghidra's decompiler core (architecture + wire protocol). |
| `docs/web-integration.md` | The WASM/browser front-end and the project site. |
| `docs/history.md` | Rarely needed: the C++→Rust port, verification, vendored-tree provenance. |
| `notes/apple-port-from-unlace.md`, `notes/proposal-dyld-cache.md` | Fork Apple-port plans. |
