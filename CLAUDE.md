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
| `decompiler/` | The engine (cargo workspace). `unlace-decomp` = the decompiler (`src/` phase-foldered `p0_knowledge/`…`p9_emit/` + `substrate/`, `infra/`); `unlace-analysis` = loader/analyzer tier (ELF/Mach-O, chained fixups, dyld cache, kernelcache, ObjC, Swift, DWARF, DEX, strings, function discovery); `unlace-sleigh`/`unlace-slacomp` = SLEIGH runtime/compiler (`slacomp`); `unlace-console` = `decomp_dbg`/`decomp_test_dbg`; `unlace-cli` = the `unlace` binary; `unlace-ghidra`/`unlace-wasm` = Ghidra and browser front-ends; `unlace-base`/`unlace-num`/`unlace-harness`/`unlace-lift-diff` = support. |
| `tests/datatests/` | Vendored XML regression corpus (675 assertions) — `make test`. |
| `tests/stages/` | kuna-owned issue testcases — `make test-stages` (`tests/stages/README.md`). |
| `tests/golden/` | Differential golden vectors for the workspace suite (`make rust-test`). |
| `specs/Ghidra/Processors/` | Vendored SLEIGH specs. `.sla` are built artifacts (gitignored), produced by `slacomp`. |
| `scripts/` + `tools/` | Python helpers + the improvement pipeline, RE-friction loop, decbench campaign drivers. |
| `integrations/` | Front-ends embedding the engine: `ghidra/` (unlace as Ghidra's decompiler core), `web/` (the in-browser build; upstream hosts it at `decompile.run`). |

- **Apple/loader work** → `unlace-analysis`, behind a `phases.toml` option.
- **Decompiler phases P1–P9** (partition → lift/flow → dataflow → calls → types → variables →
  regions → structure → emit) + an orthogonal **P0** knowledge/config plane. Source folders
  are a taxonomy; the real pass order is `universal_sched` in
  `decompiler/crates/unlace-decomp/src/infra/universalaction.rs`. One-screen model: `docs/phases.md`;
  normative algorithms: `docs/spec/`.
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
  `decompiler/crates/unlace-decomp/phases.toml` (all fields incl. `tier`+`symptoms`) + a
  handler in `src/p0_knowledge/kuna_option_dispatch.rs`; keep `unlace catalog --check` green.
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
  `decompiler/target/release/unlace catalog --markdown > docs/options.md`.
- **Never re-pin `docs/baseline.json` to hide a regression** — fix the code or make it opt-in.
  Sanctioned re-pins (upstream sync / deliberate default change) say so in the message
  (`unlace test --save-baseline`). Adding a stage test re-records `docs/baseline-stages.json`
  and bumps the corpus count in `unlace-base/src/xml.rs`.
- **Edition 2024 and rustfmt**: the workspace is edition 2024; run `cd decompiler && cargo fmt --all`
  (2024 style, `decompiler/rustfmt.toml`) before committing. CI and the `fast` gate check it.
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
- **Worktrees**: one per agent (`../unlace-wt-<name>`, target dir `../unlace-target/<name>`
  through a `decompiler/target` symlink); build or symlink the worktree's `.sla` files; **never
  `git stash`** (`refs/stash` is shared across worktrees); build with the recipe in
  `docs/dev-setup.md` and never set `CARGO_INCREMENTAL=0`.
- **Before you finish in a worktree**: commit your work (a worktree can be removed once its
  session ends, and only committed work survives), then remove the worktree and its build dir
  if you are done with it (`tools/hooks/unlace-wt-rm <name>` refuses anything unsaved or unpushed).
- **Specs**: after a pull that changes any `specs/**/*.{slaspec,sinc}`, rebuild every `.sla` in
  the checkout with `slacomp -a specs` (exact steps in `docs/dev-setup.md`) and check that
  each `.slaspec` has its `.sla`; stale or missing specs show up as lift diffs or "Could not
  find .sla file".

## Validation
Only prerequisite: a Rust toolchain. Develop in the workspace; the Makefile drives builds
into `decompiler/target/release/`. The full build recipe (jobserver, sccache, worktree
`CARGO_TARGET_DIR`, dev binaries) and the local gate script `tools/hooks/unlace-ci-gates.sh`
are in **`docs/dev-setup.md`** — it overrides generic advice.

**Four gates — run all before every commit:**
```sh
make test          # datatest corpus vs docs/baseline.json      → PARITY OK 675/675
make test-stages   # stage-issue corpus vs baseline-stages.json  → PARITY OK
make rust-test     # full cargo workspace suite + options.md freshness  → green
make check-spec    # docs/spec anchors + phase-folder ownership resolve → green
make test-tools    # Python tooling unit tests + module layering ratchet (CI-required)
```
`scripts/check_layers.py` (run by `make test-tools`) fails on a new module path (`crate::`, `super::`, `self::`) from a lower
band of unlace-decomp to a higher one (middle < lift < structure < bandb < emit < driver; the
bands are listed in the script). Invert the dependency instead of adding it to
`scripts/layers-allowlist.txt`; that list only shrinks.
CI runs all four + `unlace catalog --check` + `make lint` (Clippy = errors in CLI/base/num) on
push to main. On a PR from a branch in this repo the workspace suite is skipped — **you are
the gate for `make rust-test`** (or add the `full-ci` label). Workspace integration tests
need built specs; missing specs are failures, not skips.

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
| `docs/observatory.md` | The local codebase observatory (`make observatory`). |
| `docs/missing-ghidra-analyses.md` | The `unlace-analysis` tier: analyzer gap vs Ghidra. |
| `docs/ghidra-integration.md` | unlace as Ghidra's decompiler core (architecture + wire protocol). |
| `docs/web-integration.md` | The WASM/browser front-end and the project site. |
| `docs/history.md` | Rarely needed: the C++→Rust port, verification, vendored-tree provenance. |
| `notes/apple-port-from-unlace.md`, `notes/proposal-dyld-cache.md` | Fork Apple-port plans. |
