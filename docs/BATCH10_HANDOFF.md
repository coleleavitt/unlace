# Batch 10: Maturity-Level Orchestration — Full Hand-Off for Opus 4.7 Max

## 1. Mission

Transform the decompiler pipeline from its current "flat outer-fixedpoint + inner-fixedpoint" model into a **Milestone-Driven Maturity Pipeline** that mirrors the Hex-Rays `sub_14B8B0` orchestrator. The pipeline should advance through explicit maturity levels, with the ability to **downgrade maturity** when a later pass discovers a fact that invalidates earlier assumptions (the "reset-on-discovery" pattern).

## 2. Why This Matters

The current pipeline (`crates/unlace-cli/src/pipeline.rs:998`) uses a single `run_outer_fixedpoint` loop that re-runs ALL passes every iteration until `ssa_type_signature()` stabilizes. This has problems:

1. **Wasted work**: Stack recovery passes re-run even when only type inference changed.
2. **No ordering guarantee**: The pass list is manually ordered but nothing enforces it at runtime.
3. **No downgrade path**: If type inference at M_GLBOPT discovers a stack variable is actually a struct pointer, there's no way to "reset" to M_LOCOPT and re-run stack recovery with the new info.
4. **Oscillation risk**: The 200-round cap in `run_to_fixedpoint` exists because passes can fight.

IDA's `sub_14B8B0` solves all of this with explicit maturity levels and conditional re-entry.

## 3. The IDA Blueprint: sub_14B8B0 Decoded

From `references/hexrays/ida_dump/hexx64/all/sub_14B8B0.c` (358 lines), the pipeline is:

```
sub_14B8B0(mba_t *mba, int maturity_request):
  while (true):
    1. sub_1443F0(mba, 3)         -- M_GENERATED: microcode refinement
    2. sub_330F20(mba, 3)         -- set maturity to 3, check abort
    3. sub_13B0F0(mba, &changed)  -- M_LOCOPT: stack var address resolution
    4. sub_FA4C0(mba, 31)         -- preoptimization (peephole/algebraic)
    5. sub_F8530(mba)             -- M_PREOPTIMIZED: instruction folding
    6. sub_F7F40(mba, 2)          -- global optimization pass (calls)
    7. sub_330F20(mba, 4)         -- set maturity to 4 (M_LOCOPT done)
    8. sub_14A660(mba, 15)        -- M_GLBOPT: the big fixed-point (15 iters max)
    9. sub_330F20(mba, 5)         -- set maturity to 5 (M_GLBOPT done)
   10. sub_13B0F0(mba, &changed)  -- re-run stack resolution if GLBOPT changed things
   11. sub_F9180(mba)             -- CHECK: did types change? if yes → RESET to top
   12. sub_330F20(mba, 6)         -- set maturity to 6
   13. sub_1FAB30(mba, 6, 0)      -- M_LVARS: lvar allocation
   14. sub_1CE9E0(mba)            -- M_FINAL: ctree construction
```

Key insight: **`sub_F9180`** (line 206) is the "type-changed" check. When it returns true, the pipeline sets `HIBYTE(v74) = 0` and `v8 = 1` (line 207-209), which loops back to the top. This is the **maturity downgrade** mechanism.

## 4. Current State of the Code

### What exists already:

| Component | Location | Status |
|-----------|----------|--------|
| `PassPhase` enum (7 levels) | `crates/unlace-passes/src/pass.rs:39` | Exists, used for documentation/testing only |
| `Pass::phase()` trait method | `crates/unlace-passes/src/pass.rs:97` | Every pass implements it |
| `canonical_pipeline_descriptor()` | `crates/unlace-passes/src/pass.rs:430` | Returns the ordered list with phases |
| `validate_named_phase_monotonicity()` | `crates/unlace-passes/src/pass.rs:394` | Runtime check, already wired |
| `run_outer_fixedpoint()` | `crates/unlace-passes/src/pass.rs:274` | Signature-hash-based convergence |
| `run_to_fixedpoint()` | `crates/unlace-passes/src/pass.rs:123` | Inner IR-level convergence (200 rounds) |
| `run_instrumented()` | `crates/unlace-passes/src/instrument.rs:280` | Pass tracing/timing wrapper |
| `ssa_type_signature()` | `crates/unlace-passes/src/pass.rs:211` | Hash of types+stack+IR for change detection |
| `SignatureSnapshot` / `bump_if_signature_changed` | `crates/unlace-passes/src/reanalysis.rs` | Revision tracking |
| `SsaFunction.arch` | `crates/unlace-ir/src/ssa.rs:404` | Architecture known per function |
| Actual pipeline driver | `crates/unlace-cli/src/pipeline.rs:998-1300` | The monolithic closure |

