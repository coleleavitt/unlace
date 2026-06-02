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

## Key finding (RESOLVED): the phases are separable at the SSA def-use level — the fix is in the back end, not the lifter

Static read of the component-1-only output *suggests* the conflated values are
sequential live ranges, e.g. for `c5` in `main`:

```c
do {                                  // pointer phase
    _DWORD v189 = *(_DWORD *)(c5);     // c5 is a struct pointer
    _DWORD v203 = c5->field_4;         // = *(c5 + 4)
    c5 = c5 + 8LL;
} while ((uintptr_t)(buf + 64) != c5);
...
c5 = LODWORD((uintptr_t)(buf + 64) - (uintptr_t)(buf + 4)) & 4;  // scalar phase
```

Reading the **C output** alone, the pointer phase and the scalar phase look
sequential. **However — important correction (verify before implementing):**
the coalescer's own live-interval trace does **NOT** confirm clean separation.
Per-version min/max intervals for `r9` (offset 72), from
`UNLACE_REG_COALESCE_TRACE` `interval` lines:

```
pointer cluster {0,1,2,3,8,15}:  v1:[103,1003]  v3:[885,1269]  v8:[859,884]  v15:[1283,1296]
scalar  cluster {6,7,12}:        v6:[919,1282]  v7:[849,1296]  v12:[832,848]
```

These spans **overlap** (e.g. pointer `v3:[885,1269]` vs scalar `v6:[919,1282]`).
Two caveats on that data:
- The clusters are separate only because **no PHI links them** (the coalescer
  only attempts PHI-operand pairs) — they were *not* tested-and-rejected for
  interference. So "separate clusters" here does **not** imply "non-overlapping".
- The interval model is a **coarse linear sweep** that extends each version's
  range across all touch points (incl. phi edges), so it likely *overstates*
  overlap. The C output suggests the *dynamic* live ranges are disjoint.

**RESOLVED (step-0 done — `ir-dump` def-use analysis on `main`):** the two
phases ARE genuinely separable; the interval-sweep "overlap" was the coarse-sweep
artifact. The SSA def-use webs of `v72` (r9) are **two completely disjoint
MULTIEQUAL chains** that never mix:

```
POINTER web (used as a LOAD address at the deref site):
  v72#6  = COPY v56#4            ; rsi (a pointer)
  v72#11 = COPY v56#4            ; rsi
  v72#7  = MULTIEQUAL(v72#6, v72#11)
  v72#12 = MULTIEQUAL(v72#6, v72#11)
  v72#1  = MULTIEQUAL(v72, v72#7)   -> v66162 = LOAD c1, v72#1   (the deref)

SCALAR web (never used as an address):
  v72#8  = INT_ZEXT(...)
  v72#4  = INT_ZEXT(...)
  v72#5  = MULTIEQUAL(v72#8, v72#4)
```

No MULTIEQUAL ever joins a pointer-sourced version with a scalar-sourced one.
So the register genuinely carries two *independent* values whose SSA webs are
already disjoint — the back end merely loses that distinction at the
name-allocation layer. **Therefore: the fix IS at the back end (SSA/lvar split),
NOT upstream in the lifter.** The earlier "non-overlapping" claim (inferred from
C output) happens to be correct *for the SSA def-use webs*, even though the
coarse linear interval sweep overstated overlap. Proceed with the split below;
the precise check in step 0 should confirm disjointness via these def-use webs
(SSA reachability), not the min/max interval sweep.

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

0. **PREREQUISITE — confirm disjointness via SSA def-use webs (already done for
   `main`, see RESOLVED above).** The coarse `compute_live_ranges` min/max sweep
   *overstates* overlap; use the SSA def-use webs instead. For `main` the two
   `v72` webs are provably disjoint (pointer chain via `COPY rsi`+MULTIEQUALs
   feeding the LOAD; scalar chain via `INT_ZEXT`+MULTIEQUAL, never an address).
   Generalise: partition a register's SSA versions by following MULTIEQUAL/COPY
   edges into connected components; a component is the *pointer phase* if any
   member is a Load/Store address, the *scalar phase* if any member is a
   pure-arith output. If a single component contains BOTH an address use and a
   pure-arith def, STOP — that component genuinely holds two roles at once and
   the bug is upstream (lifter/SSA construction); splitting names is unsound.
   For `main` no component mixes roles, so splitting is sound.

