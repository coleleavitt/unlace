# Archived master inventory: features on origin/master that main lacks

Read-only inventory. No code was changed and nothing was built or run.

- Archived side: `origin/master` at `3aaf121866` (the old unlace engine, before the kuna-based rewrite). 2,659 tracked files, 60 crates, 117 docs.
- Current side: `origin/main` at `73e711d205`. 12,303 tracked files, 26 crates, 1,705 docs.
- Sizes are `git ls-tree -l` blob sizes on master. Line numbers are on the file as it sits on the stated ref.

## Recommendation

Do not merge or restore the old engine wholesale. Its IR, its lifters and its session model were replaced on main. Port the few self-contained pieces below, each as a small PR on current main.

Top five port candidates, ranked (one tracking issue each):

1. **MCP server (`unlace-mcp`)**: the only agent-facing protocol surface either tree has. Small, read-only, and it fits the agent-first mission. Risks: it needs `rmcp` 1.8 added to the workspace, and it imports `unlace_cli::config::Config`, which must be mapped onto main's option surface. Its `ir_dump_function` tool has no obvious main counterpart yet, so drop that tool if none exists.
2. **Signed release artifacts**: the release workflow on main builds six targets and uploads them, but it produces no checksums and no signatures. Master adds a `SHA256SUMS` file and a cosign keyless signature. Cheapest item here (a few workflow steps and one `id-token` permission). Changing a workflow file needs a `gh` token with the `workflow` scope.
3. **Fuzz harness (`unlace-fuzz`)**: runs the whole pipeline (load, lift, SSA, passes, printer) from one attacker-controlled byte slice and catches panics. It ships three seed ELFs and a `fuzz.yml` job. Main has differential testing (`tools/difffuzz`) but no parser or pipeline fuzzing. This matches the repo rule that every binary is hostile.
4. **Anti-debug detection pass**: `anti_debug_detect.rs` classifies calls to debugger checks, `ptrace(PTRACE_TRACEME)` and timing probes. It is a heuristic scanner, so under the repo rules it must ship behind a `phases.toml` option. On master it is declared (`unlace-passes/src/lib.rs:14`) but not wired into the CLI, so port the wiring as well.
5. **Plugin SDK, trait and registry only**: `UnlacePlugin`, `PluginFinding` and `PluginRegistry` in `unlace-plugin`. Main has no out-of-tree analysis hook. Port the trait model only. Defer the `libloading` dynamic loader, because loading native code from a directory is a separate security decision.

