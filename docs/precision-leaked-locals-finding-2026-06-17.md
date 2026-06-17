# Precision / leaked-locals finding — 2026-06-17

Measured investigation into the type-recovery **precision** gap (the road to
"100%"). Recall and semantic equivalence are already at 100% / 33-of-33; the
remaining gap is precision (excess reported facts).

## Measured baseline (live)

`xtask type-recovery-report`: **recall 100.0%, precision 68.6%**, 440 excess
reported facts, `leaked_temp_decls=98`. The excess ledger:

| excess | category |
|---|---|
| 202 + 202 | `local_names` + `local_types` (recovered=54 reported=256) |
| 10 | array_types |
| 9 | pointer_types |
| 6 + 6 | field names/types |
| 3 / 2 | param_types / return_types |

So ~92% of the precision gap is excess **local** declarations.

## What the leaked locals actually are (report ledger)

```
184  name=stack-offset(v_NN)  comment=no-comment   e.g. f_ackermann=v_4, f_rec_fib=v_12
 73  name=short(<=2 chars)    comment=no-comment   e.g. debug_calls::compute=a,b,c,d,e
 20  name=named               comment=no-comment   e.g. f_collatz_steps=steps
```

The dominant population is **`v_NN` recovered stack slots**, NOT single-use
expression temporaries.

## Attempt + measured no-win (reverted)

Hypothesis (from research + model council): the highest-ranked safe lever is
**single-use copy folding** past the DWARF source-map fold barrier
(`inline_statement_text` returns `None` for any source-mapped statement). A Coq
proof was written and kernel-checked first (`CopyPropagation.v`,
`single_use_copy_fold_sound` — see below).

The producer change (allow a single-use pure `Copy` into a temp to fold despite a
source-map entry) **fired 82× but produced byte-identical output** — zero
precision change. **Reverted** per the repo's revert-no-wins rule.

### Why it was the wrong lever (root cause)

1. **Wrong population.** The leaked decls are `v_NN` stack slots, not foldable
   expression temps. The 82 folds never intersected the leaked-decl set.
2. **Namespace conflation (methodology failure).** The investigation traced SSA
   varnodes (IR `v18`) while reading post-rename C-text identifiers (printed
   `v18`). These are *different name spaces that do not correspond* — every
   name-matched trace was unreliable.
3. **Confirmation bias on the source-map hypothesis.** `debug_branches` leaked 9
   vs `branches` 2 (supports "source maps cause leaks"), but `debug_loops` leaked
   13 vs `loops` 17 (debug *lower* — refutes it). The refuting datum was
   rationalized away. The source-map guard is **not** the leak source.

## What is proven and banked

`rocq-tests/theories/CopyPropagation.v` (11 lemmas, kernel-checked
`Axioms:<none>`, zero admits): single-use expression/copy propagation is sound —
substituting a single-use temp's defining expression into its sole use preserves
the store, given (a) no intervening statement writes a variable the expression
reads (no-clobber / Rideau-Leroy non-interference), (b) the temp is not
reassigned (single def), (c) the intervening code does not read the temp (single
use); and dropping the now-dead temp declaration preserves the live store
(`drop_dead_temp_sound`) — the part that actually lowers the decl count.

This is a **proven-but-currently-unrealized** lemma: it grounds a future fold
pass once a transform actually creates foldable single-use temps in the leaked
population. It does not change current output.

## The prerequisite before any further producer attempt

Per the advisor and a 2-model council (both high-confidence, converging): build a
**C-decl → IR-defining-stmt attribution map**, emitted by the printer at the
moment of declaration emission (the printer owns both the IR node and the chosen
C identifier, so the correspondence is authoritative, not reconstructed by
fragile name-matching). Minimal shape:

```
decl_id  → ir_def (SSA def site) → storage (stack|register|ssa-temp|dwarf)
         → dwarf_name? → coalesced_with[] → in_ledger (counted as excess?)
```

First query: `GROUP BY storage WHERE in_ledger` — validates or kills the
184/73/20 split with zero namespace guessing, and decides the next lever.

## Ranked next levers (per council, by gain/regression-risk)

| rank | lever | risk | guardrail |
|---|---|---|---|
| 0 (prereq) | C-decl→IR map | ~0 | map counts must reproduce the ledger gap |
| 1 | metric-scoping fix for the 73 short DWARF locals (e.g. `debug_calls::compute=a..e` already match `local_names=5/5`, yet appear in the excess ledger — likely a denominator-counting artifact, **zero producer risk**) | low | recall stays 100%; C output byte-identical; precision moves only from re-scoping |
| 2 | stack-slot coalescing for the 184 `v_NN` | real recall/precision tradeoff | **recall must stay 100%**; map must prove merged slots have non-overlapping live ranges (t61/t69 territory — 6 prior reverts) |
| graveyard | single-use copy folding | sound but unrealized | banked as proof; do not retry without a pass that creates foldable temps |

## Honest status vs the "100% precision" goal

**The precision target was NOT met this session.** Baseline is unchanged at
68.6% (revert restored it exactly). What landed is the proven soundness lemma
(`CopyPropagation.v`) and this measured finding. The next session should build
the attribution map (rank 0) and then attempt the rank-1 metric-scoping
correction, which is the only zero-producer-risk precision lever identified.
