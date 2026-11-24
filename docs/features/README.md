# Feature bundles

One directory per option or fix, named after its slug. A bundle keeps what a reader
needs to understand and reproduce the change:

- `analysis.md`, `plan.md`, `proposal.md`, `default-on-evaluation.md` and other prose reports;
- `pr_body.md`, the pull request text;
- `record.json`, the machine-readable measurement record (read by `scripts/decbench/status.py`,
  `scripts/pipeline/prdemo.py` and `scripts/pipeline/timeit.py`);
- the repro sources and fixtures the prose and the code comments cite (`*.c`, `*.s`, `*.py`, ...).

The option itself is documented by its `phases.toml` row (rendered in `docs/options.md`) and
the algorithm by its `docs/spec/` chapter; a bundle is the evidence behind them, not their owner.

Bulky per-round evidence (nested round directories, verifier Cargo projects, raw logs, diffs and
sweep dumps) is not kept in the tree. It stays in git history: `git log --diff-filter=D --
docs/features/<slug>` finds the commit that removed it, and `git show <commit>^:<path>` reads it.
