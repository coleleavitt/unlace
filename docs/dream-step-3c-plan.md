# DREAM Step 3c — gated wiring plan (the high-risk step)

2026-05-29 status: **the conservative Step 3c seam is wired behind
`UNLACE_DREAM_STRUCT`**. With the flag unset/off, the hook returns before doing
any work. With the flag on, it reaches residual irreducible candidates and only
consumes regions that are acyclic, single-exit, and have all predicates
resolved. The observed `medium` candidates are cyclic, so they intentionally
fall back to legacy output until Step 4 (`docs/dream-step-4-cyclic-plan.md`).

Steps 1, 2, 3a, 3b are **landed, fully tested, and unwired** on master:

| step | module | what it does |
|------|--------|--------------|
| 1 | `reaching_conditions.rs` | `cr(h,n)` over a region; back-edge classification |
| 2 | `condition_refinement.rs` | DREAM acyclic refinement → `StructuredNode` (goto-free) |
| 3a | `region_bridge.rs` | sub-CFG (`BlockId` set) → `Region` + `RegionNode↔BlockId` map |
| 3b | `region_splice.rs` | `StructuredNode` → `Vec<HirNode>` (arm-swap for NotPred; no-drop fallbacks + `tracing::debug!`) |

Step 3c is the ONLY step where the flag-OFF byte-identity claim can actually
break, because it edits the production structurer path. Do it in a dedicated
session with fresh budget. This doc is the spec.

## Wiring seam

In `structurer.rs`, AFTER `node_split::split_irreducible_entries` has run and a
**residual irreducible region still remains** (detect via
`irreducible::detect_irreducible_regions` returning non-empty for the function).
Do NOT route reducible functions or already-structured regions through the new
engine — they must hit the existing path unchanged.

Pipeline for a residual region R (header h, body B):
1. `let (region, node_to_block) = region_bridge::cfg_region_to_region(cfg, h, &B);`
2. `let rc = reaching_conditions::compute_reaching_conditions(&region);`
   - If `!rc.back_edges.is_empty()` → region is cyclic → **do NOT use DREAM
     acyclic refinement** (that's Step 4); leave the legacy goto output. (3c is
     acyclic-only.)
3. `let structured = condition_refinement::refine_region(&region);`
   - If `structured == StructuredNode::Unsupported` → legacy fallback.
4. Build `pred_cond: BTreeMap<u32, SsaVarnode>` — the predicate-id (= source
   `BlockId` numeric value, per 3a) → the branch condition `SsaVarnode` for that
   block's terminator (`Cbranch` cond). Build `block_bodies: BTreeMap<BlockId,
   Vec<HirNode>>` by structuring each block's straight-line statements.
5. `let hir = region_splice::splice_structured(&structured, &node_to_block,
   &block_bodies, &pred_cond);`
6. Replace R's goto-laden HIR subtree with `hir`.

## The gate (already landed)

`reaching_conditions::dream_structuring_enabled()` reads `UNLACE_DREAM_STRUCT`
(default false). Step 3c MUST wrap the entire seam in
`if dream_structuring_enabled() { …new path… } else { …legacy… }`. With the flag
OFF the new code is never entered → byte-identity is guaranteed by construction.

## Detection criterion (decide explicitly)

Run the new engine on a region ONLY when ALL hold:
- the function has a residual irreducible region after node_split, AND
- that region is **acyclic at the reaching-condition level** (`rc.back_edges`
  empty), AND
- `refine_region` returns non-`Unsupported`, AND
- every predicate-id used in the `StructuredNode` resolves in `pred_cond` (else
  the splice fallbacks fire and you lose guards — watch the
  `unlace::dream::splice` debug log).
Otherwise: legacy path. This keeps 3c's blast radius to genuinely-irreducible
acyclic regions only.

## Test plan (REQUIRED before flipping default)

1. **flag-OFF byte-identity on ALL goldens** (not sampled): for every fixture,
   `diff <(UNLACE_DREAM_STRUCT=0 decompile)` vs the committed pre-3c binary
   output — must be empty for all. A harness loop, not a spot check.
2. **flag-ON measurement**: `UNLACE_DREAM_STRUCT=1` on `medium` — record per-fn
   goto counts vs the baseline (f_ackermann 16, f_rec_fib 8, main 4,
   f_rec_power 1; total 29). Success = strict reduction with NO new undeclared
   vars, NO dropped statements, cli_smoke/quality_smoke still green.
3. **flag-ON correctness**: the spliced output must reference only declared
   vars and contain no `goto` cycles for the regions it claims.

## Rollback

- flag-OFF changes ANYTHING (struct tests / cli_smoke / quality_smoke / golden
  pass-count / byte-identity) → the gate is leaking → REVERT immediately.
- flag-ON introduces undeclared vars, dropped statements, or goto cycles on any
  fixture → REVERT; correctness outranks goto count.

## Step 4 (after 3c proves out)

Cyclic regions: structure the loop body via reaching conditions, handle abnormal
entries/exits (DREAM §IV-C). Only once 3c is green and the default is flipped.

## Why this was NOT done this session

Two agents exhausted budget mid-write on smaller pure modules; 3c is larger,
touches the 273KB hot file, and is the one step whose safety claim (flag-OFF
byte-identity) is empirical, not by-construction. It deserves a fresh session
with the full byte-identity harness as the first deliverable.