### What does NOT exist:

- No `Maturity` enum on `SsaFunction`
- No maturity-gated pass scheduling ("only run this pass if maturity >= X")
- No downgrade mechanism ("if type changed, reset to M_LOCOPT")
- No per-maturity-level inner fixed-point (currently one big pool)
- No 64-bit demotion pass
- No CMOVcc preservation pass

## 5. Implementation Plan

### Step A: Define the Maturity Model (unlace-ir)

**File**: `crates/unlace-ir/src/ssa.rs`

```rust
/// Pipeline maturity level, modeled after Hex-Rays sub_14B8B0.
/// Each level represents a guarantee about what analysis has been performed.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum Maturity {
    /// Raw lifted IR, no optimization applied.
    Zero = 0,
    /// SSA built, initial microcode refinement complete.
    Generated = 1,
    /// Peephole/algebraic simplification done.
    PreOptimized = 2,
    /// Local dataflow, stack/frame recovery, intra-block opts done.
    LocalOpt = 3,
    /// Inter-procedural facts resolved (call targets, signatures).
    Calls = 4,
    /// Global optimization fixed-point converged.
    GlobalOpt = 5,
    /// Local variable allocation and naming complete.
    Lvars = 6,
    /// Ctree/HIR construction and final C output ready.
    Final = 7,
}
```

Add to `SsaFunction`:
```rust
/// Current pipeline maturity level. Initialized to `Maturity::Zero` in `build_ssa`.
/// Advanced by the pipeline driver; may be downgraded by the "type-changed" check.
pub maturity: Maturity,
```

Initialize in `build_ssa` to `Maturity::Zero`.

### Step B: Map PassPhase → Maturity (unlace-passes)

**File**: `crates/unlace-passes/src/pass.rs`

Add a method to `Pass` trait:
```rust
/// Minimum maturity required for this pass to run.
/// Default: derived from `phase()` for backward compatibility.
fn min_maturity(&self) -> Maturity {
    match self.phase() {
        PassPhase::PreOpt => Maturity::Zero,
        PassPhase::LocalOpt => Maturity::Generated,
        PassPhase::GlobalOpt => Maturity::PreOptimized,
        PassPhase::TypeRecovery => Maturity::LocalOpt,
        PassPhase::StackRecovery => Maturity::Generated,
        PassPhase::LVarAlloc => Maturity::GlobalOpt,
        PassPhase::FinalCleanup => Maturity::Lvars,
    }
}

/// Maximum maturity at which this pass produces useful work.
/// Above this level, the pass is skipped. Default: Final (always runs).
fn max_maturity(&self) -> Maturity {
    Maturity::Final
}
```

This allows every existing pass to get a correct default without touching 50+ files.

### Step C: The Maturity-Driven Pipeline (unlace-cli)

**File**: `crates/unlace-cli/src/pipeline.rs`

Replace the monolithic `run_passes_with_report_inner` with a staged loop:

