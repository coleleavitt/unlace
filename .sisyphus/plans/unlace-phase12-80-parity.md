# unlace Phase 12 — Multi-Fixture Parity Push to 80%+

## TL;DR

> **Quick Summary**: Phase 12 targets 80%+ aggregate parity via a multi-fixture campaign. The math shows medium.c alone can't get us there — we need CMOVcc→if for debug_calls (+20pp fixture), goto elimination + for-loop recovery for medium.c (+50pp fixture), and cross-branch goto fixes for cpp_rtti (+14pp fixture). Secondary: V850/ARC lifter activation, PowerPC fixture, rayon parallelism.
>
> **Metis Key Insight**: Even a perfect medium.c (100%) only gets aggregate to 79.4%. Per-fixture targets: medium≥50%, debug_calls≥80%, cpp_rtti≥65%, cpp_vtable≥65%. These four together push aggregate to ~80%.
>
> **Critical Fix**: CMOVcc lifting currently discards the condition entirely (all 12 variants → unconditional Copy). The `setcc_condition()` logic already exists — reuse it at the lifter level.
>
> **Estimated Effort**: Large (6 waves, ~35 tasks)
> **Parallel Execution**: YES — 3-5 concurrent tasks per wave
> **Critical Path**: Wave 0 diagnostic → Wave 1 CMOVcc→if → Wave 2 goto elimination → Wave 3 for-loop → Wave 5 polish

---

## Context

### Phase 11 Outcome
- 1451 tests, 70.3% parity (was 59.6% pre-Phase-11)
- medium.c: 13 gotos / 37 ifs / 0 for / 4 while / 5 return — scores 0.0%
- 6 new structurer post-passes (goto-to-break/continue, while-break-to-if, forward-goto-elim, tail duplication, return merge, while-to-for)
- Go gopclntab parser, ObjC dispatch recognition, MIPS64/RISC-V fixtures

### Scoring Formula (from golden_fixtures.rs)
```
score = (3.0 * min(if/ref_if, 1.0) + 3.0 * min(for/ref_for, 1.0)
       + 3.0 * min(while/ref_while, 1.0) + 2.0 * min(return/ref_return, 1.0)
       - 2.0 * goto_count - 0.1 * max(0, vars - ref_vars)) / 11.0 * 100
```

### Per-Fixture Score Targets (Metis-derived)
| Fixture | Current | Target | Delta | Strategy |
|---------|---------|--------|-------|----------|
| medium | 0.0% | ≥50% | +50pp | Goto elimination + for-loop recovery |
| debug_calls | 60.0% | ≥80% | +20pp | CMOVcc→if recovery |
| cpp_rtti | 50.9% | ≥65% | +14pp | Cross-branch goto elimination |
| cpp_vtable | 59.7% | ≥65% | +5pp | CMOVcc→if recovery |
| debug_hello | 99.1% | 99% | — | Maintain |
| debug_structs | 93.9% | 93% | — | Maintain |
| x87_math | 86.4% | 86% | — | Maintain |
| arm64_features | 81.8% | 81% | — | Maintain |
| mips64_features | 95.5% | 95% | — | Maintain |
| cpp_exceptions | 78.2% | 78% | — | Maintain |
| **Aggregate** | **70.3%** | **≥80%** | **+10pp** | |

### medium.c Goto Analysis (corrected)
- **main()**: 3 gotos — cross-branch gotos to labels inside sibling if-branches
- **f_rec_fib()**: 2 gotos — forward gotos to join points in nested if-else
- **f_rec_power.constprop.0()**: 8 gotos — deeply nested constprop-created structure with labels inside sibling scopes
- Pattern: `goto label_N` at end of else-branch jumps to `label_N:;` inside the then-branch. Labels have empty bodies.
- Fix: label hoisting (move label out of nested scope to parent) + condition duplication

### CMOVcc Semantic Loss (Metis Discovery)
All 12 CMOVcc variants (`Cmove`, `Cmovne`, `Cmovb`, etc.) dispatch to `lift_mov()` which emits unconditional `IrOp::Copy`. The condition is **entirely discarded**. The `setcc_condition()` function in `data_move.rs` already implements flag-to-condition extraction for SETcc — reuse at lifter level for CMOVcc.

