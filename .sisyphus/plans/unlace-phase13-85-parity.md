# unlace Phase 13 — 85% Parity + Performance + DWARF Enrichment

## TL;DR

> **Quick Summary**: Phase 13 pushes parity from 77% to 85%+ via three fronts: (1) medium.c 57→80% by recovering 19 missing ifs through deeper flag-chain folding and while→for promotion, (2) fix CMOVcc condition degradation so debug_calls reaches 80%+, (3) improve arc/riscv/v850 fixture scores via lifter coverage extension. Secondary: rayon parallel decompilation, interprocedural type propagation, DWARF-enriched output with real struct/function names.
>
> **Estimated Effort**: Large (6 waves, ~30 tasks)
> **Critical Path**: Wave 1 (medium.c ifs) → Wave 2 (CMOVcc fix) → Wave 5 (polish)

---

## Context

### Phase 12 Outcome
- 1461 tests, 77.0% parity (was 70.3% pre-Phase-12)
- medium.c: 0 gotos (was 13!), 41 ifs, 0 for, 6 while, 5 return — scores 57.3%
- CMOVcc lifting implemented but condition flags degrade to constant 0 via SCCP
- 14 fixtures across 8 architectures (x86-64, ARM64, MIPS64, RISC-V, V850, ARC, PPC64, Go)
- Label hoisting + condition duplication eliminated all cross-branch gotos

### Mathematical Path to 85%
Current sum of scores: 77.0% × 14 = 1078. Need 85% × 14 = 1190. Delta needed: +112 points across all fixtures.
Biggest opportunities:
- medium.c 57.3→80% = +22.7pp (+22.7 points)
- debug_calls 70.9→85% = +14.1pp
- cpp_vtable 59.7→75% = +15.3pp
- arc_features 54.5→75% = +20.5pp
- riscv64 68.2→80% = +11.8pp
- v850 72.7→82% = +9.3pp
- ppc64 72.7→82% = +9.3pp
Total: +103 points → aggregate ~84.4%. With marginal improvements on others → 85%+.

### Key Constraints (carried)
- BTreeMap/IndexMap only (no HashMap)
- Pass-loop iteration caps preserved
- Structurer core off-limits (post-processing functions allowed)
- Per-fixture regression guard: no fixture drops >1pp

---

## Work Objectives

### Definition of Done
- [ ] `cargo test --workspace` ≥ 1490 tests, 0 failures
- [ ] `cargo xtask lint-determinism` passes
- [ ] Aggregate parity ≥ 83% (stretch ≥85%)
- [ ] medium.c score ≥ 75%
- [ ] debug_calls score ≥ 80%
- [ ] No fixture score dropped >1pp vs baseline
- [ ] Pushed to GitHub

### Must NOT Have
- No HashMap/HashSet in determinism-locked crates
- No structurer.rs core edits (post-processing functions allowed)
- No scoring formula changes
- No fixture regressions >1pp

---

## Execution Strategy

