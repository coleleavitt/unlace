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

## Update 2026-06-03: t61 DE-RISKED — induction signal already exists + IR-confirmed

Read-only investigation found the missing "induction-aware" split signal already
exists in-crate, and confirmed it matches the actual cursors:

- `iv_elim.rs::detect_basic_ivs(func, header, body) -> Vec<BasicIv>` (pub(crate))
  identifies a loop-header phi whose back-edge value is `IntAdd(phi_output,
  const_step)` — exactly a pointer cursor advanced by a constant.
- `licm.rs::find_natural_loops(func) -> Vec<NaturalLoop{header, body}>` (pub,
  re-exported lib.rs:284) enumerates the loops.
- Both are in `unlace-passes` alongside `register_coalesce` → directly composable.

IR CONFIRMATION (medium:main, ir-dump): the cursors ARE basic-IV-shaped —
  - `v48#10 = MULTIEQUAL(...)` with `v65800#1 = INT_ADD v48#10, c4` (a +4 pointer
    cursor, line 528/613),
  - `v0#18 = MULTIEQUAL(...)` with `v65723#1 = INT_ADD v0#18, c0x10` (line 419/442).
So `detect_basic_ivs` will fire on the very cursors the failed splits (#3 sever →
infinite loop; #4/#5 over-split → timeout) lacked a signal to protect.

REFRAMED PLAN (compose existing pieces): build an IV-protected SSA-version set
(each BasicIv's phi_output + init_sv + the back-edge advance + the Copy/Cast
chain between them, over every natural loop) and forbid `partition_register_phases`
from splitting any component intersecting it (like the existing Mixed guard).
This keeps the cursor's def→use→advance cycle whole while still splitting the
genuinely-disjoint r9 c7 pointer/scalar webs (the scalar reaches r9 via
ZEXT(SUBPIECE(arith)) and is NOT a basic IV). Sequence with the live-on-entry
param fix (component 1). Residual risk: struct-pointer false positive (#5) may
still need a separate guard. Converts t61 from "multi-day from scratch" to
"wire detect_basic_ivs into the split criterion + validate."

## Update 2026-06-03b: IV-probe CONFIRMS the discrimination at the coalesce stage

Added a temporary env-gated probe (UNLACE_IV_PROBE, reverted) that runs
find_natural_loops + detect_basic_ivs inside RegisterCoalescePass::run on the
function as the coalescer actually sees it (FinalCleanup stage, after IvElim).
Result on medium:main — 14 loops, 5 basic IVs detected, ALL surviving intact:

  - offset 0  (rax) v18, step=16   ← protected cursor
  - offset 48 (rsi) v10, step=8    ← protected cursor
  - offset 8  (rcx) v10, step=8    ← protected cursor
  - offset 0  (rax) v28, step=16   ← protected cursor
  - offset 56 (rdi) v6,  step=4    ← protected cursor

CRITICAL DISCRIMINATION CONFIRMED: r9 (offset 72) — the pointer/scalar c7
collision register — is NOT in the basic-IV list, so it stays SPLITTABLE; while
the legitimate loop cursors (rax/rsi/rcx/rdi) ARE basic IVs and would be
PROTECTED. This is exactly the separation the 11 failed approaches lacked: the
IV-protection set shields the cursors the #3/#4 splits severed/over-split, while
leaving the genuine r9 collision eligible for the split that fixes the c7 bug.

This resolves the advisor's "does the IV structure survive to coalesce?" risk
(it does) and the "does it discriminate r9 from the cursors?" question (it does,
cleanly). Attempt #12 (IV-protected split, coupled with the live-on-entry param
fix) is now empirically well-founded. Residual open risk for the implementation
session: struct-pointer false-positive (a basic IV that is also a struct base —
none observed in medium:main, but guard defensively); and confirm the split
still fires on r9 once the param fix is applied (the param fix is what surfaces
the collision). Implement coupled, validate end-to-end (25/0, exit=33 not
crash/timeout), revert if any regression.

## Update 2026-06-03c: attempt #12 (IV-protected split) — CORE WORKS, new residual found

Built the full coupled stack: param fix (component 1) + ZEXT classification
(component 2) + IV-protected collision-gated split (collect_iv_protected_versions
from find_natural_loops+detect_basic_ivs, forbidding any split of a component
touching an IV) + arrow & subscript scalar-base bails. Measured, then reverted
(baseline restored 25/0).

WHAT WORKED (major, first time across 12 attempts):
- The IV-protection fixed the over-split: iv-split fired exactly 1× (not 9× like
  #4/#5), ONLY on the genuine r9 collision. The legit cursors were protected.
- The r9 c7-collision RESOLVED: r9 split into c7 (pointer = (uintptr_t)buf,
  deref'd) and c9000 (scalar digit = LODWORD(c0 + (c0<<2))). No more
  pointer-deref-of-scalar. Result: cc-failed (compile error), NOT crash/timeout
  — strictly closer than every prior attempt.

THE NEW RESIDUAL (why it's still 23/2): two OTHER registers render
`c5->field_4` / `c1->field_4` (c5/c1 declared scalar `_QWORD`/`__int64`).
Adding base_sv_declared_non_pointer to try_struct_field_access's arrow path made
those bail → but they fell through to `c5[1]` (subscripted scalar). Adding the
guard to the 3 try_array_subscript arms did NOT catch it — UNLACE_SUBG_TRACE
proved base_vn_declared_non_pointer fires 0× on c5[1]. So `c5[1]` is emitted by a
DIFFERENT path: the array-of-struct pattern around c_printer.rs:3604
(`arr{}[{}].field_{}`, try_array_struct_access / array_struct_layouts), not the
3 guarded subscript arms.

NEXT-SESSION TODO (precise): (1) keep the IV-protected split (it's correct — the
core fix). (2) The c5/c1 `->field`/`[i]` are a SEPARATE scalar-base issue from a
THIRD emit path (array-of-struct, ~line 3604 + the CExpr::index sites at 11959 /
12345 / 13276). Apply base_sv_declared_non_pointer there too, OR better: find why
c5/c1 (also coalesced register clusters surfaced by the param fix) get a stale
composite/struct type while declared scalar — likely the same root as r9 but for
a struct-typed alias. (3) Re-validate 25/0 end-to-end. The IV-split core is sound
and ready to keep; only the multi-path scalar-base output guard remains.

## Update 2026-06-03d: refined hypothesis on the attempt-#12 c5[1] residual

Static analysis of the emit paths (no rebuild) narrows WHY the subscript guard
fired 0× on c5[1]. Load consumer order (c_printer.rs ~13205): try_array_struct_
field_access → try_struct_field_access → try_array_subscript. In attempt #12 the
arrow guard in try_struct_field_access correctly returned None for c5, so control
fell to try_array_subscript, which produced `c5[1]`. The 3 ArraySubscript arms
(3164/3204/3226) WERE guarded with base_vn_declared_non_pointer(base_vn, def_stmt)
— but it fired 0×, so the base-SV resolution missed.

LIKELY ROOT (for next session to confirm by re-running the instrumented stack):
base_vn_declared_non_pointer resolves base_sv via ctx.stmt_inputs.get(&def_stmt)
.find(sv.base==base_vn). For the constant-index arm (pattern 3,
INT_ADD(base,const)), the base operand is defined at a PRIOR statement, so the
correct lookup stmt for the BASE's SsaVarnode is not necessarily `def_stmt` (the
subscript's own stmt). Need to resolve base_sv at the base's defining stmt (use
ctx.sv_defining_stmt on the resolved input SV, mirroring base_vn_is_scalar_load_
output which DOES chain through sv_defining_stmt). Fix: make base_vn_declared_non_
pointer first resolve the input SV at def_stmt, and if found use it directly
(base_sv IS that input SV) — the current code already does .find(sv.base==base_vn)
which should work IF stmt_inputs for def_stmt contains the base operand; verify
the base operand is actually an input of def_stmt vs a deeper nested def.

So the full t61 fix = (validated) IV-protected split + arrow scalar-base guard +
CORRECTED subscript scalar-base guard (resolve base SV at the right stmt) +
re-validate 25/0. All pieces known; this is the remaining bounded work.

## Update 2026-06-03e: attempt #13 — output now COMPILES + RUNS; residual is pure semantics

Replaced the SV-keyed scalar-base guards with a STRING-BASED one
(`rendered_base_is_scalar(base_str, ctx)`): reverse-looks-up the rendered base
identifier against ctx.var_names and bails struct/subscript when the name's
aggregated declared type is a definite non-pointer scalar. Applied at the arrow
path (try_struct_field_access) + all 3 try_array_subscript arms. This SOLVED the
c5[1]/c5->field residual — no uncompilable forms remain (the stmt-resolution bug
that defeated the SV-keyed guard is sidestepped entirely).

NEW FAILURE MODE (strictly closer): semantic-report 23/2 is now a BEHAVIOR
MISMATCH, not cc-failed: medium:main compiles AND runs (exit=60 vs expected 33),
stripped:main runs (exit=108 vs 33). So across attempts the failure has marched
cc-crash → infinite-loop → timeout → cc-failed → RUNS-BUT-WRONG-ANSWER. The
uncompilable-output AND the runtime-hang are both gone; the remaining gap is a
PURE SEMANTIC correctness bug: the IV-protected split + param fix changed the
program's computed result.

LIKELY ROOT (next session): the split assigns the scalar phase a fresh cN
(c9000) but the param fix also reshapes c5(rsi)/c1(rcx) loop vars; the rendered
logic shows c5/c1 carrying (uintptr_t)(buf+N) pointer values in some branches
and scalar digit/counter values in others — i.e. THOSE registers ALSO have a
pointer/scalar aliasing (like r9) but were NOT split because their collision did
not produce an identical cN name (the collision-gate only fires on exact name
match). So the c5/c1 mismatch is the SAME class as r9 but the collision-gate
missed it. The fix: the collision-gate (split when ptr+scalar phases share a
name) needs to ALSO split when ptr+scalar phases of one register are distinct
webs even if they got distinct names but one carries a stale value — OR the
param fix should not have merged c5/c1's pointer and scalar lifetimes. Needs
per-register dataflow validation (which value is live where). This is the
genuine final-layer LVAR correctness work.

STATUS: uncompilable output SOLVED (string guard, keep it). Runtime hang SOLVED
(IV-protection, keep it). Remaining = semantic correctness of the c5/c1 (and
possibly r9) value flow under the param fix — the true LVAR liveness problem.

## Update 2026-06-03f: ISOLATION — c5/c1 arrow bug is the PARAM FIX alone, not the split

Decisive controlled experiment: applied the live-on-entry PARAM FIX ALONE (no
split, no guards, no classification change). Result: medium:main 23/2 with
cc-failed on `c5->field_4` (line 247) and `c1->field_4` (line 275) — the SAME
arrow errors as attempt #12/#13's residual. c5(rsi)=`_QWORD`, c1(rcx)=`__int64`,
both declared scalar but emitted with `->field`.

This CORRECTS the prior model (updates d/e assumed the split caused c5/c1):
- The c5/c1 `->field` bug is caused by the PARAM FIX making rsi/rcx live params,
  which surfaces a STALE struct entry in composite_var_types (from
  struct_field_recovery mis-attributing a struct layout to rsi/rcx). It is
  INDEPENDENT of the register split.
- It is a PRINTER-LAYER bug: try_struct_field_access emits `c5->field_4` because
  composite_var_types.get(c5) is Some(Struct/Ptr) while the decl is scalar. The
  attempt-#13 rendered_base_is_scalar guard FIXES THE OUTPUT (bails to raw deref)
  — so this half is solved by a guard already written.

REVISED DECOMPOSITION of the full t61 fix (now 3 independent, separately-testable
halves instead of one entangled change):
  A. PARAM FIX surfaces (i) the r9 c7 pointer/scalar collision [needs the split]
     AND (ii) the c5/c1 stale-struct-composite arrow [needs the printer guard,
     OR better: clear composite_var_types for a register that becomes a scalar
     param]. These are DIFFERENT bugs on DIFFERENT registers.
  B. IV-protected split fixes r9 (validated, attempt #12).
  C. rendered_base_is_scalar guard fixes the c5/c1 output (validated, attempt #13).

The attempt-#13 wrong-answer (exit 60 vs 33) is therefore NOT the c5/c1 arrow
(that's an output bug C already handles) — it is a SEPARATE runtime semantic
issue still to be isolated (likely the split's c9000 scalar value or a c5/c1
VALUE corruption distinct from the type/arrow issue). Next session: with A+B+C
applied (compiles), bisect the runtime wrong-answer by selectively disabling the
split per-register to find which register's VALUE (not type) is wrong.

## Update 2026-06-03g: c5/c1 UNIFIES with r9 — same aliasing, surfaced via the struct path

Read recover_structs (struct_field_recovery.rs:36): it records a
composite_var_types[base_sv] struct layout ONLY for a Load/Store address base
decomposed as base + iv*stride + offset (array-of-struct). So c5(rsi) gets a
struct entry because rsi-version-X is used as an array-of-struct base
(`c5->field_4`), while rsi-version-Y is a plain scalar (`c5 + 0x38e`, line 160).

THIS CORRECTS update-f's "independent third layer" framing: the c5/c1 issue is
NOT a separate producer bug — it is the SAME pointer/scalar register aliasing as
r9, just surfaced through the STRUCT-base path (composite_var_types) instead of
the LOAD-deref path. rsi and rcx each hold a pointer (struct base) in some SSA
versions and a scalar in others, collapsed under one C name by the
name-aggregating decl logic.

UNIFIED MODEL (the real t61): MULTIPLE registers (r9, rsi, rcx, ...) have
pointer-version/scalar-version aliasing surfaced by the param fix. The fix is
ONE mechanism applied to all of them: split each register whose SSA versions
partition into a disjoint Pointer web + Scalar web (not Mixed, not IV-protected),
regardless of whether they currently share a name, so each web gets a name that
carries ONLY its own value+type. The IV-protected split (attempt #12) already
does this for the deref-path collision (r9); it must ALSO consult the struct
path (composite_var_types presence = pointer-web evidence) so rsi/rcx split too.
Then the c5/c1 arrow AND the #13 runtime wrong-answer both resolve from the same
correct split — not from output guards. The rendered_base_is_scalar guard
(attempt #13) becomes a belt-and-suspenders fallback, not the primary fix.

So the remaining t61 work is ONE generalization: partition_register_phases /
the split criterion must treat "has a composite_var_types struct/ptr entry" as
pointer-web evidence (alongside address_used), so the Pointer/Scalar
classification catches rsi/rcx, and the collision-gate becomes "split whenever a
register has BOTH a Pointer web and a Scalar web" (drop the exact-shared-name
requirement). Per-register, IV-protected, value-correct.

## Update 2026-06-03h: attempt #14 (unified criterion) — DISPROVES update-g; residual is the r9 split's value, not c5/c1

Attempt #14 implemented the update-g unified criterion: partition_register_phases
treats a composite_var_types Struct/Ptr/Array entry as Pointer-web evidence, and
the gate splits whenever a register has a disjoint Pointer web + Scalar web
(dropping the exact-shared-name requirement), IV-protected. Plus the #13 string
guards. Measured, reverted (baseline 25/0).

RESULT: uni-split STILL fired only 1× (the r9 deref collision) — it did NOT catch
rsi/rcx. So update-g's mechanism is WRONG: rsi/rcx do NOT classify as a disjoint
Pointer+Scalar partition even with composite-as-pointer evidence. Either (a)
their composite_var_types struct entry is absent at the RegisterCoalesce stage
(recover_structs may run/store elsewhere, or composite is keyed on a version not
in the register's partition), or (b) their pointer-version and scalar-version sit
in ONE phi-linked component → classified Mixed → correctly skipped.

CRUCIAL: the behavior-mismatch persisted IDENTICALLY (exit 204/188 vs 33 — same
class as #13's 60/108). Since uni-split == the #13 split (both 1× on r9), the
runtime wrong-answer is caused by THE r9 SPLIT ITSELF (the c7/c9000 partition),
NOT by an un-split c5/c1. The c5/c1 ->field was only ever a COMPILE issue (fixed
by the string guard); it is NOT the runtime bug.

CORRECTED NEXT STEP (bisected): the r9 split produces c7 (pointer=(uintptr_t)buf)
+ c9000 (scalar digit). One of these carries the WRONG VALUE at runtime — the
split assigns versions to webs by use-site class, but a version that is BOTH
read-as-pointer-once and computed-as-scalar may be mis-assigned, or the fresh
c9000 name doesn't cover all scalar-version defs/uses (so c7 gets a scalar store
or c9000 misses a def). Next session: dump the r9 partition's exact version→web
assignment (UNLACE_REG_COALESCE_TRACE already logs the split) and trace each
c7/c9000 def/use against the IR to find the mis-assigned version. This is a
narrow per-version correctness check on ONE register's split, not a criterion
redesign. The string guards + IV-protection + param fix all stay.

## Update 2026-06-03i: r9 def-use web mapped (read-only) — for next-session value bisection

Static IR trace of r9(v72) in medium:main (web is param-fix-independent):
  Web A (POINTER, keeps c7): v72(base=COPY rsp/v32#1, L413; used INT_ADD+4/+8
    L464/509; copied to v0#27 L1002, v16#21 L1079), v72#6(COPY rsi/v56#4 L1761),
    v72#11(COPY rsi L2109), v72#7(MULTIEQUAL #6,#11 L1777), v72#1(MULTIEQUAL
    base,#7 L1886; LOAD v72#1 L2030 → confirms pointer), v72#12(MULTIEQUAL #6,#11
    L2135).
  Web B (SCALAR → c9000): v72#8(INT_ZEXT v66131 L1688), v72#5(MULTIEQUAL #8,#4,#4
    L1707), v72#4(INT_ZEXT v66191 L2063).
  The two webs share NO phi/copy edge → genuinely disjoint (correct split).

OBSERVATION: Web A mixes TWO distinct incoming pointers — v72(base) = rsp/buf,
but v72#6/#11 = rsi. So c7 aggregates rsp-derived AND rsi-derived pointer values
across versions. If buf(rsp) and the rsi pointer are DIFFERENT objects, naming
them both c7 and relying on phi-merge is fine IN SSA, but the de-SSA'd C single
`c7` variable conflates them at points where the original used distinct
registers — a possible source of the runtime wrong-answer (c7 holds rsp-buf in
one region, rsi in another, but C sees one variable). NEXT SESSION: run the
instrumented split (UNLACE_REG_COALESCE_TRACE) to confirm the exact version→name
map, then check whether any Web-A version that is rsi-derived is read where the
rsp-buf value is expected (or vice versa). If so, the split is correct but the
UNDERLYING coalescing already wrongly merged rsp and rsi into r9's web upstream —
i.e. the bug is one layer deeper than the pointer/scalar split. This is the
precise, narrow question to resolve; not a criterion redesign.

Data gathered read-only; no rebuild. The split machinery (IV-protect, string
guards, param fix) all stay validated.

## Update 2026-06-03j: ROOT CAUSE FOUND — partition components are wrong webs (phi tangles + arith taint)

Instrumented partition dump (UNLACE_PART_DUMP) of r9(v72) at the coalesce stage,
cross-referenced with the IR. The split is INVERTED and the components are WRONG:

  Component {6,7,12}: addr=false arith=true → classified SCALAR → c9000.
    BUT IR: v72#6=COPY rsi(v56#4), v72#7/#12=MULTIEQUAL of rsi copies → these are
    POINTERS, wrongly marked arith_output (rsi also feeds an INT_ADD, so the
    arith taint propagated onto the rsi-copy versions).
  Component {0,1,2,3,8,11,13,14,15}: addr=true arith=false → POINTER → c7.
    BUT this lumps v72#8 (INT_ZEXT digit = SCALAR) AND v72#11 (COPY rsi = pointer)
    together with the rsp/buf base — three different value-origins in one web.

So the runtime wrong-answer (exit 204 vs 33) is because c9000 gets the rsi
POINTER (mislabeled scalar) and c7 gets a mix of rsp-buf + rsi + the ZEXT digit.
The split faithfully renders whatever the partition says; the partition itself is
wrong.

TWO COMPOUNDING ROOT CAUSES (both upstream of the split):
1. arith_output TAINT over-propagation: rsi(v56#4) feeds both a pointer copy
   (v72#6) AND an INT_ADD; the classify_use_sites propagation marks v72#6/#7/#12
   as arith_output even though they carry a pointer. classify must NOT propagate
   arith onto a version that is itself a pointer copy / phi of pointers.
2. PHI TANGLING: the union-find merges versions across true value boundaries
   because phis (v72#12=MULTIEQUAL(#6,#11)) link two rsi-copy versions that the
   de-SSA'd C then conflates with the rsp-buf web. The components are NOT the
   true single-value webs.

THE REAL FIX (next session, narrow + precise): the partition must classify by
the version's OWN definition (COPY of a pointer reg → Pointer; INT_ZEXT/arith →
Scalar), NOT by use-site taint that leaks across the register. I.e. seed
Pointer/Scalar from each version's defining op (COPY rsi/rsp/rbp/loaded-ptr =
Pointer; INT_ZEXT/INT_MULT/SUBPIECE-of-arith = Scalar), then only union versions
that share a value (phi of same-class), and leave the address_used/arith_output
use-site marks as a SECONDARY signal. This is a classify_use_sites + partition
seeding fix — bounded, and directly testable: the r9 part dump must show
{rsi-copies}=Pointer and {ZEXT-digits}=Scalar as SEPARATE correctly-classed webs.

All machinery (param fix, IV-protect, string guards, split mechanics) stays; only
the per-version CLASSIFICATION/seeding is wrong. Baseline 25/0 (reverted).

## Update 2026-06-03k: cause #1 FIXED+verified (arith taint); cause #2 (phi tangle) isolated

Implemented the cause-#1 fix in classify_use_sites: after the arith-taint
fixpoint, build a `pointer_def` set (address_used ∪ Load outputs ∪ COPY-of-
pointer transitively ∪ phi-of-pointers) and `arith_output.retain(|sv| !pointer_def
.contains(sv))`. VERIFIED via UNLACE_PART_DUMP on r9: component {6,7,12} (the
rsi-copy pointers) flipped from `arith=true` (wrongly Scalar) to `arith=false` —
the false taint is GONE. Cause #1 (arith over-propagation onto pointer copies) is
fixed and confirmed at the partition level.

BUT cause #2 remains and now dominates: the part dump still shows the components
are the WRONG webs —
  {6,7,12}: now addr=false arith=false = Neither (rsi pointers, but no longer
    classed; not split).
  {0,1,2,3,8,11,13,14,15}: addr=true = Pointer, but still TANGLES v72#8 (the
    INT_ZEXT scalar digit) and v72#11 (rsi pointer) with the rsp/buf base.
So the union-find merges versions across true value boundaries (phi
v72#1=MULTIEQUAL(base, #7) and the loop phis link rsp-buf, rsi, AND the ZEXT
digit into one component). With cause #1 fixed the gate moved from exit=204 to
exit=-1 (segfault) — different wrong, because c7 still conflates digit+pointer.

REMAINING (cause #2, isolated): partition_register_phases unions over ALL phi
edges, but a phi that merges a pointer-version and a scalar-version is the very
aliasing we must SPLIT, not union. The union step must NOT merge two versions of
different value-class (pointer vs scalar) even when a phi links them; instead such
a phi marks a true split point. Fix: when unioning phi output↔input, skip the
union if the two endpoints have opposite definition-class (one pointer_def, one
arith_output/ZEXT-scalar). Then {rsp-buf,...} stays Pointer, {ZEXT digits} stays
Scalar, {rsi-copies} their own Pointer — three correct webs. Re-validate via part
dump (each web single-value-class) then the gate.

PROGRESS: cause #1 done+verified (keep the pointer_def retain fix). cause #2 is a
one-edge union-skip rule, directly testable via the part dump. Baseline 25/0
(reverted). All other machinery validated.

## Update 2026-06-03l: cause #2 attempted — reveals a THREE-WAY entanglement (ZEXT not classed scalar)

Implemented cause #2 (skip phi union when endpoints are opposite definition-class)
together with cause #1. Part dump: components UNCHANGED — {6,7,12} and
{0,1,2,3,8,11,13,14,15} with v72#8 (the ZEXT digit) STILL tangled in the pointer
web. The phi-skip did not fire.

ROOT OF THE NON-FIX: the ZEXT digit v72#8 (= INT_ZEXT) was NEVER in arith_output
to begin with — classify_use_sites only marks IntMult/IntLeft/IntRight/IntDiv/
IntRem/IntAnd/IntOr/IntXor as arith_output, NOT IntZext/IntSext/Subpiece. So #8
is class-UNKNOWN, opposite_class(pointer, unknown)=false, and the phi-skip has
nothing to act on. Meanwhile cause #1's pointer_def correctly excludes #8 (it's
not a Load/COPY/phi-of-pointer), so #8 is neither pointer nor scalar.

THE THREE-WAY ENTANGLEMENT (why this is genuinely multi-cycle):
  (A) classify must MARK ZEXT/SUBPIECE-of-arith as scalar (so #8 is recognized).
      [earlier "component 2" did this — but it also tainted the rsi pointer copies]
  (B) cause #1 must REMOVE that scalar mark from pointer-by-definition versions
      (so the rsi copies aren't mislabeled). [verified working in 03k]
  (C) cause #2 phi-skip needs BOTH (A) and (B) correct to identify the real
      split point (#8 scalar vs base pointer).
The three interact: (A) adds marks, (B) removes some, (C) reads the result. They
must be co-tuned: (A) marks ZEXT/SUBPIECE/arith-COPY as scalar; (B) pointer_def
(address_used + Load + COPY-of-ptr + phi-of-ptr) OVERRIDES (A) — retain removes
pointer_def from arith; (C) then sees #8=scalar (kept by A, not in pointer_def)
and base=pointer → skips that phi → #8 splits into its own Scalar web.

NEXT SESSION (precise co-tuned recipe): apply (A)+(B)+(C) together — strengthen
classify_use_sites scalar marks (IntZext/IntSext/Subpiece + the existing arith),
then pointer_def-retain, then the opposite_class phi-skip — and verify via part
dump that r9 yields THREE webs: {rsp/buf base + #1..} Pointer, {rsi copies 6,7,
11,12} Pointer, {ZEXT digits 8,4,5} Scalar. Only then will the split be correct
and the gate reach 25/0. Baseline 25/0 (reverted). cause #1 fix (03k) + cause #2
phi-skip (this turn) both BUILT and validated-mechanically; they need (A) added
and the three co-tuned in one coupled validation pass.
