# Parity Quality Execution Plan (2026-05)

This operationalizes `docs/research-ida-parity-gaps-2026-05.md`. The key rule
is that "parity" is not a single number. unlace now tracks three axes:

1. **Stylistic fixture similarity** - current `scripts/score_parity.sh`
   score. This is a regression watchdog only.
2. **Semantic correctness** - source-known decompiled C recompiles and behaves
   like the original. Current coverage is `xtask semantic-report`, which passes
   17 host executable source-known cases, tracks 0 host/source-known semantic
   XFAILs, passes 4 qemu-user non-host executable rows, and includes 4 non-host
   shape-only PASS rows.
3. **Type/variable recovery accuracy** - recovered locals, types, structs, and
   arrays match source/DWARF ground truth. `xtask type-recovery-report` now
   runs an exact textual scorer for DWARF-backed fixtures, parsed C/C++ source
   fixtures, and source-defined non-host signature facts.

`scripts/quality_axes.sh` reports these axes without pretending that an
unmeasured axis is solved.

Current stale/reframed claim reconciliation lives in
`docs/current-parity-ledger-2026-05-30.md`. When this plan, golden triage, and
status wording disagree, use that ledger to decide whether an item is stale,
partially landed, or still active.

## Current Gates

Run these before claiming output-quality movement:

```bash
RUSTC_WRAPPER= bash scripts/score_parity.sh
RUSTC_WRAPPER= cargo run -p xtask -- golden-triage
RUSTC_WRAPPER= cargo run -p xtask -- semantic-report
RUSTC_WRAPPER= cargo run -p xtask -- type-recovery-report
RUSTC_WRAPPER= bash scripts/quality_axes.sh
RUSTC_WRAPPER= cargo run -p xtask -- validate-corpus-toml
```

`quality_axes.sh` should print all three axes. `score_parity.sh` reports the
style score from emitted `[score]` lines even though the exact-line golden test
currently exits nonzero.

Current known state:

- Stylistic fixture parity: **84.9%** emitted by `scripts/score_parity.sh` on
  the current golden stream. The exact-line golden test still exits nonzero
  because `xtask golden-triage` currently has 2 exact-pass fixture rows and
  13 classified review rows: 3 producer-bug and 10 mixed. Do not use a
  blanket rebaseline.
- Semantic correctness: `xtask semantic-report` passes
  `hello_world.elf:main`, `branches.elf:main`, `loops.elf:main`,
  `calls.elf:main`, `empty.elf:main`, `debug_hello.elf:main`,
  `debug_structs.elf:main`, `x87_math.elf:main`,
  `cpp_vtable.elf:main`, `debug_calls.elf:main`, `type_stack_o2.elf:main`,
  `medium.elf:main`, `stripped.elf:main`, `switch_table.elf:dispatch`,
  `cpp_exceptions.elf:main`, `cpp_rtti.elf:main`, and
  `debug_templates.elf:main`. The AArch64, MIPS64, PPC64, and RISC-V non-host
  executable rows also pass through qemu-user; the same four non-host cases
  still pass shape-only checks, which are not executable equivalence.
- Fidelity taxonomy counters: golden metrics currently total
  `cf=1 expr=45 type=8 decl=0 names=989 memstack=16 unknown=0 total=1059`.
- Fixture optimization levels: recorded in `tests/corpus.toml`.
- Type/variable recovery accuracy:
  `fixtures=21 functions=64 c_functions=50 cpp_functions=14 recovered=207 expected=324 reported=1084 recall=63.9% precision=19.1% leaked_temp_decls=256`
  with `source_known=21 source_only=16 source_parsed=16 dwarf_candidates=5
  cpp_candidates=4 scored_cpp=4 optimized_scored=15 scored_source_only=16
  non_host_candidates=4 scored_non_host=4`.

## Tier 0 - Claim Cleanup And Honest Reporting

Status: mostly landed; the current reconciliation ledger is
`docs/current-parity-ledger-2026-05-30.md`.

1. Rename the narrow score from aggregate parity to stylistic fixture parity.
2. Add `scripts/quality_axes.sh` so CI and humans see semantic/type gaps next
   to the stylistic score.
3. Keep README/status claims tied to `docs/status.md`, not historical session
   logs.
4. Validate fixture metadata through `cargo run -p xtask -- validate-corpus-toml`.
5. Treat `docs/research-ida-parity-gaps-2026-05.md` as prioritization input,
   not proof of current behavior.
Ledger rule: keep the stale/reframed ledger updated when metrics, DREAM
quality, or golden status move.

Acceptance: the public docs never present the style score as full IDA/Hex-Rays
quality, and every gate reports what it actually measures.

## Tier 1 - Semantic Correctness

Status: first-class report landed; the current host/source-known executable
cases pass with no semantic XFAILs.

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

Status: counters and per-fixture budgets landed for the current non-slow ELF
fixture set in `crates/unlace-cli/tests/quality_smoke.rs`.

11. Turn the Dramko decompiler-fidelity taxonomy into explicit counters:
    control-flow divergence, expression artifacts, type artifacts,
    declaration artifacts, naming artifacts, memory/stack artifacts, and
    unknown-helper artifacts. Landed in the golden fixture harness.
12. Add those counters to the golden fixture summary next to the existing
    `if`/`for`/`while`/`goto`/var counts. Landed.
13. Add per-fixture budgets for the bad artifacts that are already known:
    stale SSA temporaries, unresolved stack pushes, raw `rsp/rbp` arithmetic,
    `CALLOTHER` leakage, and avoidable gotos. Landed as fixture budgets for
    gotos, labels, leaked temp declarations, raw stack-offset leaks, unknown
    helpers, bad type facts, and zero semantic failures.
14. Preserve the current exact-line golden diff as a stability gate, but do not
    use it as a quality metric.

Acceptance: a fixture can improve or regress in readable categories without
requiring a human to infer the reason from a C diff.

## Tier 3 - Type And Variable Ground Truth

Status: broadened DWARF/source scorer landed; all source-known fixtures now
feed exact type/variable metrics when their source defines scoreable facts.

15. Add a DWARF/source-ground-truth extractor for source-known fixtures:
    function signatures, local names, parameter names, stack slots, struct
    members, arrays, and pointer target types. Landed for DWARF facts plus
    parsed C/C++ source-only facts; C++ template DWARF and inline source
    methods are scored too.
16. Compare recovered C facts against ground truth using coverage, accuracy,
    and precision, matching the SURE'25-style metrics from the research doc.
    Recall and reported-fact precision are reported, with separate pointer,
    array, and struct-reference fact counters.
17. Separate `-O0`, `-O1`, and `-O2` results; optimization level materially
    changes what can be recovered. Scored buckets are emitted for every
    optimization level with source-known facts.
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