```rust
fn run_passes_with_report_inner(
    ssa: &mut SsaFunction,
    resolver: Option<&dyn Fn(u64) -> Option<&'static str>>,
) -> Result<PassesReport> {
    maybe_validate_pipeline_once();
    run_instrumented(&StackOffsetSnapshotPass, ssa)?;
    let pre_pipeline_sig = SignatureSnapshot::of(ssa);

    // Pre-loop: noreturn detection (once, uses symbol resolver)
    if let Some(resolve) = resolver {
        NoreturnDetectPass::new().run_with_resolver(ssa, resolve)?;
    }

    // === MATURITY LOOP (models sub_14B8B0's while(1)) ===
    ssa.maturity = Maturity::Zero;
    let mut total_ir_changes = 0usize;
    let mut outer_iters = 0usize;
    let mut hit_cap = false;
    const MAX_MATURITY_RESETS: usize = 3; // sub_F9180 can loop, but cap it
    let mut resets = 0usize;

    loop {
        outer_iters += 1;
        if outer_iters > DEFAULT_OUTER_FIXEDPOINT_CAP * (MAX_MATURITY_RESETS + 1) {
            hit_cap = true;
            break;
        }

        // --- M_GENERATED: SSA-level IR simplification fixed-point ---
        ssa.maturity = Maturity::Generated;
        let ir_changes = run_ir_fixedpoint(ssa)?;
        total_ir_changes += ir_changes;

        // --- M_PREOPTIMIZED: cleanup + structural detection ---
        ssa.maturity = Maturity::PreOptimized;
        run_cleanup_passes(ssa)?;
        run_structural_detection(ssa)?;

        // --- M_LOCOPT: stack + frame recovery ---
        ssa.maturity = Maturity::LocalOpt;
        run_stack_recovery(ssa)?;

        // --- M_CALLS: indirect resolution + calling convention ---
        ssa.maturity = Maturity::Calls;
        run_call_resolution(ssa)?;

        // --- M_GLBOPT: type recovery fixed-point ---
        ssa.maturity = Maturity::GlobalOpt;
        run_type_recovery(ssa)?;

        // --- TYPE-CHANGED CHECK (sub_F9180 equivalent) ---
        let new_sig = ssa_type_signature(ssa);
        if types_changed_significantly(ssa, &pre_pipeline_sig) && resets < MAX_MATURITY_RESETS {
            // Downgrade: something fundamental changed, re-run from LocalOpt
            resets += 1;
            ssa.maturity = Maturity::Generated;
            continue; // back to top of loop
        }

        // No more changes — advance to final stages
        break;
    }

    // --- M_LVARS: variable allocation (no re-entry) ---
    ssa.maturity = Maturity::Lvars;
    run_lvar_passes(ssa, resolver)?;

    // --- M_FINAL: presentation + finalization ---
    ssa.maturity = Maturity::Final;
    run_final_passes(ssa, resolver)?;

    let _ = bump_if_signature_changed(ssa, &pre_pipeline_sig);

    Ok(PassesReport {
        ir_changes: total_ir_changes,
        outer: OuterFixedpointReport {
            iterations: outer_iters,
            hit_cap,
            ..Default::default()
        },
    })
}
```

Each `run_*` helper is a direct extraction from the current monolithic closure. No new logic — just reorganization.

### Step D: Extract Helper Functions

These are purely mechanical refactors of the current monolithic closure into named functions:

```rust
/// IR-level fixed-point: ConstFold, CopyProp, SCCP, CSE, GVN, etc.
fn run_ir_fixedpoint(ssa: &mut SsaFunction) -> Result<usize> {
    let passes: &[&dyn Pass] = &[
        &ConstantFoldPass, &CopyPropagationPass, &GlobalCopyPropPass,
        &DeadCodeElimPass, &SccpPass, &CsePass, &GvnPass, &BmiIdiomPass,
        &LicmPass, &IvElimPass, &StrengthReducePass, &IdiomRecognitionPass,
        &ConditionSimplifyPass, &CallBoundaryCopyPropPass,
        &RedundantFlagElimPass, &AlgebraicSimplifyPass,
    ];
    Ok(run_to_fixedpoint(passes, ssa)?)
}

/// Cleanup: DSE, dead flags, division/modulo idioms
fn run_cleanup_passes(ssa: &mut SsaFunction) -> Result<()> { ... }

/// Structural: prologue, tail-call, SP tracking, stack vars, indirect calls
fn run_structural_detection(ssa: &mut SsaFunction) -> Result<()> { ... }

/// Stack: frame recovery, byref detection, struct recovery
fn run_stack_recovery(ssa: &mut SsaFunction) -> Result<()> { ... }

/// Calls: indirect call/jump resolve, C++ vtable, calling convention
fn run_call_resolution(ssa: &mut SsaFunction) -> Result<()> { ... }

/// Types: type inference, constraint solver
fn run_type_recovery(ssa: &mut SsaFunction) -> Result<()> { ... }

/// Lvars: expression tree, variable merge, lvar collect, coalesce, naming
fn run_lvar_passes(ssa: &mut SsaFunction, resolver: ...) -> Result<()> { ... }

/// Final: language-specific, naming, calling-conv finalize
fn run_final_passes(ssa: &mut SsaFunction, resolver: ...) -> Result<()> { ... }
```

### Step E: Implement the Type-Changed Check

The equivalent of `sub_F9180` — detect when type recovery discovered something that should trigger a re-run:

```rust
/// Returns true if the type state changed enough to warrant a maturity reset.
/// Corresponds to IDA's sub_F9180 (line 206 of sub_14B8B0.c).
fn types_changed_significantly(ssa: &SsaFunction, baseline: &SignatureSnapshot) -> bool {
    // Check if stack var count changed (new struct discovered)
    // Check if composite_var_types grew (new pointer type found)
    // Check if inferred_params changed (calling convention refined)
    // Check if inferred_return_type changed
    SignatureSnapshot::of(ssa) != *baseline
}
```