```
Wave 0 (Baseline — 2 tasks):
├── P13-0: Baseline all per-fixture scores
└── P13-1: Profile medium.c missing 19 ifs (which flag chains aren't folding?)

Wave 1 (medium.c 57→80% — 6 tasks):
├── P13-2: Deeper flag-chain folding (trace 3+ levels through def_map for CMP→flags→condition)
├── P13-3: Compound condition recovery (BoolAnd/BoolOr of comparisons → && / ||)
├── P13-4: While-to-for with decrement detection (while(v) { body; v--; } → for)
├── P13-5: Induction variable detection (loop counter from CMP+JNE pattern)
├── P13-6: Return count improvement (detect more RAX-before-return patterns)
└── P13-7: Golden refresh + medium.c score measurement (target ≥75%)

Wave 2 (CMOVcc + debug_calls/cpp_vtable — 5 tasks):
├── P13-8: Fix CMOVcc condition degradation (protect flag varnodes from SCCP constant folding)
├── P13-9: CMOVcc Callother → proper if-statement in C output
├── P13-10: debug_calls score measurement (target ≥80%)
├── P13-11: cpp_vtable improvement (null-check recovery from test+je patterns)
└── P13-12: Golden refresh + regression check

Wave 3 (Architecture Coverage — 5 tasks):
├── P13-13: ARC lifter coverage extension (reduce Unimplemented count)
├── P13-14: RISC-V lifter coverage extension
├── P13-15: V850/PPC64 score improvement via lifter tuning
├── P13-16: Golden refresh for arch fixtures
└── P13-17: Lifter coverage report update

Wave 4 (Performance + DWARF — 5 tasks):
├── P13-18: Rayon parallel function decompilation in batch mode
├── P13-19: DWARF struct name enrichment (use DWARF names instead of field_<offset>)
├── P13-20: DWARF function signature enrichment (parameter names/types from debug info)
├── P13-21: DWARF source line annotation (// source: file.c:42)
└── P13-22: Interprocedural type propagation (callee→caller, 1-level)

Wave 5 (Polish + Final — 5 tasks):
├── P13-23: Refresh ALL goldens
├── P13-24: Final parity score + per-fixture breakdown
├── P13-25: Quality report
├── P13-26: Push to GitHub
└── P13-F1: Final verification
```

---

## TODOs

### Wave 0 — Baseline (2 tasks)

- [x] P13-0. Baseline all per-fixture scores

  **What to do**: Capture all [score] lines from golden_fixtures_metrics_summary. Save to `.sisyphus/evidence/p13-baseline.txt`.
  **Acceptance Criteria**: Evidence file with 14 fixture scores.
  **QA Scenarios**:
  ```
  Scenario: Baseline captured
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p13-baseline.txt
      2. wc -l .sisyphus/evidence/p13-baseline.txt
    Expected Result: ≥14 lines
    Evidence: .sisyphus/evidence/p13-baseline.txt
  ```
  **Commit**: `chore(boulder): P13-0 baseline scores`

- [x] P13-1. Profile medium.c missing 19 ifs

  **What to do**: Compare medium.c's 41 ifs against IDA's 60. Profile which functions have missing ifs. Run with tracing to identify which flag chains aren't being folded into comparisons.
  **Acceptance Criteria**: Learnings entry listing which functions have missing ifs and why.
  **QA Scenarios**:
  ```
  Scenario: Missing ifs profiled
    Tool: Bash
    Steps:
      1. grep -c "missing.*if\|flag.*chain\|unfold" .sisyphus/notepads/unlace-phase13/learnings.md
    Expected Result: ≥3 entries
    Evidence: .sisyphus/notepads/unlace-phase13/learnings.md
  ```
  **Commit**: NO (diagnostic)

### Wave 1 — medium.c 57→80% (6 tasks)

- [x] P13-2. Deeper flag-chain folding

  **What to do**: Extend `condition_simplify.rs` to trace 3+ levels through def_map. Current: `(x - y) == 0 → x == y`. New: follow chains like `zf = INT_EQUAL(INT_SUB(a, b), 0); cond = BoolNegate(zf)` → fold entire chain to `INT_NOTEQUAL(a, b)`.
  **Acceptance Criteria**: ≥2 new unit tests. medium.c if_count increases.
  **QA Scenarios**:
  ```
  Scenario: Flag chain tests pass
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes condition_simplify 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-2-flagchain.txt
  ```
  **Commit**: `feat(passes): 3-level flag-chain folding for deeper condition recovery`

