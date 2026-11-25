# SLEIGH load cost: every load re-decodes the spec (2026-11-25)

## Project
unlace is a decompiler in Rust (a port of Ghidra's decompiler), a ~30-crate cargo workspace.
Code: github.com/coleleavitt/unlace, branch `main` (local checkout
~/RustProjects/active/unlace). Paths below are relative to the repository root.
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

## Profile of one fresh load

Measured 2026-11-25 with valgrind callgrind on the `raw-fresh` mode of the benchmark: load a
5-byte x86-64 blob and decompile it once. That is 1.50 G instructions, about 105 ms. The process
is CPU-bound: 20 loads took 2.23 s of wall time, 2.02 s user and 0.20 s system.

Where the instructions go. These are inclusive costs (a function plus everything it calls),
with the recursive ones counted once:

| Share | What | Where |
|---|---|---|
| 70% | decoding the `.sla` symbol table: `SleighBase::decode` -> `SymbolTable::decode` | `crates/unlace-sleigh/src/sleighbase.rs`, `crates/unlace-sleigh/src/slghsymbol.rs` |
| 19% | of that 70%: walking past each constructor's templates to record where they are (`LazyTemplates::take` -> `skip_element_raw`), 9,121 calls | `crates/unlace-sleigh/src/lazytemplates.rs:72`, `crates/unlace-sleigh/src/slaformat.rs` |
| 8% | reading and inflating the `.sla` file (`FormatDecode::ingest_stream`, zlib) | `crates/unlace-sleigh/src/slaformat.rs` |
| 5% | finding the language: `scan_language_database` opens and parses all 205 `.ldefs` files under `specs/` on every load (about 1,300 `openat` and 1,550 `getdents64` calls per load) | `crates/unlace-console/src/engine.rs`, `LanguageDatabase::collect_spec_files` / `load_language_description` in `crates/unlace-lift/src/p1_partition/sleigh_arch.rs` |
| 5% | the rest of engine setup | `build_engine_and_init`, `crates/unlace-console/src/engine.rs:4935` |
| 6% | the decompile itself | |
| 2.5% | freeing the decoded decision trees when the `Decompiler` is dropped | `drop_glue::<DecisionNode>`, called from `drop_glue::<SubtableSymbol>` |

Where the instructions go by the function that runs them (self cost):

| Share | What |
|---|---|
| about 41% | the generic packed-format reader itself (`PackedDecode` in `crates/unlace-base/src/marshal.rs`): `skip_attribute` 10.8%, `open_element` 8.7%, `read_integer` 3.8%, `close_element` 3.8%, `find_matching_attribute` 3.4%, `read_signed_integer` 2.4%, `advance_position` 2.3%, `close_element_skipping` 2.9%, `read_unsigned_integer` 1.8%, `peek_element` 0.9% |
| about 12% | `malloc`, `free` and other libc (building the symbol table out of many small heap objects) |
| 2.4% | zlib inflate (`miniz_oxide`) |

Call path: `unlace::Decompiler::session` (`crates/unlace/src/lib.rs:643`) -> `unlace_cli::embed::load`
(`crates/unlace-cli/src/embed.rs:247`) -> `decompile_all::load_program` (`decompile_all.rs:1918`) ->
`unlace_console::engine::bootstrap_raw_image` (`engine.rs:5439`) -> `build_engine_and_init` (`engine.rs:4935`)
-> `SleighArchitecture::build_translator` (`crates/unlace-lift/src/p1_partition/sleigh_arch.rs:949`)
-> `Sleigh::initialize_from_sla` (`crates/unlace-sleigh/src/sleigh.rs:1895`).
The `.sla` comes from the on-disk compile cache (`~/.cache/unlace/sla`, x86-64 is about 860 KB).
Compiling the spec is not the cost; decoding the compiled file into memory is.

### Corrections to the first version of this note
- The first version said 17% of a load is freeing the decision tree. That was wrong:
  callgrind counts a recursive function's inclusive cost once per recursion level, and
  `drop_glue::<DecisionNode>` is recursive. The outer, non-recursive call is 2.5%, about 3 ms.
  The same double counting made `DecisionNode::decode` look like 24%.
- So "do not free the spec at exit" saves about 3 ms per load, not 17%.

### What did not help
- `opt-level = 3` for `unlace-base` and `unlace-sleigh` only (`[profile.dev.package.*]`):
  102-106 ms per load against 103-116 ms at the workspace's `opt-level = 1`. No measurable change.

### How these numbers were taken
```sh
cd notes/sleigh-load-bench && cargo build
# wall time, 20 loads
UNLACE_SPECS=$PWD/../../specs target/debug/sleigh-load-bench raw-fresh <fixture> <unlace binary> <20 addresses>
# instruction profile of one load
UNLACE_SPECS=$PWD/../../specs valgrind --tool=callgrind --callgrind-out-file=cg.out \
  target/debug/sleigh-load-bench raw-fresh <fixture> <unlace binary> 0x1000
callgrind_annotate --inclusive=yes cg.out | head -60    # inclusive
callgrind_annotate cg.out | head -30                     # self
callgrind_annotate --inclusive=yes --tree=caller cg.out  # who calls what
# system calls of one load
UNLACE_SPECS=$PWD/../../specs strace -c -f target/debug/sleigh-load-bench raw-fresh <fixture> <unlace binary> 0x1000
```
`perf` cannot record on this machine (`perf_event_paranoid` is 2 and no CPU events open),
so the profile is from callgrind (instruction counts, not time).

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
Ordered by measured share of a load. None is built yet.
1. **A faster packed reader.** About 41% of a load runs inside `PackedDecode` itself, mostly
   skipping and looking up attributes (`skip_attribute`, `find_matching_attribute`). The format
   stays the same, so nothing else changes. The gain is unknown until it is profiled again.
2. **Do not walk past every template at load.** `LazyTemplates::take` still scans each
   constructor's template bytes (19%) just to learn where they end. The `.sla` writer could record
   each template's length or offset, so the reader can jump over it without parsing it.
3. **Find the language without reading all 205 `.ldefs` files.** About 5% of the instructions,
   plus most of the 10 ms of system time per load. An index of `.ldefs` contents in the `.sla`
   cache, or stopping at the file that names the language, removes it.
4. **A process-wide cache of the decoded spec** (per thread, because of `Rc`), keyed by the
   `.sla` content hash and reused through the existing re-registration path. The 2nd and later
   loads in one process become about 8 ms. It does not help a spawned `unlace`, which loads once.
5. **A different cache format** (flat index-based tables, for example rkyv). It skips the
   generic reader (1-2 above). The engine would have to read the archived form directly to also
   skip the 12% of allocation; that changes every user of `SymbolTable`, `Constructor` and
   `DecisionNode`, which is a large change.
6. **Not freeing the spec at exit**: about 2.5% (3 ms). Small.
7. **Test-side only**: fewer `unlace` spawns per test, or moving tests that only decompile a byte
   snippet into the TOML stage-file corpus (`tests/stages`: 954 files, 6,066 checks, run in one
   process in about 35-40 s). Helps the tests, not users.

## Open questions
- How many times does a typical `unlace-cli` test start `unlace`? Not counted. 0.52 s per test
  against 0.14 s per spawn suggests several, but those tests also compile C and write files.
- Ghidra has the same load cost: it also decodes the `.sla` stream into objects. It hides it
  by staying loaded (GUI, or `analyzeHeadless` over many functions).

## Rerunning the benchmark
```sh
cd notes/sleigh-load-bench && cargo build
UNLACE_SPECS=$PWD/../../specs target/debug/sleigh-load-bench <mode> \
  ../../crates/unlace-analysis/tests/fixtures/fauxware <path to a built unlace binary> 0x400664 0x40071d ...
```
`<mode>` is `spawn`, `inproc-fresh`, `inproc-shared`, `load-only`, `raw-fresh` or `cc`.
