# The quality harness

A ground-truth benchmark you build yourself, for judging a new pass or option by its
delta. It compiles programs and packages with gcc and clang at several `-O` levels and
arches, keeps DWARF as the ground truth (prototypes, types, locals, struct layouts,
line tables, call sites, inlined calls, `noreturn`), decompiles the stripped twin with
`unlace decompile-all --json`, scores every function, and stores one SQLite row per
(run, function, metric). An A/B of one option is two runs and a paired comparison.

It complements the decbench campaign (`docs/decbench-loop.md`), not replaces it.
decbench is a fixed third-party tree (Linux C, Joern GED against source, eleven
decompilers). This harness is the corpus you can regenerate and extend. Ground truth
comes from the compiler, so adding an arch, a compiler, an `-O` level or a new fact
is a manifest line or one function. Per-function rows also make "which functions did
this pass move, and which way" a SQL query. Issue #32 is the backlog item.

Code: `scripts/quality/`. Entry point: `python3 -m scripts.quality <command>` from the
repo root. Needs python 3.11+, `pyelftools`, `clang` and/or `gcc`, and `llvm-strip`
(or `strip`). `scipy` is optional: without it the GED assignment step is greedy.

## Quick start

```bash
# 1. corpus: synthetic programs + zlib + lua, gcc/clang x O0/O2/Os x x86_64/aarch64
python3 -m scripts.quality build --jobs 8
#   -> ~/.cache/unlace-quality/corpus/corpus.json   (+ <binary>, .stripped, .gt.json)

# 2. score the current build (dev profile by default: target/debug/unlace)
python3 -m scripts.quality score --label baseline --jobs 6
#   -> ~/.cache/unlace-quality/quality.sqlite, JSON summary on stdout

# 3. judge an option: one run with it off, one with it on, and the paired delta
python3 -m scripts.quality ab --option protoorder --off-value off --on-value cycles \
    --with structdefs on --summary /tmp/protoorder-ab.json

# 4. read back
python3 -m scripts.quality summary --run baseline --by opt --by compiler
python3 -m scripts.quality worst --run baseline --metric cfg_ged --limit 20
python3 -m scripts.quality compare 'protoorder=off' 'protoorder=cycles'
python3 -m scripts.quality options --metric proto_exact
```

`UNLACE_QUALITY_ROOT` moves the default cache (`~/.cache/unlace-quality`). `--db`,
`--corpus`, `--out` override single paths. `UNLACE_BIN` (or `--unlace`) picks
the binary under test. `--arg` passes any other unlace flag through, such as
`--arg=--mode --arg=fast`.
Every scoring command narrows the corpus with `--unit`, `--compiler`, `--opt`,
`--arch` (all repeatable) and `--limit N`.

## The corpus (`build`)

`scripts/quality/corpus.toml` is the manifest:

- `[matrix]`: `compilers`, `opts`, `arches`, and `cflags` added to every compile
  (`-g` is always added; the default `-gdwarf-5` gives call sites). `pie = true`
  links PIE executables (the default is `-no-pie`, so addresses are the link addresses).
- `[arch.<name>]`: `triple` (clang `--target`), `gcc` (the cross driver; absent when
  there is none), `gcc_flags`/`clang_flags`, `link` (this machine can link for it)
  and `host` (libc headers are available). A cell whose driver is missing or can't
  compile an empty file for the target is skipped and listed in `corpus.json` with
  the reason. Shipped: x86_64, i686, aarch64, arm, thumb (Cortex-M), riscv64, mips,
  ppc64le. Which of them build depends on the installed clang targets and cross gccs.
- `[[program]]`: synthetic programs, paths relative to the manifest. `synth/` is
  freestanding C (no libc header; `synth/common.h` declares what it uses), so it
  builds for every arch with only `clang --target`. It covers control flow
  (`control.c`: nested loops, dense/sparse switches, goto cleanup, short-circuit,
  a state machine), aggregates (`structs.c`: struct pointers, nesting, lists, unions,
  by-value structs, a function-pointer table), scalars (`types.c`: every width and
  signedness, floats, bit fields, division by constants) and calls (`calls.c`:
  varargs, inline helpers, tail calls, recursion, callbacks, `noreturn`).
