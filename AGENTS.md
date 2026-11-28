# unlace — Agent Instructions

The guide for this repo. `CLAUDE.md` is a symlink to this file. Build recipe, gates, hooks and
worktrees live in `docs/dev-setup.md`; everything else is in the doc map at the bottom. Open
docs on demand, don't preload them.

## What this is
unlace is an **agent-first decompiler written in Rust**: a decompilation engine and a SLEIGH
compiler built around an explicit phase model. Its decision points are per-run flippable
options, so **the LLM control surface is the product**. It began as a port of Ghidra's
decompiler (Apache-2.0, see `LICENSE`/`NOTICE`) and has its own defaults now.

## Repos and branches
- **`coleleavitt/unlace`** (remote `origin`) is the only upstream. PRs, issues and labels go
  here. There is no `upstream` remote; branch from and target `origin/main`.
- The original unlace (the research decompiler) is archived on branch `master` and tag
  `unlace-v1-final`. Don't touch either. Its Apple support is being ported into `unlace-analysis`.
- The kuna name survives only in `docs/history.md` and archived notes; everything live is `unlace`
  (crates `unlace-*`, the `unlace` binary, `UNLACE_*` env vars, modules `unlace_<slug>.rs`).

## Layout
| Path | Owns |
|---|---|
| `crates/unlace-middle` | The IR (`substrate/`), the option/catalog plane (`p0_knowledge/`), `Architecture`, the SLEIGH engine seam, spec models. `build.rs` generates the catalog from `phases.toml`. |
| `crates/unlace-lift` | P1–P2: partition, flow, switch recovery, call fixups. |
| `crates/unlace-bandb-core`, `-bandb-base`, `-bandb` | P3–P6 (dataflow, calls, types, variables): the fixpoint core, the modules beside it, and the passes above it. |
| `crates/unlace-structure` | P7–P8: regions and control-flow structuring. |
| `crates/unlace-ctree` | The C syntax tree between structuring and printing. |
| `crates/unlace-emit` | P9: printers (`p9_emit/printc/`), output languages, final casts. |
| `crates/unlace-decomp` | Driver and facade: scheduling, `phases.toml`, `option_dispatch.rs`. Re-exports the bands as `unlace_decomp::`. |
| `crates/unlace-analysis` | Loaders and analyzers (formats in `docs/status.md`). |
| `crates/unlace-sleigh`, `-slacomp` | SLEIGH runtime and compiler. |
| `crates/unlace-cli`, `-console`, `-project`, `-idb` | The `unlace` binary, `decomp_dbg`, the SQLite project file, the IDA database reader. |
| `crates/unlace-ghidra`, `-wasm`, `integrations/` | Ghidra and browser front-ends. |
| `crates/unlace-harness` | Datatest runner and parity gates (`tests/parity.rs`). |
| `tests/datatests/`, `tests/stages/`, `tests/golden/` | XML corpus (675 assertions vs `docs/baseline.json`), TOML stage tests, golden vectors. |
| `specs/Ghidra/Processors/` | SLEIGH sources, compiled on first use into `$XDG_CACHE_HOME/unlace/sla`. Nothing to build by hand. |
| `scripts/`, `tools/` | Python helpers and the improvement/RE/decbench drivers. |

Each band builds only on the ones listed above it. Folders are a taxonomy: the real pass
order is `universal_sched` in `crates/unlace-decomp/src/infra/universalaction.rs`. See
`docs/phases.md` for the model and `docs/spec/` for the algorithms. A pass that depends on an
earlier phase checks `fd.is_settled(Fact::…)` or `debug_assert_settled!`, not ad-hoc flags.

## Rules
- **A judgement call ships behind a named option; a fix does not.** Options exist only where
  the outcome is debatable (faithfulness vs readability, speculative recovery, speed trade).
  An option is a `settableTable` row in `crates/unlace-decomp/phases.toml` (with `tier` and
  `symptoms`) plus a handler in `src/p0_knowledge/option_dispatch.rs`. After a catalog edit:
  regenerate `tests/fixtures/phase_catalog.toml` (`scripts/catalog_fixture_toml.py`) and
  `docs/options.md` (`target/release/unlace catalog --markdown`), keep
  `unlace catalog --check` green, and run `cargo test -p unlace-middle --lib unlace_phases`.
