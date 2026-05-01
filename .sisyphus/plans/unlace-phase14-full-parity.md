# unlace Phase 14 — Full IDA Parity (100% Target)

## TL;DR

> **Quick Summary**: Phase 14 systematically closes EVERY gap between unlace and IDA Hex-Rays output across all 14 fixtures. The plan is organized by gap type (not by fixture) — fixing "+19 ifs in medium" also fixes "+2 ifs in cpp_vtable" because they share the same root cause. Agents MUST read IDA reference code in `references/hexrays/ida_dump/hexx64/all/` and `references/ida/processors/pc/all/` while implementing to match IDA's actual algorithms.
>
> **Gap Summary** (326 points needed across 14 fixtures):
> - **Missing ifs** (+35 total): medium +19, debug_calls +3, cpp_vtable +2, cpp_exceptions +2, others +9
> - **Missing for-loops** (+5): medium +5 (while→for promotion)
> - **Excess whiles** (-9): medium -3, cpp_exceptions -2, cpp_rtti -2, others -2 (all should be for-loops)
> - **Missing returns** (+13): medium +3, cpp_vtable +2, arc +2, others +6
> - **Excess variables** (-28): debug_calls -14, cpp_rtti -8, cpp_exceptions -4, others -2
>
> **Strategy**: Fix by ROOT CAUSE, not by fixture. Each root cause fix improves multiple fixtures simultaneously.
>
> **IDA Reference**: Agents read `references/hexrays/ida_dump/hexx64/all/*.c` (7824 decompiled functions) + `references/ida/processors/pc/all/*.c` (1180 processor functions) to understand IDA's algorithms.
>
> **Completion Criteria**: Plan is NOT done until ALL fixtures score ≥95%. No partial credit.
>
> **Estimated Effort**: XL (8 waves, ~40 tasks)

---

## Context

### Current Per-Fixture Scores (Phase 13 end)
| Fixture | Score | Gap to 100% | Root Causes |
|---------|-------|-------------|-------------|
| medium | 57.3% | +19 ifs, +5 for, -3 while→for, +3 return | Condition recovery, loop detection, return merging |
| arc_features | 54.5% | +1 if, +2 return | Lifter missing branch conditions, return detection |
| cpp_vtable | 59.7% | +2 ifs, +2 return, -1 var | CMOVcc/null-check recovery, return merging |
| riscv64_features | 68.2% | +2 ifs, -1 while→for, +1 return | Lifter branch recovery, loop detection |
| debug_calls | 70.9% | +3 ifs, -14 vars | CMOVcc condition preservation, variable elimination |
| ppc64_features | 72.7% | +1 if | Lifter branch condition |
| v850_features | 72.7% | +1 if | Lifter branch condition |
| cpp_exceptions | 78.2% | +2 ifs, -2 while→for, -4 vars | Condition recovery, loop detection, var elimination |
| x87_math | 81.8% | +1 if, +1 return | FPU condition recovery, return |
| arm64_features | 81.8% | +1 if, +1 return | Branch condition, return |
| cpp_rtti | 87.3% | +1 if, -2 while→for, -8 vars | Condition, loop detection, var elimination |
| debug_structs | 93.9% | +1 return | Return detection |
| mips64_features | 95.5% | -1 while→for, +1 return | Loop detection, return |
| debug_hello | 99.1% | -1 var | Variable elimination |

### Root Cause Categories
1. **Missing ifs (35 total)**: Conditions lost in optimization (flag chains not fully folded, CMOVcc degradation, comparison chains split)
2. **While→for promotion (9 excess whiles)**: Loops with counter patterns not detected as for-loops
3. **Missing returns (13 total)**: Functions missing explicit return statements, return-value not propagated
4. **Excess variables (28 total)**: Temporary/flag registers declared as variables, unused vars not eliminated
5. **Missing for-loops (5 in medium)**: Complex loop patterns not matching for-loop detector