### Key Constraints (carried)
- BTreeMap/IndexMap only (no HashMap/HashSet)
- Pass-loop iteration caps preserved (200/100/100/2*blocks)
- Structurer core pattern-matching off-limits; post-processing functions (recover_for_loops etc.) allowed
- MAX_SPLIT_ROUNDS=16 — don't increase
- Per-fixture score regression guard: no fixture may drop >1.0pp

---

## Work Objectives

### Core Objective
Break the 80% parity ceiling via multi-fixture improvements: CMOVcc→if for debug_calls/cpp_vtable, goto elimination for medium.c, cross-branch goto fix for cpp_rtti. Secondary: V850/ARC/PowerPC fixtures.

### Definition of Done
- [ ] `cargo test --workspace` ≥ 1480 tests, 0 failures
- [ ] `cargo xtask lint-determinism` passes
- [ ] Aggregate parity ≥ 78% (stretch: ≥80%)
- [ ] medium.c score ≥ 30%
- [ ] debug_calls score ≥ 75%
- [ ] No fixture score dropped >1.0pp vs baseline
- [ ] Pushed to GitHub

### Must NOT Have
- No HashMap/HashSet in determinism-locked crates
- No structurer.rs core pattern-matching edits
- No MAX_SPLIT_ROUNDS increase
- No scoring formula changes
- No accepting golden updates without metric comparison in commit message
- No interprocedural type propagation without call graph quality ≥80%

---

## Execution Strategy

```
Wave 0 (Diagnostic — 3 tasks):
├── P12-0: Baseline all per-fixture scores + call graph quality metric
├── P12-1: Re-analyze medium.c 13 gotos with corrected diagnosis
└── P12-2: Profile CMOVcc usage in debug_calls/cpp_vtable (count discarded conditions)

Wave 1 (CMOVcc→if — 5 tasks, HIGHEST ROI):
├── P12-3: Implement CMOVcc conditional lifting in x86 lifter (reuse setcc_condition)
├── P12-4: Gate CMOVcc→if behind function complexity heuristic (skip in tight loops)
├── P12-5: Golden refresh + debug_calls score measurement (target ≥75%)
├── P12-6: cpp_vtable score measurement after CMOVcc fix
└── P12-7: Per-fixture regression check (no fixture dropped >1pp)

Wave 2 (Goto Elimination — 6 tasks, HIGHEST IMPACT):
├── P12-8: Label hoisting post-pass (move labels from nested if-scope to parent scope)
├── P12-9: Condition duplication for cross-branch gotos (duplicate if-condition at target)
├── P12-10: Unreachable label cleanup (remove labels with 0 remaining gotos)
├── P12-11: Apply to medium.c main() (target: 3→0 gotos)
├── P12-12: Apply to f_rec_power.constprop.0 (target: 8→≤3 gotos)
└── P12-13: Golden refresh + medium.c score measurement (target ≥30%)

Wave 3 (For-Loop + Expression Recovery — 5 tasks):
├── P12-14: Aggressive for-loop detection from comparison+branch chains
├── P12-15: While-with-counter-to-for (detect i++/i-- in while body → for)
├── P12-16: Return-value propagation (RAX assignment before return → return expr)
├── P12-17: cpp_rtti cross-branch goto fix (same label-hoisting from Wave 2)
└── P12-18: Golden refresh + score measurement (medium target ≥50%)

Wave 4 (Architecture Breadth — 5 tasks):
├── P12-19: V850 lifter CLI gate + fixture (real firmware if available)
├── P12-20: ARC lifter CLI gate + fixture
├── P12-21: PowerPC fixture from existing lifter (67 mnemonics)
├── P12-22: Golden entries + reference metrics for new arch fixtures
└── P12-23: Lifter coverage update

Wave 5 (Polish + Final — 5 tasks):
├── P12-24: Refresh ALL goldens
├── P12-25: Final parity score + per-fixture breakdown
├── P12-26: Quality report
├── P12-27: Push to GitHub
└── P12-F1: Final verification (all gates green)
```

