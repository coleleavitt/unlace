# Design: LVAR live-range splitting for pointer/scalar register aliasing (t69)

Status: **blocked-deep, root-caused, fix design ready.** Baseline at commit
`7b194920ea` is clean (semantic-report 25/0). This doc captures the hard-won
diagnosis so the next session implements the *correct* fix instead of
re-discovering the dead ends (6 partial attempts this session, all reverted).

## The problem in one sentence

The principled phantom-argument fix (`collect_live_on_entry_reads`, replacing
the any-block read union in `calling_convention::infer_params`) is *correct* —
it makes `main` → `main(void)` and drops phantom `aN` 14→1 — but it **surfaces
a latent register-aliasing bug**: one machine register holds a pointer cursor
in one phase and a computed scalar in a disjoint later phase, and the back end
collapses both phases into a single C variable, producing a pointer-deref of a
scalar (uncompilable / wrong runtime) on `medium:main` and `stripped:main`
(semantic-report 25 → 23).

## Proven root cause

Trace evidence (`UNLACE_REG_COALESCE_TRACE` group/name dump on `medium:main`):

- Register `r9` (offset 72) ends up in **three distinct union-find clusters**
  that all reuse the **same** name `c7` via
  `register_coalesce::existing_group_name` (which reuses any pre-existing
  `merged_names` entry found on *any* group member; the pass runs in a fixpoint,
  so a later cluster inherits a name an earlier run stamped on a member):
  - `{0,1,2,3,8,15}` (root v8) — dereferenced as a **pointer** (Load address).
  - `{6,7,12}` (root v6) — the **digit×5 scalar**, reaching r9 as
    `r9 = INT_ZEXT(SUBPIECE(c0 + (c0 << 2)))` (confirmed via `ir-dump`).
- The clusters are **never coalesced**, so coalesce-time type/use guards can
  never fire (verified: 0 rejects).

## Key finding: the phases are SEPARABLE (not entangled)

Static read of the component-1-only output proves the conflated values are
**sequential, non-overlapping live ranges**, e.g. for `c5` in `main`:

```c
do {                                  // pointer phase
    _DWORD v189 = *(_DWORD *)(c5);     // c5 is a struct pointer
    _DWORD v203 = c5->field_4;         // = *(c5 + 4)
    c5 = c5 + 8LL;
} while ((uintptr_t)(buf + 64) != c5);
...
c5 = LODWORD((uintptr_t)(buf + 64) - (uintptr_t)(buf + 4)) & 4;  // scalar phase
```

The pointer phase and the scalar phase do **not** overlap, so giving them
distinct variables is semantically sound. This is what makes the fix tractable
at all — but it must be done at the right layer (below).

## Dead ends (do NOT repeat — all measured, all reverted)

| Attempt | Result |
| --- | --- |
| Coalesce-time pointer/scalar + address/arith guards | 0 rejects — the clusters are never coalesced, so the guard never sees both. (These guards DID land in `7b194920ea` as a genuine soundness improvement for the *coalesced* case + 2 unit tests; they are correct but insufficient for this bug.) |
| Blanket name-injectivity in `existing_group_name` | Fires 235× on `medium:main`; most cross-cluster name reuse is **legitimate and load-bearing**; regresses semantic-report 25 → 23. |
| Type-gated name split (`cluster_address_scalar_conflict`) + ZEXT/SUBPIECE/scalar-IntAdd classification propagation | Split fires correctly (7×) and the arrow/subscript/scalar-deref output is fixed; **but** the fresh split var declared `int c18; // rax` → `int-to-pointer-cast` error. |
| + split-var width via `func.var_types[sv]=Ptr` | The printer's `ctx.var_types` starts empty and is populated only by its own `infer_type_from_insn` — it **never reads `func.var_types`**, and `HirFunction` has **no `var_types` field** at all (only `composite_var_types` + `merged_names` survive SSA→HIR lowering). The tag is invisible. |
| + route the tag through `composite_var_types` as `Type::Ptr` + printer `func_var_types_ptr` set + `_QWORD` decl width | Makes `medium.c` **compile clean**, but `medium:main` then **times out at runtime** — the name-layer split desynchronised a loop's cursor advance from its termination test. This is a bug in *where/how* the split was applied, not proof the split is wrong. |
| Blanket "every Load/Store address operand → Ptr" in the printer | Regresses 25 → 20 (legitimately-scalar computed addresses break). |