- [x] P13-3. Compound condition recovery

  **What to do**: Extend `crates/unlace-struct/src/short_circuit.rs` (short_circuit_recovery). Detect `if (a) { if (b) { X } }` → `if (a && b) { X }` and `if (a) { X } if (b) { X }` → `if (a || b) { X }`. This recovers compound conditions that the structurer splits into nested ifs.
  **Acceptance Criteria**: ≥1 unit test. Some nested ifs collapse.
  **QA Scenarios**:
  ```
  Scenario: Compound conditions
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct short_circuit 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-3-compound.txt
  ```
  **Commit**: `feat(struct): compound condition recovery for nested if-chains`

- [x] P13-4. While-to-for with decrement detection

  **What to do**: Extend `while_to_for.rs`. Detect `while(v != 0) { body; v = v - 1; }` → `for(; v != 0; v--)`. The step is INT_SUB(v, 1) as the last statement in the body.
  **Acceptance Criteria**: medium.c for_count ≥ 1.
  **QA Scenarios**:
  ```
  Scenario: While-to-for fires
    Tool: Bash
    Steps:
      1. grep -c '\bfor\b' tests/golden/expected/medium.c
    Expected Result: ≥1
    Evidence: .sisyphus/evidence/p13-4-w2f.txt
  ```
  **Commit**: `feat(struct): while-to-for with decrement step detection`

- [x] P13-5. Induction variable detection

  **What to do**: Extend `recover_for_loops` to detect `v = init; while(v < bound) { body; v = v + step; }` where init/bound/step are constants or simple expressions. Promote to `for(v = init; v < bound; v += step)`.
  **Acceptance Criteria**: medium.c for_count ≥ 2.
  **QA Scenarios**:
  ```
  Scenario: Induction var detected
    Tool: Bash
    Steps:
      1. grep -c '\bfor\b' tests/golden/expected/medium.c
    Expected Result: ≥2
    Evidence: .sisyphus/evidence/p13-5-indvar.txt
  ```
  **Commit**: `feat(struct): induction variable detection for for-loop recovery`

- [x] P13-6. Return count improvement

  **What to do**: Extend return_merge.rs. Detect more patterns: (1) assignment to v0 (RAX) followed by branch to return block, (2) multiple exit paths that assign RAX then return → fold into single `return expr`.
  **Acceptance Criteria**: medium.c return_count ≥ 6.
  **QA Scenarios**:
  ```
  Scenario: Returns improved
    Tool: Bash
    Steps:
      1. grep -c '\breturn\b' tests/golden/expected/medium.c
    Expected Result: ≥6
    Evidence: .sisyphus/evidence/p13-6-return.txt
  ```
  **Commit**: `feat(struct): broader return-value detection patterns`

- [x] P13-7. Golden refresh + medium.c score (target ≥75%)

  **What to do**: Full golden refresh, measure medium.c score.
  **Acceptance Criteria**: medium.c ≥ 75%. Aggregate ≥ 80%.
  **QA Scenarios**:
  ```
  Scenario: medium.c score improved
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\].*medium'
    Expected Result: score ≥ 75.0
    Evidence: .sisyphus/evidence/p13-7-medium.txt
  ```
  **Commit**: `chore(goldens): Wave 1 medium.c parity refresh`

### Wave 2 — CMOVcc + debug_calls/cpp_vtable (5 tasks)

- [ ] P13-8. Fix CMOVcc condition degradation

  **What to do**: The Callother(0x350, cond, src, dst) has its condition flag varnodes constant-folded to 0 by SCCP because the flag register has no other use after the cmov. Fix: in the SCCP pass, mark flag varnodes that feed a CMOV Callother as non-constant (they carry semantic information). OR: change the cmov emission to use `with_output` so the output varnode keeps the conditional semantics alive.
  **Acceptance Criteria**: debug_calls C output shows real conditions (not `if (0)`).
  **QA Scenarios**:
  ```
  Scenario: CMOVcc conditions preserved
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && ./target/debug/unlace decompile fixtures/debug_calls.elf --emit c -o /tmp/dc.c
      2. grep -c "if (0)" /tmp/dc.c
    Expected Result: 0 occurrences of "if (0)"
    Evidence: .sisyphus/evidence/p13-8-cmov.txt
  ```
  **Commit**: `fix(passes): preserve CMOVcc condition flags from SCCP constant folding`