1. **Detect a splittable register.** For each register base, compute its SSA
   live ranges (the coalescer already has `compute_live_ranges` +
   `classify_use_sites` with `address_used` / `arith_output`, including the
   ZEXT/SEXT/SUBPIECE + scalar-IntAdd/IntSub propagation derived this session).
   A register is splittable when its versions partition into a
   **pointer-phase** (members used as a Load/Store address operand) and a
   **disjoint scalar-phase** (members that are pure-arithmetic outputs), with
   **precisely-verified non-overlapping** live intervals between the two phases.

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

## Update 2026-06-01b: the timeout is loop-carried-induction desync (gdb-localized)

A selective step-2 split (only the colliding pointer/scalar pair → fresh real
`cN`; declared; pointer phase tagged `_QWORD`; printer arrow/subscript guards)
makes `medium.c` **compile clean** but `medium:main` **times out**. gdb attach
pins the hang at `medium.c:324`:

```c
        label_2:;
            int v313 = LODWORD(c0); c0 = LODWORD(c0) + 1;   // c0 = scalar counter
            c2 = c21 + 4LL;                                  // advance -> c2 (!)
            ...
            v30 = *(_DWORD *)(c21);                          // read c21 (never advanced)
            if (v30 == 0xf) goto label_4;                    // loop on buf, never moves
```

The pointer cursor's **advance** (`c21 + 4`) was placed in a *different*
variable (`c2`) than the cursor itself (`c21`), so `*(c21)` reads the same slot
forever. The address/arith use-site split severed the cursor's
**def → use → advance** induction cycle.

**Decisive constraint for the real fix:** the split criterion (address-use vs
pure-arith) is too coarse. A loop-carried pointer cursor — a phi/MULTIEQUAL
whose output is advanced (`p = p + k`) and fed back to the phi input, and also
dereferenced — is ONE live range and must **not** be split, even though its
advance looks like arithmetic. Step 2 must first detect phi-carried pointer
induction variables and keep them whole; only *genuinely disjoint* phases
(distinct webs that never share a phi/induction cycle) may be split. This is
the induction-aware part of CLAUDE.md #10 / t7 LVAR allocation.

## Update 2026-06-01c: conclusion — use-site heuristic is fundamentally too coarse

After exhausting the split-criterion design space (5 distinct heuristics, all
reverted), the decisive conclusion: **no use-site (address-vs-arith) heuristic
splits the r9 collision without also mis-firing on legitimate cases.**

| criterion | outcome |
| --- | --- |
| pairwise address/arith conflict | severs a pointer cursor's induction cycle → infinite loop (gdb: medium.c:324) |
| partition-gated (Mixed=keep cursor) | keeps rdx cursor whole + flags r9 correctly, but over-splits 9 registers → timeout |
| collision-gated (split only on shared name) | still 9 collisions; renames a legitimate struct pointer → breaks `->` arrow path → cc fails |

Root difficulty: the r9 scalar reaches the register via `ZEXT(SUBPIECE(arith))`,
so any classifier broad enough to catch it also matches legitimate pointer
cursors and struct pointers that incidentally touch arithmetic. A correct fix
needs three precise analyses together, not a peephole:
1. **per-program-point interference** (not the coarse min/max interval sweep),
2. **loop-carried induction detection** (keep a phi-carried cursor whole even
   though its advance is arithmetic),
