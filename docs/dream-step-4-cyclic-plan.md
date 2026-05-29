# DREAM Step 4 — cyclic irreducible regions (remaining refactor work)

Step 3c now reaches the production structurer seam behind
`UNLACE_DREAM_STRUCT`, but `medium` still has 29 gotos because every residual
DREAM candidate observed there is cyclic:

```text
entry=BlockId(7)  body_blocks=3  back_edges={(0, 1), (2, 1)}
entry=BlockId(1)  body_blocks=68 back_edges={(35, 32), (36, 28), ...}
```

That is the expected boundary from `docs/dream-step-3c-plan.md`: acyclic
condition refinement is wired, but cyclic regions deliberately fall back to the
legacy goto path. The remaining work is DREAM §IV-C.

## Research basis

- DREAM: compute reaching conditions over the acyclic skeleton, structure the
  loop body under those conditions, and then represent back-edges as loop
  continuation conditions rather than raw gotos.
- SAILR: do not blindly eliminate every goto. Remove only compiler-induced
  structuring artifacts, preserving real abnormal control flow.

## Implementation tasks

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

5. **Gated production wiring.**
   Only after the pure cyclic engine is unit-tested, update
   `try_structure_dream_residual_region` to accept cyclic residual regions when
   `UNLACE_DREAM_STRUCT=1`.

## Required tests

- Synthetic loop with one latch: emits one `While` and zero gotos.
- Irreducible two-entry loop: emits guarded body + `Continue` / `Break`.
- Multiple exits: either emits structured breaks when all exits resolve, or
  falls back to legacy output.
- `medium.elf` flag-on measurement:
  - current baseline: total 29 gotos
  - f_ackermann: 16
  - f_rec_fib: 8
  - main: 4
  - f_rec_power: 1

## Rollback criteria

- `UNLACE_DREAM_STRUCT=0` changes any output, test count, or golden pass count:
  revert immediately.
- Flag-on introduces undeclared variables, drops statements, or creates goto
  cycles: revert the cyclic wiring and keep only pure modules.