---

## TODOs

### Wave 0 — Diagnostic (3 tasks)

- [ ] P12-0. Baseline all per-fixture scores + call graph quality

  **What to do**: Run golden_fixtures_metrics_summary with --nocapture. Capture all [score] lines. Also measure call graph quality: for medium.elf, count resolved vs unresolved CALL/CALLIND instructions.
  **Acceptance Criteria**: Evidence file with 11 fixture scores + call graph metric.
  **QA Scenarios**:
  ```
  Scenario: Baseline captured
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p12-baseline.txt
      2. wc -l .sisyphus/evidence/p12-baseline.txt
    Expected Result: ≥9 fixture score lines
    Evidence: .sisyphus/evidence/p12-baseline.txt
  ```
  **Commit**: `chore(boulder): P12-0 baseline scores`

- [ ] P12-1. Re-analyze medium.c gotos with corrected diagnosis

  **What to do**: For each of the 13 gotos, classify as: cross-branch-to-nested-scope, forward-to-join, or other. Document the exact HIR pattern causing each.
  **Acceptance Criteria**: Learnings entry with per-goto classification.
  **QA Scenarios**:
  ```
  Scenario: Goto analysis documented
    Tool: Bash
    Steps:
      1. grep -c "cross-branch\|forward-to-join\|label_hoisting" .sisyphus/notepads/unlace-phase12/learnings.md
    Expected Result: ≥5 entries
    Evidence: .sisyphus/notepads/unlace-phase12/learnings.md
  ```
  **Commit**: NO (diagnostic)

- [ ] P12-2. Profile CMOVcc usage in debug_calls/cpp_vtable

  **What to do**: Decompile debug_calls.elf and cpp_vtable.elf with --emit ir. Count CMOVcc-derived COPY instructions that should have been conditional. Document how many ifs would be recovered.
  **Acceptance Criteria**: Evidence with cmov count per fixture.
  **QA Scenarios**:
  ```
  Scenario: CMOVcc profiled
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_calls.elf --emit ir -o /tmp/dc.ir
      2. grep -c "COPY.*cmov\|Unimplemented" /tmp/dc.ir
    Expected Result: count captured
    Evidence: .sisyphus/evidence/p12-2-cmov-profile.txt
  ```
  **Commit**: NO (diagnostic)

### Wave 1 — CMOVcc→if (5 tasks, HIGHEST ROI)

- [ ] P12-3. Implement CMOVcc conditional lifting in x86 lifter

  **What to do**: In `crates/unlace-lift-x86/src/ops/data_move.rs`, modify the CMOVcc dispatch. Currently all 12 variants call `lift_mov()` (unconditional Copy). Change to: (1) extract condition from the CMOVcc mnemonic using the existing `setcc_condition()` pattern, (2) emit a diamond CFG: `CBRANCH(flag_check, true_block, false_block)` where true_block does `dst = src` and false_block is a no-op. This creates a proper if-else in the IR that the structurer can recover.
  **Must NOT do**: Gate behind feature flag for now (apply universally).
  **Acceptance Criteria**: ≥2 new unit tests (cmove, cmovne). `cargo test -p unlace-lift-x86 cmov` passes. No Unimplemented emitted for CMOVcc.
  **QA Scenarios**:
  ```
  Scenario: CMOVcc lifts conditionally
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-x86 cmov 2>&1 | grep "test result"
    Expected Result: ≥2 passed; 0 failed
    Evidence: .sisyphus/evidence/p12-3-cmov.txt
  ```
  **Commit**: `feat(lift-x86): conditional CMOVcc lifting with diamond CFG emission`

