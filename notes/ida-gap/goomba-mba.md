# IDA 9.5 gooMBA (goomba.so) vs unlace `mba` / `egraph` / `opaquepredicate` (2026-11-24)

Scope: how Hex-Rays' MBA (mixed boolean-arithmetic) deobfuscator plugin `goomba` simplifies an
obfuscated instruction, when it runs, and what it proves; compared with unlace's `mba` option
(`crates/unlace-bandb-base/src/p3_dataflow/mba.rs`), `egraph` option (`egraph.rs`), and
`opaquepredicate` (`crates/unlace-bandb/src/p3_dataflow/opaquepredicate.rs`). Extends the row
"Nonlinear MBA with proof" in `notes/ida-gaps.md:45` and the module survey in `notes/ida-module-survey.md`;
no earlier note covers goomba's control flow.

Method. IDA side: `~/SiteResearch/ida-pro/sqlite/hexrays__goomba.sqlite` (462 functions, 290 pseudocode rows).
String cross-references (`strings` joined to `xrefs` joined to `functions`) locate the MBA functions;
callee lists come from `xrefs` restricted to code references. Pseudocode was read for the driver,
config, the core routine and the candidate helpers. IDA function names and addresses are the plugin's
own (`sub_XXXX`). Hex-Rays callback and `hexdsp` IDs are read from the pseudocode and are **not**
checked against the SDK header, so they are marked as inferred where they matter. unlace side: a
worktree at `origin/main` (fetched 2026-11-24), grep plus reads of the cited lines.

Note on the input: goomba contains **no opaque-predicate code** (0 names, 0 pseudocode rows, 0 strings
matching `opaque`). The opaque-predicate work in this comparison is unlace's own and has no IDA source here.

## 1. What goomba does

