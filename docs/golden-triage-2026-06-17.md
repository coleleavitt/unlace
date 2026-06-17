# Golden triage — 2026-06-17

Per-fixture classification of the golden corpus, driven by
`scripts/classify_golden_diffs.sh` plus the authoritative harness
(`cargo test -p unlace-test-harness --test golden_fixtures`) and direct
byte-diffs. This supersedes the stale "14 failing goldens" note in the root
`CLAUDE.md`.

## Headline

The "14 failing goldens" premise is **stale** — intervening work fixed them. The
state was 31 pass / 1 fail (`golden_debug_calls`); the DWARF-offset calibration
fix below closed that one too:

```
cargo test -p unlace-test-harness --test golden_fixtures
=> 32 passed; 0 failed
```

## RESOLVED: golden_debug_calls — DWARF fbreg over-shift in offset calibration

Root-caused via `UNLACE_DWARF_MAP_TRACE` + a model-council diagnosis, then fixed
and measured. `calibrate_dwarf_offsets` (pipeline.rs) chooses a frame-offset
`delta` to re-key DWARF locals onto recovered slots. For `compute` it picked the
CFI CFA→rbp delta (`+16`) because that bound more slots (`d_matches=4 >
zero_matches=2`). But the +16 shift is an OVER-shift: `a@fbreg-36` is the live
copy slot, and +16 re-keyed `a` onto the *add-result* slot (-20), cascading every
name one lifetime late and leaking a `v_36` fallback. The golden binds at
`delta=0`: `a` on the -36 copy slot, `e` on -20.

**Fix:** apply the CFA shift only when `delta=0` binds NOTHING (`zero_matches == 0
&& d_matches >= 2`) — i.e. only when the raw offsets genuinely live in a
different coordinate system. Otherwise prefer the raw offsets, because slots that
match at `delta=0` are the variables' OWN live-range slots; shifting merely
re-keys names onto neighbouring computed-result lifetimes. This is exactly the
canonicity principle proved in `LvarNaming.v` / `AssignNames.v` (the binding must
follow the value's live range, not an offset shift that happens to hit some
observed slot).

**Measured:** `compute` body diff 25 → **0** (byte-identical); full harness
**32/32** (was 31/1); `debug_hello` + `debug_structs` still pass; parity 83.0%;
clippy clean; 37 proofs `Axioms:<none>`. New trace `UNLACE_DWARF_LOCAL_TRACE`
not added (the existing `UNLACE_DWARF_MAP_TRACE` already covers the calibration).

Two earlier hypotheses were measured and REVERTED before this one: removing the
`rsp_off` candidate (made it worse, 28>25) and applying a `+16` override in
`compute_dwarf_locals` (also 28 — double-binds the already-correct lvar slot).
The fix is upstream in the calibration `delta` choice, not the printer override.

### Stale note below (pre-fix triage, retained for history)

The classifier reports 14 fixtures as "REFRESH-SAFE" — but every one of those is
already **byte-identical** to its expected golden (`body_diffs=0`,
`prelude_diffs=0`), i.e. *already passing*. There is nothing to refresh:
`diff expected/<f>.c <(unlace decompile <f>.elf)` is empty for all of them
(verified on arc_features, switch_table, cpp_vtable, medium, …). The classifier's
"refresh-safe" simply means "no structural divergence", which here coincides with
"no divergence at all".

## The one genuine failure: `debug_calls`

`classify_golden_diffs.sh` flagged it NEEDS-REVIEW (body_diffs=25, struct=7). The
body diff is **local-variable naming / slot allocation only** — the call graph,
control flow, and values are identical:

```
expected            actual
--------            ------
int v_4;            int e;            (DWARF-named locals mapped to different slots)
__int64 b/d;        int b/c;
a = x; x = a;       v_36 = x; x = v_36;
e = LODWORD(v13);   a = LODWORD(v13);
v_16 = …            b = …
return clamp(v_4,…) return clamp(e,…)
```