### IDA Reference Code Available
- `references/hexrays/ida_dump/hexx64/all/` — 7824 decompiled C functions from IDA Hex-Rays (x86-64 plugin)
- `references/ida/processors/pc/all/` — 1180 x86 processor module functions
- `references/ida/loaders/macho/` — 40 Mach-O loader functions
- `references/ida/loaders/pe/` — PE loader functions

### Key Constraints
- BTreeMap only (no HashMap)
- Pass-loop caps preserved (200/100/100/2*blocks)
- Structurer core off-limits (post-processing allowed)
- Per-fixture regression: no fixture drops >1pp
- Agents MUST read IDA reference code when implementing algorithmic changes

---

## Work Objectives

### Definition of Done
- [ ] ALL 14 fixtures score ≥ 95%
- [ ] Aggregate parity ≥ 95%
- [ ] `cargo test --workspace` ≥ 1500 tests, 0 failures
- [ ] `cargo xtask lint-determinism` passes
- [ ] Pushed to GitHub

### Must NOT Have
- No HashMap/HashSet
- No structurer.rs core edits
- No scoring formula changes
- No fixture regressions >1pp during any wave

---

## Execution Strategy

```
Wave 0 (Diagnostic — 2 tasks):
├── P14-0: Baseline + IDA reference code study
└── P14-1: Per-fixture root cause classification

Wave 1 (Missing IFs — 8 tasks, fixes 35 ifs across 12 fixtures):
├── P14-2: Study IDA condition recovery in hexx64 reference code
├── P14-3: Deep comparison chain recovery (CMP→flags→multiple branches)
├── P14-4: Nested-if-to-single-if collapse (recover compound conditions)
├── P14-5: CMOVcc full condition preservation (fix SCCP + render)
├── P14-6: Null-check/zero-check pattern recovery (test reg,reg; je)
├── P14-7: Architecture-specific branch condition recovery (ARM64/RISC-V/V850/ARC/PPC)
├── P14-8: medium.c if-count validation (target ≥55 of 60)
└── P14-9: Golden refresh + all-fixture if-count validation

Wave 2 (While→For + Missing For-Loops — 5 tasks, fixes 14 loops):
├── P14-10: Study IDA loop recovery from hexx64 reference
├── P14-11: Aggressive while→for: match ANY while with last-stmt counter modification
├── P14-12: For-loop from decrement-to-zero (while(n--) → for)
├── P14-13: For-loop from comparison chains (CMP+DEC+JNE → for)
└── P14-14: Golden refresh + loop-count validation

Wave 3 (Missing Returns — 4 tasks, fixes 13 returns):
├── P14-15: Study IDA return recovery patterns
├── P14-16: Return-value from any register assignment before RETURN (not just RAX)
├── P14-17: Implicit return 0 for all main-like functions
└── P14-18: Golden refresh + return-count validation

Wave 4 (Excess Variables — 5 tasks, fixes 28 var excess):
├── P14-19: Study IDA variable declaration strategy from hexx64
├── P14-20: Aggressive dead-variable elimination (never-read vars)
├── P14-21: Flag-register variable suppression (ZF/SF/CF/OF → never declare)
├── P14-22: Temporary-varnode suppression (unique-space vars used once → fold)
└── P14-23: Golden refresh + var-count validation

Wave 5 (Architecture Fixture Tuning — 5 tasks):
├── P14-24: ARC: add missing branch conditions + return detection
├── P14-25: RISC-V: add missing comparison-branch patterns + loop recovery
├── P14-26: PPC64/V850: add missing conditional branch recovery
├── P14-27: x87_math/arm64/mips64: final if+return tweaks
└── P14-28: Golden refresh + per-arch score validation

Wave 6 (Final Push — 4 tasks):
├── P14-29: Refresh ALL goldens
├── P14-30: Final parity score (target ≥95%)
├── P14-31: Quality report
└── P14-32: Push to GitHub

Wave FINAL:
└── P14-F1: Final verification — ALL fixtures ≥95%
```

---

## TODOs

### Wave 0 — Diagnostic (2 tasks)