Entry and configuration:
- `sub_D100` registers the plugin ("De-obfuscate arithmetic expressions", strings 279480/279520).
- `sub_D270` (plugin init) checks the Hex-Rays version (magic handshake, then the "Hex-rays version %s
  has been detected" banner), then reads `VD_MSYNTH_PATH`. If that is set, it converts an msynth text
  corpus into an oracle file (`sub_42E40`, which writes `<path>.oracle`) and calls `qexit(0)`: the
  conversion is a standalone build step. It then reads the config section `goomba` through `read_config`
  with four keys: `MBA_RUN_AUTOMATICALLY`, `MBA_Z3_TIMEOUT`, `MBA_ORACLE_PATH`, `MBA_Z3_ASSUME_TIMEOUTS_CORRECT`.
- `sub_DAF0` loads the oracle lazily on first use from `VD_MBA_ORACLE_PATH` (or the default path). A
  `.disable_oracle` sentinel file next to the database turns it off. It logs "loaded MBA oracle" or the
  error.

When it runs (two triggers, both in `sub_DCD0`):
- Automatic: `VD_MBA_AUTO` or `MBA_RUN_AUTOMATICALLY` sets a per-run flag. At the decompile event for
  each microcode block (inferred: callback id 3), the plugin marks instructions with flag `0x8000` in the
  microcode instruction. A later callback (id 7 in the code) then runs the optimiser pass for the marked
  microcode (`hexdsp` 403) and logs "completed mba optimization pass, improved %d expressions".
- Manual: callback id 110 (inferred) in `sub_DCD0` calls `callui(131, "goomba:run")`, the action that starts the same pass on demand.

Per-instruction driver `sub_3EB60` (0x3EB60; 5.5 KB of decompiled body, the core of the plugin):
1. Eligibility: skip unless the instruction is an arithmetic/bitwise tree (`sub_F220`, `hexdsp` 341/342
   checks on the opcode and size). Log "found an MBA instruction".
2. Candidate generation, four sources, each tagged in a vector: **Oracle** (`sub_40F80`, a lookup in a
   red-black tree keyed by the expression's values on a probe set), **Linear** (`sub_1B360`/`sub_1ACE0`:
   evaluate on the 0/1 points of each leaf and rebuild the result), **Simplified lin conj** (`sub_37D00`
   builds the conjunction-basis form, `sub_3B600` simplifies it, limit 16 input variables), and
   **Non-linear** (`sub_3C9C0` runs the normal-form pipeline: "pre-processing", "normalizing", "remove
   parenthesis", "multiplication distribution", then `build_normal_mba`; if it reports "not normal form"
   the source is skipped).
3. Ordering: all candidates go into one vector and are sorted by cost (`sub_F9A0`, `hexdsp` 342). A candidate
   must be strictly cheaper than the original, or it is skipped ("not simpler than original").
4. Equivalence screen `sub_F430`: evaluate both expressions on 256 agreeing samples through the microcode
   evaluator (`hexdsp` 623, counter `v60 = 256`); a mismatch rejects the candidate. The log says
   "instruction is probably equivalent to candidate".
5. Proof (skipped if `VD_MBA_SKIP_PROOFS` is set or the timeout is 0): build a fresh Z3 context,
   translate both microcode trees to bit-vector ASTs (`sub_151D0`, with `sub_19EB0` for size changes;
   sign/zero extension and truncation are handled), assert `distinct(original, candidate)` and call
   `Z3_solver_check` with the `timeout` parameter from `MBA_Z3_TIMEOUT`.
   - sat (1): not equivalent. The model is printed as counterexample lines ("name = value").
   - unsat (-1): proved equal.
   - unknown (0), timeout: accepted only when `MBA_Z3_ASSUME_TIMEOUTS_CORRECT` is on.
6. Acceptance: replace the instruction with the candidate (`hexdsp` 336) and copy the operands (275).
   Every accepted rewrite that was not proved gets a **function comment**:
   "goomba: z3 proof skipped, simplification assumed correct" (`sub_3EB60`, string 280416) or
   "goomba: z3 proof timed out, simplification assumed correct" (string 280512).
   `VD_MBA_LOG_PERF` prints per-stage timings (Equiv class / Linear / Lin conj / Non-linear).

Oracle file: the header string is "gooMBA oracle v2" (281472). `sub_42E40` parses test cases (`ExprInt`,
`ExprId`, `ExprOp`, `ExprSlice`; `sub_42380` reads and writes them), fingerprints every tree (log
"fingerprinted %d trees"), and writes index entries (log "written %d index entries"). The oracle maps a
fingerprint to a simplest-form tree. It is precomputed, so the Oracle source costs one lookup, not a search.

## 2. Ranked table

Status: **have** = unlace does it; **partial** = some of it; **missing** = not in unlace.
Size: S (under a week, one module), M, L.

| # | technique | what IDA does (goomba) | IDA function / address | unlace status (file:line) | impact | size |
|---|---|---|---|---|---|---|
| 1 | Provenance for unproven rewrites | Every accepted rewrite that was not proved gets a function comment, and a timeout policy switch decides whether unknown counts as accepted | `sub_3EB60` (comments at strings 280416, 280512); policy key read in `sub_D270` | **missing**. The `egraph` fallback accepts with no record: `crates/unlace-bandb-base/src/p3_dataflow/egraph.rs:404-420` tests 64 random full-width inputs (`mba.rs:842`) and then `agree_exhaustive` (`egraph.rs:332-342`), which checks only truncated 8-bit values and is a necessary condition, not a proof. The `mba` path is proved (`mba.rs:1386-1389` requires `prove_equal == Some(true)`). | high for trust in agent-driven output; only the opt-in `egraph` path is affected (`phases.toml:5956`) | S |
| 2 | Precomputed simplest-form oracle | A table of simplest forms keyed by a value fingerprint, built from a synthesiser corpus; the first candidate source; loaded lazily; can be disabled by a sentinel file | `sub_40F80` (lookup), `sub_42E40` (index build), `sub_42380` (record I/O), `sub_DAF0` (lazy load), `sub_D270` (corpus to oracle) | **missing**. No oracle or table in `crates/unlace-bandb*/src/p3_dataflow/`; the only "oracle" hits are unrelated (load-time oracles, `ruleaction_2.rs`) | high for nonlinear MBA with more than 3 leaves, where on-the-fly rules stop | L (corpus generator, file format, loader; a first version could use a checked-in table) |
| 3 | Full-width decision procedure for inconclusive candidates | Z3 with a per-query timeout (`MBA_Z3_TIMEOUT`) and sat/unsat/unknown; a model on sat | `sub_3EB60` (`Z3_solver_check` after `distinct`), `sub_151D0`/`sub_19EB0` (microcode to bit-vector) | **partial**. `prove_equal` (`mba.rs:1317-1346`) is an exact bit-serial proof over carry states; it returns `None` past `MAX_STATES = 1024` (`mba.rs:77`, `:1337`), and the `egraph` fallback then falls to row 1. `mba.rs:36-38` and `:46-53` say why unlace has no solver: "the job z3 does in gooMBA". That is a deliberate choice, so an opt-in fallback is a policy question, not a bug | high for correctness on the cases the rules do not settle | L (or M with an in-house SAT bit-blaster) |
| 4 | Counterexample witness on rejection | On sat, prints the model as "name = value" lines; the screen rejects with the first mismatching sample | `sub_3EB60` (strings 280480, 279034); `sub_F430` (256-sample screen) | **missing**. `prove_equal` returns `Option<bool>` (`mba.rs:1317`) and `agree` returns `bool` (`mba.rs:842`), so a rejected candidate carries no witness | medium: an agent (or a debugging human) can see why a rewrite was refused | S |
| 5 | Linear conjunction basis over up to 16 variables | Conjunction-basis coefficients for up to 16 inputs (`2^16` points), then a simplification pass | `sub_37D00` (limit at `> 16`, error string 279968), `sub_3B600`, `sub_34F40` | **partial**. `MAX_LEAVES = 6` (`mba.rs:63`); the truth table is `2^6` (`mba.rs:1127`, `n > MAX_LEAVES`) | medium for obfuscation with 7 to 16 inputs; needs a cost budget so that `2^16` evaluations stay bounded | S-M |
| 6 | One candidate pool ranked by cost | All sources (oracle, linear, lin conj, nonlinear) feed one vector; the cheapest strictly-simpler candidate is tried first | `sub_3EB60` (tags via `sub_33E70`), `sub_F9A0` (cost, `hexdsp` 342) | **partial**. `mba.rs:1386-1389` sorts the candidates of one class by op count and takes the first that proves; `egraph.rs` runs as a separate rule (`universalaction.rs:658`, `:663`) | low-medium | M |
| 7 | Per-stage timing log | `VD_MBA_LOG_PERF`: one line per stage (equivalence, linear, lin conj, nonlinear) plus total time | `sub_3EB60` tail (strings 279064-280744) | **missing**. No timing or trace env in `mba.rs` or `egraph.rs` (grep for `TRACE`, `Instant`, `env::var` finds nothing) | low; helps tune budgets (row 3, row 5) | S |
| 8 | Per-function manual run and automatic per-instruction marking | Action `goomba:run` on one function; automatic mode marks instructions at the decompile event and runs the pass for them | `sub_DCD0`, `sub_D270` (`VD_MBA_AUTO`, `MBA_RUN_AUTOMATICALLY`) | **partial**. Whole-run option `mba` (`phases.toml:5934`) and per-run `--option mba on`; the presets exclude it (`crates/unlace-middle/src/p0_knowledge/modes.rs:607-609`). No per-function trigger | low (kuna runs are batch; the gap matters for interactive use) | S |
| 9 | Probabilistic screen before the proof | 256 agreeing evaluations before any proof (`v60 = 256`) | `sub_F430` | **have, different constant**: 64 pseudo-random full-width evaluations (`mba.rs:842`). Raising it is a measurement question, not a gap | low | S |
| 10 | Nonlinear normal form (MBA-Blast style) | Normal form over the conjunction basis with degree and term checks ("build_normal_mba", "not normal form") | `sub_3C9C0` (pipeline), `sub_35120` (print) | **have**. Polynomial normal form with `MAX_DEGREE = 4` (`mba.rs:65`) and `MAX_MONOMIALS = 128` (`mba.rs:66`), header at `mba.rs:1-35` | - | - |
| 11 | Linear MBA by 0/1 points and Möbius inversion | Evaluate on the 0/1 points of each leaf, invert to coefficients | `sub_1B360`, `sub_1ACE0` | **have** (`mba.rs` header, `mba.rs:1127`); unlace's version does not need the proof step | - | - |
| 12 | Opaque-predicate removal | **Not in goomba.** Zero names, pseudocode rows or strings match "opaque" | - | Unlace has its own: `opaquepredicate` option (`phases.toml:8389`), `crates/unlace-bandb/src/p3_dataflow/opaquepredicate.rs:1-25`, proofs by low bits and by linear combinations of bitwise terms (both exact) | - | - |
| 13 | Width handling in the solver | Sign/zero extension and truncation mapped to Z3 operators | `sub_151D0`, `sub_19EB0`, `sub_19B00` (SEXT/ZEXT/TRUNC strings 278723-278758) | **have**: the `bits`/`mask` arguments on every `prove_equal` and `eval` call (`mba.rs:1317-1322`) | - | - |

## 3. Suggested order

1. Row 1 first: a `proof` field (proved, screened, or assumed) on each `egraph` rewrite, recorded in the
   function's comment. It is small, it fixes a real trust gap that exists today, and it is needed before
   rows 2 to 3 can be measured honestly. Options: keep `egraph` opt-in and record the level, or reject the
   8-bit-only acceptance (the stricter choice; measure the corpus effect first, per `docs/spec` rules).
2. Row 4 with row 1: return the witness from a failed `prove_equal` or `agree`; the same code path.
3. Row 2 is the largest single gain for nonlinear MBA. It needs an owner decision on a generator (msynth is
   a separate tool) and on the table format.
4. Row 3 is a policy decision (unlace avoids a solver on purpose). Recommend an opt-in, budgeted fallback only
   after row 1 is in place, so an assumed result is always labelled.
5. Rows 5 to 8 are S-sized and independent.

## 4. What unlace has that goomba does not

- Exact proofs for the `mba` path (every rewrite is proved; goomba assumes on timeout by policy).
- Opaque-predicate removal with exact low-bit and linear-bitwise proofs (`opaquepredicate`).
- E-graph saturation with budgets (`egraph.rs:48-52`: node limit 4000, iteration limit 12, 2 s time limit;
  quick round 500 nodes, 5 iterations at `egraph.rs:357-358`). Goomba has no equivalent.

## 5. Caveats

- Pseudocode-based. Hex-Rays callback numbers (3, 7, 131, 403, 412) and `hexdsp` ids (336, 341, 342, 349, 623)
  are read from the code and not checked against `hexrays.hpp`; the mapping to pass names is inferred.
- The oracle's record format is read from the parser strings and function names, not from a sample file.
- Z3 reasoning is from the call pattern (`distinct`, `solver_check`, the result codes) and the log strings;
  the solver version is not in the database (`libz3.so` is listed in the imports only).