- [ ] P13-9. CMOVcc → proper if-statement rendering

  **What to do**: After P13-8 preserves the condition, verify the C printer renders `if (cond) { dst = src; }` correctly with the real condition variable instead of `if (0)`.
  **Acceptance Criteria**: debug_calls has ≥3 real if-statements from cmov.
  **QA Scenarios**:
  ```
  Scenario: CMOVcc renders as real if
    Tool: Bash
    Steps:
      1. grep -c '\bif\b' tests/golden/expected/debug_calls.c
    Expected Result: ≥3
    Evidence: .sisyphus/evidence/p13-9-cmov-if.txt
  ```
  **Commit**: `feat(output): CMOVcc renders as proper if-statement with real condition`

- [ ] P13-10. debug_calls score (target ≥80%)

  **What to do**: Measure debug_calls score after CMOVcc fixes.
  **Acceptance Criteria**: debug_calls ≥ 80%.
  **QA Scenarios**:
  ```
  Scenario: debug_calls score
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture 2>&1 | grep '\[score\].*debug_calls'
    Expected Result: ≥80.0
    Evidence: .sisyphus/evidence/p13-10-dcalls.txt
  ```
  **Commit**: NO (measured in golden refresh)

- [ ] P13-11. cpp_vtable null-check recovery

  **What to do**: Profile cpp_vtable — the missing ifs are likely from vtable pointer null-checks. These may be `test reg, reg; je label` patterns that the structurer should recover. Check if they're being lost in optimization.
  **Acceptance Criteria**: cpp_vtable if_count ≥ 1.
  **QA Scenarios**:
  ```
  Scenario: cpp_vtable ifs
    Tool: Bash
    Steps:
      1. grep -c '\bif\b' tests/golden/expected/cpp_vtable.c
    Expected Result: ≥1
    Evidence: .sisyphus/evidence/p13-11-vtable.txt
  ```
  **Commit**: `feat(struct): null-check recovery for vtable dispatch patterns` (or evidence-only)

- [ ] P13-12. Golden refresh + regression check

  **What to do**: Full golden refresh, check no regression >1pp.
  **Acceptance Criteria**: All pass, no regression.
  **QA Scenarios**:
  ```
  Scenario: No regression
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]' > .sisyphus/evidence/p13-12-wave2.txt
      2. diff .sisyphus/evidence/p13-baseline.txt .sisyphus/evidence/p13-12-wave2.txt
    Expected Result: no fixture dropped >1pp
    Evidence: .sisyphus/evidence/p13-12-wave2.txt
  ```
  **Commit**: `chore(goldens): Wave 2 CMOVcc + vtable refresh`

### Wave 3 — Architecture Coverage (5 tasks)

- [ ] P13-13. ARC lifter coverage extension

  **What to do**: Profile `fixtures/arc_features.elf` — count Unimplemented. Add handlers for the most common unhandled mnemonics (likely: LD, ST, ADD variants specific to ARC ISA). Target: reduce Unimplemented by 50%.
  **Acceptance Criteria**: arc_features score increases by ≥5pp.
  **QA Scenarios**:
  ```
  Scenario: ARC coverage improved
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-arc 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-13-arc.txt
  ```
  **Commit**: `feat(lift-arc): extend instruction coverage for common ARC mnemonics`

- [ ] P13-14. RISC-V lifter coverage extension

  **What to do**: Same for RISC-V. Add MUL/DIV/REM (M extension) if not already handled. Profile and fix top unhandled mnemonics.
  **Acceptance Criteria**: riscv64_features score increases by ≥5pp.
  **QA Scenarios**:
  ```
  Scenario: RISC-V coverage improved
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-riscv 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-14-riscv.txt
  ```
  **Commit**: `feat(lift-riscv): extend M extension coverage (MUL/DIV/REM)`