### Step F: New Passes (Wave 29 Combiner Skeletons)

**File**: `crates/unlace-passes/src/sixty_four_bit_demote.rs`

```rust
/// 64-bit demotion: when the upper 32 bits of a 64-bit operation are
/// provably unused/dead, narrow the IR op to 32-bit. Models IDA's
/// sub_14A660 inner combiner.
pub struct SixtyFourBitDemotePass;

impl Pass for SixtyFourBitDemotePass {
    fn name(&self) -> &str { "SixtyFourBitDemotePass" }
    fn phase(&self) -> PassPhase { PassPhase::GlobalOpt }
    fn min_maturity(&self) -> Maturity { Maturity::PreOptimized }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // For each INT_ADD/INT_SUB/INT_AND/INT_OR/INT_XOR with 8-byte output:
        //   1. Check if any use reads bytes 4..7 (via SUBPIECE or full-width read)
        //   2. If not, replace with 4-byte version + zero-extend at use sites
        //   3. Return true if anything changed
        todo!()
    }
}
```

**File**: `crates/unlace-passes/src/cmov_preserve.rs`

```rust
/// CMOVcc preservation: ensure that conditional-move instructions
/// (which the lifter emits as `if (cond) { dst = src }`) survive
/// copy propagation and SCCP intact, so they can later be printed
/// as ternary expressions `cond ? a : b`.
pub struct CmovPreservePass;

impl Pass for CmovPreservePass {
    fn name(&self) -> &str { "CmovPreservePass" }
    fn phase(&self) -> PassPhase { PassPhase::PreOpt }
    fn min_maturity(&self) -> Maturity { Maturity::Generated }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // Detect single-insn if-blocks with pattern:
        //   block_cond: CBRANCH(cond, true_blk, false_blk)
        //   true_blk: [single COPY/INT_ZEXT/INT_SEXT] → falls to join
        //   false_blk: [empty or single COPY] → falls to join
        // Mark the COPY target as "cmov_preserved" so later passes
        // don't split it into separate paths.
        todo!()
    }
}
```

## 6. Files to Touch (Complete List)

| File | Change |
|------|--------|
| `crates/unlace-ir/src/ssa.rs` | Add `Maturity` enum, add `pub maturity: Maturity` field |
| `crates/unlace-ir/src/lib.rs` | Re-export `Maturity` |
| `crates/unlace-passes/src/pass.rs` | Add `min_maturity()` / `max_maturity()` to `Pass` trait |
| `crates/unlace-passes/src/lib.rs` | Add `pub mod sixty_four_bit_demote; pub mod cmov_preserve;` |
| `crates/unlace-passes/src/sixty_four_bit_demote.rs` | New file |
| `crates/unlace-passes/src/cmov_preserve.rs` | New file |
| `crates/unlace-cli/src/pipeline.rs` | Refactor `run_passes_with_report_inner` into staged helpers |

## 7. Constraints (CRITICAL — Read Before Coding)

1. **NO `HashMap` or `HashSet`** in `unlace-ir`, `unlace-passes`, `unlace-struct`, or `unlace-output`. Use `BTreeMap`/`BTreeSet` only. `cargo xtask lint-determinism` must pass.

2. **Parity must stay at 100.0%**: Run `RUSTC_WRAPPER= bash scripts/score_parity.sh` after every meaningful change. The golden fixtures MUST NOT regress.

3. **Do NOT change fixture binaries or golden reference files** to hide a regression.

4. **Do NOT edit `structurer.rs` core** unless it's the actual bug.

5. **Tests must pass**: `RUSTC_WRAPPER= cargo test --workspace` (3059+ tests, 0 failures).

6. **The refactor must be behavior-preserving**: The new staged pipeline must produce IDENTICAL output to the current monolithic one. The maturity field is metadata initially; optimization comes later.

7. **Clippy**: `cargo clippy -p unlace-ir -p unlace-passes -p unlace-cli --no-deps -- -D warnings` must be clean.

## 8. Verification Commands

```bash
# After each step:
RUSTC_WRAPPER= cargo check --workspace
RUSTC_WRAPPER= cargo test -p unlace-passes
RUSTC_WRAPPER= cargo test -p unlace-ir

# After pipeline refactor:
RUSTC_WRAPPER= cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture
RUSTC_WRAPPER= bash scripts/score_parity.sh

# Full validation:
RUSTC_WRAPPER= cargo test --workspace
cargo xtask lint-determinism
cargo clippy -p unlace-ir -p unlace-passes -p unlace-cli --no-deps -- -D warnings
cargo fmt --all -- --check
```

