# AGENTS.md

Compatibility guidance for AI coding agents working in this repository.

Read `CLAUDE.md` first. It is the canonical project memory for unlace, including
current caveats about stale plans, parity metrics, golden files, and verification
commands. This file exists so tools that prefer `AGENTS.md` still land on the
same rules.

The current Rust architecture/style audit is
`docs/architecture-audit-2026-06-21.md`. It says the crate split is already
domain-shaped; prefer private module extraction inside owning crates before
adding new crates.

## Core Rules

- Use current code and commands as proof. Historical plans and session exports
  are useful leads, not evidence.
- Prefer `codegraph` and `rg` to map behavior before editing.
- Keep changes narrow and aligned with existing crate boundaries.
- For Rust style or architecture decisions, load the global skills
  `~/.claude/skills/rust-style/SKILL.md`,
  `~/.claude/skills/rust-architecture/SKILL.md`, and, when historical Rust
  rationale matters, `~/.claude/skills/rust-zulip-archaeology/SKILL.md`.
- Do not change fixture binaries, fixture source, goldens, or metric baselines
  merely to make a gate pass.
- In output-affecting crates, preserve deterministic output. Prefer `BTreeMap`
  and `BTreeSet`; do not add `HashMap` or `HashSet` without a justified
  `// determinism:allow`.
- For decompiler behavior changes, measure actual IR/SSA/output with existing
  traces before acting on a mental model.
- Prefer domain-shaped Rust module trees, typed IDs/newtypes, explicit
  phase/dialect names, and validator-backed invariants over flat helper files,
  raw primitives, boolean phase flags, or prose-only rules.
- Use `docs/architecture-audit-2026-06-21.md` as the current queue for
  architecture cleanup: C printer, structurer, CLI pipeline, loader subdomains,
  product-surface maturity, lifter coverage honesty, and type/output debt.

## Verification

Common gates:

```bash
RUSTC_WRAPPER= cargo check --workspace
RUSTC_WRAPPER= cargo nextest run --workspace     # all tests, one process each, in parallel
RUSTC_WRAPPER= cargo test --workspace --doc      # doctests (nextest does not run them)
RUSTC_WRAPPER= cargo nextest run -p unlace-test-harness --test golden_fixtures
RUSTC_WRAPPER= cargo xtask gate                  # every quality gate from one build
RUSTC_WRAPPER= cargo xtask gate --quick          # golden triage + stylistic score only
cargo xtask lint-determinism
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
cargo fmt --all -- --check
```

Use focused crate tests first, then golden/parity checks when output changes,
then workspace gates when the blast radius warrants it.