- [ ] P13-15. V850/PPC64 score improvement

  **What to do**: Profile both fixtures. Fix top 3 unhandled mnemonics per arch.
  **Acceptance Criteria**: Each score increases by ≥3pp.
  **QA Scenarios**:
  ```
  Scenario: V850/PPC scores improved
    Tool: Bash
    Steps:
      1. cargo test -p unlace-lift-v850 -p unlace-lift-ppc 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-15-v850ppc.txt
  ```
  **Commit**: `feat(lift-v850,lift-ppc): top-3 unhandled mnemonic coverage`

- [ ] P13-16. Golden refresh for arch fixtures

  **What to do**: Refresh all goldens, measure arch fixture scores.
  **Acceptance Criteria**: arc ≥60%, riscv ≥73%, v850 ≥76%, ppc ≥76%.
  **QA Scenarios**:
  ```
  Scenario: Arch scores improved
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | grep '\[score\]'
    Expected Result: all target scores met
    Evidence: .sisyphus/evidence/p13-16-arch.txt
  ```
  **Commit**: `chore(goldens): Wave 3 architecture coverage refresh`

- [ ] P13-17. Lifter coverage report

  **What to do**: Update coverage report for all fixtures.
  **Acceptance Criteria**: Evidence file.
  **QA Scenarios**:
  ```
  Scenario: Coverage report
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p13-17-coverage.txt
    Expected Result: ≥14 rows
    Evidence: .sisyphus/evidence/p13-17-coverage.txt
  ```
  **Commit**: `chore(boulder): P13-17 coverage report`

### Wave 4 — Performance + DWARF (5 tasks)

- [ ] P13-18. Rayon parallel function decompilation

  **What to do**: In `crates/unlace-cli/src/batch.rs`, use `rayon::par_iter()` to decompile functions in parallel. rayon is already in workspace deps. Each function is independent after lifting. Gate behind `--jobs N` flag (default: num_cpus).
  **Acceptance Criteria**: `unlace batch fixtures/medium.elf --jobs 4` succeeds. ≥2x speedup on medium.elf.
  **QA Scenarios**:
  ```
  Scenario: Parallel decompilation
    Tool: Bash
    Steps:
      1. time ./target/release/unlace batch fixtures/medium.elf --jobs 1 -o /tmp/seq.c
      2. time ./target/release/unlace batch fixtures/medium.elf --jobs 4 -o /tmp/par.c
    Expected Result: parallel is faster; output identical
    Evidence: .sisyphus/evidence/p13-18-rayon.txt
  ```
  **Commit**: `feat(cli): rayon parallel function decompilation in batch mode`

- [ ] P13-19. DWARF struct name enrichment

  **What to do**: When DWARF info is available (via `import_dwarf`), replace synthetic `struct_<offset>` names with DWARF-recovered struct names. Replace `field_<offset>` with DWARF field names. Wire into c_printer's struct field emission.
  **Acceptance Criteria**: debug_structs output uses DWARF names when available.
  **QA Scenarios**:
  ```
  Scenario: DWARF struct names
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_structs.elf --emit c -o /tmp/ds.c
      2. grep -c "struct\|field_name" /tmp/ds.c
    Expected Result: some real names appear (if DWARF present in fixture)
    Evidence: .sisyphus/evidence/p13-19-dwarf.txt
  ```
  **Commit**: `feat(output): DWARF struct/field name enrichment in C output`

- [ ] P13-20. DWARF function signature enrichment

  **What to do**: Use DWARF parameter names and types to enrich function signatures. Replace `void func(void)` with `int func(int argc, char **argv)` when DWARF provides the info.
  **Acceptance Criteria**: debug fixtures show DWARF-enriched signatures.
  **QA Scenarios**:
  ```
  Scenario: DWARF signatures
    Tool: Bash
    Steps:
      1. grep "int\|char" tests/golden/expected/debug_structs.c | head -5
    Expected Result: at least 1 DWARF-derived type/name
    Evidence: .sisyphus/evidence/p13-20-dwarf-sig.txt
  ```
  **Commit**: `feat(output): DWARF function signature enrichment`