- [x] P14-0. Baseline + IDA reference code study

  **What to do**: Capture all scores. Then READ IDA reference code: `references/hexrays/ida_dump/hexx64/all/` — pick 5 representative functions and study how IDA structures conditions, loops, returns, and variables. Document IDA's patterns in learnings.
  **Acceptance Criteria**: Baseline evidence + ≥5 IDA pattern observations in learnings.
  **QA Scenarios**:
  ```
  Scenario: Baseline + IDA study
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p14-baseline.txt
      2. wc -l .sisyphus/evidence/p14-baseline.txt
    Expected Result: ≥14 lines
    Evidence: .sisyphus/evidence/p14-baseline.txt
  ```
  **Commit**: `chore(boulder): P14-0 baseline + IDA reference study`

- [x] P14-1. Per-fixture root cause classification

  **What to do**: For EACH fixture, decompile with --emit c and --emit ir. Compare output against IDA reference metrics. Document exactly which functions are missing ifs/returns and why. Read IDA's decompiled output for the same binary if available.
  **Acceptance Criteria**: Per-fixture gap document in learnings with actionable fix for each.
  **QA Scenarios**:
  ```
  Scenario: Root causes documented
    Tool: Bash
    Steps:
      1. grep -c "root cause\|missing.*if\|missing.*return" .sisyphus/notepads/unlace-phase14/learnings.md
    Expected Result: ≥14 entries (one per fixture)
    Evidence: .sisyphus/notepads/unlace-phase14/learnings.md
  ```
  **Commit**: NO (diagnostic)

### Wave 1 — Missing IFs (8 tasks, +35 ifs across 12 fixtures)

- [ ] P14-2. Study IDA condition recovery from hexx64 reference

  **What to do**: Read `references/hexrays/ida_dump/hexx64/all/` — find functions with if-statements. Study how IDA recovers conditions from x86 flag patterns. Document: CMP+Jcc folding, TEST+Jcc folding, compound conditions (&&, ||), ternary from CMOVcc. Compare against our condition_simplify.rs patterns.
  **Acceptance Criteria**: Learnings with ≥5 IDA condition patterns we don't handle.
  **QA Scenarios**:
  ```
  Scenario: IDA patterns documented
    Tool: Bash
    Steps:
      1. grep -c "IDA.*condition\|IDA.*pattern\|hexx64" .sisyphus/notepads/unlace-phase14/learnings.md
    Expected Result: ≥5
    Evidence: .sisyphus/notepads/unlace-phase14/learnings.md
  ```
  **Commit**: NO (research)

- [ ] P14-3. Deep comparison chain recovery

  **What to do**: Read IDA reference, then extend `condition_simplify.rs`. Handle: `v1 = INT_SUB(a,b); v2 = INT_SLESS(v1, 0); CBRANCH(v2)` → `if (a < b)`. Also: `v1 = INT_AND(a, mask); v2 = INT_EQUAL(v1, 0); CBRANCH(v2)` → `if (!(a & mask))`. Trace 4+ levels through def_map.
  **Acceptance Criteria**: ≥3 new unit tests. medium.c ifs increase.
  **QA Scenarios**:
  ```
  Scenario: Comparison chains folded
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes condition_simplify 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p14-3-chains.txt
  ```
  **Commit**: `feat(passes): 4-level comparison chain recovery from IDA patterns`

- [ ] P14-4. Nested-if-to-single-if collapse

  **What to do**: Read IDA reference for compound condition patterns. Extend `short_circuit.rs`: `if (a) { if (b) { X } }` → `if (a && b) { X }`. Also handle the inverse: `if (!a) { goto L } if (!b) { goto L } X; L:` was already converted to ifs by Wave 1 — now collapse the sequential ifs into `if (a && b) { X }`.
  **Acceptance Criteria**: ≥2 unit tests. Some nested ifs collapse.
  **QA Scenarios**:
  ```
  Scenario: Nested ifs collapsed
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct short_circuit 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p14-4-nested.txt
  ```
  **Commit**: `feat(struct): nested-if-to-compound-condition collapse from IDA patterns`

