# Kuna — Claude Instructions

Primary guide for this repo. `AGENTS.md` is a symlink to this file; `CLAUDE.local.md`
(git-excluded) holds the fork's build recipe and live branch state; `MEMORY.md` holds local
handoff notes. Look things up on demand via the **doc map** at the bottom — don't preload it.

## Mission
Kuna is an **agent-first decompiler written in Rust**: a decompilation engine + a SLEIGH
compiler, organized around an explicit phase model whose decision points are exposed as
per-run flippable options — **the LLM control surface is the product**. It began as a Rust
port of Ghidra's decompiler (Apache-2.0; see `LICENSE`/`NOTICE`, origin in `docs/history.md`)
and has diverged on its own defaults.

This fork (`coleleavitt/kuna`) adds **Apple support** ported from Cole's research decompiler
unlace (`~/RustProjects/active/unlace`, now research-only) plus fixes from an IDA 9.5
comparison. **Preserve** upstream's phase model, option catalog, parity gates, and speed.

## Architecture First
Each tier only builds on the ones below it; new behavior ships behind a named option.

| Path | What it owns |
|---|---|
| `decompiler/` | The engine (cargo workspace). `kuna-decomp` = the decompiler (`src/` phase-foldered `p0_knowledge/`…`p9_emit/` + `substrate/`, `infra/`); `kuna-analysis` = loader/analyzer tier (ELF/Mach-O, chained fixups, dyld cache, kernelcache, ObjC, Swift, DWARF, DEX, strings, function discovery); `kuna-sleigh`/`kuna-slacomp` = SLEIGH runtime/compiler (`slacomp`); `kuna-console` = `decomp_dbg`/`decomp_test_dbg`; `kuna-cli` = the `kuna` binary; `kuna-ghidra`/`kuna-wasm` = Ghidra and browser front-ends; `kuna-base`/`kuna-num`/`kuna-harness`/`kuna-lift-diff` = support. |
| `tests/datatests/` | Vendored XML regression corpus (675 assertions) — `make test`. |
| `tests/stages/` | kuna-owned issue testcases — `make test-stages` (`tests/stages/README.md`). |
| `tests/golden/` | Differential golden vectors for the workspace suite (`make rust-test`). |
| `specs/Ghidra/Processors/` | Vendored SLEIGH specs. `.sla` are built artifacts (gitignored), produced by `slacomp`. |
| `scripts/` + `tools/` | Python helpers + the improvement pipeline, RE-friction loop, decbench campaign drivers. |
| `integrations/` | Front-ends embedding the engine: `ghidra/` (kuna as Ghidra's decompiler core), `web/` (`kuna.noelo.org` + in-browser `decompile.run`). |

- **Apple/loader work** → `kuna-analysis`, behind a `phases.toml` option.
- **Decompiler phases P1–P9** (partition → lift/flow → dataflow → calls → types → variables →
  regions → structure → emit) + an orthogonal **P0** knowledge/config plane. Source folders
  are a taxonomy; the real pass order is `universal_sched` in
  `decompiler/crates/kuna-decomp/src/infra/universalaction.rs`. One-screen model: `docs/phases.md`;
  normative algorithms: `docs/spec/`.
- Decisions are flipped per run with `--option NAME VALUE`; discover them via `kuna catalog --json`.

## Current State
- Main checkout is on branch **`all`** (combined: upstream-clean PR work + the IDA-informed
  Apple tracks), public since 2026-10-31. Fork `main` mirrors upstream (PR bases) — **do not
  change `main`.** Upstream PRs (#1–#20) come from the clean `apple/*`, `fix/*`, `feat/*`
  branches, never from `all`.
- Live branch/PR state, open decisions, and session handoffs live in **`MEMORY.md`**; the
  fork build recipe and worktree layout live in **`CLAUDE.local.md`**. Read both before deep work.

## Working Rules
- **A judgement call ships behind a named option; a fix does not** (upstream #1521,
  `docs/option-surface-study.md`). An option is a `settableTable` row in
  `decompiler/crates/kuna-decomp/phases.toml` (all fields incl. `tier`+`symptoms`) + a
  handler in `src/p0_knowledge/kuna_option_dispatch.rs`; keep `kuna catalog --check` green.
  It exists only where the outcome is questionable (faithfulness vs readability, a
  speculative recovery, a speed trade, a heuristic scanner); a strict correctness fix
  ships unconditional, and a refinement extends the option it refines. New logic goes in
  a `kuna_<slug>.rs` module in its owning phase folder (template:
  `p2_lift/kuna_loweredswitch.rs`). Adding or dropping an option also changes hard-coded
  catalog counts (`kuna_phases/tests.rs`, `tests/catalog_bytecompat.rs`,
  `tests/stages/kuna-catalog.xml`).
- **The spec is live**: describe every feature/behavior change in prose in the owning
  `docs/spec/` chapter in the same change; run `make check-spec`.
- **Speed is a core principle**: a new default-ON must change 0/675 datatest assertions and
  pass the speed budget. Record what a default does in its `phases.toml` row + spec chapter.
- `docs/options.md` is generated: after touching option metadata,
  `decompiler/target/release/kuna catalog --markdown > docs/options.md`.
- **Never re-pin `docs/baseline.json` to hide a regression** — fix the code or make it opt-in.
  Sanctioned re-pins (upstream sync / deliberate default change) say so in the message
  (`kuna test --save-baseline`). Adding a stage test re-records `docs/baseline-stages.json`
  and bumps the corpus count in `kuna-base/src/xml.rs`.
- **Comments are rare**: file header or function header only; inline only for a genuinely
  confusing hack. New functionality → new modules matching surrounding conventions (ported
  files name methods after their C++ originals).
- kuna ElementIds use the 4000+ range; kuna PcodeOp addlflags bits start at 0x1000. Code
  comments citing `decompiler/cpp/<file>.{cc,hh}` are **upstream Ghidra anchors**, not repo paths.
- Don't commit build artifacts (`decompiler/target/`, `*.sla`). Commit at milestones with
  descriptive messages. Public auto-created things (PRs/issues/comments) start with `[AUTOMATED]`.
- Opening a PR: no issue first (the PR describes the problem), no @-mention of the maintainers,
  and the body ends with the line `Model: <model id>` naming the generating model (`docs/pr-bodies.md`).
- **RAM guard**: stay under 90% RAM during builds/tests; if it climbs, kill the job and ask
  before retrying. No Windows-only work.
- **Worktrees**: one per agent (`../kuna-wt-<name>`); symlink this checkout's built `.sla`
  into the worktree's `specs/` (never `make specs` in a worktree); **never `git stash`**
  (`refs/stash` is shared across worktrees); build with the worktree env in `CLAUDE.local.md`
  and never set `CARGO_INCREMENTAL=0`.
- **Before you finish in a worktree**: commit your work (a worktree can be removed once its
  session ends, and only committed work survives), then remove the worktree and its build dir
  if you are done with it (`kuna-wt-rm <name>` refuses anything unsaved or unpushed).
- **Specs**: after a pull that changes any `specs/**/*.{slaspec,sinc}`, rebuild every `.sla` in
  the main checkout with `slacomp -a specs` (exact steps in `CLAUDE.local.md`) and check that
  each `.slaspec` has its `.sla`; stale or missing specs show up as lift diffs or "Could not
  find .sla file".

## Validation
Only prerequisite: a Rust toolchain. Develop in the workspace; the Makefile drives builds
into `decompiler/target/release/`. The full fork build recipe (sccache/mold env, worktree
`CARGO_TARGET_DIR`, `PROFILE=debug`) is in **`CLAUDE.local.md`** — it overrides generic advice.

**Four gates — run all before every commit:**
```sh
make test          # datatest corpus vs docs/baseline.json      → PARITY OK 675/675
make test-stages   # stage-issue corpus vs baseline-stages.json  → PARITY OK
make rust-test     # full cargo workspace suite + options.md freshness  → green
make check-spec    # docs/spec anchors + phase-folder ownership resolve → green
make test-tools    # Python tooling unit tests + module layering ratchet (CI-required)
```
`scripts/check_layers.py` (run by `make test-tools`) fails on a new `crate::` path from a lower
band of kuna-decomp to a higher one (middle < lift < structure < bandb < emit < driver; the
bands are listed in the script). Invert the dependency instead of adding it to
`scripts/layers-allowlist.txt`; that list only shrinks.
CI runs all four + `kuna catalog --check` + `make lint` (Clippy = errors in CLI/base/num) on
push to main. On a PR from a branch in this repo the workspace suite is skipped — **you are
the gate for `make rust-test`** (or add the `full-ci` label). Workspace integration tests
need built specs; missing specs are failures, not skips.

## Project Claude Layout
- `CLAUDE.md` (this file, = `AGENTS.md`): the authoritative guide.
- `CLAUDE.local.md`: git-excluded fork mission, live branch state, and the real build recipe.
- `MEMORY.md`: local scratch/handoff state (git-ignored).
- `.claude/` (local-only): `agents/` (researcher, verifier), `commands/` (audit, repro),
  `rules/` (code-style, security, testing), `skills/kuna-apple-port/`.

## Doc map (look up on demand — don't preload)
| Doc | Open it when you need |
|---|---|
| `docs/phases.md` | The phase model on one screen (P0–P9, Band B, feedback edges). |
| `docs/spec/` | How any algorithm/pass actually works (start `00-overview.md`). |
| `docs/options.md` | The generated option catalog (tiers, symptoms, flip guidance). |
| `docs/cli.md` | The full `kuna` CLI reference (flags, JSON schemas, watchdog, export). |
| `docs/pr-bodies.md` | How to write a PR body (read before opening/editing any PR). |
| `docs/prepr.md` | Optional pre-PR helpers: a call-arity diff over real MSVC binaries, and a diff lint. |
| `docs/improvement-pipeline.md` | The autonomous improvement pipeline + feature-PR requirements. |
| `docs/re-pipeline.md` | The RE-friction loop (agents solve crackmes, record gaps, self-merge). |
| `docs/decbench-loop.md` | The decbench benchmark / improvement campaign. |
| `docs/modes.md` | `--mode auto\|reliable\|aggressive\|fast` presets and thresholds. |
| `docs/multilang.md` | Multi-language source support (Rust/Go/Swift): sourcelang plane, idiom engine. |
| `docs/observatory.md` | The local codebase observatory (`make observatory`). |
| `docs/missing-ghidra-analyses.md` | The `kuna-analysis` tier: analyzer gap vs Ghidra. |
| `docs/ghidra-integration.md` | kuna as Ghidra's decompiler core (architecture + wire protocol). |
| `docs/web-integration.md` | The WASM/browser front-end and the project site. |
| `docs/history.md` | Rarely needed: the C++→Rust port, verification, vendored-tree provenance. |
| `notes/apple-port-from-unlace.md`, `notes/proposal-dyld-cache.md` | Fork Apple-port plans. |
