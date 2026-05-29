# DREAM Step 4 — cyclic irreducible regions (remaining refactor work)

Step 3c now reaches the production structurer seam by default
(`UNLACE_DREAM_STRUCT=0` is the rollback knob), but `medium` still has 29 gotos
because the largest residual DREAM candidate is a nested cyclic SCC:

```text
entry=BlockId(7)  body_blocks=3  back_edges={(0, 1), (2, 1)}
entry=BlockId(1)  body_blocks=68 back_edges={(35, 32), (36, 28), ...}
```

That is the expected boundary from `docs/dream-step-3c-plan.md`: acyclic
condition refinement is wired, but cyclic regions deliberately fall back to the
legacy goto path. The remaining work is DREAM §IV-C.

The full default-on rollout task list lives in
`docs/dream-default-rollout-tasks.md`.

## Research basis

- DREAM: compute reaching conditions over the acyclic skeleton, structure the
  loop body under those conditions, and then represent back-edges as loop
  continuation conditions rather than raw gotos.
- SAILR: do not blindly eliminate every goto. Remove only compiler-induced
  structuring artifacts, preserving real abnormal control flow.

## Implementation tasks

Current code status:

- Pure cyclic refinement is implemented for conservative single-header regions.
- Back-edges are represented as synthetic guarded `Continue` leaves.
- Single-target external exits are represented as synthetic guarded `Break`
  leaves.
- `region_splice` lowers cyclic nodes into `HirNode::While`,
  `HirNode::Break`, and `HirNode::Continue`.
- The production seam is default-on and still rejects cyclic regions when
  predicate source blocks would be emitted after their use, when exits cannot
  be refined to a single successor, or when the cyclic region has internal
  back-edge targets that require nested loop-region decomposition.

1. **Loop-region model (pure, unwired).**
   Add a representation for a cyclic region:
   - region header / entry set,
   - body nodes,
   - forward edges,
   - back-edges classified by `compute_reaching_conditions`,
   - external exits.

2. **Continuation-condition synthesis (pure, unwired).**
   For each back-edge `(latch -> loop_header)`, compute the guard under which
   execution continues. This must be expressed as a `Cond` over the same
   predicate ids used by the acyclic engine.

3. **Cyclic refinement tree.**
   Extend the `StructuredNode` model with a loop node, or introduce a
   `CyclicStructuredNode`, so the cyclic engine can represent:
   - `while (true)` / guarded loop,
   - structured body,
   - `continue` for back-edge continuation,
   - `break` for region exits.

4. **HIR splice for loops.**
   Extend `region_splice` to lower cyclic nodes into `HirNode::While` plus
   nested `If` / `Break` / `Continue`. Preserve the existing invariant:
   unresolved predicates fall back without dropping statements.

5. **Production wiring.**
   `try_structure_dream_residual_region` accepts conservative cyclic residual
   regions by default and leaves `UNLACE_DREAM_STRUCT=0` as the legacy
   fallback.

## Required tests

- Synthetic loop with one latch: emits one `While` and zero gotos.
- Irreducible two-entry loop: emits guarded body + `Continue` / `Break`.
- Multiple exits: either emits structured breaks when all exits resolve, or
  falls back to legacy output.
- `medium.elf` default-on measurement:
  - current baseline: total 29 gotos
  - f_ackermann: 16
  - f_rec_fib: 8
  - main: 4
  - f_rec_power: 1

## Rollback criteria

- `UNLACE_DREAM_STRUCT=0` changes any output, test count, or golden pass count:
  revert immediately.
- Default-on introduces undeclared variables, drops statements, or creates goto
  cycles: revert the cyclic wiring and keep only pure modules.

## Status update — sound engine done; multi-header is the frontier

The goto-free DREAM engine is now COMPLETE and SOUND for the cases it claims:
- acyclic regions (step 2/3), **single-exit single-header cyclic loops**, and
  **nested single-successor cyclic loops** (step 4) are structured by default,
  with `UNLACE_DREAM_STRUCT=0` as rollback.
- A **statement-preservation oracle** (structurer.rs `count_hir_statements`)
  rejects any spliced region that drops/duplicates a body statement, so DREAM
  output is statement-faithful and rollback stays byte-identical.
- Two acyclic-ordering fixes (header always RegionNode 0; leading True-guarded
  header blocks emitted before the first predicate use) unblocked medium's small
  `entry=7` 3-block region — it is now accepted and passes the oracle.

### The remaining frontier: multi-successor irreducible nests

`medium`'s f_ackermann (and similar recursion-as-state-machine code) lifts to a
**68-block region whose back-edges target 9 DISTINCT headers**
(`{(35,32),(36,28),(37,24),(38,20),(39,16),(40,12),(41,8),(42,4),(43,0),...}`)
and which has **3 exit targets**. The nested decomposition pass now tries each
internal header, but every loop slice keeps multiple successors after safe
successor refinement (for example header node `32` exits to `{24, 28, 38}`),
so it correctly returns `Unsupported`; the 16 f_ackermann gotos remain.

Reducing them requires DREAM §IV-C **abnormal-entry handling**: collapse a
multi-entry irreducible loop into one `while(1)` driven by a synthetic
state-dispatch variable (each header becomes a `case`), with **labeled
multi-level `break`** for the multiple exits. This needs:
1. a `StructuredNode::Loop` extension carrying a dispatch selector + per-header
   case bodies, and labeled `Break(label)`/`Continue(label)`;
2. a state-variable synthesis pass (assign each header an integer state; rewrite
   inter-header edges as `state = K`);
3. splice lowering to `while(1) { switch(state) { ... } }` with labeled breaks.

This is a substantial, design-first effort with **uncertain quality payoff**:
IDA/Hex-Rays themselves frequently emit `goto` for such irreducible nests, and
medium's golden is independently stale. It should be a dedicated session — NOT
parallelized (single hot file) — and only pursued if a state-dispatch rendering
is demonstrably *better* than the current goto form on real fixtures. Until
then, the honest state is: the sound goto-free engine fires on every region it
can prove safe, and defers the rest.