- [ ] P14-5. CMOVcc full condition preservation

  **What to do**: Read IDA reference for CMOVcc handling. The Phase 13 SCCP fix partially works but conditions still degrade in some cases. Investigate remaining `if (0)` or `if (1)` patterns in debug_calls. Fix: ensure the flag varnode feeding CMOVcc Callother survives ALL optimization passes (not just SCCP — also check copy_prop, dce, gvn).
  **Acceptance Criteria**: debug_calls has 0 occurrences of `if (0)` or `if (1)`.
  **QA Scenarios**:
  ```
  Scenario: No degenerate conditions
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && ./target/debug/unlace decompile fixtures/debug_calls.elf --emit c -o /tmp/dc.c
      2. grep -c "if (0)\|if (1)" /tmp/dc.c
    Expected Result: 0
    Evidence: .sisyphus/evidence/p14-5-cmov.txt
  ```
  **Commit**: `fix(passes): complete CMOVcc condition preservation across all optimization passes`

- [ ] P14-6. Null-check/zero-check pattern recovery

  **What to do**: Read IDA reference for null-check patterns. Common x86: `test reg, reg; je label` = `if (reg == 0)`. Our lifter emits `INT_AND(reg, reg)` for TEST which should simplify to `reg`. Then `INT_EQUAL(reg, 0)` for JE. Verify this chain folds to `if (reg)` or `if (!reg)`. Fix gaps in condition_simplify.
  **Acceptance Criteria**: cpp_vtable ifs increase (null-checks on vtable pointers).
  **QA Scenarios**:
  ```
  Scenario: Null checks recovered
    Tool: Bash
    Steps:
      1. grep -c '\bif\b' tests/golden/expected/cpp_vtable.c
    Expected Result: ≥1
    Evidence: .sisyphus/evidence/p14-6-null.txt
  ```
  **Commit**: `feat(passes): null-check pattern recovery from TEST+JE sequences`

- [ ] P14-7. Architecture-specific branch condition recovery

  **What to do**: For each non-x86 architecture (ARM64, RISC-V, V850, ARC, PPC64), check if branch conditions are being properly recovered. Profile each fixture with `--emit ir` and count CBRANCH instructions vs recovered ifs. Read IDA ARM reference at `references/ida/processors/arm/all/` for ARM64 patterns. For RISC-V/V850/ARC/PPC64 where no IDA processor reference exists, use the fixture's disassembly + the lifter's existing branch emission as the reference. Fix: ensure each lifter's condition emission matches what condition_simplify expects.
  **Acceptance Criteria**: Each arch fixture's if-count reaches its reference target.
  **QA Scenarios**:
  ```
  Scenario: Arch ifs improved
    Tool: Bash
    Steps:
      1. for f in arm64 riscv64 v850 arc ppc64; do echo "${f}: $(grep -c '\bif\b' tests/golden/expected/${f}_features.c)"; done
    Expected Result: each ≥ reference target
    Evidence: .sisyphus/evidence/p14-7-arch.txt
  ```
  **Commit**: `feat(lift-*): architecture-specific branch condition recovery for full if-parity`

- [ ] P14-8. medium.c if-count validation (target ≥55)

  **What to do**: After P14-3..7, rebuild and measure medium.c ifs. Target ≥55 of 60.
  **Acceptance Criteria**: medium.c ifs ≥ 55.
  **QA Scenarios**:
  ```
  Scenario: medium ifs
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && ./target/debug/unlace decompile fixtures/medium.elf --emit c -o /tmp/m.c && grep -c '\bif\b' /tmp/m.c
    Expected Result: ≥55
    Evidence: .sisyphus/evidence/p14-8-medium-ifs.txt
  ```
  **Commit**: NO (measurement)

- [ ] P14-9. Golden refresh + all-fixture if validation

  **What to do**: Full golden refresh. Check ALL fixtures meet if-count targets.
  **Acceptance Criteria**: All fixtures meet or exceed if reference targets.
  **QA Scenarios**:
  ```
  Scenario: All ifs at target
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p14-9-wave1.txt
    Expected Result: aggregate ≥ 85%
    Evidence: .sisyphus/evidence/p14-9-wave1.txt
  ```
  **Commit**: `chore(goldens): Wave 1 if-recovery refresh`