- [ ] P12-4. Gate CMOVcc→if behind function complexity heuristic

  **What to do**: If P12-3's universal CMOVcc→if causes structurer blowup on tight loops (each cmov adds 3 blocks), add a heuristic: only split cmov when the function has <200 blocks post-lift. This prevents pathological blowup on heavily-optimized code.
  **Acceptance Criteria**: Heuristic in place OR evidence that universal application is safe.
  **QA Scenarios**:
  ```
  Scenario: No blowup on medium.elf
    Tool: Bash
    Steps:
      1. RUST_LOG=unlace_cli::pipeline=trace ./target/debug/unlace decompile fixtures/medium.elf --emit c --timeout 30 2>&1 | grep "blocks=" | head -5
    Expected Result: No function exceeds 500 blocks
    Evidence: .sisyphus/evidence/p12-4-gate.txt
  ```
  **Commit**: `feat(lift-x86): CMOVcc complexity gate for large functions` (or evidence-only)

- [ ] P12-5. Golden refresh + debug_calls score (target ≥75%)

  **What to do**: Rebuild binary, refresh goldens, capture ALL fixture scores (not just debug_calls).
  **Acceptance Criteria**: debug_calls score ≥ 75%. All scores captured.
  **QA Scenarios**:
  ```
  Scenario: All Wave 1 scores captured
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli
      2. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p12-5-wave1-scores.txt
      3. grep 'debug_calls' .sisyphus/evidence/p12-5-wave1-scores.txt
    Expected Result: debug_calls score ≥ 75.0; all fixtures present
    Evidence: .sisyphus/evidence/p12-5-wave1-scores.txt
  ```
  **Commit**: `chore(goldens): Wave 1 CMOVcc refresh`

- [ ] P12-6. cpp_vtable score after CMOVcc fix

  **What to do**: Check cpp_vtable score from Wave 1 scores file. Target ≥65%.
  **Acceptance Criteria**: cpp_vtable score captured.
  **QA Scenarios**:
  ```
  Scenario: cpp_vtable score
    Tool: Bash
    Steps:
      1. grep 'cpp_vtable' .sisyphus/evidence/p12-5-wave1-scores.txt
    Expected Result: score ≥ 59.7 (no regression)
    Evidence: .sisyphus/evidence/p12-5-wave1-scores.txt
  ```
  **Commit**: NO (measured in P12-5)

- [ ] P12-7. Per-fixture regression check

  **What to do**: Compare all fixture scores in p12-5-wave1-scores.txt vs P12-0 baseline. No fixture dropped >1pp.
  **Acceptance Criteria**: Regression check passes.
  **QA Scenarios**:
  ```
  Scenario: No regression
    Tool: Bash
    Steps:
      1. diff .sisyphus/evidence/p12-baseline.txt .sisyphus/evidence/p12-5-wave1-scores.txt
    Expected Result: No fixture score decreased by >1.0
    Evidence: .sisyphus/evidence/p12-7-regression.txt
  ```
  **Commit**: `chore(boulder): P12-7 Wave 1 regression check`

### Wave 2 — Goto Elimination (6 tasks, HIGHEST IMPACT)

- [ ] P12-8. Label hoisting post-pass

  **What to do**: Write `crates/unlace-struct/src/label_hoist.rs`. Walk HIR: when a `Label(id)` is inside an if-then or if-else branch AND there exists a `Goto(id)` OUTSIDE that branch (in a sibling or parent scope), hoist the label to the nearest common ancestor scope. This makes the goto a same-scope jump that other passes can eliminate.
  **Must NOT do**: Touch structurer.rs core.
  **Acceptance Criteria**: ≥1 unit test. Wire into pipeline after goto_to_break.
  **QA Scenarios**:
  ```
  Scenario: Label hoisting test
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct label_hoist 2>&1 | grep "test result"
    Expected Result: ≥1 passed
    Evidence: .sisyphus/evidence/p12-8-label-hoist.txt
  ```
  **Commit**: `feat(struct): label hoisting post-pass for cross-scope goto targets`

- [ ] P12-9. Condition duplication for cross-branch gotos

  **What to do**: Write `crates/unlace-struct/src/condition_dup.rs`. After label hoisting, some gotos may still target labels in a different branch. For these, duplicate the parent if-condition at the goto site: `goto L` where L is inside `if (C) { L:; ... }` → `if (C) { ... }` (duplicating C). Size budget: max 2 condition duplications per function.
  **Acceptance Criteria**: ≥1 unit test.
  **QA Scenarios**:
  ```
  Scenario: Condition duplication test
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct condition_dup 2>&1 | grep "test result"
    Expected Result: ≥1 passed
    Evidence: .sisyphus/evidence/p12-9-cond-dup.txt
  ```
  **Commit**: `feat(struct): condition duplication for cross-branch goto elimination`

