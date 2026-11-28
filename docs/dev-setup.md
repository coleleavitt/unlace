# Development setup

The build recipe, gates and worktree layout for working on unlace locally. CI
(`.github/workflows/tests.yml`) runs the same gates on release binaries; locally
they run on dev binaries, which is faster to build and gives the same results.

## Layout

- The repository root is the Cargo workspace: `Cargo.toml`, `Cargo.lock`, `crates/`,
  `.config/nextest.toml`, `clippy.toml` and `rustfmt.toml` sit at the top, so every `cargo`
  command below runs from the root. There is no Makefile; each gate is one `cargo` or
  `python3` command (below).
- One git worktree per agent or task: `../unlace-wt-<name>`. The main branch lives in
  `../unlace-wt-main`.
- Build output never goes inside a worktree. Each worktree's `target` is a
  symlink to its own target dir (`../unlace-target/<name>`, or wherever you keep them):
  `ln -s <target-dir> target` at the worktree root. The gate script finds the dev
  binaries through it.
- `specs/` holds SLEIGH sources only; there is no build step for them. When the engine or a test
  needs `<lang>.sla`, it compiles the sibling `<lang>.slaspec` in-process into the `.sla` cache and
  loads it from there (`crates/unlace-slacomp/src/slacache.rs`). The cache is content-addressed
  (a hash of the `.slaspec`, every file it `@include`s, and the compiler's own sources), so it is
  shared safely by every checkout and reused until a source or the compiler changes; a first
  compile takes a fraction of a second to a few seconds per language. It lives in
  `$UNLACE_SLA_CACHE`, else `$XDG_CACHE_HOME/unlace/sla` (default `~/.cache/unlace/sla`), and
  deleting it is always safe. The first load of an image of 2 MiB or more also leaves an
  uncompressed `.slr` copy beside the `.sla`, under the same key; later loads read the copy and
  skip the inflate (the `.sla` stays the file to embed or hand to Ghidra). A `SLEIGHHOME`/`UNLACE_SPECS`/`--sleighpath` directory of prebuilt
  `.sla` still wins: a `.sla` that is a regular file at least as new as its sources is used as is
  (a symlinked `.sla` never is).
- Older checkouts may still have `.sla` files or per-file `.sla` symlinks under `specs/` from
  the previous recipe. They are unnecessary now and can be removed with
  `find specs -name '*.sla' -delete` in that checkout (it deletes the links, not their targets).
- Never `git stash` (refs/stash is shared by every worktree). Stage explicit paths only.
- Remove a finished worktree with `tools/hooks/unlace-wt-rm <name>` (`--dry-run` first).
  It refuses uncommitted changes, untracked files, unpushed commits, a locked worktree and
  one a live process works in, then removes the worktree and its target dir.
  `--sweep [--days N]` does the same for every idle `unlace-wt-*`.

## Build recipe

```bash
# Plain cargo: ~/.cargo/config.toml carries the linker, the -Z flags and the debug level.
# Never export RUSTFLAGS (it replaces those flags), RUSTC_WRAPPER, CARGO_BUILD_JOBS,
# CARGO_PROFILE_* or CARGO_INCREMENTAL=0.
export CARGO_TARGET_DIR=$(readlink -f target)
export UNLACE_ROOT=$PWD UNLACE_SPECS=$PWD/specs SLEIGHHOME=$PWD/specs

cargo check -p <crate>                        # while editing
cargo test -p <crate> --lib <filter>           # focused
cargo build -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli   # dev profile
```

The dev profile is `opt-level = 1` (root `Cargo.toml`) and `cargo test` inherits it, so a
`cargo build` and a test run reuse each other's compiled crates. Keep it that way: a separate
`[profile.test]` setting, or a feature that only a dev-dependency turns on (on a workspace crate
or on a shared dependency such as `object` or `libc`), makes cargo compile every crate above it
twice. Put such a feature on the normal dependency instead (`object`'s `write` is on in the
workspace dependency for this reason). On a nightly cargo, `-Zfeature-unification` with
`resolver.feature-unification = "workspace"` (in `~/.cargo/config.toml` on the shared host)
also makes a `-p <crate>` run reuse the workspace build.

Every `UNLACE_*` environment variable the Rust code reads is also read under its old `UNLACE_*`
name, as a deprecated alias: `UNLACE_<NAME>` wins when both are set (`unlace_base::env`). The
Python tools under `scripts/` and `tools/` still read only their `UNLACE_*` names.

Heavy runs (decompile-all over a corpus, `cargo test -p unlace-harness --test parity`) go through
`tools/hooks/unlace-slot <cmd>`, which holds one of `UNLACE_SLOTS` (default 6)
machine-wide slots.

### Dynamic linking (dev only, off by default)

`crates/unlace-decomp-dylib` builds `unlace-decomp` (with every decompiler crate under it) and
`unlace-analysis` as one Rust `dylib`. The `dynamic_linking` feature of `unlace-cli`,
`unlace-console`, `unlace-harness` and `unlace-ghidra` links the binaries and their test targets
against it, so an edit to the engine links the `.so` once instead of statically relinking the
engine into every binary and test target. It does not speed up compiling the engine itself.

```bash
cargo build -p unlace-cli -p unlace-console -p unlace-harness --features \
  unlace-cli/dynamic_linking,unlace-console/dynamic_linking,unlace-harness/dynamic_linking
cargo build --timings ...   # compare link time with and without the feature
```

The crate is excluded from the workspace, so `cargo build --workspace` never links it. The
binaries then need `libstd-*.so` and the dylib at run time: `cargo run`/`cargo test` set the
library path, and the build scripts of `unlace`, `decomp_dbg` and `decomp_test_dbg` add an rpath
(`$ORIGIN/deps` and `$(rustc --print sysroot)/lib`). `unlace_ghidra` has no rpath; run it with
`LD_LIBRARY_PATH=$(rustc --print sysroot)/lib:$CARGO_TARGET_DIR/debug/deps`. Never use the
feature for `--release`, dist builds or `unlace-wasm`.

## Focused loop

Work in this order while you edit. Each step is cheaper than the next, so run the later ones only
once the earlier ones pass. Run every command from the repository root with the build recipe
above exported (dev binaries land in `target/debug/`).

1. Type-check the crate you are editing:

   ```bash
   cargo check -p <crate>
   ```

2. Run the crate's unit tests that cover the change:

   ```bash
   cargo test -p <crate> --lib <filter>
   ```

3. Run the one corpus file you changed, against its baseline. `UNLACE_PARITY_FILES` takes a path,
   a file name or a stem (see below); a corpus none of whose files match is skipped:

   ```bash
   UNLACE_PARITY_FILES=<file> cargo test -p unlace-harness --test parity
   ```

   A selected run checks only its files' assertions and never re-records a baseline
   (`UNLACE_BLESS=1` refuses it).

4. If the change can alter what emitted C computes, run the x86_64-gcc rows of the semantic suite
   against its baseline (about 4 s once the binaries are built; `--cases <stem,...>` narrows it
   further):

   ```bash
   cargo build -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli
   python3 tools/semantic/run.py --unlace target/debug/unlace --sleighpath specs \
       --config x86_64-gcc --opt O0,O2 --baseline tools/semantic/baseline.toml
   ```

   The run exits 1 only for a row that passes in the baseline and no longer does. It needs gcc and
   binutils and nothing else for this configuration.

5. Before the commit, run the full gates in the next section.

To rerun only the tests that failed (or did not run) in the last nextest run, use
`cargo nextest run -R latest`. It needs nextest's run recording, which is experimental and
set in the user config `~/.config/nextest/config.toml`:

```toml
[experimental]
record = true

[record]
enabled = true
```

Use nextest 0.9.150 or newer: it cannot replay recordings made by older versions, and it
fixed a code-execution issue with crafted recordings (GHSA-vc25-qg58-w57c).

## Gates

Each gate is one command, run from the repository root on dev binaries:

```bash
cargo fmt --all --check                                  # rustfmt (2024 style, rustfmt.toml)
cargo build -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli
cargo test -p unlace-harness --test parity               # datatests + stages vs their baselines
python3 tools/check_spec.py                              # docs/spec anchors, phase-folder ownership
PYTHONPATH=. python3 -m unittest discover -s scripts/tests -p 'test_*.py'   # Python tooling, test layout, layering
PYTHONPATH=. python3 -m scripts.repipe.clitests          # tests/cli acceptance probes
target/debug/unlace catalog --check                      # option catalog vs docs/options.md
python3 scripts/check_determinism.py                     # no new unordered-map iteration (lint)
python3 scripts/check_determinism.py --run target/debug/unlace   # same input, same output (run)
target/debug/unlace catalog --markdown | diff -u docs/options.md -   # options.md is the generator's bytes
cargo clippy -p unlace-cli -p unlace-base -p unlace-num --no-deps -- -D warnings
cargo nextest run --workspace --exclude unlace-wasm --profile ci   # the workspace suite
```

Run the workspace suite with cargo-nextest, not `cargo test --workspace`: `cargo test` runs the
test binaries one after another, so the slowest test of each binary holds up every later binary
(unlace-console alone: 110 s against 69 s under nextest on a 24-core host). nextest schedules every
test of every binary at once. For one library's unit tests either runner is fine.

The parity target (`crates/unlace-harness/tests/parity.rs`) holds two tests:
`datatests_match_the_baseline` runs `tests/datatests` against `docs/baseline.json` (PARITY OK,
675/675 assertions) and `stage_tests_pass` runs every `tests/stages` file, requiring each assertion to pass
(the stage corpus has no baseline file). Each runs its corpus in-process through the harness's datatest
runner and passes only on PARITY OK; on a failure the message lists the failing assertions,
the file errors and the regressed keys. Filter with a name (`cargo test -p unlace-harness
--test parity datatests`). The corpora need the compiled `.sla` files in `specs/`. Re-record a
baseline only for a sanctioned change, with `UNLACE_BLESS=1` on the same command:
`UNLACE_BLESS=1 cargo test -p unlace-harness --test parity datatests` (stages have no baseline to bless).
It refuses while any assertion fails.

A third test in the parity target runs on request: `cargo test -p unlace-harness --test parity --
--ignored trees --nocapture` (`exported_trees_print_back_over_the_corpora`, about half a minute
on six workers). It runs every script of both corpora once more and, after each `print C`, exports
the printed function's C syntax tree (`--ctree`, `docs/architecture/ctree.md` section 11) and
prints it back with the reference printer. It fails when a tree prints back differently from the
function's text, when a function printed in C has no tree, or when a statement or expression is
kept as untyped `raw` text; it prints the counts per corpus. Run it after changing what the printer
emits or the tree export.

A run fails on a baseline assertion that no longer passes (listed under `REGRESSED`), on any
failing assertion, and on a test file that cannot be parsed or run; assertions that pass but are
not in the baseline are listed as newly passing and do not fail. A bless rewrites the `data:`
keys and `data_footer` and keeps the file's other keys. A baseline is a JSON object whose
`passing` array holds strings; a record without one is an error, never an empty baseline.
`docs/baseline.json` is re-recorded only for a sanctioned change (a deliberate default
flip the commit message names), never to absorb a regression.

`scripts/check_layers.py` (run by the unittest line) fails on a new module path (`crate::`,
`super::`, `self::`) from a lower band to a higher one (middle < lift < structure < bandb < emit <
driver; the bands are listed in the script). Invert the dependency instead of adding it to
`scripts/layers-allowlist.txt`; that list only shrinks.

To run only some files, set `UNLACE_PARITY_FILES` to a comma-separated list of paths or globs
(`*` matches any run of characters, `/` included; `?` one character). Each is matched against a
file's repository-relative path, its file name and its name without the extension, so
`UNLACE_PARITY_FILES=wideslice,tests/stages/gh558-* cargo test -p unlace-harness --test
parity stage_tests` runs three stage files. A selected run compares its assertions with the
baseline by name and skips the check for baseline keys of files it did not run; every selected
assertion must pass, and a corpus none of whose files match is skipped. `UNLACE_BLESS=1` refuses
a selected run.

Each run writes `target/parity-times.toml`: one `[[file]]` table per corpus file it ran (`corpus`, `file`, wall time `ms` and `outcome`: `pass`, `fail` or `error`), slowest first within a run. CI uploads it as the `parity-times` artifact of the parity gates job.

Each full run also writes `target/parity-ledger.toml`: one `[[assertion]]` table per assertion of both corpora, with `corpus`, `file`, `name`, `key` (the baseline key: `data:<name>`, with ` @dupN` for the Nth assertion of a repeated name, failing ones counted), `status` (`pass` or `fail`), `class` and `in_baseline`. `class` is `must-pass` (a TOML test's assertion, or a passing XML assertion the baseline holds), `regressed` (a must-pass assertion that fails: the gate fails), `newly-passing` (passes, not in the baseline: reported, never failing) or `known-failing` (fails, not in the baseline). `in_baseline` is `true` or `false` for an XML test and absent for a TOML test, which is its own baseline. The file also has `[[file_error]]` tables (files that could not be parsed or run) and `[[absent]]` tables (baseline keys that no assertion of the run produced; the gate counts them as regressed). A run replaces its own corpus's tables and keeps the other's. It is written before the gate's assert, so a failing run leaves it too. A `UNLACE_PARITY_FILES` run does not write it. CI uploads it as the `parity-ledger` artifact, next to `parity-times`.

To see where a run spends its time, `python3 scripts/parity_slowest.py [--top N] [--corpus TEXT]` prints the
slowest files of `target/parity-times.toml`, each with its share of the total wall time (`--top 0`
prints all of them; `--corpus` keeps the files whose corpus name contains the text, e.g. `stages`).

Other one-liners: `cargo test --release -p unlace-ghidra -- --include-ignored` (the ghidra-mode
differential harness with its heavier breadth test), `bash scripts/version.sh` (the version CI
tags with), `PYTHONPATH=. python3 -m scripts.observatory.generate --out observatory --unlace
target/release/unlace` and `bash scripts/coverage.sh` (docs/observatory.md).

### Determinism

The same input gives the same output, byte for byte, whatever the process, its hash seed or the
`--jobs` count. `scripts/check_determinism.py` enforces it in two halves:

- **The lint** (no binary needed, the `tidy` job): in the non-test code of the crates that produce
  output, a `for` loop over a std `HashMap`/`HashSet` (`RandomState` reseeds every process), or an
  `.iter()`/`.keys()`/`.values()`/`.drain()`/`.into_iter()` chain on one, is a finding unless the
  chain ends in an order-insensitive reduction (`count`, `any`, `all`, `sum`, `len`, `contains`,
  `min`/`max`, a `collect` into a set or map, or a `let` typed as one) or the collected `Vec` is
  sorted within the next few lines. `FxHashMap`/`FxHashSet` (`infra/fasthash.rs`, a fixed
  hasher) are deterministic and not findings. The findings that exist today are listed in
  `scripts/determinism-allowlist.txt` as `<file> <binding> <count>`; a count above its entry fails,
  and so does an entry above its count, so the list only shrinks. Fix a finding with a
  `BTreeMap`/`BTreeSet`, or by sorting what the iteration yields; an iteration that really is
  order-insensitive can carry `// determinism:allow: <why>` on its line or the line above.
- **The run** (`--run UNLACE`, the parity gates job): decompiles a small fixed corpus of in-repo
  binaries (ELF on x86-64, i386, AArch64, ARM, RISC-V and MIPS, Mach-O, PE, a kernel module and a Go
  binary; `CORPUS` in the script) with `decompile-all --json` twice in fresh processes, and once
  under `--jobs 1` and once under `--jobs 4` (both with `--option protoorder off`, the pool's
  serial equivalent; see docs/cli.md), and fails on any byte difference, printing the first lines
  that differ. `--corpus FILE...` runs other binaries.

`tools/hooks/unlace-ci-gates.sh` runs them in order:

```bash
tools/hooks/unlace-ci-gates.sh [fast|parity|full]   # default parity
```

- `fast`: rustfmt, ignored fixtures, `scripts/check_test_layout.py`, the determinism lint.
- `parity` adds: the Python tooling tests, build, specs, lint, the parity target,
  `tools/check_spec.py`, the CLI probes, `unlace catalog --check`, the determinism run, the repipe counters,
  `docs/options.md` freshness and unlace-ghidra. A full pass records the
  tree hash in `$CARGO_TARGET_DIR/.ci-gates-pass`.
- `full` adds the workspace suite under nextest (slow; CI runs it on every push to main).
- Skip named steps with `UNLACE_GATES_SKIP="lint ghidra"`.
- The browser front-end (`integrations/web`, the `unlace-wasm` crate) is opt-in:
  `UNLACE_GATES_WEB=1` adds its tests to the gates and the crate to the workspace suite,
  and CI runs both only when the repository variable `UNLACE_WEB` is `true`.

## CI

`.github/workflows/tests.yml` runs on every pull request and every push to `main` (and is
not called by the nightly, which runs its own `semantic` and `decbench` jobs; see
notes/test-tiers.md). Its jobs start together; none waits for another. The `semantic-gcc` job runs
the x86_64-gcc rows of the T4 semantic suite (`tools/semantic/README.md`) against its baseline; the
full three-configuration run stays in the nightly.

| Job | What it runs | Typical time |
|---|---|---|
| `tidy` | `cargo fmt --all --check`, the Python tooling tests (`scripts/check_test_layout.py`, `scripts/check_layers.py`, `scripts/check_determinism.py`, `scripts/tests`), actionlint with shellcheck over `.github/workflows` | about 1 min |
| `clippy` | `cargo clippy --release ... -- -D warnings` on unlace-cli, unlace-base and unlace-num (the rest of the workspace is not clippy-clean yet) | about 2 min |
| `semantic-gcc` | `tools/semantic/run.py --config x86_64-gcc --opt O0,O2 --baseline tools/semantic/baseline.toml`: each case compiled and run against its reference, failing only on a row that passed in the baseline and no longer does | about 4 min (mostly the release build) |
| `parity gates` | release build, `cargo test --release -p unlace-harness --test parity`, `tools/check_spec.py`, the `tests/cli` probes, `unlace catalog --check`, the determinism run, the repipe counters, `docs/options.md` freshness, the unlace-ghidra harness, and the web tests when `UNLACE_WEB` is `true` | about 10 min |
| `workspace suite (build)` | builds every workspace test binary into a cargo-nextest archive (`cargo nextest archive`) | about 12 min |
| `cargo workspace suite (1/3..3/3)` | three jobs, each running a third of the archive (`--partition count:N/3`) under the nextest profile `ci` (`.config/nextest.toml`), which leaves out only the parity gates (the `parity gates` job runs them). Both suite jobs are skipped on a PR from a branch of this repository unless it has the `full-ci` label | a few min each |

Caching:

- `Swatinem/rust-cache` keeps each job's dependency build under its own key (`clippy`,
  `gates`, `rust-test-nextest`; the jobs build different units, so a shared key would not help).
  Only runs on `main` save it; PR runs read it. The workspace suite also saves after a
  failing test (`cache-on-failure`).
- The `.sla` cache (`UNLACE_SLA_CACHE=.sla-cache`) is restored under a hash of
  `specs/**/*.{slaspec,sinc}`, `Cargo.lock` and the slacomp, sleigh, base and num crates, and
  saved by the parity job on `main`. It only saves compile time: a miss compiles each language
  the tests need on first use.
- `CARGO_INCREMENTAL=0` for the whole workflow (CI builds are never incremental).

A new push to a PR cancels that PR's running workflow. Each commit on `main` runs in a
concurrency group of its own, so no landed commit's run is cancelled or replaced.

Locally the same suite runs with `cargo nextest run --workspace
--exclude unlace-wasm --profile ci`. A test binary outside the
checkout (a target dir elsewhere, or an archive) finds the repository through `UNLACE_ROOT`.

Many tests build their input with a cross toolchain. The PE tests run
`clang --target=x86_64-w64-windows-gnu` (and `i686-…`), which links with `ld` unless a
`<triple>-ld` is on `PATH`; a distribution `ld` built for ELF only fails with
`unrecognised emulation mode: i386pep`. With MinGW binutils installed, link the triple
names to them (`ln -s /usr/bin/x86_64-w64-mingw32-ld ~/.local/bin/x86_64-w64-windows-gnu-ld`,
the same for `i686`). A test that needs an LLVM backend the host's clang or llvm-mc was
built without (SPARC, PowerPC, MIPS) checks it with `common::host` in
`unlace-cli/tests/common/host.rs` and skips with a `skipped: this host lacks …` note; with
`CI` set the same check fails the test, so a runner never skips one.
`.github/actionlint.yaml` declares the `ubuntu-26.04` runner label, which actionlint does not
know yet. Run `actionlint` from the repository root before pushing a workflow change.

## Benchmarks

`crates/unlace-bench` holds a divan benchmark suite over committed fixtures:
`.sla` decode (x86-64, AArch64), image load (an x86-64 ELF and an arm64 Mach-O), the raw
p-code lift of one function, and full decompiles of a jump-table switch, an arm64 Mach-O
caller and an irreducible loop. It reads the compiled specs (`$UNLACE_SPECS`, else `specs/`).
`.github/workflows/codspeed.yml` runs it under CodSpeed's CPU simulation on every push to
main and every PR (with the same `.sla` cache and `CARGO_INCREMENTAL=0` as `tests.yml`);
results are at <https://codspeed.io/coleleavitt/unlace>.

```bash
cargo bench -p unlace-bench                  # wall-clock, plain divan
cargo install --locked cargo-codspeed                         # once
cargo codspeed build -p unlace-bench && cargo codspeed run -p unlace-bench
```

Locally `cargo codspeed run` only checks that every benchmark runs; measurements come from CI.

## Git hooks

```bash
git config core.hooksPath tools/hooks/git-hooks   # once per clone
```

The hooks run lefthook with `tools/hooks/lefthook.yml` (post-checkout links it as
`.lefthook.yml` into each worktree):

- pre-commit: `check-author.sh` (author and committer email must be in
  `tools/hooks/verified-emails.txt`) and the `fast` gates.
- pre-push: the identity check over the pushed commits, then the `parity` gates unless the
  tree already passed them. It never runs the gates for `main`; `UNLACE_PUSH_GATES=0`
  skips them (not the identity check).

`tools/hooks/pr-rank.py` ranks the open PRs of `coleleavitt/unlace` (or `--repo`) by
measured impact, size, CI state, conflicts and stack position.