### Wave 2 — While→For + Missing For-Loops (5 tasks)

- [ ] P14-10. Study IDA loop recovery from hexx64 reference

  **What to do**: Read IDA reference — find for-loops. Study how IDA identifies: init statement, condition, step, and body. Document patterns.
  **Acceptance Criteria**: ≥3 IDA loop patterns documented.
  **QA Scenarios**:
  ```
  Scenario: IDA loop patterns
    Tool: Bash
    Steps:
      1. grep -c "IDA.*loop\|IDA.*for" .sisyphus/notepads/unlace-phase14/learnings.md
    Expected Result: ≥3
    Evidence: .sisyphus/notepads/unlace-phase14/learnings.md
  ```
  **Commit**: NO (research)

- [ ] P14-11. Aggressive while→for: ANY while with counter modification

  **What to do**: Extend while_to_for.rs. Current: matches specific init/cond/step patterns. New: if the while body's LAST non-control-flow statement modifies the condition variable (ANY modification — add, sub, mul, shift), promote to for. This covers all 9 excess whiles.
  **Acceptance Criteria**: medium while_count drops from 6 toward 3. cpp_exceptions/cpp_rtti whiles convert.
  **QA Scenarios**:
  ```
  Scenario: Whiles converted
    Tool: Bash
    Steps:
      1. grep -c '\bwhile\b' tests/golden/expected/medium.c
    Expected Result: ≤3
    Evidence: .sisyphus/evidence/p14-11-while.txt
  ```
  **Commit**: `feat(struct): aggressive while-to-for for any counter-modifying last statement`

- [ ] P14-12. For-loop from decrement-to-zero

  **What to do**: Extend recover_for_loops. Pattern: `while(v) { body; v--; }` → `for(; v; v--)`. Also: `while(v != 0) { body; v = v - 1; }` → same. This is medium.c's primary missing for-loop pattern.
  **Acceptance Criteria**: medium.c for_count ≥ 2.
  **QA Scenarios**:
  ```
  Scenario: Decrement-to-zero for
    Tool: Bash
    Steps:
      1. grep -c '\bfor\b' tests/golden/expected/medium.c
    Expected Result: ≥2
    Evidence: .sisyphus/evidence/p14-12-dec.txt
  ```
  **Commit**: `feat(struct): for-loop from decrement-to-zero pattern`

- [ ] P14-13. For-loop from CMP+DEC+JNE chains

  **What to do**: Extend recover_for_loops. Pattern: x86 `cmp reg, 0; je exit; body; dec reg; jmp loop_top` → `for(; reg != 0; reg--)`. This requires matching the structured while that wraps this pattern and promoting it.
  **Acceptance Criteria**: medium.c for_count ≥ 4.
  **QA Scenarios**:
  ```
  Scenario: CMP+DEC for
    Tool: Bash
    Steps:
      1. grep -c '\bfor\b' tests/golden/expected/medium.c
    Expected Result: ≥4
    Evidence: .sisyphus/evidence/p14-13-cmp.txt
  ```
  **Commit**: `feat(struct): for-loop from CMP+DEC+JNE loop patterns`

- [ ] P14-14. Golden refresh + loop validation

  **What to do**: Refresh goldens. medium.c: while ≤ 3, for ≥ 4. Other fixtures: excess whiles converted.
  **Acceptance Criteria**: All fixtures meet loop targets.
  **QA Scenarios**:
  ```
  Scenario: Loop counts
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p14-14-wave2.txt
    Expected Result: aggregate ≥ 90%
    Evidence: .sisyphus/evidence/p14-14-wave2.txt
  ```
  **Commit**: `chore(goldens): Wave 2 loop recovery refresh`

### Wave 3 — Missing Returns (4 tasks)