- [ ] P13-21. DWARF source line annotation

  **What to do**: When DWARF source map is available, add `// source: file.c:42` comments before statements that have source location info.
  **Acceptance Criteria**: debug fixtures show source annotations.
  **QA Scenarios**:
  ```
  Scenario: Source annotations
    Tool: Bash
    Steps:
      1. grep -c "// source:" tests/golden/expected/debug_structs.c
    Expected Result: ≥1 annotation
    Evidence: .sisyphus/evidence/p13-21-source.txt
  ```
  **Commit**: `feat(output): DWARF source line annotations in C output`

- [ ] P13-22. Interprocedural type propagation

  **What to do**: After single-function type inference, propagate return types from callees to callers (1-level). If function `foo` is inferred to return `int`, and `bar` calls `foo` and assigns the result, propagate `int` to bar's variable. Only works for resolved CALL targets (not CALLIND).
  **Acceptance Criteria**: ≥1 unit test. Type inference improves for call-heavy fixtures.
  **QA Scenarios**:
  ```
  Scenario: Interprocedural types
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes type_infer 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-22-interproc.txt
  ```
  **Commit**: `feat(passes): interprocedural return-type propagation (1-level callee→caller)`

### Wave 5 — Polish + Final (5 tasks)

- [ ] P13-23. Refresh ALL goldens

  **What to do**: Full refresh.
  **Acceptance Criteria**: All pass.
  **QA Scenarios**:
  ```
  Scenario: All goldens pass
    Tool: Bash
    Steps:
      1. cargo build -p unlace-cli && UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures 2>&1 | grep "test result"
    Expected Result: all pass
    Evidence: .sisyphus/evidence/p13-23-goldens.txt
  ```
  **Commit**: `chore(goldens): Phase 13 final refresh`

- [ ] P13-24. Final parity score

  **What to do**: `bash scripts/score_parity.sh` + per-fixture breakdown.
  **Acceptance Criteria**: Aggregate ≥ 83%.
  **QA Scenarios**:
  ```
  Scenario: Final parity
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh 2>&1 | tail -1
    Expected Result: ≥83.0%
    Evidence: .sisyphus/evidence/p13-24-final.txt
  ```
  **Commit**: `chore(boulder): Phase 13 final parity`

- [ ] P13-25. Quality report

  **What to do**: Write report (≥80 lines).
  **Acceptance Criteria**: Report exists.
  **QA Scenarios**:
  ```
  Scenario: Report
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p13-25-report.txt
    Expected Result: ≥80
    Evidence: .sisyphus/evidence/p13-25-report.txt
  ```
  **Commit**: `chore(boulder): Phase 13 quality report`

- [ ] P13-26. Push to GitHub

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

- [ ] P13-F1. Final verification

  **What to do**: All gates.
  **Acceptance Criteria**: ≥1490 tests, 0 fail, lint clean, parity ≥83%.
  **QA Scenarios**:
  ```
  Scenario: All gates
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "^test result" | awk '{p+=$4; f+=$6} END {print "PASS:"p" FAIL:"f}'
      2. cargo xtask lint-determinism
      3. bash scripts/score_parity.sh
    Expected Result: ≥1490 pass, 0 fail, lint OK, parity ≥83%
    Evidence: .sisyphus/evidence/p13-f1-quality.txt
  ```
  **Commit**: NO

---

## Commit Strategy
One commit per task, conventional format.

## Success Criteria
```bash
cargo test --workspace  # ≥ 1490, 0 fail
cargo xtask lint-determinism  # OK
bash scripts/score_parity.sh  # ≥ 83%
```