Same sequence `add → sub → square → abs_val → clamp`, same constants, same
returns. The divergence is which SSA temp receives each DWARF local name
(`a`/`b`/`d`/`e`) and how anonymous temps are numbered (`v_4` vs `e`, `v_16` vs
`b`).

**Verdict: NEEDS-REVIEW → do NOT refresh.** This is not a stale golden; it
exposes a pre-existing lvar-allocation quality gap. The *expected* golden is the
better output (it preserves the clean DWARF names `a/b/d/e` on the natural slots;
the current output scatters them and leaks an anonymous `v_36`). Mechanically
refreshing would lock in the worse allocation and hide the gap — exactly what the
repo rules forbid. Left failing as an honest signal.

### Root-cause trace (measured, not inferred)

`UNLACE_VAR_NAMING_TRACE` + reading the binding code locates the divergence
precisely — and it is **not** the DWARF-name binding:

- `lvar_collect.rs::stack_lvar_name` binds a DWARF name to a slot purely by
  **stack offset** (`dwarf_local_names.get(&offset)`). That step is already
  canonical-by-offset: deterministic and order-independent (consistent with
  `LvarNaming.canonical_name`). It is *not* where the scatter happens.
- The divergence is **upstream, in stack-slot allocation**: which SSA value
  lands at which stack offset. The DWARF names attach correctly to whatever
  value occupies each offset; the values are allocated to different offsets than
  the golden expects, so `a/b/d/e` end up on different lifetimes.

### Why no producer fix this round (measured blast radius)

`debug_hello` and `debug_structs` currently **pass** and exercise the same
DWARF-driven stack-allocation path. A change to the allocator to match
`debug_calls`'s expected offsets risks regressing those two passing goldens (the
t61 emergent-pipeline trap the repo CLAUDE.md documents). The goal explicitly
authorizes the "record a precise measured finding + the canonicity proof as
grounding" outcome when a fix risks regression; that is the outcome here.

### Deeper trace (variable_merge → DWARF-match → print)

Following the chain past stack allocation with `UNLACE_VAR_MERGE_TRACE`: in
`compute`, all locals live in REGISTERS, not on the stack. `variable_merge`
coalesces them into clusters and assigns merge-level names `c0..c5` (register
clusters) + `v7..v12` (unique temps) — and this step is provably canonical
(`AssignNames.v::rank_cid_only`: the assigned rank depends only on the
cluster-id sequence, never the per-value key/version). The DWARF names
`a/b/c/d/e` are applied DOWNSTREAM, in the C printer's `compute_dwarf_locals`
(`c_printer.rs:863`), which matches DWARF source locals onto these clusters. The
`v_36 = x` (anonymous, where the golden has `a = x`) shows the divergence is in
that downstream DWARF→cluster matching: which cluster each DWARF name attaches to
differs from the golden, and one value is left unnamed.

So the gap spans three layers — coalescing (proven canonical), DWARF→cluster
matching (the divergent step), and printing — all shared by `debug_hello` and
`debug_structs`, which currently pass. A change to the DWARF-matching heuristic
to fix `compute` risks those two; per the t61 rule and the goal's explicit
"record the measured finding if a fix regresses" clause, that is the outcome:
the fix is a precisely-scoped next step (make `compute_dwarf_locals` bind each
DWARF local to the cluster whose live range matches the local's scope, keyed
canonically), gated on the two passing debug goldens.

### Proof grounding (and an honest scope note)

