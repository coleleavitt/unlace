# Development setup

The build recipe, gates and worktree layout for working on unlace locally. CI
(`.github/workflows/tests.yml`) runs the same gates on release binaries; locally
they run on dev binaries, which is faster to build and gives the same results.

## Layout

- One git worktree per agent or task: `../unlace-wt-<name>`. The main branch lives in
  `../unlace-wt-main`.
- Build output never goes inside a worktree. Each worktree's `decompiler/target` is a
  symlink to its own target dir (`../unlace-target/<name>`, or wherever you keep them):
  `ln -s <target-dir> decompiler/target`. The Makefile and the gate script find the dev
  binaries through it.
- Built `.sla` files live in each checkout's `specs/` (gitignored). Build them once per
  worktree with `decompiler/target/debug/slacomp -a specs` (about 20 s), or symlink them
  from another checkout of the same commit. Rebuild after any change to
  `specs/**/*.{slaspec,sinc,pspec,cspec}`, and check that every `.slaspec` has its `.sla`.
- Never `git stash` (refs/stash is shared by every worktree). Stage explicit paths only.
- Remove a finished worktree with `tools/hooks/unlace-wt-rm <name>` (`--dry-run` first).
  It refuses uncommitted changes, untracked files, unpushed commits, a locked worktree and
  one a live process works in, then removes the worktree and its target dir.
  `--sweep [--days N]` does the same for every idle `unlace-wt-*`.

## Build recipe

```bash
export RUSTUP_TOOLCHAIN=rustc-rdr-main CARGO_UNSTABLE_PUBLIC_API_HASH=true
export RUSTC_WRAPPER=sccache
# Join the machine-wide jobserver (tools/hooks/unlace-jobserver holds the fifo).
# Do NOT set CARGO_BUILD_JOBS or pass -j while it runs: either makes cargo create its
# own jobserver and ignore the shared one.
fifo=/run/user/$(id -u)/unlace-jobserver.fifo
if [ -p "$fifo" ]; then export MAKEFLAGS="-j --jobserver-auth=fifo:$fifo"; unset CARGO_BUILD_JOBS; else export CARGO_BUILD_JOBS=4; fi
export CARGO_PROFILE_DEV_OPT_LEVEL=1 CARGO_PROFILE_DEV_DEBUG=line-tables-only CARGO_PROFILE_TEST_DEBUG=line-tables-only
# Never export RUSTFLAGS: it replaces the linker and -Z flags set in ~/.cargo/config.toml.
# Never set CARGO_INCREMENTAL=0.
export CARGO_TARGET_DIR=$(readlink -f decompiler/target)
export KUNA_SPECS=$PWD/specs SLEIGHHOME=$PWD/specs

cd decompiler && cargo check -p <crate>                        # while editing
cd decompiler && cargo test -p <crate> --lib <filter>           # focused
cd decompiler && cargo build -p unlace-console -p unlace-harness -p unlace-slacomp -p unlace-cli   # dev profile
```

Heavy runs (decompile-all over a corpus, `make test`, `make test-stages`) go through
`tools/hooks/unlace-slot <cmd>`, which holds one of `UNLACE_SLOTS` (default 6)
machine-wide slots.

## Gates

```bash
tools/hooks/unlace-ci-gates.sh [fast|parity|full]   # default parity
```

- `fast`: rustfmt (`cargo fmt --all --check`; `decompiler/rustfmt.toml` sets the 2024 edition
  and style), forbidden words (no IDA/Hex-Rays text in a branch meant for Noelo-Lab/kuna;
  skipped on `main`), ignored fixtures, `scripts/check_test_layout.py`.
- `parity` adds: `make test-tools`, build, specs, lint (clippy `-D warnings` on
  unlace-cli/base/num), `make test` (PARITY OK 675/675), `make test-stages` (PARITY OK),
  `make check-spec`, the CLI tests, `unlace catalog --check`, the repipe counters,
  `docs/options.md` freshness and unlace-ghidra. A full pass records the
  tree hash in `$CARGO_TARGET_DIR/.ci-gates-pass`.
- `full` adds `make rust-test` (slow; CI runs it on every push to main).
- Skip named steps with `UNLACE_GATES_SKIP="lint ghidra"`.
- The browser front-end (`integrations/web`, the `unlace-wasm` crate) is opt-in:
  `UNLACE_GATES_WEB=1` adds its tests to the gates, `make rust-test WEB=1` adds the crate to the
  workspace suite, and CI runs both only when the repository variable `UNLACE_WEB` is `true`.

Individually, on dev binaries: `make test BINDIR=$CARGO_TARGET_DIR/debug`,
`make test-stages BINDIR=$CARGO_TARGET_DIR/debug`, `make check-spec`,
`$CARGO_TARGET_DIR/debug/unlace catalog --check`.

## Benchmarks

`decompiler/crates/unlace-bench` holds a divan benchmark suite over committed fixtures:
`.sla` decode (x86-64, AArch64), image load (an x86-64 ELF and an arm64 Mach-O), the raw
p-code lift of one function, and full decompiles of a jump-table switch, an arm64 Mach-O
caller and an irreducible loop. It reads the compiled specs (`$KUNA_SPECS`, else `specs/`).
`.github/workflows/codspeed.yml` runs it under CodSpeed's CPU simulation on every push to
main and every PR; results are at <https://codspeed.io/coleleavitt/unlace>.

```bash
cd decompiler && cargo bench -p unlace-bench                  # wall-clock, plain divan
cargo install --locked cargo-codspeed                         # once
cd decompiler && cargo codspeed build -p unlace-bench && cargo codspeed run -p unlace-bench
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
