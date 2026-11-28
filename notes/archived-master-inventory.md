# Archived master inventory: features on origin/master that main lacks

Read-only inventory. No code was changed and nothing was built or run.

- Archived side: `origin/master` at `3aaf121866`, the old unlace engine before the kuna-based rewrite. 2,659 tracked files, 60 crates, 117 docs.
- Current side: `origin/main` at `73e711d205`. 12,303 tracked files, 26 crates, 1,705 docs.
- Sizes are `git ls-tree -l` blob sizes on master. Line numbers refer to the file on the stated ref.
- Out of scope by owner direction: MCP and other servers, the debugger, and the IR emulator. They are not listed.

## Recommendation

Do not merge or restore the old engine wholesale. Its IR, lifters and session model were replaced on main. Port the few self-contained pieces below, each as a small PR on current main.

Top five port candidates, ranked (one tracking issue each):

1. **Signed release artifacts** (release engineering): main's release workflow builds and uploads six targets but makes no checksums and no signatures. Master adds `SHA256SUMS` and a cosign keyless signature. Cheapest item. Changing the workflow needs a `gh` token with the `workflow` scope.
2. **Fuzz harness (`unlace-fuzz`)** (release engineering and testing): drives the whole pipeline from one byte slice and catches panics. Main has differential testing but no parser or pipeline fuzzing. The repo rules treat every binary as hostile, so this fits.
3. **Anti-debug detection pass** (analysis): heuristic scanner for debugger checks, `ptrace(PTRACE_TRACEME)` and timing probes. Ship it behind a `phases.toml` option. Declared on master but not wired there.
4. **Plugin SDK trait model** (analysis extension): `UnlacePlugin`, `PluginFinding`, `PluginRegistry`. Port the trait model only. Defer the `libloading` loader, which is a native-code trust decision.
5. **`identify-packer`** (CLI and analysis): ranked packer classification with evidence (section entropy, entry-point facts, TLS callbacks). Read-only and deterministic. Main's `unpack` covers UPX, NEOLite and PKLITE unpacking, but has no ranked classifier. Depends on master's `unlace_loader::packer_detect`, so check the main equivalent first.

