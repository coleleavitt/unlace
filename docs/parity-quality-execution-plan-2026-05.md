# Parity Quality Execution Plan (2026-05)

This operationalizes `docs/research-ida-parity-gaps-2026-05.md`. The key rule
is that "parity" is not a single number. unlace now tracks three axes:

1. **Stylistic fixture similarity** - current `scripts/score_parity.sh`
   score. This is a regression watchdog only.
2. **Semantic correctness** - source-known decompiled C recompiles and behaves
   like the original. Current coverage is `xtask semantic-report`, which passes
   15 executable source-known cases, tracks 2 host/source-known semantic gaps
   as XFAIL, and lists 3 non-host unsupported cases with reasons.
3. **Type/variable recovery accuracy** - recovered locals, types, structs, and
   arrays match source/DWARF ground truth. `xtask type-recovery-report` now
   runs an exact textual DWARF/source scorer for C debug fixtures.

`scripts/quality_axes.sh` reports these axes without pretending that an
unmeasured axis is solved.

## Current Gates

Run these before claiming output-quality movement:

```bash
RUSTC_WRAPPER= bash scripts/score_parity.sh
RUSTC_WRAPPER= cargo run -p xtask -- semantic-report
RUSTC_WRAPPER= cargo run -p xtask -- type-recovery-report
RUSTC_WRAPPER= bash scripts/quality_axes.sh
RUSTC_WRAPPER= cargo run -p xtask -- validate-corpus-toml
```

Current known state:

- Stylistic fixture parity: **86.8%** emitted by `scripts/score_parity.sh` on
  the current golden stream. The exact-line golden test still exits nonzero
  because the checked-in goldens are stale.
- Semantic correctness: `xtask semantic-report` passes
  `hello_world.elf:main`, `branches.elf:main`, `loops.elf:main`,
  `calls.elf:main`, `empty.elf:main`, `debug_hello.elf:main`,
  `debug_structs.elf:main`, `x87_math.elf:main`, and
  `cpp_vtable.elf:main`, `debug_calls.elf:main`, `type_stack_o2.elf:main`,
  `switch_table.elf:dispatch`, `cpp_exceptions.elf:main`,
  `cpp_rtti.elf:main`, and `debug_templates.elf:main`; `medium.elf:main` and
  `stripped.elf:main` remain XFAIL because optimized main still loses
  loop-carried lvar/phi plus x86 subregister state and the recompiled subset
  times out. Three
  non-host cases are explicitly unsupported with reasons.
- Fidelity taxonomy counters: golden metrics currently total
  `cf=1 expr=45 type=8 decl=0 names=989 memstack=16 unknown=0 total=1059`.
- Fixture optimization levels: recorded in `tests/corpus.toml`.
- Type/variable recovery accuracy:
  `fixtures=5 functions=23 c_functions=18 cpp_functions=5 recovered=148 expected=148 reported=355 recall=100.0% precision=41.7%`
  with `source_known=20 source_only=15 dwarf_candidates=5 cpp_candidates=4
  scored_cpp=1 optimized_scored=3 non_host_candidates=3`.

## Tier 0 - Claim Cleanup And Honest Reporting

Status: mostly landed.

1. Rename the narrow score from aggregate parity to stylistic fixture parity.
2. Add `scripts/quality_axes.sh` so CI and humans see semantic/type gaps next
   to the stylistic score.
3. Keep README/status claims tied to `docs/status.md`, not historical session
   logs.
4. Validate fixture metadata through `cargo run -p xtask -- validate-corpus-toml`.
5. Treat `docs/research-ida-parity-gaps-2026-05.md` as prioritization input,
   not proof of current behavior.

Acceptance: the public docs never present the style score as full IDA/Hex-Rays
quality, and every gate reports what it actually measures.

## Tier 1 - Semantic Correctness

Status: first-class report landed; only the optimized `medium`/`stripped`
host cases remain XFAIL.

6. Promote the current compileable-subset tests into a named semantic gate in
   CI. Landed locally as `cargo run -p xtask -- semantic-report`.
7. Add one compile-and-run check for each source-known fixture family:
   arithmetic, branch, loop, calls, stack locals, structs, switch tables, C++
   vtables, C++ EH, and multi-arch where host execution is possible.