- [ ] P14-15. Study IDA return patterns

  **What to do**: Read IDA reference for return handling. Document: explicit return value, implicit return 0, void return, early return patterns.
  **Acceptance Criteria**: ≥3 IDA return patterns documented in learnings.
  **QA Scenarios**:
  ```
  Scenario: IDA return patterns documented
    Tool: Bash
    Steps:
      1. grep -c "IDA.*return\|return.*pattern\|implicit.*return" .sisyphus/notepads/unlace-phase14/learnings.md
    Expected Result: ≥3
    Evidence: .sisyphus/notepads/unlace-phase14/learnings.md
  ```
  **Commit**: NO (research)

- [ ] P14-16. Return from any register assignment before RETURN

  **What to do**: Extend return_merge.rs. Currently detects RAX (offset 0). Extend to: any assignment to the function's return register (determined by calling convention) in the last 3 statements before Return. Also detect: assignment to EAX (32-bit, offset 0, size 4) which is the same register.
  **Acceptance Criteria**: Return counts improve across fixtures.
  **QA Scenarios**:
  ```
  Scenario: Returns improved
    Tool: Bash
    Steps:
      1. for f in tests/golden/expected/*.c; do echo "$(basename $f .c): $(grep -c '\breturn\b' $f)"; done
    Expected Result: each ≥ reference target
    Evidence: .sisyphus/evidence/p14-16-return.txt
  ```
  **Commit**: `feat(struct): return detection from any return-register assignment`

- [ ] P14-17. Implicit return for main + all void functions

  **What to do**: In return_merge.rs, ensure: (1) main always ends with `return 0;`, (2) void functions always end with `return;`, (3) non-void functions without explicit return get `return <last_assignment>;`.
  **Acceptance Criteria**: debug_structs return +1. arc_features return +2.
  **QA Scenarios**:
  ```
  Scenario: Implicit returns
    Tool: Bash
    Steps:
      1. grep -c '\breturn\b' tests/golden/expected/debug_structs.c
    Expected Result: ≥3
    Evidence: .sisyphus/evidence/p14-17-implicit.txt
  ```
  **Commit**: `feat(struct): implicit return for main + void/non-void functions`

- [ ] P14-18. Golden refresh + return validation

  **What to do**: Refresh, validate all return counts.
  **Acceptance Criteria**: All fixtures meet return targets.
  **QA Scenarios**:
  ```
  Scenario: Returns at target
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]'
    Expected Result: aggregate ≥ 92%
    Evidence: .sisyphus/evidence/p14-18-wave3.txt
  ```
  **Commit**: `chore(goldens): Wave 3 return recovery refresh`

### Wave 4 — Excess Variables (5 tasks)

- [ ] P14-19. Study IDA variable declaration from hexx64

  **What to do**: Read IDA reference. Study how IDA declares variables: only stack vars, only named params, suppress temporaries. Compare against our c_printer.
  **Acceptance Criteria**: ≥3 IDA variable patterns documented in learnings.
  **QA Scenarios**:
  ```
  Scenario: IDA var patterns documented
    Tool: Bash
    Steps:
      1. grep -c "IDA.*var\|variable.*pattern\|suppress.*temp" .sisyphus/notepads/unlace-phase14/learnings.md
    Expected Result: ≥3
    Evidence: .sisyphus/notepads/unlace-phase14/learnings.md
  ```
  **Commit**: NO (research)

- [ ] P14-20. Aggressive dead-variable elimination

  **What to do**: Extend c_printer.rs dead-var elimination. Currently omits write-only vars. Also: suppress vars that are only read in other var assignments that are themselves dead. Chase the dead-use chain 2 levels deep.
  **Acceptance Criteria**: debug_calls vars decrease from 24 toward 10.
  **QA Scenarios**:
  ```
  Scenario: Dead vars eliminated
    Tool: Bash
    Steps:
      1. grep -cE "^\s*(int|unsigned|_QWORD|long long|_DWORD) v[0-9]+" tests/golden/expected/debug_calls.c
    Expected Result: ≤15
    Evidence: .sisyphus/evidence/p14-20-dead.txt
  ```
  **Commit**: `feat(output): 2-level dead-variable chain elimination`