- **The spec is live**: describe behavior changes in the owning `docs/spec/` chapter in the
  same change, then run `python3 tools/check_spec.py`.
- **Speed matters**: a new default-ON changes 0/675 datatest assertions and meets the speed
  budget.
- **Never re-pin `docs/baseline.json` to hide a regression.** Sanctioned re-pins
  (`UNLACE_BLESS=1`) say why in the commit message.
- **Code style**: edition 2024, `cargo fmt --all` before committing. Comments are rare (file
  or function headers). New logic goes in a new `unlace_<slug>.rs` module in its phase folder
  (template: `p2_lift/loweredswitch.rs`). Ported files keep their C++ method names;
  `decompiler/cpp/*.cc` in comments means upstream Ghidra, not a repo path. New ElementIds use
  4000+, new PcodeOp addlflags start at 0x1000.
- **IDA/Hex-Rays material is allowed here** (since 2026-11-23): IDA-informed features, TIL,
  FLIRT and Lumina readers, comparison output.
- **Git**: don't commit `target/` or `*.sla`. Never `git stash` (shared across worktrees).
  One worktree per agent (`../unlace-wt-<name>`, target `../unlace-target/<name>`); commit
  before you finish, then remove it with `tools/hooks/unlace-wt-rm <name>`. Never set
  `CARGO_INCREMENTAL=0`.
- **PRs and issues**: titles/bodies start with `[AUTOMATED]`; no issue first; no @-mentions;
  the body ends with `Model: <model id>` (`docs/pr-bodies.md`). Label everything with one
  `type:` plus all fitting `area:`/`arch:`/`platform:` labels, and `impact:`/`effort:`/
  `priority:`/`ida-gap` as they fit. `gh label list -R coleleavitt/unlace` has the set; don't
  invent labels.
- Don't review or rebase-fix a PR labelled `needs rebase`; that's the author's job.
- Keep RAM under 90% during builds; if it climbs, kill the job and ask. No Windows-only work.

## Validation
Only a Rust toolchain is needed; run everything from the repo root (no Makefile). While
editing: `cargo check -p <crate>`, then `cargo test -p <crate> --lib <filter>`, then one
corpus file with `UNLACE_PARITY_FILES=<file> cargo test -p unlace-harness --test parity`.
Before committing, run the gates in [`docs/dev-setup.md` § Gates](docs/dev-setup.md#gates)
(`tools/hooks/unlace-ci-gates.sh`). On PRs from branches in this repo CI skips the workspace
suite, so you are the nextest gate (or add the `full-ci` label).

## Doc map
| Doc | Open it for |
|---|---|
| `docs/status.md` | Supported formats, architectures, output languages, front ends. |
| `docs/phases.md` | The phase model on one screen. |
| `docs/spec/` | How each pass works (start at `00-overview.md`). |
| `docs/options.md` | The generated option catalog. |
| `docs/dev-setup.md` | Build recipe, gates, hooks, worktrees, CI. |
| `docs/cli.md` | The `unlace` CLI reference. |
| `docs/processor-tests.md` | Adding a processor family test. |
| `docs/project.md` | The SQLite project file. |
| `docs/pr-bodies.md` | Writing a PR body. |
| `docs/modes.md` | `--mode` presets. |
| `docs/multilang.md` | Rust/Go/Swift source-language support. |
| `docs/difffuzz.md` | Differential fuzzing of the lifter against Unicorn. |
| `docs/quality-harness.md` | DWARF ground-truth scoring and option A/B. |
| `docs/improvement-pipeline.md`, `docs/re-pipeline.md`, `docs/decbench-loop.md` | The autonomous improvement, RE-friction and benchmark loops. |
| `docs/ghidra-integration.md`, `docs/web-integration.md` | The front-ends. |
| `docs/missing-ghidra-analyses.md` | Analyzer gap vs Ghidra. |
| `docs/sleigh-from-isa-specs.md` | Generating SLEIGH from Sail specs. |
| `docs/history.md` | The port's history (uses the old name, kuna). |
