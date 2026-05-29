# DREAM Default-On Rollout Tasks

This is the task backlog to move the DREAM/SAILR structurer from the current
default-off gated seam to fully wired, default-on production behavior.

Current status:

- Steps 1, 2, 3a, 3b are implemented and tested.
- Step 3c is wired conservatively behind `UNLACE_DREAM_STRUCT`.
- Step 4 Tasks 1-4 now have code support: exit-aware region bridging,
  synthetic guarded `Continue` / `Break` leaves, cyclic `StructuredNode::Loop`,
  and HIR lowering to `While` / `Break` / `Continue`.
- Flag-off byte-identity is guarded by `scripts/dream_byte_identity.sh`.
- Flag-on reaches residual candidates in `medium`, but the production seam still
  rejects both observed cyclic regions:
  - the 3-block region would use a branch predicate before the predicate source
    block is emitted (`predicate-before-source`),
  - the 68-block region has three real outside successors, which cannot yet be
    represented by a single `break` continuation.
- Current `medium` baseline remains 29 gotos:
  - `f_ackermann`: 16
  - `f_rec_fib`: 8
  - `main`: 4
  - `f_rec_power`: 1

Default-on is still blocked until Task 5 can accept at least one `medium`
cyclic region without undeclared/uninitialized predicate temporaries or
multi-exit ambiguity.

The remaining work is Step 4 plus rollout hardening.

## Task 1: Pure Cyclic Region Model

Write scope:
- `crates/unlace-struct/src/reaching_conditions.rs`
- new helper module if needed, for example `cyclic_region.rs`

Build a pure representation of a cyclic DREAM region:
- header node,
- entry nodes,
- body nodes,
- forward edges,
- classified back-edges,
- external exits.

Acceptance:
- Unit tests for:
  - one-header natural loop,
  - two-entry irreducible loop,
  - loop with one external exit,
  - loop with multiple external exits.
- No production wiring.
- `UNLACE_DREAM_STRUCT=0` output unchanged.

Verification:

```bash
RUSTC_WRAPPER= cargo test -p unlace-struct --lib
RUSTC_WRAPPER= cargo clippy -p unlace-struct -- -D warnings
RUSTC_WRAPPER= DREAM_IDENTITY_TIMEOUT_SECS=120 scripts/dream_byte_identity.sh run /tmp/dream_id_a /tmp/dream_id_b
```

## Task 2: Continuation And Exit Condition Synthesis

Write scope:
- cyclic DREAM module from Task 1
- `crates/unlace-struct/src/reaching_conditions.rs` if formula helpers are
  needed.

For each cyclic region, synthesize:
- loop continuation condition for each back-edge,
- break/exit condition for each external exit,
- per-node residual condition inside the loop.

Acceptance:
- Unit tests showing:
  - a latch back-edge becomes a continue condition,
  - a false branch to an external target becomes a break condition,
  - multiple latches combine deterministically with `Or`,
  - unresolved/malformed cases return `Unsupported` rather than partial output.
- No production wiring.

Verification:

```bash
RUSTC_WRAPPER= cargo test -p unlace-struct --lib
RUSTC_WRAPPER= cargo clippy -p unlace-struct -- -D warnings
```

## Task 3: Cyclic Structured Tree

Write scope:
- `crates/unlace-struct/src/condition_refinement.rs`
- cyclic DREAM module from Task 1.

Add a cyclic structured tree shape, either by extending `StructuredNode` or by
introducing a separate `CyclicStructuredNode`.

It must represent:
- `while (true)` or guarded `while`,
- structured loop body,
- guarded `continue`,
- guarded `break`,
- optional default legacy fallback marker.

Acceptance:
- Synthetic tests for one-latch loop and two-entry irreducible loop.
- `goto_count()` remains zero for fully structured cyclic test fixtures.
- Unsupported cases are explicit and do not drop blocks.

Verification:

```bash
RUSTC_WRAPPER= cargo test -p unlace-struct --lib condition_refinement
RUSTC_WRAPPER= cargo test -p unlace-struct --lib
```

## Task 4: HIR Splice For Cyclic Nodes

Write scope:
- `crates/unlace-struct/src/region_splice.rs`
- tests in the same module.

Lower cyclic structured nodes into HIR:
- `HirNode::While`,
- nested `HirNode::If`,
- `HirNode::Continue`,
- `HirNode::Break`.

The existing no-drop fallback invariant remains mandatory.

Acceptance:
- Unit tests for:
  - `while (cond)`,
  - `while (true)` with guarded break,
  - guarded continue,
  - unresolved predicate fallback.