- [ ] P14-21. Flag-register variable suppression

  **What to do**: In c_printer.rs, never declare variables for x86 flag registers (offsets 256-261: CF, PF, AF, ZF, SF, OF). These are internal computation artifacts, not user variables. IDA never declares them.
  **Acceptance Criteria**: No `v256`, `v257`, etc. in any golden output.
  **QA Scenarios**:
  ```
  Scenario: No flag vars
    Tool: Bash
    Steps:
      1. grep -c "v25[6-9]\|v26[01]" tests/golden/expected/medium.c
    Expected Result: 0
    Evidence: .sisyphus/evidence/p14-21-flags.txt
  ```
  **Commit**: `feat(output): suppress flag-register variable declarations`

- [ ] P14-22. Temporary-varnode suppression

  **What to do**: In c_printer.rs, suppress declarations for unique-space varnodes that are used exactly once and defined in the same block. These are compiler temporaries, not user variables. Fold them into the expression tree instead.
  **Acceptance Criteria**: Var counts decrease across all fixtures.
  **QA Scenarios**:
  ```
  Scenario: Temps suppressed
    Tool: Bash
    Steps:
      1. grep -cE "^\s*(int|unsigned|_QWORD) v[0-9]+" tests/golden/expected/debug_calls.c
    Expected Result: ≤12
    Evidence: .sisyphus/evidence/p14-22-temp.txt
  ```
  **Commit**: `feat(output): suppress single-use temporary varnode declarations`

- [ ] P14-23. Golden refresh + var validation

  **What to do**: Refresh, validate var counts.
  **Acceptance Criteria**: All fixtures meet var targets (within 2 of reference).
  **QA Scenarios**:
  ```
  Scenario: Vars at target
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]'
    Expected Result: aggregate ≥ 95%
    Evidence: .sisyphus/evidence/p14-23-wave4.txt
  ```
  **Commit**: `chore(goldens): Wave 4 variable elimination refresh`

### Wave 5 — Architecture Fixture Tuning (5 tasks)

- [ ] P14-24. ARC fixture: +1 if, +2 return

  **What to do**: Profile arc_features.elf. Add missing branch condition handlers to ARC lifter. Add return detection for ARC's return convention (JMP [BLINK] or J [BLINK]).
  **Acceptance Criteria**: arc_features score ≥ 95%.
  **QA Scenarios**:
  ```
  Scenario: ARC at target
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures golden_arc -- --nocapture 2>&1 | grep '\[score\]'
    Expected Result: ≥95.0
    Evidence: .sisyphus/evidence/p14-24-arc.txt
  ```
  **Commit**: `feat(lift-arc): branch condition + return recovery for full parity`

- [ ] P14-25. RISC-V fixture: +2 ifs, -1 while→for, +1 return

  **What to do**: Profile riscv64_features.elf. Fix branch condition recovery + loop promotion + return.
  **Acceptance Criteria**: riscv64_features ≥ 95%.
  **QA Scenarios**:
  ```
  Scenario: RISC-V at target
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures golden_riscv -- --nocapture 2>&1 | grep '\[score\]'
    Expected Result: ≥95.0
    Evidence: .sisyphus/evidence/p14-25-riscv.txt
  ```
  **Commit**: `feat(lift-riscv): condition + loop + return recovery for full parity`

- [ ] P14-26. PPC64/V850: +1 if each

  **What to do**: Fix branch condition recovery for both architectures.
  **Acceptance Criteria**: Both ≥ 95%.
  **QA Scenarios**:
  ```
  Scenario: PPC/V850 at target
    Tool: Bash
    Steps:
      1. for f in ppc64 v850; do cargo test -p unlace-test-harness --test golden_fixtures golden_${f} -- --nocapture 2>&1 | grep '\[score\]'; done
    Expected Result: both ≥95.0
    Evidence: .sisyphus/evidence/p14-26-ppc-v850.txt
  ```
  **Commit**: `feat(lift-ppc,lift-v850): branch condition recovery for full parity`

