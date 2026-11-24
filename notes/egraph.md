# egraph: equality saturation over MBA trees (research track, closed)

Option `egraph` (default off), `crates/unlace-bandb-base/src/p3_dataflow/egraph.rs`, spec in
docs/spec/03-ssa-and-simplification.md ("Equality saturation over MBA trees"). It uses the `egg`
crate (MIT, pure Rust, `deterministic` feature). PRs: #508 (pass), #523 (hang fix), #559
(once-per-value regrouping), #572/#577/#632 (docs), #613 (barren-tree memo), #698 (quick round,
dense-tree escalation, single-bitwise trees skip the e-graph), #758 (proof before the exhaustive
check, dense-subterm seeds).

## Verdict

`egraph` stays opt-in. It is useful on obfuscated code together with `mba`, and it is not a
default candidate: on ordinary compiler output it costs more than 2% time and its changes are
not improvements on the whole.

## Obfuscated code (wins)

The corpus is synthetic: OLLVM-style substitutions stacked 1-3 deep (A, 120 functions) or 2-4
deep (B, 150), each built with clang 22 and gcc at -O0 and -O1. A function counts as solved when
the output has no more ops than the original expression. Every output was compiled back and
compared with the source on 20,000 inputs, and none differed in any run. The table is solved
counts on cc4eab698b (#698):

| | A clang -O0 | A gcc -O0 | A clang -O1 | A gcc -O1 | B clang -O0 | B gcc -O0 | B clang -O1 | B gcc -O1 |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| `mba` | 93 | 106 | 117 | 117 | 133 | 139 | 143 | 142 |
| `egraph` | 76 | 96 | 108 | 109 | 101 | 131 | 139 | 137 |
| both | 101 | 108 | 117 | 118 | 136 | 141 | 144 | 145 |

Before #698 (54380310a5) both solved 106/112/117/118 and 136/142/144/146. On `libCoreADI.so`
(Apple's obfuscated ADI library, 19 functions found) `egraph` changes 3 functions. One of them
goes beyond `mba`: `(-((~a0 | 0x4cee331d) + (a0 | 0xb311cce2)) - 2 ^ 0x53a5c4e9) * K` becomes
`(a0 ^ 0x1f4bf7f4) * K`.

## Ordinary code (cost and changes)

The cost is in user-space instructions (`perf stat -e cpu_core/instructions/u`, `taskset` to one
P-core). Wall time on the shared machine is too noisy to use.

| build | patchelf | DecBench O2-noinline | changed functions |
|---|---:|---:|---:|
| d963789525 (#613) | +7.6% | +8.62% | 559 / 91,216 |
| cc4eab698b (#698) | +3.0% | +2.49% (250 binaries) | 274 |
| 92c033f5ca (#698) | | +2.34% (255 binaries, `--max-fn-seconds 120`) | 247 |
| 2feb8da847 (#758) | | +2.11% (255 binaries, `--max-fn-seconds 120`; median +1.10%) | 246 |

- The DecBench runs exclude binaries where the per-function wall budget fired in either arm. The
  10 s default fires in different functions per arm under load, so raw totals mean nothing. With
  120 s only the two crazyflie images still hit it.
- The worst binaries on 92c033f5ca are the libopencm3 examples (+58% to +65%) and coreutils
  `shuf` (+71%). The median binary is +0.93%.
- The profile at #698 puts the remaining time in `kuna_mba::Expr::eval` (small-width check), the
  `mba` table lookups that seed subterms, `prove_equal`, and egg's e-matching. #758 cuts the
  first three. On 2feb8da847 it brings the total from +2.34% to +2.11%, libopencm3 from about
  +64% to +7.5% and shuf from +71% to +2.1%. It leaves the corpus wins and the changed
  functions as they were (both: 101/108/117/118 and 136/141/144/145). That is still over the
  2% bar, with the same non-improving changes.
- A sample of the changed functions on DecBench:
  - neutral to good: `put_fat` `(val << 0x14) >> 0x18` becomes `(val & 0xfff) >> 4`;
    `TI1_Config` two `|=` statements fold into one store;
  - worse: `rcc_set_hpre` loses the source's `reg32` local; `dwSpiWrite` turns
    `header[0] |= 0xc0` into `header[0] = regid | 0xc0`; `set_int_pin_config` respells a
    bit-field store as a sign-extending shift times `'\xfe'`; `memset` (before #698) turned
    `(n - 4 & ~3) + 4 + s` into `s - (3 - n & ~3)`.
  - Many other changes are variable-merge side effects (a different register set per local).
- GED was not measured: there is no scored DecBench tree (`ged_src` pkls) on this machine.

## If it is reopened

- Restrict the rule to trees the obfuscators produce, rather than any mixed tree. Candidates
  are bitwise-op density, or a mixed op whose two operands share a leaf.
- Score GED with `scripts.decbench.optsweep` once a scored tree exists.
- The corpus generator and harness (gen.py, measure.py, verify.py, rescore.py, dbcorpus*.sh)
  were in a session scratchpad. Recreate them from this note.