- `[[package]]`: open-source C, downloaded once into `<root>/src`, checked against
  its pinned `sha256` (`--allow-unpinned` to accept an entry without one), extracted
  with path checks and compiled **source by source with the cell's flags**. The
  package's own build system is never run. `link = "shared"` links the objects into
  one `.so` on a linking arch. `path = "..."` uses a local tree instead of `url`.
  `default = false` keeps a big package (sqlite) out unless `--unit` names it.
  Packages need libc headers, so off the host they build only with `--sysroot`.

Each cell writes `<out>/<unit>/<compiler>-<opt>-<arch>/` holding the binary (an
executable, a `.so`, or one object per source when the arch can't link), its
`.stripped` twin (`llvm-strip --strip-all`, `--strip-unneeded` for an object), and
`<binary>.gt.json`, the ground truth. unlace only sees the stripped twin. Rebuilding
a subset updates only those cells in `corpus.json`.

A binary built elsewhere (a Rust or Go binary with DWARF, a release build of an app)
joins with `python3 -m scripts.quality gt <binary> --stripped <twin>`. That writes the
sidecar, and you add an entry to `corpus.json` by hand or with a small manifest.

### The ground truth (`.gt.json`)

`functions` is keyed by entry address. Each record holds:

- `name` and `key`: `0x<entry>`, or `<section>+0x<off>` in an object, the form
  unlace's `object_location` reports;
- `ranges`, `size` (hot/cold splits included), `decl_file`, `decl_line`;
- `return`, `params[]`, `variadic`;
- `locals[]` (lexical blocks included, inlined callees' locals excluded);
- `noreturn`, `declared_inline`;
- `inlined[]`: callee names from `DW_TAG_inlined_subroutine`;
- `calls[]`: `DW_TAG_call_site` target, entry, tail-call flag and whether the
  callee is `noreturn`;
- `lines[]`: the line table's statement addresses inside the function;
- `facts` (below).

Every type carries:

- `spelling`, the C spelling with typedef names kept;
- `resolved`, the same with typedefs resolved;
- the `structscore.parse_type` record (`ptr`, `base`, `kind`, `size`);
- `unsigned`, read from `DW_AT_encoding`;
- for a struct or a pointer to one, `layout`: the binary layout from
  `structscore.struct_layout` (anonymous members expanded, padding explicit).

`globals` maps the address of each named file-scope variable to its type
(`DW_OP_addr` and clang's `DW_OP_addrx`). The extractor is `scripts/quality/dwarf.py`.
It uses pyelftools only and shares its DIE helpers with
`scripts/decbench/structscore.py`.

### Adding a fact

A fact is a per-function value from the source or the compiler that a metric can
compare against. Facts live in `scripts/quality/srcfacts.py`:

```python
@fact("switch_cases")
def _switch_cases(fn: dict, src: Source):
    body = src.body(fn)          # the function's source text, cut at DWARF decl_line
    return None if body is None else cfg.build(body)["counts"]["case"]
```

`corpus build` runs every registered extractor and stores the value under
`functions[<entry>].facts.<name>`. Return `None` when the fact can't be known for
this function. An exception is caught and stored as `{"error": ...}`, so one bad fact
doesn't sink the binary. The shipped facts:

- `cfg`: the structure-only CFG of the source body, plus its statement counts;
- `body_lines`;
- `clang_ast` (with `--clang-ast`): AST node counts, the direct callees the source
  names (including the ones the optimizer inlined) and which of them are `noreturn`.

To use a fact, add a metric (next section) that reads `gt_fn["facts"]["<name>"]`.

**Compiler-emitted facts.** When the source can't answer, make the compiler write the
answer down. Ways to do it:

- `-fsave-optimization-record` (clang) writes a YAML of inlining, unrolling and
  vectorization decisions per function.
- `-fdump-tree-optimized` or `-fdump-rtl-*` (gcc) dump the IR the back end lowered.
- A small LLVM pass or GCC plugin, loaded with `-fpass-plugin=` or `-fplugin=`, can
  emit any per-function JSON: switch lowering (table vs tree), tail-call
  decisions, stack-slot layout, outlined cold blocks.

Add the flags to the unit's or the matrix's `cflags`, so the build leaves the dump
next to the object. Then write an extractor that reads that file and returns the
function's entry by name. Nothing else changes: the dump is regenerated on every
build, and the scorer reads whatever the sidecar holds.

## The scorecards (`score`, `ab`, `ingest`)

`score` decompiles each stripped binary once:
`unlace decompile-all <stripped> --json --max-fn-seconds N`, plus the run's
`--option` arms and `--arg`s. It then pairs records to the ground truth:

- in an object, by `object_location` against the DWARF entry's symbol section;
- in a linked image, by address, after a binary-wide shift chosen to maximize the
  overlap (a loader may rebase a PIE).

Each pair gets a scorecard. A metric that doesn't apply to a function (no struct
parameter, no source body) is absent from that card, never 0.
`python3 -m scripts.quality metrics` prints the catalogue with directions.

| metric | better | what |
|---|---|---|
| `found`, `decompiled` | higher | unlace lists the entry; the body came out without an error |
| `proto_exact` | higher | return type, parameter count, variadic-ness and every parameter type match. A type matches at TRex 6, or at 5 when DWARF can't judge the sign. |
| `param_count_exact`, `param_count_err`, `variadic_match` | | prototype shape |
| `return_trex`, `param_trex` | higher | TRex prioritized type score, 0..6 (`structscore.trex_predicates`); a missing parameter scores 0 |
| `local_type_f1`, `local_count_err` | | locals: multiset F1 over (pointer level, primitive class and width, or struct); count error |
| `struct_field_f1` | higher | struct-pointer parameters: field (offset, size) F1 against the DWARF layout. Predicted layouts come from the record's `types`, so run with `--option structdefs on`. |
| `callee_recall` | higher | share of the DWARF call-site callees the C calls, by name, `sub_<addr>` or the paired function's name |
| `noreturn_agree` | higher | unlace's does-not-return verdict (warning or prototype) agrees with `DW_AT_noreturn` |
| `addr_coverage` | higher | share of the line table's statement addresses that `line_mappings` cover (code dropped or folded away) |
| `cfg_ged`, `cfg_ged_norm`, `cfg_exact` | lower/lower/higher | structural CFG edit distance to the source body (below) |
| `loop_count_err`, `if_count_err`, `switch_count_err` | lower | statement-count differences against the source |
| `gotos`, `gotos_excess` | lower | gotos in the C; gotos beyond those in the source |
| `unstructured_gotos`, `warnings`, `casts`, `undefined_vars`, `lines` | | source-free signals, straight from the record |
| `recompiles` | higher | `--project` only: the function's definition in `decompile-project`'s `.c` has no `clang -fsyntax-only` error |
| `global_type_trex` | higher | `--project` only: TRex of the `.h`'s `extern` declarations against DWARF globals, matched by name or `dat_<addr>`. It is a binary-level row, function `<binary>`. |

**The CFG metric.** `scripts/quality/cfg.py` builds a structure-only CFG from C text,
and it reads both sides: the original body (cut out at `decl_line`) and unlace's
`code`. Using one builder gives both graphs the same granularity. A top-level
`&&`/`||` becomes one branch per operand, which is how the compiler lowers it. A
constant `while (1)` or `for (;;)` gets no condition node. A call to a known
`noreturn` function ends its path. Unreachable statements are dropped, and
straight-line chains are merged.

`cfg_ged` is an upper bound on the edit distance: a bipartite (Riesen-Bunke)
assignment refined by swaps, with ENTRY and EXIT pinned, and every node or edge
insertion or deletion costing 1. It is never below `|dV| + |dE|`. It measures the
same thing as decbench's Joern GED, but the values aren't interchangeable.

Macros in the source are not expanded. A macro that hides control flow therefore
shows up as a difference: compare runs, don't read the absolute value.

**A/B.** `ab --option X --off-value off --on-value on [--with Y v ...]` runs the corpus
twice. Both arms set `X` explicitly, so the result doesn't depend on the build's
default. It then prints `report.compare`. Per metric that is n, both means, the mean
delta, how many functions improved, worsened or stayed the same (direction from the
catalogue), and the `--top` largest regressions and gains, each with its binary and
function. Any two runs compare the same way with `compare A B`, by run id or newest
label. `options --metric M` lists every run's mean with its option arms. That
answers "which setting of which pass was best on this metric" across all runs in the
database.

**A reference decompiler.** `ingest --binary <corpus id> --json doc.json --tool ida --label ida-9.5`
scores any document shaped like `decompile-all --json` as its own run. The minimum is
`functions[].{address, name, code}`; `variables`, `line_mappings`, `warnings`,
`types` and `object_location` make more metrics apply. An exporter for IDA or
Ghidra that writes that shape puts the reference in the same tables, and then
`compare <reference run> <unlace run>` ranks the functions where unlace is worst
relative to it.

## The database

One file, `quality.sqlite`. `scripts/quality/db.py` defines the schema:

- `binaries`: corpus id, paths, unit/compiler/opt/arch/mode, sha256 of the twin;
- `functions`: one per ground-truth function (`key`, `name`, `entry`, `size`, `facts`
  as JSON), plus one `<binary>` row per binary for binary-level metrics;
- `runs`: label, tool, unlace binary and its sha256, git rev, the `--option` arms and
  extra args as JSON, the corpus, a note;
- `run_binaries`: per (run, binary) status, seconds, error, the address shift used,
  ground-truth / predicted / matched counts;
- `results`: **one row per (run, function, metric)**;
- `outputs`: the C per (run, function), only with `--keep-code`;
- `metrics`: the catalogue (direction, description).

The view `scores` flattens everything into one row, so an agent can ask questions
directly:

```sql
-- functions a run made worse on GED, worst first
SELECT a.binary, a.function, a.value AS off, b.value AS on
FROM scores a JOIN scores b ON b.binary = a.binary AND b.key = a.key AND b.metric = a.metric
WHERE a.label = 'protoorder=off' AND b.label = 'protoorder=cycles' AND a.metric = 'cfg_ged'
  AND b.value > a.value ORDER BY b.value - a.value DESC LIMIT 20;

-- prototype exactness by optimisation level and compiler
SELECT opt, compiler, avg(value), count(*) FROM scores
WHERE label = 'baseline' AND metric = 'proto_exact' GROUP BY opt, compiler;
```

## Output-shape sanity counters

Five source-free counters (`null_deref_sites`, `impossible_lvalue_sites`,
`lost_frame_offset_sites`, `leaked_temp_decls`, `stale_return_result`) count text
shapes in the emitted C: a `*(T *)(0LL)` literal, a load or store at an address under
0x1000, a frame-relative `rsp`/`rbp`/`sp`/`fp`/`bp` address left as pointer arithmetic,
a `vN` temporary declared with `// temp`, and a `return result;` whose `result` is never
declared or assigned. They need no DWARF, so binaries without debug info still get a
signal. Lower is better. They are regex matches: a function that really does stack-pointer
arithmetic (rare, usually inline asm) counts too.

## Adding a metric

Add a row to `METRICS` in `scripts/quality/metrics.py` (name, direction,
description), then compute it in `score()` (it needs the ground truth) or in
`source_free()` (it reads only the record). Write the value only when it applies.
The next `score` run stores it, and `compare` and `worst` pick it up through the
catalogue. Unit tests for the harness are in `scripts/tests/test_quality_harness.py`
(`PYTHONPATH=. python3 -m unittest discover -s scripts/tests -p 'test_*.py'`).

## Caveats

- Only ELF ground truth for now (`dwarf.py` reads ELF). Mach-O dSYMs and PDBs are
  the next extractors, and they emit the same sidecar.
- TRex type scores use `structscore`'s 64-bit pointer width, so on a 32-bit arch a
  pointer-sized integer is compared at 8 bytes.
- `local_type_f1` pairs locals as multisets, not by storage: it says whether the right
  *kinds* of locals came out, not which variable became which.
- `recompiles` blames an error on the function whose `// Function:` block holds its
  line. An error in the `.h` is attributed to no function.
