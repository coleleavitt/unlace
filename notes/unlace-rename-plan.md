# Phase 2: removing the `unlace` prefix from module, file and item names

Status: plan only (2026-11-24). Phase 1 is done: every env var the Rust code reads is
`UNLACE_*` with `UNLACE_*` as a fallback (`unlace_base::env`, #1031, #1043-#1062).
Phase 2 is one mechanical rewrite run in a single window while every other team is paused,
because it touches most of the workspace and conflicts with any open branch that edits a
`unlace_*.rs` file.

## Inventory (origin/main, 2026-11-24)

| What | Count | Where |
|---|---|---|
| `unlace_*.rs` files | 1,245 | analysis 318, bandb-base 230, emit 170, lift 134, bandb-core 118, middle 91, bandb 78, structure 44, console 36, decomp 12, sleigh 8, cli 3, ctree 3 |
| `unlace_*/` module directories | 240 (290 files under them) | mostly analysis |
| distinct stripped module names | 924 | |
| `mod unlace_*` declarations | 961 | |
| `#[path = "...unlace_..."]` attributes | 141 | integration-test aggregators, `tests.rs` splits |
| `unlace_x::` path segments | ~8,200 | every crate |
| `Unlace*` types | `UnlaceResult`, `UnlaceError`, `UnlaceNodeId`, `UnlaceOption`, ... | ~2,000 uses |
| `unlace_*` non-module identifiers | `unlace_options` (field), `unlace_lang`, `unlace_flag`, `unlace_gen`, `set_unlace_option`, `unlace_options!`, `UNLACE_OPTION_NAMES` | hundreds of uses |
| stage test files `tests/stages/unlace-*.toml` | 714 of 931 | |
| catalog rows `issue = "unlace-..."` / `source_decompiler = "unlace"` | 151 / 276 in the fixture, 427 lines in `phases.toml` | |
| `unlace_*.rs` paths cited in `docs/spec/` | 1,829 in 10 chapters | `make check-spec` resolves them |
| `[unlace ...]` stderr prefixes | 104 string literals; matched in 13 files under tests/scripts/tools | |
| Python/shell `UNLACE_*` env names | 41 | scripts/, tools/, integrations/ |

## Name collisions to resolve before the run

Stripping `unlace_` must not create a module name that already exists. Computed over the
module trees (file stems and directory names):

- `unlace-analysis`: `unlace_swift` vs `swift`, `unlace_image` vs `image` in the same crate.
- the `unlace_decomp` facade (`pub use` globs over decomp, bandb, bandb-core, bandb-base,
  structure, lift, middle, emit form one namespace): `unlace_int3pad` (lift) vs `int3pad`
  (decomp). A glob-vs-glob clash only errors where the name is used, so `cargo check` finds it.
- no stripped name is a Rust keyword, starts with a digit, or matches a std module name;
  recheck against dependency crate names (`object`, `gimli`, ...: at a crate root a module of
  the same name makes `use object::...` ambiguous).

Resolve each by hand first (for example `swift` -> keep the existing `swift` and rename
`unlace_swift` to `swift_demangle`), in a normal PR before the window, so the script has no
special cases. The script refuses to run while any clash remains.

## What must stay stable

- **Catalog ids**: option names, `issue` and `source_decompiler` values are output of
  `unlace catalog --json` and recorded in `tests/fixtures/phase_catalog.toml`,
  `tests/catalog_bytecompat.rs` and the Ghidra extension. Keep `source_decompiler = "unlace"`
  (it is provenance: the option came from the unlace port). Rename `issue = "unlace-x"` only
  together with the stage file it names, in the same commit, and re-record the fixture.
- **Stage ids**: `docs/baseline-stages.json` holds only footers (`data_footer` 5973), so it
  does not key on file names; but `UNLACE_PARITY_FILES`, `tests/golden/snapshot-manifest.json`,
  `tests/cli/*.json`, `crates/unlace-harness/tests/parity.rs`, `catalog_bytecompat.rs`,
  `scripts/tests/test_stage_index.py` and phases.toml `issue` fields name stage files.
  Recommendation: leave `tests/stages/unlace-*.toml` as they are in phase 2 (they are test
  ids, not product surface); if renamed later, `git mv` them with the same sed over every
  file above, and re-record the baseline only as a sanctioned re-pin.
- **ElementIds** (4000+ range) and PcodeOp addlflags bits (0x1000+): names of constants may
  change, values must not.
- **Provenance**: `NOTICE`, `LICENSE`, `docs/history.md`, and comments citing
  `decompiler/cpp/<file>` Ghidra anchors are untouched.
- **Decompiler output**: anything printed into C (`UNLACE_BYTEARRAY_C_*` include guards in
  `bytearrayc.rs`, region/maturity trace banners) changes datatest/stage text; keep it in
  phase 2, or change it in its own PR with the 675/675 and stage gates run.
- **Compile-time names**: `UNLACE_VERSION` (release matrix), `UNLACE_*_SOURCE_FINGERPRINT`
  (`unlace-console/build.rs`) and the harness `===UNLACE_DUMP_*===` markers (parsed by tests
  and Python tools) are their own small PRs, not part of the module rename.

## The script (`scripts/rename_unlace_modules.py`, run once)

Input: `git ls-files 'crates/**'`. Output: one commit per crate, all in one branch.

1. **Plan**: list every `unlace_<n>.rs` and `unlace_<n>/`; map `unlace_<n>` -> `<n>`. Abort on any
   clash (same parent dir, same crate, or the `unlace_decomp` facade union) or any open PR
   (`gh pr list --state open`) touching a planned file.
2. **Move**: `git mv` each file and directory (directories first, deepest first), so history
   follows (`git log --follow`).
3. **Declarations**: in every `.rs`, rewrite `mod unlace_<n>` / `pub mod unlace_<n>` /
   `pub(crate) mod unlace_<n>` to `<n>`, and every `#[path = "..."]` whose string contains a
   moved path to the new path (string rewrite of path segments only).
4. **Paths**: rewrite the token `unlace_<n>` to `<n>` where it is a path segment: followed by
   `::`, or inside a `use` tree (`{unlace_a, unlace_b}`), or after `crate::`/`super::`/`self::`/
   `unlace_<crate>::`. Do it with a token-aware pass (`syn` via a tiny Rust bin, or
   `ast-grep` with a `path_segment` rule), not a bare regex: `unlace_options` the field,
   `unlace_lang`, `unlace_flag` and function names that share a module's name (`fn unlace_voidret`)
   must not move in this step.
5. **Doc links and strings**: rewrite `unlace_<n>.rs` / `unlace_<n>/` path mentions in comments,
   `docs/spec/*.md`, `docs/phases.md`, `CLAUDE.md`, `phases.toml` prose and skills, so
   `make check-spec` (it resolves spec citations and phase-folder ownership) stays green.
   Re-generate `docs/options.md` and the catalog fixture if any phases.toml text moved.
6. **Format and check**: `cargo fmt --all`, then `cargo check --workspace --tests` and
   `cargo check -p unlace-wasm --target wasm32-unknown-unknown`; the lead runs this once.
   Expected leftovers are glob ambiguities in the facade (fix by renaming one side).
7. **Gates once**: parity 675/675, stage corpus, `unlace catalog --check`, `make check-spec`.
   A module rename changes no output, so any diff is a script bug.

Run time: the script is seconds; the check and gates are the window. Merge with
`gh pr merge --merge` (no squash) so `git log --follow` and blame keep working, and announce
the rename to teams so they rebase with `git merge origin/main` (rename detection carries
their edits onto the new paths; `git config merge.renameLimit 4000` first).

## Phase 2b (separate windows, smaller)

- `UnlaceResult`/`UnlaceError` -> `UnlaceResult`/`UnlaceError` in `unlace-base` with
  `pub type UnlaceResult<T> = UnlaceResult<T>;` aliases kept for one release, then a sed.
- `unlace_options` field / `set_unlace_option` / `unlace_options!` / `UNLACE_OPTION_NAMES` ->
  `options`-style names (check the field name is free on `Architecture` first).
- `[unlace ...]` stderr prefixes -> `[unlace ...]`: update the 13 matching test/script files in
  the same PR and the `tests/cli` expectations.
- Python/shell tools: read `UNLACE_*` first, `UNLACE_*` second (one helper in
  `scripts/paths.py`), then rename the docs that still say `UNLACE_*` (improvement pipeline,
  decbench, re-pipeline, prepr).
- The Ghidra extension (`integrations/ghidra/UnlaceDecompiler`, Java package `unlace`) keeps its
  name until a release can rename the installed extension id.