**Lesson:** every printer/name-layer patch only masks symptoms and risks the
cursor/condition desync. The split must happen *before* naming.

## Correct fix (next session): SSA/lvar-layer live-range splitting

Split at the SSA/lvar layer so the printer never sees one name with two types.
This is CLAUDE.md item #10 / task t7 (live-range-aware LVAR allocation).

1. **Detect a splittable register.** For each register base, compute its SSA
   live ranges (the coalescer already has `compute_live_ranges` +
   `classify_use_sites` with `address_used` / `arith_output`, including the
   ZEXT/SEXT/SUBPIECE + scalar-IntAdd/IntSub propagation derived this session).
   A register is splittable when its versions partition into a
   **pointer-phase** (members used as a Load/Store address operand) and a
   **disjoint scalar-phase** (members that are pure-arithmetic outputs), with
   **non-overlapping** live intervals between the two phases.

2. **Allocate distinct lvars/varnodes per phase BEFORE naming.** Rename the
   pointer-phase SSA versions to one lvar and the scalar-phase versions to
   another, consistently at **every** use and def (this is the part the
   name-layer split got wrong — it renamed occurrences inconsistently and broke
   the loop's cursor/condition pairing). The renaming must preserve def→use
   edges exactly: the cursor advance (`c5 = c5 + 8`) and the loop condition
   (`while (... != c5)`) must reference the *same* split lvar.

3. **Type each split lvar from its phase.** Pointer-phase lvar → pointer/8-byte;
   scalar-phase lvar → its arithmetic width. Do this on the SSA function so it
   survives SSA→HIR lowering (i.e. via a channel HIR actually carries —
   `merged_names` for the name, and either extend `HirFunction` with a
   per-lvar type map or encode the pointer phase through `composite_var_types`,
   which IS lowered).

4. **Sequence with the param fix.** Re-apply `collect_live_on_entry_reads`
   (component 1) only together with this splitter; alone it re-regresses.

### Verification gate (acceptance for t69)

- `semantic-report` = 25/0 (medium:main + stripped:main **exit=33**, not crash,
  not timeout).
- phantom `aN` leaked_temp_decl count ≤ 1.
- No `cN->field` / `cN[idx]` on a scalar-declared base.
- `passes` + `output` unit tests green; `clippy -D warnings` clean; fmt clean.

After it lands, **unblock and re-apply** t63/t65 (param fix), t67 (DWARF cap),
t68 (sret hidden-pointer) atop the fixed splitter and re-verify each at 25/0.

## What already shipped (the real value from this line of work)

- `7f1778a63e` — `param-promote`/`param-fallback` tracing + 5 arg-recovery
  papers in `research/papers/arg-recovery/` (Van Emmerik 2007 thesis is the
  primary source for the live-on-entry parameter test).
- `7b194920ea` — register-coalesce pointer/scalar + address-use/arith-output
  soundness guards (+2 by-construction unit tests). Correct for the
  *coalesced* case; necessary-but-insufficient for the name-collision case.
- `14676180a6` — var-naming argument-role cap at `inferred_params.len()`.

## Reproduce / instrument

```bash
# the failing fixtures, single-function:
target/debug/unlace decompile --emit c --function main fixtures/medium.elf
# cluster + name dump for r9:
UNLACE_REG_COALESCE_TRACE=1 UNLACE_REG_COALESCE_TRACE_FILTER=main \
  target/debug/unlace decompile --emit c --function main fixtures/medium.elf 2>&1 >/dev/null \
  | grep -E "group func=main|name func=main" | grep "offset: 72"
# raw IR (shows r9 = ZEXT(SUBPIECE(digit*5))):
target/debug/unlace ir-dump --function main fixtures/medium.elf
# the gate:
RUSTC_WRAPPER= cargo run -q -p xtask -- semantic-report 2>&1 | grep passed=
```