- [ ] P14-27. x87/arm64/mips64: final tweaks

  **What to do**: Fix remaining +1 if / +1 return gaps for x87_math, arm64_features, mips64_features.
  **Acceptance Criteria**: All three ≥ 95%.
  **QA Scenarios**:
  ```
  Scenario: Final arch scores
    Tool: Bash
    Steps:
      1. for f in x87_math arm64_features mips64_features; do cargo test -p unlace-test-harness --test golden_fixtures golden_${f} -- --nocapture 2>&1 | grep '\[score\]'; done
    Expected Result: all ≥95.0
    Evidence: .sisyphus/evidence/p14-27-final-arch.txt
  ```
  **Commit**: `feat(lift-*): final if + return tweaks for x87/arm64/mips64 parity`

- [ ] P14-28. Golden refresh + per-arch validation

  **What to do**: Full refresh. ALL arch fixtures ≥ 95%.
  **Acceptance Criteria**: All 14 fixtures ≥ 95%.
  **QA Scenarios**:
  ```
  Scenario: All at 95%+
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]'
    Expected Result: all ≥95.0
    Evidence: .sisyphus/evidence/p14-28-wave5.txt
  ```
  **Commit**: `chore(goldens): Wave 5 architecture parity refresh`

### Wave 6 — Final Push (4 tasks)

- [ ] P14-29. Refresh ALL goldens

  **What to do**: Final rebuild + refresh.
  **Acceptance Criteria**: All pass.
  **QA Scenarios**:
  ```
  Scenario: Final refresh
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p14-29-goldens.txt
  ```
  **Commit**: `chore(goldens): Phase 14 final refresh`

- [ ] P14-30. Final parity score (target ≥95%)

  **What to do**: `bash scripts/score_parity.sh` + per-fixture.
  **Acceptance Criteria**: Aggregate ≥ 95%.
  **QA Scenarios**:
  ```
  Scenario: Final parity
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh 2>&1 | tail -1
    Expected Result: ≥95.0%
    Evidence: .sisyphus/evidence/p14-30-final.txt
  ```
  **Commit**: `chore(boulder): Phase 14 final parity`

- [ ] P14-31. Quality report

  **What to do**: ≥100 lines. Per-fixture before→after table. Per-wave summary.
  **Acceptance Criteria**: Report exists.
  **QA Scenarios**:
  ```
  Scenario: Report
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p14-31-report.txt
    Expected Result: ≥100
    Evidence: .sisyphus/evidence/p14-31-report.txt
  ```
  **Commit**: `chore(boulder): Phase 14 quality report`

- [ ] P14-32. Push to GitHub

  **What to do**: `git push origin master`.
  **QA Scenarios**:
  ```
  Scenario: Push
    Tool: Bash
    Steps:
      1. git push origin master 2>&1 | tail -3
    Expected Result: "master -> master"
  ```
  **Commit**: NO

- [ ] P14-F1. Final verification — ALL fixtures ≥95%

  **What to do**: Verify every gate.
  **Acceptance Criteria**: ALL 14 fixtures ≥ 95%. Aggregate ≥ 95%. ≥1500 tests. 0 failures. Lint clean.
  **QA Scenarios**:
  ```
  Scenario: All gates
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "^test result" | awk '{p+=$4; f+=$6} END {print "PASS:"p" FAIL:"f}'
      2. cargo xtask lint-determinism
      3. cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture 2>&1 | grep '\[score\]'
      4. bash scripts/score_parity.sh
    Expected Result: ≥1500 tests, 0 fail, all fixtures ≥95%, aggregate ≥95%
    Evidence: .sisyphus/evidence/p14-f1-quality.txt
  ```
  **Commit**: NO

---

## Commit Strategy
One commit per task, conventional format. Agents MUST read IDA reference code before implementing algorithmic changes.

## Success Criteria
```bash
cargo test --workspace  # ≥ 1500, 0 fail
cargo xtask lint-determinism  # OK
bash scripts/score_parity.sh  # ≥ 95%
# ALL 14 fixtures individually ≥ 95%
```
