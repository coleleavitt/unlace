# DREAM Step 4 — cyclic irreducible regions (remaining refactor work)

Step 3c reaches the production structurer seam by default
(`UNLACE_DREAM_STRUCT=0` is the rollback knob). The cyclic §IV-C work now
handles the largest residual DREAM candidate as a nested cyclic SCC:

```text
entry=BlockId(7)  body_blocks=3  back_edges={(0, 1), (2, 1)}
entry=BlockId(1)  body_blocks=68 back_edges={(35, 32), (36, 28), ...}
```

That was the expected boundary from `docs/dream-step-3c-plan.md`: acyclic
condition refinement was wired first, then cyclic regions were added in Step 4.

The full default-on rollout task list lives in
`docs/dream-default-rollout-tasks.md`. Current stale/reframed status is
reconciled in `docs/current-parity-ledger-2026-05-30.md`: the multi-entry
DREAM frontier is implemented, and the remaining work is labelled-control
quality rather than dispatcher construction.

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
- `region_splice` also lowers abnormal-entry `StructuredNode::Label` /
  `StructuredNode::Goto` through the existing HIR `LabelId` path.
- The production seam is default-on and rejects only cases that fail predicate
  source ordering, statement preservation, or label resolution.

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
- Irreducible two-entry loop: emits guarded body plus real `Label` / `Goto`
  for internal non-header back-edges.
- Multiple exits: either emits structured breaks when all exits resolve, or
  falls back to legacy output.
- `medium.elf` measurement:
  - rollback `UNLACE_DREAM_STRUCT=0`: total 29 gotos
  - default DREAM after abnormal-entry wiring: total 46 gotos
  - f_ackermann is accepted by DREAM instead of falling back; the current
    dispatch-free labelled-control rendering is statement-preserving but not a
    goto-count improvement.

## Rollback criteria

- `UNLACE_DREAM_STRUCT=0` changes any output, test count, or golden pass count:
  revert immediately.
- Default-on introduces undeclared variables, drops statements, or creates goto
  cycles: revert the cyclic wiring and keep only pure modules.

## Status update — abnormal-entry frontier wired

The goto-free DREAM engine is complete and sound for the cases it claims:
- acyclic regions (step 2/3), **single-exit single-header cyclic loops**, and
  **nested single-successor cyclic loops** (step 4) are structured by default,
  with `UNLACE_DREAM_STRUCT=0` as rollback.
- A **statement-preservation oracle** (structurer.rs `count_hir_statements`)
  rejects any spliced region that drops/duplicates a body statement, so DREAM
  output is statement-faithful and rollback stays byte-identical.
- Two acyclic-ordering fixes (header always RegionNode 0; leading True-guarded
  header blocks emitted before the first predicate use) unblocked medium's small
  `entry=7` 3-block region — it is now accepted and passes the oracle.

### The implemented frontier: multi-successor irreducible nests

`medium`'s f_ackermann (and similar recursion-as-state-machine code) lifts to a
**68-block region whose back-edges target 9 DISTINCT headers**
(`{(35,32),(36,28),(37,24),(38,20),(39,16),(40,12),(41,8),(42,4),(43,0),...}`)
and which has multiple exit targets. The production path now handles this with
dispatch-free abnormal-entry labelled control:

1. non-header internal back-edges become `StructuredNode::Goto(target)`;
2. every abnormal target gets a real `StructuredNode::Label(target)`;
3. header back-edges remain ordinary `continue`;
4. external exits remain ordinary `break`;
5. `region_splice` resolves those labels through `LabelId` and emits existing
   `HirNode::Label` / `HirNode::Goto`.

No synthetic state selector or switch dispatcher is introduced. The tradeoff is
quality, not correctness: default `medium` now accepts `f_ackermann`, but the
labelled linear fallback preserves more irreducible transfers than the legacy
renderer exposed, so total goto count rises from 29 rollback gotos to 46 default
gotos. The next improvement is trace scheduling or a stronger abnormal-entry
structuring pass that reduces those labels while keeping the no-dispatch rule.
