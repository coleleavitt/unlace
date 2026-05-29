# Design: irreducible-region structuring (t55)

Design-first analysis for the residual `medium` gotos (the deeply-nested
`while(1)`+`goto label_N` output of the recursive functions). Grounded in the
actual structurer code + the SAILR/DREAM papers (`research/papers/`,
`research/structuring-and-temps-research.md`).

## Concrete diagnosis (measured, not assumed)

`medium`'s recursive functions (f_ackermann, f_rec_fib) lift to a **single
giant irreducible CFG region**. Trace of `node_split` on f_ackermann:

```
node_split skipped non-shrinking candidate entry=BlockId(1)  current_body=68 remaining_largest_body=68
node_split skipped non-shrinking candidate entry=BlockId(24) current_body=68 remaining_largest_body=68
… (~20+ entry blocks, all skipped)
```

So the region is **68 blocks with 20+ entries**, and *every* split candidate is
non-shrinking (`remaining_largest_body == current_body`). The existing pipeline
is already correct and complete for what it does:

- `irreducible::detect_irreducible_regions` — Tarjan SCC + multi-entry test ✓
- `node_split::split_irreducible_entries` — entry duplication to reducify ✓
- `cross_jump_revert` (SAILR ISC), `condition_dup`, `tail_duplication` ✓
- `goto_elim`, `label_cleanup`, `label_hoist` ✓

The gotos remain because **node-splitting cannot economically reducify a
68-block / 20-entry region**: every split duplicates the whole body without
shrinking the largest sub-region, so `node_split` correctly bails (splitting
would blow up code size for no structural gain). Raising `MAX_SPLIT_ROUNDS`
(currently 16) does **NOT** help — the guard that fires is the *non-shrinking*
check (line 127), not the round cap.

## Why this is design-first, not a bounded patch

The only correct fix for a large multi-entry irreducible region that resists
node-splitting is **DREAM-style condition-based refinement** (NDSS 2015,
`research/papers/dream_ndss2015.txt` §IV): structure the region by computing
per-node *reaching conditions* and emitting `if(cr)…` guards instead of gotos —
which structures *any* region (reducible or not) without node duplication. This
is a parallel structuring engine to the current dominator/interval approach.

Blast radius: it is a new top-level structuring strategy in `structurer.rs`
(272 KB, the single hottest file). CLAUDE.md forbids casual edits there. It must
be:
- gated behind a fall-back (only invoked when node-split leaves a residual
  irreducible region, so reducible functions are untouched — zero regression
  surface for the 99% case),
- landed incrementally with the full gate set green at each step,
- NOT parallelized across agents (one shared file).

## Proposed incremental plan (each step independently gated + committed)

1. **Reaching-condition engine (pure, new module, no wiring).**
   `reaching_conditions.rs`: given a region CFG + entry, compute `cr(entry, n)`
   as a boolean expression over edge predicates (DREAM eq. for cr). Pure
   function + unit tests only; not yet called. Zero blast radius.
2. **Acyclic condition-based refinement (new module).** Consume reaching
   conditions to emit `if/else`/switch for an acyclic region; unit-tested on
   synthetic CFGs. Still not wired into the main path.
3. **Conservative invocation.** In the structurer, *after* node_split, if a
   residual irreducible region remains, route ONLY that region through the new
   engine; reducible functions keep the existing path. DREAM is default-on for
   fully accepted regions, and `UNLACE_DREAM_STRUCT=0` forces the legacy path.
4. **Cyclic regions + abnormal entry/exit** (DREAM §IV-C) — only after 1–3 are
   green on the corpus.

## Honest status / decision

Steps 1–2 are genuinely safe (pure new modules, no pipeline wiring, can't
regress anything). Step 1 is the right place to start and is bounded enough to
land this turn with tests. Steps 3–4 are the multi-session core work.

2026-05-29 update: Steps 1, 2, 3a, 3b, the conservative 3c seam, and the
default-on flip are landed. `UNLACE_DREAM_STRUCT=0` returns before doing any
DREAM work and remains the rollback path. The measured `medium` candidates are
cyclic, so nested Step 4 loop-region decomposition remains the active reducer
task (`docs/dream-step-4-cyclic-plan.md`).

**Crucially: even fully done, this likely does NOT flip `medium` green** — that
golden is independently stale/lossy (empty `void f_rec_fib(){}` bodies, verified
earlier). The value is *correct structured output*, not golden match. The medium
golden should be re-evaluated (refresh-when-better) separately once structuring
improves.

## Serialized delegation plan (advisor-mandated: NOT parallel)

CLAUDE.md forbids casual structurer-core edits and the structurer is one 273KB
hot file (`structurer.rs`), so steps 2-4 are delegated to agents **one at a
time, each gated and merged before the next starts** — never in parallel.

### Baseline (2026-05-29, commit 5f096ba1e) — the measurable target
- `medium`: 29 gotos (f_ackermann 16, f_rec_fib 8, main 4, f_rec_power 1),
  1388 lines.
- `switch_table`: 0 gotos.
- golden_fixtures: 18/32 (the 14 failing are the known pre-existing set).
- Toolchain: rustc 1.98.0-nightly (cced03bfd 2026-05-28). The new-pattern
  strictness (deref-in-borrowing-pattern, explicit enum paths) is real on this
  toolchain — agents must `cargo build` not assume.

### Exit criteria per step (define "done" BEFORE delegating)
- **Step 2 — acyclic condition-based refinement (pure module, unwired).**
  Done iff: a new `condition_refinement.rs` consumes `ReachingConditions` and
  emits a structured HIR-ish tree for an *acyclic* region with NO gotos, with
  unit tests on synthetic diamonds/nested-ifs/switch skeletons. MUST stay
  unwired (zero golden delta). Decompose if it exceeds ~600 LOC.
- **Step 3 — conservative invocation.** Done iff: a residual irreducible region
  (only) is routed through the engine; with `UNLACE_DREAM_STRUCT=0`, output is
  byte-identical to baseline (assert via the byte-identity harness).
- **Step 4 — cyclic regions + abnormal entry/exit.** Done iff: default-on
  `medium` total gotos < 29 with no semantic regression
  (cli_smoke/quality_smoke green), and no uninitialized/undeclared variables
  introduced.

### Rollback criteria (write it down)
- Any step that, with `UNLACE_DREAM_STRUCT=0`, changes ANY of: unlace-struct
  lib tests, cli_smoke, quality_smoke, or the golden pass-count (18) → REVERT
  immediately; the rollback path is leaking.
- Step 3/4 with DREAM enabled: if it introduces undeclared vars, `goto` cycles, or
  drops a live statement on ANY fixture → REVERT; correctness outranks goto
  count.

### Rollback scaffold
`reaching_conditions::dream_structuring_enabled()` reads `UNLACE_DREAM_STRUCT`.
It defaults true and treats `UNLACE_DREAM_STRUCT=0` as an explicit rollback to
the legacy structurer. Step 3 consults it at the structurer seam before doing
any DREAM work.