- [ ] P12-10. Unreachable label cleanup

  **What to do**: Write `crates/unlace-struct/src/label_cleanup.rs`. After goto elimination passes, some labels may have 0 remaining gotos targeting them. Remove these orphaned labels. Also remove consecutive `Label; Label; Label;` clusters (collapse to single label).
  **Acceptance Criteria**: ≥1 unit test.
  **QA Scenarios**:
  ```
  Scenario: Label cleanup test
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct label_cleanup 2>&1 | grep "test result"
    Expected Result: ≥1 passed
    Evidence: .sisyphus/evidence/p12-10-cleanup.txt
  ```
  **Commit**: `feat(struct): unreachable label cleanup post-pass`

- [ ] P12-11. Apply to medium.c main() — target 3→0 gotos

  **What to do**: Rebuild, decompile main(), count gotos. If >0, investigate remaining patterns.
  **Acceptance Criteria**: main() gotos ≤ 1.
  **QA Scenarios**:
  ```
  Scenario: main gotos reduced
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf --function main --emit c -o /tmp/p12-11.c
      2. grep -c "goto" /tmp/p12-11.c
    Expected Result: ≤1
    Evidence: .sisyphus/evidence/p12-11-main.txt
  ```
  **Commit**: NO (verification)

- [ ] P12-12. Apply to f_rec_power.constprop.0 — target 8→≤3 gotos

  **What to do**: Same for f_rec_power.constprop.0.
  **Acceptance Criteria**: f_rec_power gotos ≤ 3.
  **QA Scenarios**:
  ```
  Scenario: f_rec_power gotos reduced
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf --function "f_rec_power.constprop.0" --emit c -o /tmp/p12-12.c
      2. grep -c "goto" /tmp/p12-12.c
    Expected Result: ≤3
    Evidence: .sisyphus/evidence/p12-12-power.txt
  ```
  **Commit**: NO (verification)

- [ ] P12-13. Golden refresh + medium.c score (target ≥30%)

  **What to do**: Refresh all goldens, measure medium.c score.
  **Acceptance Criteria**: medium.c score ≥ 30%. Aggregate ≥ 75%.
  **QA Scenarios**:
  ```
  Scenario: medium.c score improved
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\].*medium'
    Expected Result: score ≥ 30.0
    Evidence: .sisyphus/evidence/p12-13-medium.txt
  ```
  **Commit**: `chore(goldens): Wave 2 goto elimination refresh`

### Wave 3 — For-Loop + Expression Recovery (5 tasks)

- [ ] P12-14. Aggressive for-loop detection from comparison+branch chains

  **What to do**: Extend `recover_for_loops` in structurer.rs. Current pattern: `init; while(cond) { body; step; }`. New pattern: detect counter patterns from x86 `cmp reg, const; jne loop_top` where reg is decremented in the body. Convert `while(reg != 0) { body; reg--; }` → `for(; reg != 0; reg--) { body; }`.
  **Acceptance Criteria**: medium.c for_count ≥ 1.
  **QA Scenarios**:
  ```
  Scenario: For-loop detected
    Tool: Bash
    Steps:
      1. grep -c '\bfor\b' tests/golden/expected/medium.c
    Expected Result: ≥1
    Evidence: .sisyphus/evidence/p12-14-for.txt
  ```
  **Commit**: `feat(struct): aggressive for-loop detection from counter+branch patterns`

