# rustc techniques mined from the t-compiler Zulip

Source: `~/VulnerabilityResearch/zulip/` (rust-lang Zulip export, scraped
2026-05). Extracted with `scripts/zulip/parse_messages.py`. Each technique
below cites a real message and maps it to the unlace pass that should
adopt it.

Re-run the extraction with:

```bash
python3 scripts/zulip/parse_messages.py \
  --stream t-compiler_performance --stream t-compiler_mir-opts \
  --stream t-compiler_query-system \
  --keyword worklist --keyword 'fixed point' --keyword fixpoint \
  --keyword quadratic --keyword interning
```

---

## 1. Bounded fixpoint with iteration cap → already have, but naive

> **Wesley Wiser** (t-compiler/mir-opts, *`x & false == false`*): "I don't
> have an issue running it to a fixed point though." — **Xavier Denis**: "or
> bounded fixpoint"

> **Dylan MacKenzie (ecstatic-morse)** (t-compiler/mir-opts,
> *Flow-sensitive MIR const-propagation*): "Hitting an iteration limit
> means that you cannot optimize anything in the function, since fixpoint
> wasn't reached."

**unlace mapping**: `type_constraint_solver.rs` already uses a bounded
fixpoint (`max_iters = 64`). The problem is not the bound — it is that
**each** iteration re-scans **all** constraints and re-materializes
**every** variable's bounds (lines 334-393). The rustc lesson:
distinguish "reached fixpoint" from "hit the limit", and don't redo
settled work. → Target: t130 (worklist rewrite).

## 2. Worklist / dirty-set instead of whole-program rescans

> **eddyb** (t-compiler/mir-opts, *eddyb - niko sync*): "NRVO may require a
> heuristic threshold (it's quadratic so a lot of locals slows it down)
> … the NRVO PR actually has some log of me doing speedups of many
> orders of magnitude just because I was optimizing the term under the
> quadratic."

rustc's dataflow framework (`rustc_mir_dataflow`) uses a **worklist** of
dirty blocks: when a block's entry state changes, only its successors are
re-queued. Naive "iterate all blocks until nothing changes" is the
anti-pattern they explicitly moved away from.

**unlace mapping**: `TypeConstraintSolver::solve_constraints` should keep
a `var → [constraint index]` adjacency map and a worklist seeded with all
constraints. When `meet`/`insert_lower` changes a var's bounds, push only
the constraints that read that var. → Target: t130.

## 3. Interning to collapse structural duplication

> **eddyb** (t-compiler/mir-opts, *Place's projection interning design
> meeting*): "interning PlaceBase on top of projections means you'll have
> less reuse … there is only an ergonomic benefit to having the whole
> Place being interned, since its size is really small."

> **Wesley Wiser** (t-compiler/mir-opts, *interning links*): "I had to add
> interning stuff in a recent PR … `src/librustc/ty/context.rs` is the
> main bit … the actual interning code uses the `slice_interners!` macro."

rustc interns types, substs, and predicates so equality is a pointer
compare and dedup is automatic.

**unlace mapping**: `PrimitiveType` and `TypeCapability` are small `Copy`
enums (no interning needed), but the **constraint list** and the
`PolyTypeBounds` sets contain heavy duplication on large functions.
Interning `SsaVarnode` keys (already `Copy` + `Ord`) is fine; the win is
deduping identical constraints before the solve loop. → Target: t130
follow-up (dedupe `Vec<Constraint>` via a `BTreeSet` before solving).

## 4. Coherence-style "compare-every-pair" is the quadratic smell

> **nnethercote** (t-compiler/performance, *Compile-time case-study: AWS
> crates*): "the fundamental problem is that there are just a huge number
> of these comparisons being made … I think there might be inherently
> quadratic, due to an every-type-must-be-compared-against-every-other-type
> algorithm."

> **lcnr**: "it's only quadratic for impls which have the same simplified
> self type" — i.e. **bucket by a cheap key first**, only do the O(n²)
> comparison within a bucket.

**unlace mapping**: any unlace pass that compares all varnodes against all
others (interference graph in `register-coalesce` / `variable-merge`)
should bucket by a cheap discriminator (size, space, block) first, then
do the expensive pairwise check only within a bucket. → Target: future
`variable-merge` / `register-coalesce` audit.

## 5. Widening/narrowing to bound abstract-interpretation chains

> **Jannis Harder** (t-compiler/mir-opts, *Flow-sensitive MIR
> const-propagation*): "Is this something where widening (as in abstract
> interpretation) can be used? … they are used to avoid infinite or
> impractically long chains during fixpoint computations … besides
> widening there is also narrowing, which you do after you find a fixed
> point to regain some of the precision lost during widening."

**unlace mapping**: `scalar_evolution.rs` and `known_bits_analysis.rs`
walk lattices that could in principle chain for a long time. A widening
operator (jump to ⊤ after k refinements of the same var) caps the chain;
a narrowing pass afterward recovers precision. Today unlace relies on the
lattice having finite height — fine for `PrimitiveType`, risky for range
analysis. → Target: future `ConstantRange` widening in
`known_bits.rs`.

## 6. Self-profiling is the source of truth, not intuition

> **lqd** (t-compiler/performance, *AWS crates*): "Running it in cachegrind
> will take a while … the crate's so big that it breaks the self-profiler.
> Most of the time is in rustc and not LLVM (codegen is around 3 mins) so a
> check profile is more interesting."

rustc ships `-Z self-profile` and the team always measures before
optimizing.

**unlace mapping**: this is exactly what `--stats` + `UNLACE_TIMING=1` +
`UNLACE_FLAME` (see `docs/profiling.md`) give us. The wc finding
(TypeConstraintSolver = 50% of the function budget) came straight from
`UNLACE_TIMING`, not guesswork. → Done (t131, t132).

---

## Priority order for unlace

1. **t130** — worklist rewrite of `TypeConstraintSolver` (techniques 1, 2, 3).
   Highest impact: one pass is 50% of the wc decompile budget.
2. Bucket-before-pairwise in `variable-merge`/`register-coalesce` (technique 4).
3. `ConstantRange` widening in `known_bits` (technique 5).