## 9. Implementation Order (Critical Path)

```
Step A (Maturity enum in unlace-ir)
  ↓
Step B (min_maturity() on Pass trait)
  ↓
Step D (Extract helper functions from monolithic closure — pure refactor, no behavior change)
  ↓
Step C (Wire maturity advancement into the helpers)
  ↓
Step E (Type-changed check + downgrade logic)
  ↓
Step F (New passes — skeleton only, return Ok(false) initially)
```

**DO Steps A→D first as a single commit.** The compiler will enforce correctness. Only after the split is stable and all tests pass, add the maturity-advancement and downgrade logic in Steps C/E.

Step F is independent and can be done in parallel after Step B lands.

## 10. Mapping: sub_14B8B0 Lines → Our Functions

| sub_14B8B0 line | IDA function | Our equivalent |
|-----------------|--------------|----------------|
| 112 | `sub_1443F0(mba, 3)` | `run_ir_fixedpoint()` |
| 116 | `sub_330F20(mba, 3)` | `ssa.maturity = Maturity::Generated` |
| 129 | `sub_13B0F0(mba, &changed)` | `run_stack_recovery()` |
| 137 | `sub_FA4C0(mba, 31)` | Part of `run_ir_fixedpoint()` (preopt) |
| 145 | `sub_F8530(mba)` | `run_cleanup_passes()` (algebraic) |
| 148 | `sub_F7F40(mba, 2)` | `run_call_resolution()` |
| 159 | `sub_330F20(mba, 4)` | `ssa.maturity = Maturity::LocalOpt` |
| 177 | `sub_14A660(mba, 15)` | `run_type_recovery()` (the inner fixedpoint) |
| 180 | `sub_330F20(mba, 5)` | `ssa.maturity = Maturity::GlobalOpt` |
| 189 | `sub_13B0F0(mba, &changed)` | Re-run `run_stack_recovery()` |
| 206 | `sub_F9180(mba)` | `types_changed_significantly()` |
| 245 | `sub_330F20(mba, 6)` | `ssa.maturity = Maturity::Lvars` |
| 250 | `sub_1FAB30(mba, 6, 0)` | `run_lvar_passes()` |
| 314 | `sub_13A4A0(mba)` | Final cleanup / assertion check |
| 328 | `sub_1CE9E0(mba)` | HIR/ctree construction (our structurer) |

## 11. Risk Assessment

| Risk | Mitigation |
|------|-----------|
| Pipeline refactor breaks golden tests | Step D is pure extraction — run goldens after every sub-step |
| Maturity downgrade causes infinite loop | Cap resets at 3 (mirrors IDA's behavior) |
| New passes cause regressions | Step F passes return `Ok(false)` initially — pure skeletons |
| Type signature hash instability | `ssa_type_signature()` already exists and is battle-tested |
| Performance regression from staged loops | Each stage runs exactly the same passes as before, just organized differently |

## 12. What Success Looks Like

After Batch 10:
1. `SsaFunction.maturity` advances monotonically from Zero→Final on every decompile.
2. The pipeline driver is organized into named stages instead of one 300-line closure.
3. `types_changed_significantly()` can trigger at most 3 re-runs of the LocalOpt→GlobalOpt cycle.
4. `SixtyFourBitDemotePass` and `CmovPreservePass` exist as skeletons (return `Ok(false)`).
5. All 3059+ tests pass, parity 100.0%, determinism lint clean.
6. Future batches can slot new passes into specific maturity levels by overriding `min_maturity()`.

## 13. Context Files to Read Before Starting

1. `crates/unlace-cli/src/pipeline.rs` — the current driver (READ ALL OF IT)
2. `crates/unlace-passes/src/pass.rs` — `PassPhase`, `run_to_fixedpoint`, `run_outer_fixedpoint`
3. `crates/unlace-ir/src/ssa.rs:394-600` — `SsaFunction` struct fields
4. `references/hexrays/ida_dump/hexx64/all/sub_14B8B0.c` — the IDA blueprint
5. `tests/golden/reference_metrics.toml` — what parity measures
6. `CLAUDE.md` — all engineering rules and constraints

---

*Generated 2026-05-19. Hand this entire file to Opus 4.7 max as the system prompt suffix or first user message.*