- [ ] P12-15. While-with-counter-to-for enhancement

  **What to do**: Extend `while_to_for.rs`. Detect `while(v1) { ...; v1 = v1 - 1; }` → `for(; v1; v1--)`. The step detection should match INT_SUB/INT_ADD with constant operand on the condition variable.
  **Acceptance Criteria**: medium.c for_count ≥ 2.
  **QA Scenarios**:
  ```
  Scenario: While-to-for fires
    Tool: Bash
    Steps:
      1. grep -c '\bfor\b' tests/golden/expected/medium.c
    Expected Result: ≥2
    Evidence: .sisyphus/evidence/p12-15-w2f.txt
  ```
  **Commit**: `feat(struct): while-with-counter-to-for detection`

- [ ] P12-16. Return-value propagation

  **What to do**: In c_printer.rs, when emitting the last statement before `Return(None)`: if it's an assignment to RAX (register offset 0, size 8), combine into `return <expr>;`.
  **Acceptance Criteria**: medium.c return count ≥ 6.
  **QA Scenarios**:
  ```
  Scenario: Return with value
    Tool: Bash
    Steps:
      1. grep -c '\breturn\b' tests/golden/expected/medium.c
    Expected Result: ≥6
    Evidence: .sisyphus/evidence/p12-16-return.txt
  ```
  **Commit**: `feat(output): propagate return value from last RAX assignment`

- [ ] P12-17. cpp_rtti cross-branch goto fix

  **What to do**: Apply label hoisting + condition duplication from Wave 2 to cpp_rtti's 2 gotos. If they're the same cross-branch pattern, the existing passes should handle them. Verify.
  **Acceptance Criteria**: cpp_rtti gotos ≤ 1. Score ≥ 55%.
  **QA Scenarios**:
  ```
  Scenario: cpp_rtti gotos reduced
    Tool: Bash
    Steps:
      1. grep -c "goto" tests/golden/expected/cpp_rtti.c
    Expected Result: ≤1
    Evidence: .sisyphus/evidence/p12-17-rtti.txt
  ```
  **Commit**: `chore(goldens): cpp_rtti goto fix verification`

- [ ] P12-18. Golden refresh + score measurement (medium target ≥50%)

  **What to do**: Full golden refresh, measure all scores. Aggregate target ≥78%.
  **Acceptance Criteria**: medium.c ≥ 50%. Aggregate ≥ 78%.
  **QA Scenarios**:
  ```
  Scenario: Scores improved
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh 2>&1 | tail -1
    Expected Result: Aggregate ≥ 78.0%
    Evidence: .sisyphus/evidence/p12-18-wave3.txt
  ```
  **Commit**: `chore(goldens): Wave 3 for-loop + expression refresh`

### Wave 4 — Architecture Breadth (5 tasks)

- [ ] P12-19. V850 lifter CLI gate + fixture

  **What to do**: Add ArchId::V850 to CLI arch gate. Find or create V850 ELF fixture. V850 lifter has 2,436 LOC and full decode/lift. Check `~/VulnerabilityResearch/` for V850 firmware.
  **Acceptance Criteria**: V850 fixture decompiles --emit ir without panic.
  **QA Scenarios**:
  ```
  Scenario: V850 decompiles
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/v850_features.elf --emit ir --timeout 30 -o /tmp/v850.ir
    Expected Result: exit 0
    Evidence: .sisyphus/evidence/p12-19-v850.txt
  ```
  **Commit**: `feat(fixtures): V850 fixture + CLI gate`

- [ ] P12-20. ARC lifter CLI gate + fixture

  **What to do**: Same for ARC (1,235 LOC, 14 tests).
  **Acceptance Criteria**: ARC fixture decompiles.
  **QA Scenarios**:
  ```
  Scenario: ARC decompiles
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/arc_features.elf --emit ir --timeout 30 -o /tmp/arc.ir
    Expected Result: exit 0
    Evidence: .sisyphus/evidence/p12-20-arc.txt
  ```
  **Commit**: `feat(fixtures): ARC fixture + CLI gate`

- [ ] P12-21. PowerPC fixture

  **What to do**: Create PPC64 ELF fixture. PPC lifter has 67 mnemonics.
  **Acceptance Criteria**: PPC fixture decompiles.
  **QA Scenarios**:
  ```
  Scenario: PPC decompiles
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/ppc64_features.elf --emit ir --timeout 30 -o /tmp/ppc.ir
    Expected Result: exit 0
    Evidence: .sisyphus/evidence/p12-21-ppc.txt
  ```
  **Commit**: `feat(fixtures): PowerPC PPC64 fixture + CLI gate`