3. **struct-pointer awareness** (don't rename a base that feeds field access).

That is real LVAR live-range allocation (CLAUDE.md #10 / t7), a multi-day,
fresh, focused effort — not tunable in incremental attempts.

**Reusable working sub-parts** (proven this session, to compose with the real
split criterion): component 1 `collect_live_on_entry_reads`; component 2
ZEXT/SEXT/Subpiece arith propagation in `classify_use_sites`; component 4
`base_sv_declared_non_pointer` arrow/subscript guards; component 5B
composite-`Ptr`→`func_var_types_ptr`→`_QWORD` decl width. The ONLY missing piece
is the precise split criterion above. `partition_register_phases` (committed
`3b533be95a`) is the correct starting primitive; it needs the three analyses
layered on before it drives any renaming.

## Update 2026-06-01d: component 4 is NOT free-standing hardening

Checked whether component 4 (`base_sv_declared_non_pointer` arrow/subscript
guards) could land alone as defensive hardening. It is NOT byte-inert: on
`debug_templates` (`make_array`, `sub_401187`) it changes
`*(_QWORD *)(buf + 8)[1]` → `*(_OWORD *)(*(_QWORD *)(buf + 8) + 0x10LL)` — a
different offset (8 vs 0x10) AND width (_QWORD vs _OWORD). `debug_templates:main`
still passes semantic-report (exit 24), but `make_array`/`sub_401187` are not
directly semantic-tested and the new form is not verified more-correct than the
old. Per CLAUDE.md (don't change output without verifying it's better), component
4 must NOT be landed standalone — it only belongs as part of the full t69 fix
where the split makes the guard's bail-to-raw-deref the correct rendering.

Net: none of the four t69 sub-parts are independently shippable. They are
coupled to the (still-unbuilt) precise split criterion.

## Update 2026-06-02: output-layer guards CANNOT rescue an incorrect split (decisive)

Approach #11 (the most thorough yet). Precondition that changed since #5: the
t70 series shipped a family of "bail to IR-faithful raw deref" guards
(`is_scalar_deref_base`, `is_subscript_unsafe_frame_base`,
`base_vn_is_scalar_load_output`, `traces_to_frame_base`, and the
`paren_if_non_atomic_base` precedence fix). Approach #5 had failed because a
struct-pointer rename "broke the `->` path → cc fails" — a failure mode those
guards now handle by falling through to `*(T *)(addr)`.

Experiment: full coupled stack = component 1 (live-on-entry param) + component 2
(ZEXT/SEXT/Subpiece arith propagation) + collision-gated phase split (#5) +
ADDED scalar-base bails on BOTH the `->` path (`try_struct_field_access`) and
the three `try_array_subscript` arms (via a real `base_sv_declared_non_pointer`
helper aggregating the declared type by name).

Result, measured:
  - The guards worked exactly as hypothesised *for compilation*: `c5->field_4`
    bailed → fell through to `try_array_subscript` → became `c5[1]` → that
    bailed too → raw deref. `medium.c` went **cc-failed → compiles clean**.
  - **But `medium:main` then TIMED OUT.** The over-split (9 phase-split
    collisions on `main`) still desynchronises the pointer cursor's
    def→use→advance induction at *runtime*.

**Decisive conclusion:** output-layer guards can make an incorrect split's C
*compilable* but never *runtime-correct*. The split criterion itself must be
correct. Corollary: a *correct* split types the pointer-phase base as a pointer,
so the scalar-base guards would be **inert** even then — i.e. those guards only
ever change output in the BROKEN over-split state. They are t69 scaffolding, not
shippable hardening; landing them byte-inert would mask the very failure signal
(timeout) that the next session must see. **Do not land them.** (This supersedes
the "Update d" framing: the t70-shipped guards address genuine *output* bugs
that occur at baseline; the additional `base_sv_declared_non_pointer` arrow/
subscript bails explored here are different — they only fire under the t69
over-split and must stay unshipped.)

The path forward is unchanged and singular: implement the precise
interference + loop-carried-induction + struct-pointer-aware split (per the
"Correct fix" section above) so the cursor stays one variable and the pointer
base is pointer-typed. Nothing in the printer/naming/output layer is a shortcut.
