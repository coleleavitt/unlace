# AGENTS.md

Compatibility guidance for AI coding agents working in this repository.

Read `CLAUDE.md` first. It is the canonical project memory for unlace, including
current caveats about stale plans, parity metrics, golden files, and verification
commands. This file exists so tools that prefer `AGENTS.md` still land on the
same rules.

## Core Rules

- Use current code and commands as proof. Historical plans and session exports
  are useful leads, not evidence.
- Prefer `codegraph` and `rg` to map behavior before editing.
- Keep changes narrow and aligned with existing crate boundaries.
- Do not change fixture binaries, fixture source, goldens, or metric baselines
  merely to make a gate pass.
- In output-affecting crates, preserve deterministic output. Prefer `BTreeMap`
  and `BTreeSet`; do not add `HashMap` or `HashSet` without a justified
  `// determinism:allow`.
- For decompiler behavior changes, measure actual IR/SSA/output with existing
  traces before acting on a mental model.

## Verification

Common gates:

```bash
RUSTC_WRAPPER= cargo check --workspace
RUSTC_WRAPPER= cargo test --workspace
RUSTC_WRAPPER= cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture
RUSTC_WRAPPER= bash scripts/score_parity.sh
cargo xtask lint-determinism
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
cargo fmt --all -- --check
```

Use focused crate tests first, then golden/parity checks when output changes,
then workspace gates when the blast radius warrants it.