`rocq-tests/theories/LvarNaming.v` + `NameInversion.v` prove the *general*
principle this bug violates: recovered names should be a renaming-invariant
function of the live-range structure (`canonical_name_perm_invariant`,
`canonical_name_renumber_invariant`), and an allocation-order-dependent namer is
provably **not** a section of name-erasure (`order_index_not_canonical`).
Scope caveat: those theories model the *structural-rank* canonical scheme (name =
rank of def-point); the shipping recovery additionally prefers actual DWARF
source names where present, so the proof grounds the *invariance principle* the
fix must satisfy, not the exact DWARF-preferring namer. The concrete fix —
making stack-slot allocation offset-canonical so DWARF names land on stable
lifetimes — is the documented next step, gated on not regressing
`debug_hello`/`debug_structs`.

## Refresh actions taken

- **debug_calls**: not refreshed; fixed at the producer (DWARF fbreg
  over-shift). See the RESOLVED section above.
- **medium**: refreshed (2026-06-17) — evidence-backed, after the
  redundant-OF-store-elimination fix below. The refresh is **62 deletions, all
  flag-store-only**: every changed line removes a dead `cN = __OFSUB__/__OFADD__(...)`
  store while preserving the recovered comparison (`c10 = … < …`). Verified each
  removed store is overwritten-before-read (genuinely dead), so the new output is
  strictly better (medium.elf flag macros 87 → 25, a 71% reduction). Soundness is
  proof-grounded by `rocq-tests/theories/FlagReconstruct.v` (`of_elim_sound`).
  This is a verified-better refresh, not a blanket `UPDATE_GOLDEN`.

## Redundant OF-store elimination (the medium.elf flag-macro fix)

Measured root cause: at a `cmp a,b`, the lifter materializes three EFLAGS stores
(`c13 = LOBYTE(a<b)`, `c10 = (a<b)`, `c14 = __OFSUB__(a,b)`). The comparison is
already recovered in `c10`; `c14` is the explicit OF flag. These flag registers
are reused across the function, and `prune_dead_plain_assignments` conservatively
treated a *later reassignment* of `c14` as keeping the earlier store alive
(`treat_reassign_as_use` for non-cond, non-temp register-commented locals) — so
dead OF stores survived.

Fix: when a store's RHS is a pure overflow macro (`segment_rhs_is_overflow_flag_macro`),
a later reassignment no longer pins it (only a genuine rvalue read does). Grounded
by `FlagReconstruct.of_elim_sound`: the OF flag is reconstructible from SF and the
recovered comparison, so a never-read OF store is dead. The 25 remaining macros
are cases where the flag IS read later (correctly kept).

Measured: medium.elf `__OFSUB__/__OFADD__` macros **87 → 25**; harness **32/32**
(medium golden refreshed); parity 83.0%; clippy clean; c_printer 591/591 units;
38 proofs `Axioms:<none>`.

### Parity-flag (PF) dead-store elimination (follow-up)

Same shape, extended to the parity flag. IDA emits PF as
`c11 = !(__builtin_popcount(LOBYTE(x)) & 1)` per `cmp`/arithmetic op — pure junk
unless a `jp`/`jnp` consumes it (which is rare). These are register-reused flag
stores like OF: in `main`, every `c11` reference is a write or `c11 = c11`
self-assignment (zero rvalue reads), so all PF stores there are dead.

`segment_rhs_is_overflow_flag_macro` was generalized to
`segment_rhs_is_pure_flag_store`, now also matching the
`!(__builtin_popcount(<balanced>) & 1)` idiom (consuming the whole RHS; trailing
consumers / popcount-as-value rejected). PF has no reconstruction theorem (it is
not a comparison flag), so its soundness is purely standard dead-store
elimination (overwrite-before-read).

Measured: medium.elf PF `__builtin_popcount` **127 → 73** (−54), 37 fewer lines.
medium.c golden refreshed — verified all 77 changed lines are dead PF-store
deletions plus the dead-decl cascade (3 now-unused `// temp`/`// PF` decls whose
sole use was a removed PF line); no data, comparison, or control flow lost. The
remaining 73 PF stores are genuinely read later (correctly kept). Harness 32/32;
parity 83.0%; clippy clean; c_printer 592/592 units.