- No production wiring yet.

Verification:

```bash
RUSTC_WRAPPER= cargo test -p unlace-struct --lib region_splice
RUSTC_WRAPPER= cargo clippy -p unlace-struct -- -D warnings
```

## Task 5: Flag-On Cyclic Wiring

Write scope:
- `crates/unlace-struct/src/structurer.rs`
- only the `try_structure_dream_residual_region` seam.

Allow cyclic residual regions through the DREAM path when:
- `UNLACE_DREAM_STRUCT=1`,
- the cyclic engine returns a fully structured tree,
- all predicates resolve,
- all exits can be represented as `break` or a single continuation target,
- no statement is dropped.

Default-off path must still return before any DREAM work.

Acceptance:
- `UNLACE_DREAM_STRUCT=0` byte-identity harness passes.
- `UNLACE_DREAM_STRUCT=1` reduces at least one `medium` function goto count.
- No new undeclared variables in `medium` output.
- `cli_smoke` and `quality_smoke` pass.

Verification:

```bash
RUSTC_WRAPPER= cargo test -p unlace-struct --lib
RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke
RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke
RUSTC_WRAPPER= DREAM_IDENTITY_TIMEOUT_SECS=120 scripts/dream_byte_identity.sh run /tmp/dream_id_a /tmp/dream_id_b
UNLACE_DREAM_STRUCT=1 target/debug/unlace decompile --emit c fixtures/medium.elf > /tmp/medium_dream.c
rg -n '\bgoto\b' /tmp/medium_dream.c
```

## Task 6: Flag-On Corpus Hardening

Write scope:
- whichever module caused failures found by this task.

Run flag-on across every fixture and classify changes:
- strict improvements,
- no-op,
- unsupported fallback,
- correctness regressions.

Acceptance:
- No fixture has undeclared variables.
- No fixture drops statements according to existing quality counters.
- No fixture introduces new goto cycles.
- Existing known-stale golden failures are not refreshed in this task.

Verification:

```bash
for f in fixtures/*.elf fixtures/*.macho; do
  [ -e "$f" ] || continue
  timeout 120 env UNLACE_DREAM_STRUCT=1 target/debug/unlace decompile --emit c "$f" > "/tmp/dream-$(basename "$f").c"
done
RUSTC_WRAPPER= cargo test -p unlace-cli --test cli_smoke
RUSTC_WRAPPER= cargo test -p unlace-cli --test quality_smoke
```

## Task 7: Default-On Flip

Write scope:
- `crates/unlace-struct/src/reaching_conditions.rs`
- docs that mention `UNLACE_DREAM_STRUCT`.

Change the flag helper from opt-in to default-on:
- unset means enabled,
- `UNLACE_DREAM_STRUCT=0` disables DREAM,
- `UNLACE_DREAM_STRUCT=1` remains enabled.

Acceptance:
- Default output equals previous flag-on accepted output.
- `UNLACE_DREAM_STRUCT=0` still equals the old legacy output by byte-identity
  harness.
- CLI/quality smoke pass.
- The remaining golden failures are documented as stale/mixed, not hidden.

Verification:

```bash
RUSTC_WRAPPER= cargo test --workspace --no-fail-fast
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
cargo fmt --all -- --check
RUSTC_WRAPPER= cargo xtask lint-determinism
UNLACE_DREAM_STRUCT=0 scripts/dream_byte_identity.sh capture /tmp/dream_legacy
scripts/dream_byte_identity.sh capture /tmp/dream_default
```

## Task 8: Post-Flip Cleanup

Write scope:
- DREAM docs,
- task docs,
- tests.

After default-on has survived the full gate set:
- update status docs,
- mark the legacy fallback as intentional rather than primary,
- keep `UNLACE_DREAM_STRUCT=0` as an emergency rollback,
- add regression tests for every fixture/function whose goto count improved.

Acceptance:
- Status docs accurately describe DREAM as default.
- Rollback knob is documented.
- No blanket golden refresh. Refresh only per fixture where every changed line
  is verified better.

## Task Ordering

Do these serially:

1. Task 1
2. Task 2
3. Task 3
4. Task 4
5. Task 5
6. Task 6
7. Task 7
8. Task 8

Do not parallelize Tasks 3 to 5. They converge on the same structurer and
splice contracts, and merge conflicts there are more expensive than serialized
progress.

## Global Rollback Rule

If any default-off or `UNLACE_DREAM_STRUCT=0` run changes output before Task 7,
revert the leaking commit immediately. The whole rollout depends on the legacy
path remaining byte-identical until the explicit default-on flip.
