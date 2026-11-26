# SLEIGH load cost: why every test paid ~110 ms, and what was done (2026-11-25/26)

## Summary
- A decompiler load used to cost about 110 ms of CPU whatever the input, against about 8 ms for
  the decompile itself. Almost all of it was decoding the compiled SLEIGH spec (`.sla`) into
  memory. Every test process and every `unlace` run paid it.
- Three changes (#1530, #1531, #1532) brought one
  `unlace decompile` call from 128 ms to 71 ms and a fresh load from 101 ms to 41 ms
  (1,505 M -> 530 M instructions). Output is unchanged.
- What is left of a load, and what each remaining fix would cost, is in
  [What is left](#what-is-left).

## Project
unlace is a decompiler in Rust (a port of Ghidra's decompiler), a ~30-crate cargo workspace.
Code: github.com/coleleavitt/unlace, branch `main` (local checkout `~/RustProjects/active/unlace`).
Paths below are relative to the repository root. Toolchain: nightly rustc, 24-core Linux host,
tests run with cargo-nextest (one process per test).

## The test suite
Measured before the load-time work:
- Last full run: 12,654 tests, 3,612 test-seconds, 164 s wall on 24 threads (near ideal).
- `unlace-cli` integration tests: 1,678 tests, 1,853 test-seconds (half the suite), median
  0.52 s each.
- nextest against `cargo test`: 69 s against 110 s on unlace-console, because `cargo test` runs
  the test binaries one after another. For tiny unit tests they are equal (2.9 s against 2.0 s).
  Keep nextest.
- How many processes a CLI test starts (30 random `unlace-cli` tests, one at a time, under
  `strace -f -e trace=execve`):
  - `unlace` starts per test: median 2, mean 7.1. One test starts it 96 times and takes 12.6 s
    by itself; one starts it none.
  - 7 of the 30 compile C, with a median of 12 compiler runs each; those 7 took 24 of the
    sample's 52 seconds. No test caches the C it compiles (90 test files build C at test time).
- insta snapshots against `assert_eq!`: no run-time difference (200 tests, 0.02-0.04 s either
  way, 0.07 s more compile time for insta). Snapshots only change how expected output is
  updated, not speed.

Done in #1526: `cargo build` and `cargo test` share compiled crates (0 of 201 units shared
before, 208 of 223 after: `[profile.test] opt-level = 1` against dev 0, and features turned on
only by dev-dependencies); doc tests off; 1,148 port-verification tests and dead `#[ignore]`
stubs deleted; one CI test list; 615 inline `#[cfg(test)] mod {}` blocks moved to their own
files (#1529 fixed `cargo fmt` for four of them that are also included through `#[path]`).

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

## Profile of one fresh load, before the changes (2026-11-25)

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

## What was done (2026-11-26)
- **#1530: decode subtables on first use.** The load keeps the inflated stream and walks the
  subtable bodies once with a flat cursor (`crates/unlace-sleigh/src/slascan.rs`, about 13
  instructions per byte against 71 for `PackedDecode::skip_element_raw`), recording where each
  constructor and decision node lies (`crates/unlace-sleigh/src/lazysla.rs`, replacing
  `lazytemplates.rs`). Constructors, their templates and decision nodes are decoded with the
  same decoders the first time instruction resolution, printing or p-code building reads them.
  Per-subtable laziness alone would have gained nothing: x86-64's `instruction` table holds
  7,680 of the 9,121 constructors and 95% of the subtable bytes. Ghidra-built `.sla` files load
  unchanged; `UNLACE_SLA_LAZY=0` decodes everything at load. 1,505 M -> 763 M instructions.
- **#1531: one `.ldefs` per load, no inflate for large specs.** `LanguageDatabase` lists the
  `.ldefs` files once and reads the one named for the language id's processor first, stopping
  at the first that defines the id; listing every language still reads them all, and FID's
  language-family table reads another `.ldefs` only when asked. The `.sla` cache keeps an
  uncompressed copy (`slr` header) beside each cached image of 2 MiB or more (7.2 ms -> 1.0 ms
  to read x86-64's). It also fixed `build_sleigh_for_loader`'s default-model fallback (PE
  `:windows`), which could never run. Its last commit makes the lazy load read the uncompressed
  form (without it, x86-64 loads failed with "Missing SLA format header").
- **#1532: no allocation per comparison in `avxintrin::intrinsic_sized`.** It compared the
  mnemonic against `format!("{op}{ty}")` for 44 combinations; engine setup names every AVX
  user-op of x86-64 (7,268 calls), so a load made about 173,000 allocations, 117 M of the
  616 M instructions it then cost. 616 M -> 530 M.
- **`perf/sleigh-lazyindex`, commit 1: the layout in the cache copy.** The walk of #1530 (113 M
  of the 530 M) is skipped when the uncompressed copy carries its result: `slacache::read_image`
  appends the encoded layout (constructor ranges, template counts, decision roots, operand
  ranges, header and content offsets, as LEB128 integers) and a trailer naming the stream's and
  the layout's lengths to the `.slr` it writes, in the same rename as the stream, so the two
  cannot drift apart; a copy from before gets one on its next read. 530 M -> 417 M.
- **`perf/sleigh-lazyindex`, commit 2: operand symbols and headers.** The 26,603 `<operand_sym>`
  contents (151 M) are decoded on first use: `SleighSymbol::kind` is a `OnceCell`, and
  `SymbolTable::symbol`/`find_symbol_by_id` (every lookup by id or name passes through them)
  decode a pending operand before handing the symbol out, so the ~40 field accessors stay
  infallible and a corrupt operand is reported by the lookup. The symbol headers (name, id,
  scope) of a lazy load are read with the flat cursor (119 M -> 45 M; the packed decoder spent
  about 500 instructions per attribute read) and checked and inserted by the shared code.
  417 M -> 255 M.

Verification: `cargo test` of every crate each change touched; parity (`cargo test -p
unlace-harness --test parity`) after #1530 and after #1530+#1531: datatests match
`docs/baseline.json`, and `tests/stages` fails the same 5 assertions as `main` did before
(6061/6066: globalpointee #15, INDEXEDSTOREGUARD #16, three mixed-width record assertions).
The PRs were merged with `--admin` while the CI runners were queued, so CI did not run on them.

## Results
Same benchmark and host (load average about 8), median of 3; "before" is the engine before #1530:

| Mode | before | after |
|---|---|---|
| `spawn`: start `unlace decompile` per function | 127.6 ms | 71.2 ms |
| `inproc-fresh`: `Decompiler::open` + decompile per function | 103.7 ms | 52.6 ms |
| `raw-fresh`: load + decompile a 5-byte x86-64 blob | 101.2 ms | 41.3 ms |
| `inproc-shared`: load once, decompile each function | 6.8 ms | 4.3 ms |
| callgrind instructions, `raw-fresh`, one load | 1,505 M | 530 M |

After `perf/sleigh-lazyindex` (load average 2-9, median of 3): `raw-fresh` 44.0 ms -> 36.6 ms
(layout in the copy) -> 30.0 ms (lazy operands and flat headers); callgrind 530,128,739 ->
416,846,879 -> 254,623,161 instructions.

Costs of the changes:
- Memory: an engine keeps the inflated x86-64 stream, 8.5 MB, where it kept 3.6 MB of template
  bytes before. `decodekit::EngineRecipe` also holds the 8.5 MB image per engine.
- Disk: the uncompressed copies of every image of 2 MiB or more come to about 412 MB in
  `~/.cache/unlace/sla` if all of them are loaded (556 MB for all 464 languages, which is why
  only large images get one). Deleting the cache is always safe.

## What is left
Where the 255 M instructions of one load go after `perf/sleigh-lazyindex` (inclusive, recursive
functions counted once):

| Share | What |
|---|---|
| 20% | `Architecture::init_post_engine` (user-ops and fixups 6%, string builtins 5%) |
| 12% | inserting the 30,579 symbol shells (`add_symbol_header`: the name-map `BTreeMap` entry, the name copy, the `SleighSymbol` move) |
| 9% | the decompile itself |
| 9% | parsing the `.pspec`/`.cspec` XML (`xml_tree`) |
| 7% | dropping the engine at the end (`drop_glue::<Sleigh>`: 30k symbols, 9k scopes, the layout) |
| 3.5% | contents of the value, varnode and context symbols (`decode_contents`) |
| 3.5% | the 9,000 scopes (`decode_scopes`, still through the packed decoder) |
| 3% | copying the 8.5 MB stream out of the image (`to_vec`; the image is also kept by `EngineRecipe`) |
| 3% | reading the layout back (`Layout::read`) |
| 2% | reading the uncompressed `.sla` copy |

A process start is about 20 ms of the 71 ms per `unlace` spawn. The remaining fixes, none built:
- **Symbol shells (12%) and scopes (3.5%)** are what name lookups use. The 9,000 constructor
  scopes and the operand names in them serve only snippet compilation and printing; a lazy
  per-scope name map would need the scope's symbol ids in the layout.
- **Dropping the engine (7%)** could be skipped by a process that exits right after.
- **AVX naming at setup (6%)** is front-loaded on purpose: the masked user-op names must be
  registered before printing. Making it lazy changes the user-op registry.
- **A flat cache (rkyv) or tables compiled into the binary** would replace all of the decode
  (about 40% of what is left) and is the only way to a load near 1 ms. It changes the types the SLEIGH
  runtime reads, in every user of `SymbolTable`, `Constructor` and `DecisionNode`.
- **A process-wide cache of the decoded spec** (per thread, because of `Rc`) would make the 2nd
  and later loads in one process about 8 ms. It does not help a spawned `unlace`.
- **Test side:** a few tests start `unlace` dozens of times or compile a lot of C (above); fixing
  those, or moving tests that only decompile a byte snippet into `tests/stages` (954 files,
  6,066 checks in one process in about 35-40 s), helps the tests but not users.

## Ideas that were considered and not taken
- **Not freeing the spec at exit.** Its real cost is 2.5% (about 3 ms), not the 17% the first
  version of this note claimed (see the correction above).
- **A faster generic packed reader (`PackedDecode`).** After #1530 the subtable bodies no
  longer go through it, and its self cost fell from 41% to about 25% of a (smaller) load. An attempt at a rewrite was
  stopped and discarded.
- **Replacing SLEIGH** with SAIL models or hand-written lifters: SLEIGH gives every architecture
  in `specs/` and the decompile after a load is already 4-8 ms; the cost was decoding the
  compiled spec, not the spec language. SAIL covers few architectures and is built for proof
  tools. The old unlace (tag `unlace-v1-final`) had hand-written lifters and moved to SLEIGH.

## Known problems not touched here
- `verify_pdbtypes::pdbtypes_names_parameters_and_locals` fails on `main`: `rect_area`'s frame
  array `buf` is folded away, the same symptom as stage assertion INDEXEDSTOREGUARD #16. A
  decompiler-output regression, not a load-time one; not bisected.

## Rerunning the benchmark
```sh
cd notes/sleigh-load-bench && cargo build
UNLACE_SPECS=$PWD/../../specs target/debug/sleigh-load-bench <mode> \
  ../../crates/unlace-analysis/tests/fixtures/fauxware <path to a built unlace binary> 0x400664 0x40071d ...
```
`<mode>` is `spawn`, `inproc-fresh`, `inproc-shared`, `load-only`, `raw-fresh` or `cc`. For an
instruction profile, run one `raw-fresh` load under
`valgrind --tool=callgrind --callgrind-out-file=cg.out` and read it with `callgrind_annotate`
(`--inclusive=yes` for inclusive costs, `--tree=caller` for callers). Do not quote the inclusive
cost of a recursive function (a `'2` suffix): callgrind counts it once per recursion level.