Watch list (not ported now): Rocq proofs (row 6; they mirror master's Rust modules, which main has since rewritten), Lumina collaboration and privacy client (it uploads to a server, so it needs a privacy decision first), and the plugin dynamic loader.

Skip: the debugger, the IR emulator, the LSP protocol types, the session crate (superseded by `unlace-project`) and the hand-written lifters (main lifts through SLEIGH).

## Feature table

| # | Feature | Where on master | Main has it? (file:line) | Size to port | Verdict |
|---|---|---|---|---|---|
| 1 | MCP server, read-only over stdio | `crates/unlace-mcp/src/server.rs` (11,000 B, 339 lines; tools at lines 65, 75, 88, 102, 119, 133: `binary_info`, `list_functions`, `decompile_function`, `ir_dump_function`, `xrefs_from`, `xrefs_to`), `main.rs` (37 lines), `docs/mcp.md` (282 lines, roadmap) | No MCP crate, no `rmcp` dependency. Agent surface on main is `install-skill` (`crates/unlace-cli/src/skill.rs:1`, dispatch `crates/unlace-cli/src/lib.rs:80`) | S: about 12 KB of Rust plus one workspace dependency | **Port (candidate 1)** |
| 2 | Signed releases: `SHA256SUMS` and cosign keyless signature | `.github/workflows/release.yml:110-118`, `docs/signed-releases.md` (66 lines) | Partial. `.github/workflows/release.yml` (15,495 B) builds six targets including musl (lines 76-94) and uploads artifacts. No checksum or signing step; grep for cosign, sign and sha256 finds nothing | XS: a few steps and `id-token: write` | **Port (candidate 2)** |
| 3 | Fuzz harness | `crates/unlace-fuzz/` (`src/lib.rs` 16,208 B, `src/corpus.rs` 11,276 B, `tests/fuzz_harness.rs` 8,980 B, 3 seed ELFs about 46 KB), `.github/workflows/fuzz.yml` (2,751 B), `fuzz_corpus/` | No. No fuzz crate or fuzz workflow. Differential testing exists in `tools/difffuzz/` (Python) | S to M: the harness is about 40 KB, the seeds are fixtures | **Port (candidate 3)** |
| 4 | Anti-debug detection pass | `crates/unlace-passes/src/anti_debug_detect.rs` (5,009 B), declared at `crates/unlace-passes/src/lib.rs:14`; no CLI caller | No. No anti-debug analysis (a grep for the usual APIs matches only unrelated files) | S: about 5 KB plus wiring and an option row | **Port behind option (candidate 4)** |
| 5 | Plugin SDK and dynamic loader | `crates/unlace-plugin/` (`src/` 47,386 B total including `wasm_sandbox.rs`; `libloading` in `Cargo.toml:9`; `examples/hello_plugin.rs`), CLI `--plugin-dir` (`crates/unlace-cli/src/args.rs:80`, `main.rs:126`, `load_plugins` at `main.rs:1159`) | No. No `libloading` or `dlopen` in any main crate manifest; extension on main is `phases.toml` options | M for the trait model; the loader adds a native-code trust decision | **Port trait model only (candidate 5)** |
| 6 | Rocq proofs of decompiler cores | `rocq-tests/` (48 files, 336,216 B; `theories/*.v`, `COVERAGE.md` 14,204 B), `docs/formal-verification.md`, `scripts/verify_proofs.sh` | No Rocq or Coq files on main | L to port wholesale. The proofs mirror master's algorithms, so each theory must be re-checked against main's code before reuse | Watch list |
| 7 | Debugger: Linux ptrace, GDB RSP client, Windows stub, Null | `crates/unlace-debugger/` (71,009 B; `backends/linux_ptrace.rs` 792 lines, `backends/gdb_stub.rs` 326 lines, `gdb_rsp.rs`, `breakpoint.rs`, `condition.rs`), CLI `dbg` (`args.rs:414`, dispatch `main.rs:264`, feature `dbg-ptrace` in `crates/unlace-cli/Cargo.toml:47`), `docs/debugger.md` (77 lines) | No. Out-of-process difffuzz backends do similar work: `tools/difffuzz/gdbsim_backend.py`, `tools/difffuzz/qemu_backend.py` | L, Linux-only for the useful backend. `docs/debugger.md` marks ptrace, Windows and GDB as stubs | Skip |
| 8 | IR-level emulator with Linux syscall sandbox | `crates/unlace-emu/` (66,844 B; `runner.rs` 300 lines, `syscalls.rs` 106 lines, `interpreter.rs`, `memory.rs`), CLI `emu` (`args.rs:393`, dispatch `main.rs:258`, run at `main.rs:610-616`), `docs/emulator.md` (73 lines) | Partial, at a different level. Main emulates p-code: `crates/unlace-sleigh/src/emulate.rs` (21 KB), `crates/unlace-middle/src/engine/emulatefunction.rs`; `tools/difffuzz/pcode_emu.py` | L. The 75-opcode IR does not exist on main | Skip. Use main's p-code emulator |
| 9 | Session state and `.unlace` / `.unldb` project files, byte patches, TIL reader | `crates/unlace-session/` (84,860 B; `patches.rs` 4,792 B, `project.rs`, `til.rs`, `til_parser.rs`, `til_import.rs`; `unwired` feature at `Cargo.toml:22`), CLI `project` (`main.rs:367-433`) | Yes, redesigned. SQLite project file in `crates/unlace-project/src/lib.rs` (24,868 B, header lines 1-10 describe byte patches, bookmarks and directives), `export.rs`, `schema.rs`, `directive.rs`; CLI `project` (`crates/unlace-cli/src/project.rs`). TIL: `crates/unlace-console/src/typelib.rs`, `crates/unlace-analysis/src/analyzers/protos/til.rs` | n/a | Covered. Do not port the session crate |
| 10 | LSP protocol types | `crates/unlace-cli/src/lsp.rs` (31,237 B), `pub mod lsp` at `crates/unlace-cli/src/lib.rs:23`; no server and no subcommand | No | M to wire a real server; the types alone are inert | Skip |
| 11 | Lumina extras: collaboration, privacy client, public DB, legacy JSON | `crates/unlace-lumina/src/` on master: `server.rs` (41,281 B), `collab.rs` (5,871 B), `privacy_client.rs` (3,286 B), `public_db.rs` (6,063 B), `legacy_json.rs` (12,081 B) | Partial. Main has `client.rs`, `db.rs`, `helo.rs`, `protocol.rs`, `server.rs` (15,222 B), `tls.rs`, `tinfo.rs` (21,677 B), `metadata.rs`, `messages.rs` | M | Watch list. Privacy client needs a decision first |
| 12 | Hand-written lifters (about 40 crates: `unlace-lift-6502`, `-8051`, `-ebpf`, `-evm`, `-lua`, `-sbpf`, `-spirv`, `-sass`, `-wasm`, `-z80`, ...) | `crates/unlace-lift-*` | Partial. Main lifts through SLEIGH specs, including `specs/Ghidra/Processors/EVM` and `specs/Ghidra/Processors/Lua` | varies | Skip. SLEIGH is main's design |
| 13 | Extra passes: `cmov_preserve.rs` (2,150 B), `qemu_tcg.rs` (2,892 B) | `crates/unlace-passes/src/` | No counterpart found | S each | Skip unless a case needs them |
| 14 | Determinism lint | `xtask/src/main.rs:302` (`lint_determinism`) | Yes: `scripts/check_determinism.py`, `scripts/determinism-allowlist.txt` | none | Covered |
| 15 | xtask helpers: golden regen, parity measure, project round-trip, release | `xtask/src/main.rs` (`regen_goldens`, `measure_parity`), `xtask/src/project_roundtrip.rs`, `xtask/src/release.rs` | Partial: `scripts/measure_parity.*`, `tools/check_spec.py`, `Makefile`. No project round-trip or release tool | S | Covered mostly |
| 16 | Agent skill installer and built-in docs | none on master | Yes: `crates/unlace-cli/src/skill.rs:1` (`install-skill`), `crates/unlace-cli/src/docs.rs` | none | Main ahead |
| 17 | CI workflows | master: `ci.yml`, `fuzz.yml`, `claude-code-review.yml`, `claude.yml`, `release.yml` | Main: `tests.yml`, `coverage.yml`, `codspeed.yml`, `nightly.yml`, `pages.yml`, `conflicts.yml`, `release.yml` | none | Fuzz covered by row 3 |
| 18 | Benchmarks | `benches/hexrays_comparison/`, `benches/spec/` | `crates/unlace-bench` | none | Covered |
| 19 | Config file | `unlace.example.toml`, `crates/unlace-cli/src/config.rs` | Main steers decisions through per-run options rather than a user config file (not verified in detail) | S | Covered differently. Not needed |

## Method

1. Listed both trees with `git ls-tree -r --name-only`, then compared crates, top-level layout, CLI enums and docs.
2. Read the master files behind each row (`git show origin/master:<path>`). Checked each claimed feature by grep on the other ref (`git grep ... origin/main`).
3. Sized candidates from `git ls-tree -l` blob sizes.

Not verified: whether main's `unlace_cli::config` equivalent exposes what the MCP tools need. That check belongs to candidate 1's issue.
