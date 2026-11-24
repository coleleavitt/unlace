# Documentation inventory (2026-11-24)

Every doc under `docs/` and `notes/`, classified, with the one owner of each kind of fact. When two
files state the same fact, the owner below wins and the other should link to it.

Classes: **current** (kept true as the code changes), **generated** (written by a tool, never edited by
hand), **evidence** (a dated measurement or report behind a decision; not updated afterwards),
**archive** (historical or superseded; kept for provenance, not for guidance).

## Owners of each fact

| Fact | Owner | Not the owner (link instead) |
|---|---|---|
| What an option does, its default, tier, symptoms, flip guidance | `crates/unlace-decomp/phases.toml` row, rendered into `docs/options.md` (generated) | `docs/features/<slug>/`, `docs/cli.md`, notes |
| How an algorithm or pass works | `docs/spec/` chapter (`docs/spec/README.md`) | `docs/phases.md` (one-screen summary only), feature bundles |
| Build recipe, gates, git hooks, worktrees | `docs/dev-setup.md` § Build recipe / Gates / Git hooks | `CLAUDE.md` (links to it), `docs/cli.md` (links to it) |
| What CI runs | `.github/workflows/*.yml`, described in `docs/dev-setup.md` § CI | anything else |
| Agent rules and repo policy | `CLAUDE.md` (= `AGENTS.md`) | `.claude/rules/` (local), `docs/dev-setup.md` |
| CLI flags and JSON schemas | `unlace <cmd> --help` (the code), referenced by `docs/cli.md` | |
| Benchmark numbers | dated machine-readable records: `docs/features/<slug>/record.json`, `docs/baseline*.json`, `docs/decbench/typecampaign/final-l/` | prose that quotes them |
| Crate layout and the split's decisions | `notes/crate-architecture.md` § 8 | `CLAUDE.md` table (summary) |
| Open work | GitHub issues on coleleavitt/unlace | handoff files (none are kept in the tree) |
| Provenance of the port | `LICENSE`, `NOTICE`, `docs/history.md` | |

## docs/

| Path | Class | Notes |
|---|---|---|
| `api.md` | current | the `unlace` library crate |
| `baseline.json` | generated | parity baseline (`UNLACE_BLESS=1`) |
| `cli.md` | current | 354 KB CLI reference; its parity section now links to dev-setup. Candidate to shrink: per-command sections repeat each command's `--help` text |
| `decbench-loop.md` | current | decbench campaign process |
| `dev-setup.md` | current | owner of build, gates, CI, hooks |
| `devcontainer.md` | current | `.devcontainer/` |
| `difffuzz.md` | current | lifter differential fuzzing |
| `ghidra-integration.md` | current | Ghidra front-end and wire protocol |
| `history.md` | archive (provenance) | do not trim |
| `improvement-pipeline.md`, `re-pipeline.md` | current | the agent pipelines; `tools/pipeline/` writes `docs/features/<slug>/` bundles |
| `missing-ghidra-analyses.md` | current | analyzer gap vs Ghidra |
| `modes.md` | current | `--mode` presets |
| `multilang.md` | current (draft architecture) | marked [PROPOSAL] |
| `nightly.md`, `release.md` | current | the nightly and release workflows |
| `observatory.md` | current | |
| `option-surface-study.md` | evidence | the option classification study; cites `docs/agents.md`, which is now `CLAUDE.md` |
| `options.md` | generated | `unlace catalog --markdown` |
| `phases.md` | current | one-screen phase model |
| `pr-bodies.md`, `prepr.md` | current | PR writing and helpers |
| `processor-tests.md`, `project.md`, `quality-harness.md` | current | |
| `sleigh-from-isa-specs.md` | current | |
| `talk-research.md`, `talk/` | evidence | talk material and its SIMD witness |
| `web-integration.md` | current | 112 KB; the WASM front-end |
| `architecture/` | current | `ctree.md`, `decompiler-ir-landscape.md` (design) |
| `spec/` | current | normative algorithms (owner) |
| `img/` | current | images the docs use |
| `features/<slug>/` | evidence | one bundle per option or fix: prose, `pr_body.md`, `record.json`, repro sources (`docs/features/README.md`). Nested round dirs, verifier crates and raw dumps were removed (#1030, #1032) |
| `re-needs/` | evidence (generated index) | RE-friction need records; `index.json`, `opportunities.json` are the pipeline's |
| `decbench/backlog*.md`, `novel.md`, `triage-queue*.json` | generated (2026-08-03) | `scripts.decbench.mine` / `novel` output; stale snapshots, re-generate rather than edit |
| `decbench/features*.md`, `round4-grounding.md`, `*-measurement.md`, `returndup-*.md`, `triage/` | evidence | campaign rounds (2026-08) |
| `decbench/typecampaign/` | evidence | final report `results.md` plus `decisions.md`, `baseline.md`, `final-l/`; intermediate rounds removed (#1035) |

## notes/

| Path | Class | Notes |
|---|---|---|
| `crate-architecture.md` | current (§8) + evidence (§1-7) | owner of the crate split's outcome; absorbed the root `HANDOFF.md` (#1037) |
| `doc-inventory.md` | current | this file |
| `apple-port-from-unlace.md`, `proposal-dyld-cache.md`, `proposal-dex.md` | archive | 2026-10 plans, implemented or superseded |
| `ida-gaps.md` | current | the prioritised IDA gap list; `ida-atomics`, `ida-com`, `ida-msvc-eh`, `ida-pdb`, `ida-typelib-pe`, `ida-unmerge`, `ida-hexrays-rules` deepen its rows (evidence) |
| `ida-gap/` | evidence | 2026-11-24 area surveys extending `ida-gaps.md` |
| `ida-module-survey.md`, `ida-apple-mechanisms.md`, `ida-limits.md`, `perplexity-26.46-gaps.md` | evidence | 2026-11-21/22 surveys; `ida-gaps.md` supersedes their gap lists |
| `holley-gaps.md` | evidence | |
| `option-firing-audit.md`, `flip-audit.md` | evidence | 2026-11-24 measurements |
| `real-code-sweep.md`, `real-firmware-sweep.md`, `robustness-sweep.md` | evidence | 2026-11-24 sweeps; their issues are on GitHub |
| `perf-profile.md`, `aif-gap-performance.md`, `compact-unwind-measurement.md` | evidence | |
| `egraph.md` | archive | closed research track |
| `declared-callback-declarators.md`, `rootfix-float-abi-boundaries.md`, `syscall-memory-order.md` | evidence | per-fix analyses |

## Removed in this pass

- Root `HANDOFF.md` (40 KB session handoff): durable parts moved to `notes/crate-architecture.md` § 8 and
  `docs/spec/02-lift-and-flow.md` (itaniumeh limits); the rest was session state (#1037).
- `docs/features/`: 5,695 files (about 220 MB) of nested round evidence, verifier Cargo projects, logs,
  diffs and dumps (#1030, #1032). 226 MB tracked before, 16 MB after.
- `docs/decbench/typecampaign/`: intermediate rounds and session ledgers (#1035).
- Gate lists repeated in `CLAUDE.md` and `docs/cli.md` now link to `docs/dev-setup.md` (#1038, #1042).

Everything removed stays in git history: `git log --diff-filter=D -- <dir>` finds the commit and
`git show <commit>^:<path>` reads a file back.
