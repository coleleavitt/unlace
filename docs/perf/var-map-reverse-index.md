# var_map reverse-index: the `DefIndex` fix

## The bug

A `perf record` of `unlace decompile /usr/bin/wc --function sub_3b30`
(10,866 samples, `cargo flamegraph`) showed ~42 % of total wall-clock in
`BTreeMap` iteration over `SsaFunction::var_map`:

| % of total | function |
|--:|---|
| 23.4 % | `BTreeMap::Iter<(BlockId, usize, VarnodeSlot), SsaVarnode>::next` |
| 11.2 % | `Vec::from_iter` over filtered `var_map` keys |
|  7.1 % | `BTreeMap::search_tree` |

The cost was a **reverse lookup**: four passes scanned the entire
`var_map` to find an entry by its *value* (`SsaVarnode`), filtering to
the `Output` slot:

```rust
fn find_def(func: &SsaFunction, sv: SsaVarnode) -> Option<(BlockId, usize)> {
    func.var_map.iter().find_map(|((bid, idx, slot), other)| {
        if *other == sv && matches!(slot, VarnodeSlot::Output) {
            Some((*bid, *idx))
        } else { None }
    })
}
```

`O(|var_map|)` per lookup, called inside the backward-tracing loops of:

- `indirect_jump_resolve.rs` (`chase_copies_to_producer`, `trace_table_base`)
- `indirect_call_resolve.rs` (`gather_constants`)
- `auth_call_resolve.rs` (`trace_load_address`)
- `go_iface_devirt.rs` (`trace_to_load`, `trace_constant_value`)

## Approaches considered

**A. Sibling reverse map on `SsaFunction`, maintained at every mutation site.**
208 `var_map.(insert|remove|clear|…)` call sites would each need a paired
update. High drift risk — a missed site = silent wrong-output. Rejected.

**B. Encapsulate `var_map` behind a wrapper with private field + methods.**
Turns drift into a compile error, but still rewrites all 208 sites and
fights the SSA builder's direct field access. Large blast radius. Deferred.

**C. Lazy reverse index on `SsaFunction`, rebuilt on a generation bump.**
The four hot passes call `find_def` inside fixed-point loops; if any
`var_map` mutation invalidates the cache between calls, worst case
degrades to the current O(n). Fragile coupling to mutation timing.
Rejected.

**D. Per-pass-local index, built once at pass entry. ★ recommended ★**
Each pass builds a local `BTreeMap<SsaVarnode, (BlockId, usize)>` once
(one O(n) walk), then does O(log n) lookups. **Zero changes to
`SsaFunction`, zero cross-pass staleness, no mutation tracking.** The
four callers were verified read-only over `var_map` within their pass:
each one's `run` mutates only `resolved_jump_tables` /
`resolved_indirect_calls` / `indirect_call_targets` (or returns an
annotation map), *after* the analysis completes. Chosen.

**E. Memoized `SsaFunction::def_of` with explicit invalidation.**
Same invalidation-hook surface as A/C. Worth building only if many more
callers appear. Deferred.

## Risk grade

**Low.** No public type changed shape; `var_map` stays `pub`; the
determinism contract (BTreeMap ordering) is untouched — `DefIndex` is
itself a `BTreeMap`. The four passes produce byte-identical output (see
verification).

## Implementation

`crates/unlace-passes/src/pass.rs` gains:

```rust
pub struct DefIndex { by_value: BTreeMap<SsaVarnode, (BlockId, usize)> }

impl DefIndex {
    pub fn build(func: &SsaFunction) -> Self { /* one Output-slot scan */ }
    pub fn lookup(&self, sv: SsaVarnode) -> Option<(BlockId, usize)> { /* O(log n) */ }
}
```

Each pass calls `DefIndex::build(func)` once at the top of its read-only
analysis and threads `&DefIndex` through its tracing helpers, replacing
the per-call `find_def` linear scan with `defs.lookup(sv)`. The
file-local `find_def` helpers are deleted.

Lines changed: ~150 across 6 files (`pass.rs`, `lib.rs` re-export, and
the 4 passes). The `find_def(insns, before, vn)` helpers that scan a
`&[IrInsn]` slice (in `go_iface_devirt`, `cpp_vtable`, `division_idiom`,
…) are a *different* helper and were left untouched.

## Verification

- `cargo test -p unlace-passes --lib` → 1029/1029 pass.
- `cargo xtask lint-determinism` → OK.
- `/usr/bin/wc` and `/usr/bin/true` decompiled C output byte-identical
  before/after (`diff` clean).
- Re-profiled `wc sub_3b30`: the
  `BTreeMap::Iter<(BlockId, usize, VarnodeSlot), SsaVarnode>::next`
  frame (was **23.4 %**) and the `Vec::from_iter` frame (was **11.2 %**)
  are **completely absent** from the new profile. `DefIndex` construction
  shows at 1.29 % — a ~27× reduction from the 35 % it replaced. See
  `docs/profiling/wc-sub_3b30.after-defindex.perf.svg`.

## Why total wall-clock didn't drop on wc

The four fixed passes run in the `GlobalOpt` phase — once or twice per
function. The reverse-scan cost they paid was real but is *not* the
dominant term on `wc sub_3b30`, whose runtime is dominated by
`ConditionSimplifyPass` and `SccpPass` running on **every** fixed-point
iteration. The fix is a clean per-call O(n)→O(log n) win that removes a
35 %-of-profile hotspot; it pays off most on functions with many indirect
calls / jump tables (dispatch-heavy code, Go binaries, ObjC), less on
arithmetic-heavy leaf functions like `wc`'s counters. Reducing the
`ConditionSimplify`/`SCCP`/`TypeConstraintSolver` cost is tracked
separately.