Watch list (not ported now): the `quality` scorecard (71 KB, feature counters per function, a real measurement tool), Rocq proofs (`rocq-tests/`, 336 KB, mirror master's Rust modules), Lumina collaboration and privacy client (uploads to a server, so it needs a privacy decision first), CFG DOT output (`crates/unlace-output/src/cfg_dot.rs` is exported but no caller was found on master), and C++ STL and class output.

Skip: MCP server, debugger, IR emulator and LSP (servers and runtime tools, excluded by owner direction); `semantic_diff.rs` (not called anywhere on master); WinDbg DML (niche, 3 KB); the Siggen command (main's `flirt make` covers it); the session crate (superseded by `unlace-project`); hand-written lifters (main lifts through SLEIGH).

## Sessions and projects

| # | Feature | Where on master | Main has it? (file:line) | Size to port | Verdict |
|---|---|---|---|---|---|
| S1 | `.unlace` / `.unldb` project files, annotations, byte patches, bookmarks | `crates/unlace-session/src/project.rs`, `db.rs`, `patches.rs` (4,792 B); CLI `project` (`crates/unlace-cli/src/main.rs:367-433`) | Yes, redesigned as SQLite. `crates/unlace-project/src/lib.rs` (24,868 B; header lines 1-10 cover byte patches, bookmarks and directives), `export.rs`, `schema.rs`, `directive.rs`; CLI `project` (`crates/unlace-cli/src/project.rs`) | n/a | Covered. Do not port the session crate |
| S2 | Session state shared by CLI and scripts | `crates/unlace-session/src/lib.rs` (`Session`, 84,860 B across the crate) | Partial: state lives in `unlace-project` and the CLI's per-command code | n/a | Covered differently |
| S3 | TIL type-library reader and importer | `crates/unlace-session/src/til.rs`, `til_parser.rs`, `til_import.rs`; the `til` module sits behind an `unwired` feature (`Cargo.toml:22`) | Yes: `crates/unlace-console/src/typelib.rs`, `crates/unlace-analysis/src/analyzers/protos/til.rs`, `crates/unlace-analysis/src/analyzers/protos/typelib.rs` | n/a | Covered |
| S4 | Legacy `.unldb` reader | `crates/unlace-session/src/db.rs` | No, and not needed | n/a | Skip |

## CLI subcommands

Master's `Cmd` enum is at `crates/unlace-cli/src/args.rs:29-414`, dispatched in `crates/unlace-cli/src/main.rs`. Main's dispatch is a hand-rolled table at `crates/unlace-cli/src/lib.rs:66-90`, including `decompile`, `decompile-all`, `decompile-project`, `decompile-graph`, `functions`, `disassemble`, `raw-pcode`, `read`, `xrefs`, `strings`, `crypto`, `blobs`, `unpack`, `docs`, `install-skill`, `catalog`, `modes`, `specs`, `fid`, `flirt`, `lumina`, `rust-signatures`, `sbom`, `project` and `idb`.

| # | Master subcommand | Where on master | Main has it? (file:line) | Size to port | Verdict |
|---|---|---|---|---|---|
| C1 | `project` | `args.rs:29`, `main.rs:46` | Yes: `project` at `lib.rs:89`, `crates/unlace-cli/src/project.rs` | n/a | Covered |
| C2 | `config` (inspect effective config) | `args.rs:35` | Partial: `modes` and `catalog` exist (`lib.rs:81-82`); no config-inspect subcommand found | S | Covered differently |
| C3 | `decompile` | `args.rs:41` | Yes: `lib.rs:66` | n/a | Covered |
| C4 | `functions` | `args.rs:148` | Yes: `lib.rs:70` | n/a | Covered |
| C5 | `siggen` (FLIRT `.sig` or TOML from archives and objects) | `args.rs:159`, `main.rs:156-184` | Yes via `flirt make` (`crates/unlace-cli/src/flirt.rs:1-16`, writes `.pat` and `.sig` through `flirtpat.rs:319` and `flirtsig.rs:223`). Output shape differs from master's TOML format | n/a | Covered. Check whether master's TOML output is needed |
| C6 | `batch` (alias `dump-all`) | `args.rs:210`, `main.rs:185-197` | Yes: `decompile-all` at `lib.rs:67` | n/a | Covered |
| C7 | `ir-dump` | `args.rs:314`, `crates/unlace-cli/src/ir_dump.rs` (6.8 KB), `crates/unlace-output/src/ir_dump.rs` (31 KB) | Partial: `raw-pcode` (`lib.rs:72`) dumps p-code, not the SSA IR | S to M | Partial. Check `raw-pcode` coverage first |
| C8 | `lumina` | `args.rs:338` | Yes: `lib.rs:86`, `crates/unlace-lumina/` | n/a | Covered. See the Lumina extras watch item |
| C9 | `quality` (feature counters and scorecard) | `args.rs:344`, `main.rs:240`, `crates/unlace-cli/src/quality.rs` (71,348 B) | No | L | Watch list |
| C10 | `identify-packer` | `args.rs:378`, `main.rs:250`, `crates/unlace-cli/src/identify_packer.rs` (13,404 B) | No. `unpack` (`crates/unlace-cli/src/unpack.rs`) handles UPX, NEOLite and PKLITE unpacking only | S to M | **Port (candidate 5)** |
| C11 | `emu`, `dbg` | `args.rs:393`, `args.rs:414` | No | n/a | Excluded by owner direction |

## Analysis and output features

| # | Feature | Where on master | Main has it? (file:line) | Size to port | Verdict |
|---|---|---|---|---|---|
| A1 | Anti-debug detection pass | `crates/unlace-passes/src/anti_debug_detect.rs` (5,009 B), declared at `crates/unlace-passes/src/lib.rs:14`; no CLI caller | No. A grep for the usual APIs finds nothing relevant | S plus wiring and an option row | **Port behind option (candidate 3)** |
| A2 | Plugin SDK and dynamic loader | `crates/unlace-plugin/` (47,386 B; `libloading` in `Cargo.toml:9`; `examples/hello_plugin.rs`); CLI `--plugin-dir` (`args.rs:80`, `main.rs:126`, `load_plugins` at `main.rs:1159`) | No `libloading` or `dlopen` in any main manifest; main extends through `phases.toml` options | M for the trait model; the loader is a separate trust decision | **Port trait model only (candidate 4)** |
| A3 | Extra passes: `cmov_preserve.rs` (2,150 B), `qemu_tcg.rs` (2,892 B) | `crates/unlace-passes/src/` | No counterpart found | S each | Skip unless a case needs them |
| A4 | Semantic diff of two decompiled versions | `crates/unlace-output/src/semantic_diff.rs` (5,287 B) | No. Master's module is not called from any caller | S | Skip. Not wired on master |
| A5 | CFG DOT output | `crates/unlace-output/src/cfg_dot.rs` (13,445 B), `emit_cfg_dot` re-exported at `crates/unlace-output/src/lib.rs:25` | No DOT or graphviz output found in main's CLI, emit, decomp or middle crates | M | Watch list. Confirm master calls it before porting |
| A6 | C++ STL and class output | `crates/unlace-output/src/cpp_stl.rs` (22,370 B), `cpp_class.rs` (6,187 B) | Partial: `crates/unlace-emit/src/p9_emit/cppshortnames.rs` only | M | Watch list |
| A7 | WinDbg DML output | `crates/unlace-output/src/windbg_dml.rs` (3,050 B) | No | S | Skip (niche) |
| A8 | SEH output | `crates/unlace-output/src/seh_output.rs` (2,629 B) | Partial: a SEH mention in `crates/unlace-emit/src/p9_emit/printc/` | S | Unverified. Check before any decision |
| A9 | C printer, expression AST, post-process passes | `crates/unlace-output/src/c_printer/` (735 KB `mod.rs`), `expr_ast.rs` (75,812 B), `postprocess/` | Yes, different layout: `crates/unlace-emit/src/p9_emit/` (about 197 files) | n/a | Covered differently |
| A10 | Instruction annotations | `crates/unlace-output/src/instruction_annotations.rs` (15,868 B) | Partial: `crates/unlace-cli/src/assertdecl.rs` and `p9_emit` annotation modules | S to M | Unverified |
| A11 | Demangling | `crates/unlace-output/src/demangle.rs` (41,777 B) | Yes, in part: `crates/unlace-emit/src/p9_emit/lang.rs`, `langrust.rs`, `cppshortnames.rs` | n/a | Covered in part |
| A12 | Hand-written lifters (about 40 `unlace-lift-*` crates: `6502`, `8051`, `ebpf`, `evm`, `lua`, `sbpf`, `spirv`, `sass`, `wasm`, `z80`, ...) | `crates/unlace-lift-*` | Partial. Main lifts through SLEIGH specs, including `specs/Ghidra/Processors/EVM` and `specs/Ghidra/Processors/Lua` | varies | Skip. SLEIGH is main's design |
| A13 | Quality measurement library | `crates/unlace-cli/src/quality.rs` (see C9) | No | L | Watch list |
| A14 | FLIRT signature database (prebuilt `.sig` files for glibc, musl, Rust, Go, libc++ and others) | `crates/unlace-flirt/sig/linux-x86_64/` (about 1 MB of `.sig`), `crates/unlace-flirt/patterns/*.toml` | Partial: main has the matcher and `ruststdsigs.rs` (`crates/unlace-analysis/src/analyzers/flirt/`) | data-heavy; check licences before copying | Unverified. Check sources and licences first |

## Release engineering and testing

| # | Feature | Where on master | Main has it? (file:line) | Size to port | Verdict |
|---|---|---|---|---|---|
| R1 | Signed releases: cosign keyless signature | `.github/workflows/release.yml:112-118` (cosign install and `sign-blob`), `docs/signed-releases.md` (66 lines) | No: main's `release.yml` (15,495 B) has no cosign, sigstore or signing step | XS | **Port (candidate 1)** |
| R2 | `SHA256SUMS` checksum file | `.github/workflows/release.yml:110` | No: no sha256 step on main's `release.yml` | XS | Part of candidate 1 |
| R3 | Multi-target release builds | `.github/workflows/release.yml` (5 targets, lines 1-120) | Yes, more targets: `.github/workflows/release.yml:76-94` (includes musl and aarch64 darwin) | n/a | Covered. Main ahead |
| R4 | Versioning: `MAJOR.MINOR` scheme and `VERSION` file | `Cargo.toml` (`version = "0.1.0"` only) | Yes: `VERSION` file and `docs/release.md` | n/a | Main ahead |
| R5 | Fuzz harness and seed corpus | `crates/unlace-fuzz/` (`src/lib.rs` 16,208 B, `src/corpus.rs` 11,276 B, `tests/fuzz_harness.rs` 8,980 B, three seed ELFs about 46 KB), `.github/workflows/fuzz.yml` (2,751 B), `fuzz_corpus/` | No fuzz crate or workflow. Differential testing is in `tools/difffuzz/` (Python) | S to M | **Port (candidate 2)** |
| R6 | Determinism lint | `xtask/src/main.rs:302` (`lint_determinism`) | Yes: `scripts/check_determinism.py`, `scripts/determinism-allowlist.txt` | n/a | Covered |
| R7 | xtask helpers: golden regeneration, parity measurement, project round-trip, release | `xtask/src/main.rs` (`regen_goldens`, `measure_parity`), `xtask/src/project_roundtrip.rs`, `xtask/src/release.rs` | Partial: `scripts/measure_parity.*`, `tools/check_spec.py`, `Makefile`. No project round-trip check | S | Covered mostly |
| R8 | Formal proofs (Rocq 9.1, zero admits) | `rocq-tests/` (48 files, 336,216 B; `COVERAGE.md` 14,204 B), `docs/formal-verification.md`, `scripts/verify_proofs.sh` | No Rocq or Coq files on main | L | Watch list. Proofs mirror master's modules |
| R9 | CI workflows | master: `ci.yml`, `fuzz.yml`, `claude-code-review.yml`, `claude.yml`, `release.yml` | Main: `tests.yml`, `coverage.yml`, `codspeed.yml`, `nightly.yml`, `pages.yml`, `conflicts.yml`, `release.yml` | n/a | Covered. Fuzz is R5 |
| R10 | Benchmarks | `benches/hexrays_comparison/`, `benches/spec/` | `crates/unlace-bench` | n/a | Covered |
| R11 | Agent skill installer and built-in docs | none on master | Yes: `crates/unlace-cli/src/skill.rs:1`, `crates/unlace-cli/src/docs.rs` | n/a | Main ahead |
| R12 | Lumina extras: collaboration, privacy client, public DB, legacy JSON | `crates/unlace-lumina/src/collab.rs` (5,871 B), `privacy_client.rs` (3,286 B), `public_db.rs` (6,063 B), `legacy_json.rs` (12,081 B) | Partial: main has `client.rs`, `db.rs`, `helo.rs`, `protocol.rs`, `server.rs` (15,222 B), `tls.rs`, `tinfo.rs` (21,677 B) | M | Watch list. Privacy client needs a decision first |

## Method

1. Listed both trees with `git ls-tree`, then compared crates, the CLI `Cmd` enum against main's dispatch table, and docs.
2. Read the master file behind each row (`git show origin/master:<path>`), and checked each claimed main feature by `git grep` on `origin/main`.
3. Checked whether each master module is wired (called from a caller) before calling it a port candidate.
4. Sized candidates from `git ls-tree -l` blob sizes.

Not verified: the main equivalent of master's `unlace_loader::packer_detect` (candidate 5), whether main's `raw-pcode` covers master's `ir-dump` (C7), and whether master calls `emit_cfg_dot` (A5). Check these in each issue before porting.
