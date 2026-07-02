# CLAUDE.local.md

Local notes for this checkout.

- Workspace root: `/home/cole/RustProjects/active/unlace`
- Prefer `RUSTC_WRAPPER=` when running cargo commands in this environment.
- Durable `.claude` markdown config is intended to live with the repo.
  `.claude/settings.local.json` and unlisted ad hoc files remain local-only.
- Existing unrelated local state may be present under `.jfc/`, `.code/`,
  `.codegraph/`, `.codex/`, and local worktrees. Do not clean those directories
  unless explicitly asked.
- If a cargo or test command fails due to sandbox/network/local TCP binding
  restrictions, rerun with the appropriate approval rather than weakening tests.
