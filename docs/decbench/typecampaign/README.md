# Type-recovery campaign (2026-09-16 to 2026-09-27)

The final report is [`results.md`](results.md): the baseline-to-final summary at the top, then
every round (A-L). Kept beside it:

- `decisions.md`: the campaign's decisions, including the metric pin (decisions §12);
- `baseline.md`: the canonical starting typesweep (cited by `scripts/decbench/structscore.py`);
- `final-l/`: the raw rows, scripts and speed records of the final measurement;
- `final-c/pindb.py`: the decbench metric pin, imported by the feature census scripts
  (`docs/features/structlocals/`, `structnest/`) through `PINDB_DIR`.

The intermediate rounds' directories (`final/`, `final-c` to `final-i`, `baseline/`) and the
campaign's session ledgers (`HANDOFF.md`, `PROGRESS.md`) were removed from the tree; `results.md`
still names their files, and `git show <commit>^:docs/decbench/typecampaign/<path>` reads one back
(`git log --diff-filter=D -- docs/decbench/typecampaign` finds the commit).