8. Split shape-only semantic checks from executable checks so rodata address
   gaps do not get hidden by synthetic host stubs. Landed for rodata-backed
   `debug_structs`/`cpp_vtable` format strings; raw RTTI/vtable string
   pointers remain XFAIL.
9. Add original-binary behavior capture for executable fixtures: stdout,
   stderr, exit status, and selected argument cases.
10. Add a semantic regression report that lists unsupported fixtures with a
    reason, rather than silently skipping them. Landed for the current
    source-known corpus.

Acceptance: every source-known fixture has either an executable equivalence
check or a documented blocker with a concrete next action.

## Tier 2 - Fidelity Taxonomy Counters

Status: counters landed; per-fixture budgets still open.

11. Turn the Dramko decompiler-fidelity taxonomy into explicit counters:
    control-flow divergence, expression artifacts, type artifacts,
    declaration artifacts, naming artifacts, memory/stack artifacts, and
    unknown-helper artifacts. Landed in the golden fixture harness.
12. Add those counters to the golden fixture summary next to the existing
    `if`/`for`/`while`/`goto`/var counts. Landed.
13. Add per-fixture budgets for the bad artifacts that are already known:
    stale SSA temporaries, unresolved stack pushes, raw `rsp/rbp` arithmetic,
    `CALLOTHER` leakage, and avoidable gotos.
14. Preserve the current exact-line golden diff as a stability gate, but do not
    use it as a quality metric.

Acceptance: a fixture can improve or regress in readable categories without
requiring a human to infer the reason from a C diff.

## Tier 3 - Type And Variable Ground Truth

Status: broadened DWARF/source scorer landed; source-only and non-host
denominators remain explicit until source parsers or non-host debug fixtures
exist.

15. Add a DWARF/source-ground-truth extractor for source-known fixtures:
    function signatures, local names, parameter names, stack slots, struct
    members, arrays, and pointer target types. Landed for C DWARF function
    signatures, params, locals, structs, and fields through the
    `type-recovery-report` textual scorer. C++ DWARF template functions are
    now scored too.
16. Compare recovered C facts against ground truth using coverage, accuracy,
    and precision, matching the SURE'25-style metrics from the research doc.
    Recall and reported-fact precision are reported, with separate pointer,
    array, and struct-reference fact counters.
17. Separate `-O0`, `-O1`, and `-O2` results; optimization level materially
    changes what can be recovered. Scored buckets are emitted for every
    optimization level that has DWARF facts.
18. Add at least one `-O2 -g -fno-omit-frame-pointer` type/stack fixture so the
    type harness does not only measure easy `-O0` cases. Landed as
    `type_stack_o2`.
19. Use failures to drive producer-side recovery: lvar coalescing, stack-frame
    provenance, struct/array member inference, and pointer target typing.
20. Keep variable naming quality separate from type correctness; `a1/v1/result`
    can be stylistically acceptable while still being semantically weak.

Acceptance: status reports can say "type recovery accuracy is X%" with a
defined denominator, not just "the output looks like IDA".

## Tier 4 - Algorithmic Work Driven By The Metrics

After the gates above exist, prioritize implementation by measured failure
count:

- SAILR-style structuring cleanup: short-circuit recovery, loop-rotation
  reversal, condition de-duplication, safe tail duplication, and
  switch/condition normalization are wired into the default cleanup pipeline.
  Remaining work here should be metric-driven extensions to specific SAILR
  schemas rather than another pass-integration task.
- Cross-statement expression recovery: fold multi-use temps only when side
  effects and dominance make it legal.
- Lvar allocation and naming: interference-aware coalescing, coalesced temp
  lvar clustering, and fact-derived names (`this`, `len`, `i`, `buf`,
  `result`) are wired. Remaining work should be driven by scorer failures in
  stack-slot provenance, debug-name precision, or missing source-level facts.
- Array length inference: identify base/stride first, then derive conservative
  bounds from loops, compare chains, and debug info.
- Type solver rewrite research: keep the current solver as baseline while
  prototyping a BinSub/Retypd-style constraint core behind tests.

Acceptance: algorithm work lands only with a metric movement, an exact golden
review, and at least one semantic or type-ground-truth check when applicable.