- [ ] P12-22. Golden entries + reference metrics for new arch fixtures

  **What to do**: Add golden entries for V850/ARC/PPC to golden_fixtures.rs + reference_metrics.toml.
  **Acceptance Criteria**: All golden tests pass.
  **QA Scenarios**:
  ```
  Scenario: New goldens pass
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p12-22-goldens.txt
  ```
  **Commit**: `feat(tests): V850/ARC/PPC golden entries + reference metrics`

- [ ] P12-23. Lifter coverage update

  **What to do**: Update `.sisyphus/evidence/p12-23-coverage.txt` with coverage across all architecture fixtures.
  **Acceptance Criteria**: Coverage table for all fixtures.
  **QA Scenarios**:
  ```
  Scenario: Coverage report
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p12-23-coverage.txt
    Expected Result: ≥12 fixture rows
    Evidence: .sisyphus/evidence/p12-23-coverage.txt
  ```
  **Commit**: `chore(boulder): P12-23 lifter coverage report`

### Wave 5 — Polish + Final (5 tasks)

- [ ] P12-24. Refresh ALL goldens

  **What to do**: `cargo build -p unlace-cli && UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures`.
  **Acceptance Criteria**: All pass.
  **QA Scenarios**:
  ```
  Scenario: All goldens pass
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures 2>&1 | grep "test result"
    Expected Result: all pass; 0 failed
    Evidence: .sisyphus/evidence/p12-24-goldens.txt
  ```
  **Commit**: `chore(goldens): Phase 12 final refresh`

- [ ] P12-25. Final parity score + per-fixture breakdown

  **What to do**: `bash scripts/score_parity.sh`. Evidence with all scores.
  **Acceptance Criteria**: Aggregate ≥ 78% (stretch ≥80%).
  **QA Scenarios**:
  ```
  Scenario: Final parity
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh 2>&1 | tail -1
    Expected Result: ≥78.0%
    Evidence: .sisyphus/evidence/p12-25-final.txt
  ```
  **Commit**: `chore(boulder): Phase 12 final parity score`

- [ ] P12-26. Quality report

  **What to do**: Write `.sisyphus/evidence/p12-26-quality-report.txt`.
  **Acceptance Criteria**: ≥80 lines, all waves summarized.
  **QA Scenarios**:
  ```
  Scenario: Report generated
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p12-26-quality-report.txt
    Expected Result: ≥80 lines
    Evidence: .sisyphus/evidence/p12-26-quality-report.txt
  ```
  **Commit**: `chore(boulder): Phase 12 quality report`

- [ ] P12-27. Push to GitHub

  **What to do**: `git push origin master`.
  **Acceptance Criteria**: Push succeeds.
  **QA Scenarios**:
  ```
  Scenario: Push
    Tool: Bash
    Steps:
      1. git push origin master 2>&1 | tail -3
    Expected Result: "master -> master"
    Evidence: terminal output
  ```
  **Commit**: NO (push only)

- [ ] P12-F1. Final verification

  **What to do**: All gates green.
  **Acceptance Criteria**: ≥1480 tests, 0 fail, lint clean, parity ≥78%, medium≥30%, debug_calls≥75%.
  **QA Scenarios**:
  ```
  Scenario: All gates
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "^test result" | awk '{p+=$4; f+=$6} END {print "PASS:"p" FAIL:"f}'
      2. cargo xtask lint-determinism
      3. bash scripts/score_parity.sh
    Expected Result: ≥1480 pass, 0 fail, lint OK, parity ≥78%
    Evidence: .sisyphus/evidence/p12-f1-quality.txt
  ```
  **Commit**: NO (verification only)

---

## Commit Strategy
One commit per task, conventional commit format.

## Success Criteria
```bash
cargo test --workspace  # ≥ 1480 tests, 0 fail
cargo xtask lint-determinism  # OK
bash scripts/score_parity.sh  # ≥ 78%
```
