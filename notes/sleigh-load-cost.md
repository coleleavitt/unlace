# SLEIGH load cost: every load re-decodes the spec (2026-11-25)

## Project
unlace is a decompiler in Rust (a port of Ghidra's decompiler), a ~30-crate cargo workspace.
Code: github.com/coleleavitt/unlace, branch `main` (local checkout
~/RustProjects/active/unlace-wt-main). Paths below are relative to that checkout.
Toolchain: nightly rustc, 24-core Linux box, tests run with cargo-nextest (one process per test).

## Already done (merged as unlace PR #1526)
- `cargo build` and `cargo test` now share compiled crates (before: 0 of 201 units shared;
  after: 208 of 223). Cause was `[profile.test] opt-level = 1` vs dev 0, and features turned
  on only by dev-dependencies.
- Doc tests off, 1,148 old port-verification tests and dead `#[ignore]` stubs deleted,
  one CI test list, 615 inline `#[cfg(test)] mod {}` blocks moved to their own files.

## Measured: where test time goes
- Last full run: 12,654 tests, 3,612 test-seconds, 164 s wall on 24 threads (near ideal).
- `unlace-cli` integration tests: 1,678 tests, 1,853 test-seconds (half the suite), median
  0.52 s each. Each test starts the `unlace` binary (`Command::new(env!("CARGO_BIN_EXE_unlace"))`)
  at least once; about 130 test files also compile C with `cc`.
- nextest vs `cargo test`: nextest 69 s vs 110 s on unlace-console (cargo test runs test
  binaries one after another). For tiny unit tests they are equal (2.9 s vs 2.0 s).

## Benchmark (`notes/sleigh-load-bench`, real decompiler, opt-level 1)
Same 20 functions of a small x86-64 ELF (`fauxware`), 3 runs each:

| How                                                   | per function |
|-------------------------------------------------------|--------------|
| spawn `unlace decompile <file> <addr>` per function   | 137 ms       |
| in one process, fresh `Decompiler::open` per function | 116 ms       |
| in one process, load once, then decompile each        | 8 ms         |
| load only (ELF), fresh each time                      | 108-112 ms   |
| load + decompile a 5-byte raw x86-64 blob, fresh      | 107-114 ms   |
| `cc -O2` one small C file                             | 29 ms        |

So: process start ~20 ms, decompile ~8 ms, and ~110 ms per LOAD regardless of input size.
insta snapshots vs assert_eq: no run-time difference (200 tests 0.02-0.04 s each way).

## Profile of one fresh load (valgrind callgrind, 1.50 G instructions total)
Inclusive share of instructions:
- 78%  `Sleigh::initialize_from_sla`            crates/unlace-sleigh/src/sleigh.rs:1895
       called from `SleighArchitecture::build_translator`
                                               crates/unlace-lift/src/p1_partition/sleigh_arch.rs:949
- 70%  `SleighBase::decode` -> `SymbolTable::decode`  crates/unlace-sleigh/src/sleighbase.rs,
       crates/unlace-sleigh/src/slghsymbol.rs (impl SymbolTable ~:1177)
- 60%  `SymbolTable::decode_symbol_content`
- 28%  `Constructor::decode`
- 24%  `DecisionNode::decode` (recursive decision tree)   slghsymbol.rs (impl DecisionNode ~:3420)
- 22%  `PackedDecode::open_element`             crates/unlace-base/src/marshal.rs
- 19%  `LazyTemplates::take` (templates are already lazy, still 19%)
                                               crates/unlace-sleigh/src/lazytemplates.rs:72
- 17%  `skip_element_raw`                      crates/unlace-sleigh/src/slaformat.rs
- 17%  `drop_glue::<DecisionNode>`: FREEING the decoded decision tree at the end
- 17%  `DisjointPattern::decode_disjoint`      crates/unlace-sleigh/src/slghpattern.rs
Call path: unlace::Decompiler::session (crates/unlace/src/lib.rs:643) -> unlace_cli::embed::load
(crates/unlace-cli/src/embed.rs:247) -> decompile_all::load_program (decompile_all.rs:1918) ->
unlace_console::engine::bootstrap_raw_image / build_engine_and_init (crates/unlace-console/src/engine.rs:5439, :4935)
-> build_translator -> initialize_from_sla.
The .sla comes from an on-disk compile cache (~/.cache/unlace/sla, x86-64 ~860 KB packed);
compiling is NOT the cost, decoding it into the in-memory symbol table is.

## Constraints that matter for a fix
- `Sleigh`/`SleighBase` hold `Rc` state (address-space manager shared by `Rc`, see the
  `SleighBase` struct at sleighbase.rs:130); the public `Decompiler` is documented as not `Send`.
- `initialize_from_sla` already has a "re-registration path (engine reused with a new program)"
  (sleigh.rs:1924): when the base is already initialized it only re-registers context variables.
  So reusing a decoded engine is partly supported.
- `decodekit::EngineRecipe` (crates/unlace-middle/src/engine/decodekit.rs:34) rebuilds an engine
  from the kept .sla bytes on other threads (Send+Sync recipe), i.e. it decodes again.
- Loads briefly set process environment variables (load-time option gates); the harness
  runs datatest files in separate worker processes because "the engine keeps process-wide caches"
  (crates/unlace-harness/src/parallel.rs:2).
- nextest runs every test in its own process, so an in-process cache only helps when one
  process loads more than once (cargo test, the `unlace` library, decompile-all, the harness).
  Each spawned `unlace` would still decode once.

## Candidate fixes (to evaluate)
1. Do not free the decoded spec at process exit (leak it / `std::process::exit` after output,
   or arena-allocate `DecisionNode`s). Saves up to ~17% of every CLI run and every test. Small.
2. Process-wide (per-thread, because of `Rc`) cache of the decoded `SleighBase`/symbol table,
   keyed by .sla content hash, reused through the existing re-registration path. Makes the 2nd+
   load in a process ~8 ms instead of ~110 ms. Medium: the shared parts must be immutable after
   decode, and the address-space manager is mutated during init.
3. Faster decode: decode decision trees / constructors / patterns lazily on first use (templates
   already are), or store a flat, zero-copy (mmap-able) form in the .sla cache instead of the
   packed element stream. Helps every process, including each spawned `unlace`. Largest change.
4. Test-side only (lower value): fewer `unlace` spawns per test, or move tests that just
   decompile a byte snippet into the TOML stage-file corpus (tests/stages, 954 files /
   6,066 checks run in ONE process in ~35-40 s). Only helps tests, not users.

## Questions for the next step
- Which of 1-3 gives the best win per effort, given the Rc/not-Send design?
- For 3: what does Ghidra itself do to load .sla quickly, and is a zero-copy format (rkyv,
  flat arrays with indices) a good fit for SLEIGH decision trees and constructors?
- How many `unlace` spawns does a typical CLI test do? (not yet counted; strace sampling was started and stopped)

## Rerunning the benchmark
```sh
cd notes/sleigh-load-bench && cargo build
UNLACE_SPECS=$PWD/../../specs target/debug/sleigh-load-bench <mode> \
  ../../crates/unlace-analysis/tests/fixtures/fauxware <path to a built unlace binary> 0x400664 0x40071d ...
```
`<mode>` is `spawn`, `inproc-fresh`, `inproc-shared`, `load-only`, `raw-fresh` or `cc`.
