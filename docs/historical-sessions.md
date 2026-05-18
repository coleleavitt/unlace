# Historical Session Notes

This file is the segregated home for claims that came out of earlier opencode
or planning sessions. They are preserved because they often capture useful
*direction* and concrete IDA/Hex-Rays evidence — but their status numbers,
"100% parity", and "Phase N complete" assertions are not current.

When in doubt, trust `docs/status.md`. This file is reference material.

## Where the raw sessions live

- `research/opencode-sessions/` — exported markdown copies of the original
  opencode sessions.
- `session-ses_2175.md`, `session-ses_21fc.md` — root-level exports referenced
  by `CLAUDE.md`.
- `.sisyphus/notepads/` (when present) — earlier phase plans and gap analyses.

## How to treat their claims

| Claim shape | How to read it now |
|-------------|-------------------|
| "100% parity achieved" | A narrow fixture metric was at 100%, not Hex-Rays parity. |
| "Phase N complete" | A specific batch of tasks landed; the wider phase is still open. |
| "All tests passing" | Workspace tests passed in *that* checkout; `cargo test --workspace` is the authoritative answer today. |
| "Wave M shipped" | The named slice landed but follow-ups may have invalidated parts of it. Re-verify via the relevant handoff. |

## Why this file exists

`plan.md` originally folded historical claims and current direction together,
which made it impossible to tell what was actually shipped. Batch 26 (the
docs/release polish batch) split the picture:

- *What is true now* → `docs/status.md`.
- *Where we want to go* → `docs/roadmap.md`.
- *Speculative ideas* → `docs/research-ideas.md`.
- *Old claims and session evidence* → this file.

The split is preserved by the same workflow: when a session claim is verified
against the current checkout, the resulting line gets promoted into
`docs/status.md` *and* the original claim stays here for traceability.
