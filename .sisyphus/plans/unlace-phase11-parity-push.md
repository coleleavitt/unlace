# unlace Phase 11 — Parity Push + Architecture Breadth + Advanced Recovery

## TL;DR

> **Quick Summary**: Phase 11's #1 objective is breaking through the 60% parity ceiling. medium.c scores 0.0% due to 12 remaining gotos (IDA expects 0) and missing for-loop recovery (IDA expects 5, we have 0). Eliminating these gotos and recovering for-loops would lift medium.c alone from 0% to ~50%+, pushing aggregate parity from 59.6% to ~70%+. Secondary objectives: MIPS/RISC-V fixture coverage (both lifters are already REAL implementations with 67/42 mnemonics — NOT stubs), Go gopclntab function discovery, ObjC metadata, and advanced type recovery.
>
> **Metis Reframings**: MIPS64 lifter has 67 mnemonics + 19 tests. RISC-V has 42 mnemonics + 43 tests. Both are production-ready — no "activation" or "build from scratch" needed. Go gopclntab requires custom parsing (object crate doesn't expose it). ObjC metadata requires custom parsing beyond object crate's minimal support.
>
> **Key Insight**: medium.c's `f_rec_power.constprop.0` function has a 7-goto/7-label cluster from an unresolved irreducible region. `main` has 3 gotos from loop-exit patterns. `f_rec_fib` has 2 gotos. Fixing these three functions eliminates all 12 gotos.
>
> **Estimated Effort**: XL (7 waves, ~45 tasks)
> **Parallel Execution**: YES — 3-5 concurrent tasks per wave
> **Critical Path**: Wave 0 goto profiling → Wave 1 structurer improvements → Wave 7 parity measurement

---

## Context

### Phase 10 Outcome Recap
- 1417 tests passing, 0 failures (was 1359 pre-Phase-10, +58)
- 72K LOC across 16 crates
- Aggregate parity: 59.6% (was 52.9% pre-Phase-10, +6.7pp)
- medium.c: 12 gotos / 24 ifs / 16 whiles / 0 for / 3 return (IDA reference: 0/60/3/5/8)
- ARM64 lifter: 48+ mnemonics, real iOS KCM fixture
- PE loader: 10 data directories. Mach-O loader: 11 load commands.
- 28 optimization passes + 8 idiom patterns + struct field detection + bitfield extraction

### Parity Breakdown (per-fixture)
| Fixture | Score | Gotos | Ifs | For | While | Return | Biggest Gap |
|---------|-------|-------|-----|-----|-------|--------|-------------|
| medium | **0.0%** | **12** | 24 | **0** | 16 | 3 | gotos kill score; missing for-loops |
| debug_structs | 93.9% | 0 | 0 | 0 | 0 | 2 | near-perfect |
| debug_hello | 80.9% | 0 | 0 | 0 | 0 | 0 | low weight |
| cpp_exceptions | 78.2% | 0 | 1 | 0 | 2 | 2 | reasonable |
| debug_calls | 60.0% | 0 | **0** | 0 | 0 | 7 | missing 5 ifs |
| cpp_vtable | 53.6% | 0 | **0** | 0 | 0 | 0 | missing 2 ifs |
| cpp_rtti | 50.9% | **2** | 4 | 0 | 2 | 5 | 2 gotos + missing ifs |
| arm64_features | N/A | — | — | — | — | — | new fixture |

### IDA Reference for medium.c
```
if_count = 60    (we have 24 — 40% recovery)
for_count = 5    (we have 0 — 0% recovery)
while_count = 3  (we have 16 — over-recovery, whiles should be for-loops)
return_count = 8 (we have 3 — 37.5% recovery)
goto_count = 0   (we have 12 — blocking)
var_count = 30   (we have 10 — under-reporting)
```

### medium.c Goto Anatomy (from profiling)
- **main()**: 3 gotos — all IRREDUCIBLE (multi-predecessor join points in nested if/while)
- **f_rec_fib()**: 2 gotos — IRREDUCIBLE (forward jumps to join points)
- **f_rec_power.constprop.0()**: 7 gotos + 7 labels — IRREDUCIBLE (deeply nested if/else, 8+ levels; node_split MAX_SPLIT_ROUNDS=16 insufficient)
- **0 switch-related gotos** — no switch/case in medium.c at all
- **All 12 are caused by multi-entry SCCs** that node_split couldn't break within 16 rounds

### Architecture Lifter State (Metis Discovery)
- **MIPS64**: REAL — 2,386 LOC, 67 mnemonics, 19 tests. Production-ready.
- **RISC-V**: REAL — 1,713 LOC, 42 mnemonics, 43 tests. Production-ready.
- **ARM64**: 48+ mnemonics, real iOS fixture. Production-ready.
- **Go gopclntab**: NOT in object crate — needs custom parser.
- **ObjC metadata**: Minimal in object crate — needs custom parser.

### Key Constraints (carried from Phase 9-10)
- BTreeMap/IndexMap only in determinism-locked crates (NO HashMap/HashSet)
- Pass-loop iteration caps preserved (200/100/100/2*blocks)
- tracing instrumentation idioms per Phase 9
- Structurer core (`structurer.rs`) — the CFG pattern-matching functions (`structure_region`, `structure_until`, `try_structure_if`, `try_structure_switch`) are off-limits. Post-processing functions in the same file (`recover_for_loops`, `recover_for_loops_in_children`) ARE allowed to be extended since they operate on already-structured HIR.
- MAX_SPLIT_ROUNDS=16 — don't increase

---

## Work Objectives

### Core Objective
Break the 60% parity ceiling by eliminating medium.c's 12 gotos and recovering for-loops, then extend architecture fixture coverage. Target: **59.6% → 72%+ aggregate parity**.

### Concrete Deliverables
- medium.c gotos: 12 → 0 (or ≤2)
- medium.c for-loops: 0 → ≥3
- medium.c ifs: 24 → ≥40
- cpp_rtti gotos: 2 → 0
- debug_calls ifs: 0 → ≥3
- MIPS64 ELF fixture + golden entry
- RISC-V ELF fixture + golden entry
- Go binary gopclntab function discovery
- ObjC msgSend dispatch recognition for Mach-O
- Aggregate parity ≥ 72%
- Workspace tests ≥ 1450

### Definition of Done
- [ ] `cargo test --workspace` passes with ≥ 1450 tests, 0 failures
- [ ] `cargo xtask lint-determinism` passes
- [ ] medium.c gotos ≤ 2
- [ ] medium.c for-loops ≥ 3
- [ ] Aggregate parity ≥ 72%
- [ ] MIPS64 + RISC-V fixtures decompile without panic
- [ ] Pushed to GitHub

### Must NOT Have (Guardrails)
- No HashMap/HashSet in determinism-locked crates
- No core structurer.rs control-flow pattern matching edits (the `structure_region`/`structure_until`/`try_structure_if`/`try_structure_switch` functions). Post-processing functions like `recover_for_loops` that live in the same file ARE allowed to be extended since they operate on already-structured HIR, not the raw CFG.
- No MAX_SPLIT_ROUNDS increase
- No NEON/SVE in ARM64 lifter (defer to Phase 12)
- No interprocedural analysis spanning >1 call level
- No full Go runtime parsing (gopclntab function discovery only)

---

## Verification Strategy

> ZERO HUMAN INTERVENTION — ALL verification is agent-executed.

### Test Decision
- Infrastructure exists: YES
- Automated tests: TDD
- Framework: cargo test
- Baseline: Wave 0 captures metrics BEFORE changes

### Per-Wave Acceptance
- **Wave 0**: Goto profiling complete, evidence captured
- **Wave 1**: medium.c gotos ≤ 4 AND for-loops ≥ 2
- **Wave 2**: medium.c ifs ≥ 35 AND returns ≥ 5
- **Wave 3**: cpp_rtti gotos = 0, debug_calls ifs ≥ 2
- **Wave 4**: MIPS64 + RISC-V fixtures load + decompile
- **Wave 5**: Go gopclntab discovers ≥1 function in fixture
- **Wave 6**: Golden refresh, parity ≥ 72%
- **P11-F1**: All gates green

---

## Execution Strategy

```
Wave 0 (Diagnostic — 4 tasks):
├── P11-0: Capture per-fixture baseline + per-function goto profile
├── P11-1: Trace structurer decisions on medium.elf main (which patterns fail)
├── P11-2: Trace structurer on f_rec_power.constprop.0 (irreducible cluster)
└── P11-3: Compare unlace vs IDA output for medium.elf function-by-function

Wave 1 (Structurer Improvements — 8 tasks):
├── P11-4: Goto-to-break conversion post-pass (loop-exit gotos → break)
├── P11-5: Goto-to-continue conversion (back-edge gotos → continue)
├── P11-6: For-loop recovery enhancement (induction var + bound detection)
├── P11-7: While-to-for promotion (while with init+step → for)
├── P11-8: Forward-goto elimination (goto past if → else branch)
├── P11-9: Irreducible region goto cluster reduction (improve node_split for f_rec_power)
├── P11-10: Return path recovery (multiple return blocks → single return with variable)
└── P11-11: Golden refresh + medium.c goto/for delta measurement

Wave 2 (Expression + Condition Quality — 6 tasks):
├── P11-12: Flag-chain folding (CMP+flags+Jcc → single comparison expression)
├── P11-13: Condition chain flattening (deeply nested if → flat if-else-if)
├── P11-14: Dead variable elimination in C output (unused v<N> declarations)
├── P11-15: Variable count recovery (30 IDA vars vs our 10 — under-declaration)
├── P11-16: Return statement recovery (early-return patterns from flag checks)
└── P11-17: Golden refresh + expression quality delta

Wave 3 (Other Fixture Parity — 5 tasks):
├── P11-18: debug_calls if-recovery (IDA shows 5 ifs, we have 0)
├── P11-19: cpp_vtable if-recovery (IDA shows 2 ifs, we have 0)
├── P11-20: cpp_rtti goto elimination (2 gotos remaining)
├── P11-21: arm64_features golden entry in golden_fixtures.rs
└── P11-22: Per-fixture parity regression check + golden refresh

Wave 4 (Architecture Fixtures — 5 tasks):
├── P11-23: MIPS64 ELF fixture (hand-crafted or from ~/VulnerabilityResearch binaries)
├── P11-24: MIPS64 golden entry in golden_fixtures.rs + reference metrics
├── P11-25: RISC-V ELF fixture (hand-crafted)
├── P11-26: RISC-V golden entry + reference metrics
└── P11-27: Lifter coverage report (Unimplemented count per fixture)

Wave 5 (Go + ObjC — 5 tasks):
├── P11-28: Go gopclntab parser (function discovery from .gopclntab section)
├── P11-29: Go ELF fixture + smoke test
├── P11-30: ObjC msgSend dispatch recognition pass
├── P11-31: ObjC class/selector extraction from __objc_classlist
└── P11-32: iOS KCM fixture ObjC method name recovery verification

Wave 6 (Polish + Final — 5 tasks):
├── P11-33: Refresh ALL goldens
├── P11-34: Update reference_metrics.toml for new fixtures
├── P11-35: Final aggregate parity score + delta
├── P11-36: Phase 11 quality report
└── P11-37: Push to GitHub

Wave FINAL (Verification — 1 task):
└── P11-F1: Comprehensive quality review

Critical Path: P11-0 → P11-4 → P11-6 → P11-9 → P11-11 → P11-33 → P11-F1
Max Concurrent: 5 (Wave 1)
```

---

## TODOs

### Wave 0 — Diagnostic Baseline (4 tasks)

- [x] P11-0. Capture per-fixture baseline + per-function goto profile

  **What to do**: For each fixture, count gotos/ifs/for/while/return. For medium.c specifically, list which function owns each goto. Save to `.sisyphus/evidence/p11-baseline.txt`. Run `bash scripts/score_parity.sh`.
  **Acceptance Criteria**: Evidence file exists with 8+ fixture lines + per-function goto breakdown for medium.c.
  **QA Scenarios**: `wc -l .sisyphus/evidence/p11-baseline.txt` ≥ 15.
  **Commit**: `chore(boulder): P11-0 capture pre-Phase-11 baseline metrics`

- [x] P11-1. Trace structurer on medium.elf main() — identify which CFG patterns fail

  **What to do**: Add `RUST_LOG=unlace_struct=trace` and decompile medium.elf `--function main`. Capture which blocks become `goto_targets` and why. Record in learnings notepad.
  **Acceptance Criteria**: Learnings entry identifies which 3 blocks in main() become goto targets.
  **QA Scenarios**: `grep "goto_target" .sisyphus/notepads/unlace-phase11/learnings.md`.
  **Commit**: NO (diagnostic only)

- [x] P11-2. Trace structurer on f_rec_power.constprop.0 — identify the 7-goto irreducible cluster

  **What to do**: Same tracing for `f_rec_power.constprop.0` (the function with 7 gotos/7 labels). Identify the SCC that causes 7 labels. Check if node_split hits MAX_SPLIT_ROUNDS=16 on this function.
  **Acceptance Criteria**: Learnings entry describes the irreducible SCC topology.
  **QA Scenarios**:
  ```
  Scenario: f_rec_power irreducible cluster documented
    Tool: Bash
    Steps:
      1. grep -cE "f_rec_power.*(MAX_SPLIT_ROUNDS|irreducible|SCC)" .sisyphus/notepads/unlace-phase11/learnings.md
    Expected Result: ≥1 match
    Evidence: .sisyphus/notepads/unlace-phase11/learnings.md
  ```
  **Commit**: NO (diagnostic only)

- [x] P11-3. Compare unlace output structure vs IDA reference metrics

  **What to do**: For medium.c, compare our actual metrics (24 ifs, 0 for, 16 while, 12 goto, 3 return, 10 vars) against the IDA reference in `tests/golden/reference_metrics.toml` (60 ifs, 5 for, 3 while, 0 goto, 8 return, 30 vars). For each metric gap, document WHY the gap exists: where are the missing 36 ifs? Why do we have 16 whiles vs IDA's 3 (our whiles should be for-loops)? Why only 3 returns vs 8?
  **Acceptance Criteria**: Comparison document in learnings with ≥5 metric gaps explained.
  **QA Scenarios**:
  ```
  Scenario: Gap analysis documented
    Tool: Bash
    Steps:
      1. grep -c "IDA.*gap\|missing.*if\|while.*for" .sisyphus/notepads/unlace-phase11/learnings.md
    Expected Result: ≥5 gap entries
    Evidence: .sisyphus/notepads/unlace-phase11/learnings.md
  ```
  **Commit**: NO (diagnostic only)

### Wave 1 — Structurer Goto Elimination (8 tasks)

> All 12 gotos are IRREDUCIBLE (multi-entry SCCs). Fix strategy: (a) improve node_split to resolve the f_ackermann 7-goto cluster, (b) add goto-to-break/continue post-passes for the main/f_rec_fib gotos, (c) add forward-goto elimination for sequential fallthrough patterns.

- [x] P11-4. Goto-to-break conversion post-pass

  **What to do**: Write `crates/unlace-struct/src/goto_to_break.rs`. Walk HIR: for each `While`/`DoWhile` node, if the body contains a `Goto(label)` where `label` is defined immediately AFTER the loop, convert to `Break`. This handles loop-exit gotos (main's 3 gotos are this pattern).
  **Must NOT do**: Touch structurer.rs core. Add HashMap.
  **Acceptance Criteria**: Unit test with while+goto+label-after-loop → break conversion. `cargo test -p unlace-struct goto_to_break` passes.
  **QA Scenarios**: `cargo test -p unlace-struct goto_to_break 2>&1 | grep "test result"` → ≥1 pass.
  **Commit**: `feat(struct): goto-to-break conversion post-pass for loop-exit patterns`

- [x] P11-5. Goto-to-continue conversion post-pass

  **What to do**: Write `crates/unlace-struct/src/goto_to_continue.rs`. For each loop, if the body contains a `Goto(label)` where `label` is the loop header itself (back-edge), convert to `Continue`.
  **Acceptance Criteria**: Unit test passes. `cargo test -p unlace-struct goto_to_continue`.
  **QA Scenarios**:
  ```
  Scenario: goto-to-continue test passes
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct goto_to_continue 2>&1 | grep "test result"
    Expected Result: ≥1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-5-continue.txt
  ```
  **Commit**: `feat(struct): goto-to-continue conversion post-pass for back-edge patterns`

- [x] P11-6. For-loop recovery enhancement

  **What to do**: Extend `crates/unlace-struct/src/structurer.rs::recover_for_loops` (already exists at line 1420). Currently only fires when induction variable is not referenced after the loop. Relax: also detect `while (i < N) { ...; i += step; }` patterns even when `i` is referenced after (common in medium.c's Fibonacci/GCD loops). The init is `v = const` before the while, the step is `v = v + const` at end of body, the bound is the while condition comparing v.
  **Must NOT do**: Rewrite the function. Only add new match patterns.
  **Acceptance Criteria**: medium.c for-loop count ≥ 2 after this change.
  **QA Scenarios**: `grep -c "\bfor\b" tests/golden/expected/medium.c` ≥ 2.
  **Commit**: `feat(struct): relax for-loop recovery to handle post-loop variable use`

- [x] P11-7. While-to-for promotion post-pass

  **What to do**: Write `crates/unlace-struct/src/while_to_for.rs`. Pattern: `init_stmt; while (cond) { body; step_stmt; }` where init assigns a variable, cond tests that variable, step increments/decrements it → `for (init; cond; step) { body; }`. This converts medium.c's 16 while-loops that have init+step patterns into for-loops.
  **Acceptance Criteria**: ≥1 while→for conversion in medium.c golden.
  **QA Scenarios**: `grep -c "\bfor\b" tests/golden/expected/medium.c` ≥ 3.
  **Commit**: `feat(struct): while-to-for promotion post-pass with init/cond/step detection`

- [x] P11-8. Forward-goto elimination post-pass

  **What to do**: Write `crates/unlace-struct/src/goto_elim.rs`. Pattern: `if (cond) { ...; goto L; } L:; rest` where goto L jumps to immediately after the if-block → remove the goto (it's a no-op forward jump). Also: `goto L; ... L:;` where L is the next statement → remove the goto.
  **Acceptance Criteria**: f_rec_fib's 2 forward gotos eliminated.
  **QA Scenarios**:
  ```
  Scenario: f_rec_fib gotos eliminated
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf --function f_rec_fib --emit c --timeout 30 -o /tmp/p11-8-fib.c
      2. grep -c "goto" /tmp/p11-8-fib.c
    Expected Result: 0 gotos
    Evidence: .sisyphus/evidence/p11-8-fwd-goto.txt
  ```
  **Commit**: `feat(struct): forward-goto elimination for sequential fallthrough patterns`

- [x] P11-9. Irreducible region goto cluster reduction for f_rec_power.constprop.0

  **What to do**: Profile why f_rec_power.constprop.0's SCC needs >16 rounds. The function has deeply recursive structure that creates 7 entries. Strategy: add a SECOND pre-pass `crates/unlace-struct/src/tail_duplication.rs` that duplicates small blocks (≤3 instructions) at multiple-entry points BEFORE node_split runs. This is cheaper than node_split's full-block duplication and handles the "many entries, small blocks" pattern in f_rec_power.
  **Must NOT do**: Increase MAX_SPLIT_ROUNDS. Touch structurer.rs core.
  **Acceptance Criteria**: f_rec_power.constprop.0 gotos reduced from 7 to ≤2.
  **QA Scenarios**:
  ```
  Scenario: f_rec_power gotos reduced
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf --function "f_rec_power.constprop.0" --emit c --timeout 30 -o /tmp/p11-9-power.c
      2. grep -c "goto" /tmp/p11-9-power.c
    Expected Result: ≤2 gotos
    Evidence: .sisyphus/evidence/p11-9-tail-dup.txt
  ```
  **Commit**: `feat(struct): tail duplication pre-pass for small multi-entry blocks`

- [x] P11-10. Return path recovery (multiple return blocks → single return)

  **What to do**: Write `crates/unlace-struct/src/return_merge.rs`. When a function has multiple `return;` statements that could be unified, merge them. Also detect patterns where a goto jumps to a return block → convert to `return` directly.
  **Acceptance Criteria**: medium.c return count increases from 3 toward 8 (IDA reference).
  **QA Scenarios**: `grep -c "\breturn\b" tests/golden/expected/medium.c` ≥ 5.
  **Commit**: `feat(struct): return path merging and goto-to-return conversion`

- [x] P11-11. Wave 1 golden refresh + medium.c goto/for delta

  **What to do**: `UPDATE_GOLDEN=1 cargo test`, measure medium.c gotos (target ≤4), for-loops (target ≥2), ifs. Compare vs P11-0 baseline. Evidence to `.sisyphus/evidence/p11-11-wave1-delta.txt`.
  **Acceptance Criteria**: medium.c gotos ≤ 4 AND for-loops ≥ 2. No fixture goto regression > 2.
  **QA Scenarios**: `grep -c goto tests/golden/expected/medium.c` ≤ 4.
  **Commit**: `chore(goldens): Wave 1 goto elimination refresh`

### Wave 2 — Expression + Condition Quality (6 tasks)

- [x] P11-12. Flag-chain folding (CMP+flags+Jcc → single comparison)

  **What to do**: Extend `crates/unlace-passes/src/condition_simplify.rs`. Currently CMP emits INT_SUB + individual flag reads (ZF, SF, OF, CF). IDA folds `CMP a,b + JE` into `if (a == b)`. Add patterns: when CBRANCH's condition traces back through flag reads to an INT_SUB, fold the chain into a single IntEqual/IntLess/etc. This increases if-count because folded conditions become single clean ifs instead of multi-statement flag computation.
  **Acceptance Criteria**: ≥2 new unit tests. medium.c if-count increases.
  **QA Scenarios**: `cargo test -p unlace-passes condition_simplify` passes.
  **Commit**: `feat(passes): flag-chain folding CMP+flags+Jcc to single comparison`

- [x] P11-13. Condition chain flattening enhancement

  **What to do**: Extend `crates/unlace-struct/src/flatten_if_else.rs`. Currently flattens `if (a) { X } else { if (b) { Y } }` → `if (a) { X } else if (b) { Y }`. Enhance to also handle: `if (!a) { goto L; } if (!b) { goto L; } X; L:` → `if (a && b) { X }` (short-circuit recovery for goto-based conditions).
  **Acceptance Criteria**: ≥1 new unit test. Works on f_rec_fib patterns.
  **QA Scenarios**: `cargo test -p unlace-struct flatten` passes.
  **Commit**: `feat(struct): condition chain flattening for goto-based short-circuit patterns`

- [x] P11-14. Dead variable elimination in C output

  **What to do**: Extend `crates/unlace-output/src/c_printer.rs`. Currently declares ALL SSA varnodes as variables. Add a post-collection pass: if a declared variable `v<N>` is never referenced in the emitted C body (only assigned but never read), omit its declaration. This reduces var_count toward IDA's 30 (we have 10 — but IDA counts differently; we just need to not over-declare).
  **Acceptance Criteria**: At least 1 fixture's var_count decreases.
  **QA Scenarios**: `cargo test -p unlace-output` passes.
  **Commit**: `feat(output): omit declarations for write-only variables`

- [x] P11-15. Variable count recovery improvement

  **What to do**: Review why medium.c has 10 vars vs IDA's 30. IDA uses local variables for stack slots, struct fields, and array elements. Our c_printer collapses many into expressions via ExpressionTreePass. The gap is likely that IDA declares intermediate values we fold away. Strategy: adjust expression tree folding threshold — don't fold expressions used >1 time (they should become named variables). Modify `crates/unlace-passes/src/expression_tree.rs` to only fold single-use values.
  **Acceptance Criteria**: medium.c var_count increases toward 20+.
  **QA Scenarios**: `grep -cE "^\s*(int|unsigned|_QWORD|long long) v[0-9]+" tests/golden/expected/medium.c` ≥ 15.
  **Commit**: `feat(passes): restrict expression tree folding to single-use values`

- [x] P11-16. Return statement recovery

  **What to do**: The C printer currently emits `return;` only for explicit RETURN IR ops. IDA emits `return expr;` for functions with return values. Enhance: when a function's calling convention indicates a return value (RAX for x86-64), and the last block has an assignment to RAX before RETURN, emit `return <expr>;` instead of separate assignment + `return;`.
  **Acceptance Criteria**: medium.c return count increases from 3 toward ≥5.
  **QA Scenarios**: `grep -c "\breturn\b" tests/golden/expected/medium.c` ≥ 5.
  **Commit**: `feat(output): emit return-with-value for functions with return register`

- [x] P11-17. Wave 2 golden refresh + expression quality delta

  **What to do**: `UPDATE_GOLDEN=1`, measure ifs/vars/returns vs P11-0 baseline. Evidence to `.sisyphus/evidence/p11-17-wave2-delta.txt`.
  **Acceptance Criteria**: medium.c ifs ≥ 35 OR var_count ≥ 15.
  **QA Scenarios**:
  ```
  Scenario: Wave 2 expression quality measured
    Tool: Bash
    Steps:
      1. grep -c "\bif\b" tests/golden/expected/medium.c
      2. grep -cE "^\s*(int|unsigned|_QWORD|long long) v[0-9]+" tests/golden/expected/medium.c
    Expected Result: ifs ≥ 35 OR vars ≥ 15
    Evidence: .sisyphus/evidence/p11-17-wave2-delta.txt
  ```
  **Commit**: `chore(goldens): Wave 2 expression quality refresh`

### Wave 3 — Other Fixture Parity (5 tasks)

- [x] P11-18. debug_calls if-recovery

  **What to do**: Profile `debug_calls.elf` — IDA expects 5 ifs, we have 0. The calls fixture likely has simple branching patterns that the structurer handles but the flag-folding from P11-12 isn't reaching. Investigate and fix the specific pattern. May need to extend the if-detection in the structurer to recognize patterns specific to call-heavy code (e.g., null-check before call).
  **Acceptance Criteria**: debug_calls if-count ≥ 2.
  **QA Scenarios**: `grep -c "\bif\b" tests/golden/expected/debug_calls.c` ≥ 2.
  **Commit**: `fix(struct): recover if-conditions in call-heavy functions`

- [x] P11-19. cpp_vtable if-recovery

  **What to do**: Profile `cpp_vtable.elf` — IDA expects 2 ifs, we have 0. Vtable dispatch code typically has null-pointer checks and type checks. Investigate whether the missing ifs are from RTTI type checks or vtable pointer validation.
  **Acceptance Criteria**: cpp_vtable if-count ≥ 1.
  **QA Scenarios**: `grep -c "\bif\b" tests/golden/expected/cpp_vtable.c` ≥ 1.
  **Commit**: `fix(struct): recover if-conditions in C++ vtable dispatch patterns`

- [x] P11-20. cpp_rtti goto elimination

  **What to do**: cpp_rtti has 2 gotos. Apply the same goto-to-break/forward-goto-elimination from Wave 1 and verify they resolve. If not, profile the specific pattern and add a targeted fix.
  **Acceptance Criteria**: cpp_rtti gotos = 0.
  **QA Scenarios**: `grep -c "goto" tests/golden/expected/cpp_rtti.c` = 0.
  **Commit**: `fix(struct): eliminate remaining gotos in cpp_rtti fixture`

- [x] P11-21. arm64_features golden entry

  **What to do**: Add `golden_arm64_features` test to `crates/unlace-test-harness/tests/golden_fixtures.rs`. Bootstrap golden with `UPDATE_GOLDEN=1`. Add reference metrics to `tests/golden/reference_metrics.toml`.
  **Acceptance Criteria**: `cargo test -p unlace-test-harness golden_arm64_features` passes.
  **QA Scenarios**:
  ```
  Scenario: arm64_features golden test passes
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness golden_arm64 2>&1 | grep "test result"
    Expected Result: 1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-21-arm64-golden.txt
  ```
  **Commit**: `feat(tests): arm64_features golden fixture entry + reference metrics`

- [x] P11-22. Per-fixture parity check + golden refresh

  **What to do**: Refresh ALL goldens, run per-fixture regression check vs P11-0 baseline. Evidence to `.sisyphus/evidence/p11-22-wave3-delta.txt`.
  **Acceptance Criteria**: No fixture goto regression > 2. cpp_rtti gotos = 0.
  **QA Scenarios**:
  ```
  Scenario: Per-fixture regression check
    Tool: Bash
    Steps:
      1. for f in tests/golden/expected/*.c; do echo "$(basename $f .c) gotos=$(grep -c goto $f)"; done
      2. grep -c "goto" tests/golden/expected/cpp_rtti.c
    Expected Result: cpp_rtti gotos = 0; no fixture increased by >2 vs baseline
    Evidence: .sisyphus/evidence/p11-22-wave3-delta.txt
  ```
  **Commit**: `chore(goldens): Wave 3 fixture parity refresh`

### Wave 4 — Architecture Fixtures (5 tasks)

> MIPS64 has 67 mnemonics/19 tests. RISC-V has 42 mnemonics/43 tests. Both REAL — just need fixtures + golden entries.

- [x] P11-23. MIPS64 ELF fixture

  **What to do**: Hand-craft a minimal MIPS64 big-endian ELF fixture OR find a real MIPS binary in `~/VulnerabilityResearch/` (xr1000_fw has ARM binaries — check for MIPS too). If no real binary, create `fixtures/mips64_features.elf` with the existing Python/byte-crafting pattern from P10-3. Include: ADDIU, LW, SW, BEQ, JAL, JR, LUI, AND, OR, SLT instructions.
  **Acceptance Criteria**: `file fixtures/mips64_features.elf` shows MIPS. `unlace decompile --emit ir` exits 0.
  **QA Scenarios**:
  ```
  Scenario: MIPS64 fixture decompiles
    Tool: Bash
    Steps:
      1. file fixtures/mips64_features.elf
      2. ./target/debug/unlace decompile fixtures/mips64_features.elf --emit ir --timeout 30 -o /tmp/p11-23.ir
      3. grep -c "func " /tmp/p11-23.ir
    Expected Result: file shows MIPS; exit 0; ≥1 function
    Evidence: .sisyphus/evidence/p11-23-mips-fixture.txt
  ```
  **Commit**: `feat(fixtures): MIPS64 ELF fixture for lifter coverage validation`

- [x] P11-24. MIPS64 golden entry + reference metrics

  **What to do**: Add `golden_mips64_features` to golden_fixtures.rs. Bootstrap golden. Add `[mips64_features]` to reference_metrics.toml.
  **Acceptance Criteria**: `cargo test -p unlace-test-harness golden_mips64` passes.
  **QA Scenarios**:
  ```
  Scenario: MIPS64 golden test passes
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness golden_mips64 2>&1 | grep "test result"
    Expected Result: 1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-24-mips64-golden.txt
  ```
  **Commit**: `feat(tests): MIPS64 golden fixture entry + reference metrics`

- [x] P11-25. RISC-V ELF fixture

  **What to do**: Same as P11-23 but for RISC-V RV64I. Create `fixtures/riscv64_features.elf`. Include: ADDI, ADD, LW, SW, BEQ, JAL, JALR, LUI, AND, OR, SLT, MUL instructions.
  **Acceptance Criteria**: `file` shows RISC-V. Decompile exits 0.
  **QA Scenarios**:
  ```
  Scenario: RISC-V fixture decompiles
    Tool: Bash
    Steps:
      1. file fixtures/riscv64_features.elf
      2. ./target/debug/unlace decompile fixtures/riscv64_features.elf --emit ir --timeout 30 -o /tmp/p11-25.ir
      3. grep -c "func " /tmp/p11-25.ir
    Expected Result: file shows RISC-V; exit 0; ≥1 function
    Evidence: .sisyphus/evidence/p11-25-riscv-fixture.txt
  ```
  **Commit**: `feat(fixtures): RISC-V RV64I ELF fixture`

- [x] P11-26. RISC-V golden entry + reference metrics

  **What to do**: Add to golden_fixtures.rs + reference_metrics.toml.
  **Acceptance Criteria**: Golden test passes.
  **QA Scenarios**:
  ```
  Scenario: RISC-V golden test passes
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness golden_riscv 2>&1 | grep "test result"
    Expected Result: 1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-26-riscv-golden.txt
  ```
  **Commit**: `feat(tests): RISC-V golden fixture entry + reference metrics`

- [x] P11-27. Lifter coverage report (Unimplemented count per fixture)

  **What to do**: For each fixture, run `unlace decompile --emit ir` and count `Unimplemented` in the IR output. Record: fixture, total instructions, Unimplemented count, coverage percentage. Save to `.sisyphus/evidence/p11-27-coverage.txt`.
  **Acceptance Criteria**: Evidence file with coverage table for all fixtures.
  **QA Scenarios**:
  ```
  Scenario: Coverage report generated
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p11-27-coverage.txt
      2. grep -c "%" .sisyphus/evidence/p11-27-coverage.txt
    Expected Result: ≥8 fixture rows with coverage percentages
    Evidence: .sisyphus/evidence/p11-27-coverage.txt
  ```
  **Commit**: `chore(boulder): P11-27 lifter coverage report across all fixtures`

### Wave 5 — Go + ObjC (5 tasks)

- [x] P11-28. Go gopclntab parser (function discovery)

  **What to do**: Write `crates/unlace-loader/src/gopclntab.rs`. Parse the `.gopclntab` section in Go ELF binaries. The header has: magic (4 bytes), pad (2 bytes), quantum (1 byte), pointer_size (1 byte), nfunc (u32/u64), then a function table. Each entry: `(func_addr, name_offset)`. Extract function names and addresses into BinaryImage.symbols.
  **Must NOT do**: Parse full Go runtime metadata. Only function discovery.
  **Acceptance Criteria**: ≥1 unit test with synthetic gopclntab section. `cargo test -p unlace-loader gopclntab`.
  **QA Scenarios**:
  ```
  Scenario: gopclntab parser unit test
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader gopclntab 2>&1 | grep "test result"
    Expected Result: ≥1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-28-gopclntab.txt
  ```
  **Commit**: `feat(loader): Go gopclntab function discovery parser`

- [x] P11-29. Go ELF fixture + smoke test

  **What to do**: Check if a real Go binary is available (`which go && go version`). If Go toolchain exists, compile a minimal Go program. If not, hand-craft a minimal ELF with a .gopclntab section. Wire into golden_fixtures.rs if small enough.
  **Acceptance Criteria**: Fixture loads via ElfLoader. gopclntab discovers ≥1 function.
  **QA Scenarios**:
  ```
  Scenario: Go fixture loads
    Tool: Bash
    Steps:
      1. file fixtures/go_hello.elf 2>/dev/null || echo "hand-crafted"
      2. ./target/debug/unlace decompile fixtures/go_hello.elf --emit ir --timeout 30 -o /tmp/p11-29.ir 2>&1 | tail -3
    Expected Result: exit 0 or graceful failure message
    Evidence: .sisyphus/evidence/p11-29-go-fixture.txt
  ```
  **Commit**: `feat(fixtures): Go ELF fixture for gopclntab testing`

- [x] P11-30. ObjC msgSend dispatch recognition

  **What to do**: Write `crates/unlace-passes/src/objc_dispatch.rs`. Recognize `CALLIND(target)` patterns where `target` is loaded from a well-known selector address pattern (objc_msgSend calling convention: X0=self, X1=selector). Emit annotation `// [ClassName methodName]` as a comment before the call.
  **Must NOT do**: Full ObjC runtime parsing. Just dispatch annotation.
  **Acceptance Criteria**: Unit test with synthetic objc_msgSend pattern.
  **QA Scenarios**:
  ```
  Scenario: ObjC dispatch recognition
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes objc_dispatch 2>&1 | grep "test result"
    Expected Result: ≥1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-30-objc.txt
  ```
  **Commit**: `feat(passes): ObjC msgSend dispatch recognition (ARM64)`

- [x] P11-31. ObjC class/selector extraction from __objc_classlist

  **What to do**: Write `crates/unlace-loader/src/objc.rs`. Parse `__DATA.__objc_classlist` section. Store in BinaryImage as metadata.
  **Acceptance Criteria**: Unit test. `cargo test -p unlace-loader objc`.
  **QA Scenarios**:
  ```
  Scenario: ObjC class extraction
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader objc 2>&1 | grep "test result"
    Expected Result: ≥1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-31-objc-loader.txt
  ```
  **Commit**: `feat(loader): ObjC class/selector extraction from __objc_classlist`

- [x] P11-32. iOS KCM ObjC method recovery verification

  **What to do**: Run the ObjC passes on the iOS KCM fixture. Count annotations. Evidence to `.sisyphus/evidence/p11-32-objc.txt`.
  **Acceptance Criteria**: ≥0 ObjC annotations (KCM may not have ObjC — document finding).
  **QA Scenarios**:
  ```
  Scenario: KCM ObjC analysis
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/ios_kcm.arm64.macho --emit c --timeout 60 -o /tmp/p11-32.c
      2. grep -c "objc_msgSend\|\[.*\]" /tmp/p11-32.c
    Expected Result: count captured (may be 0 if KCM is pure C)
    Evidence: .sisyphus/evidence/p11-32-objc.txt
  ```
  **Commit**: `chore(boulder): P11-32 ObjC method recovery evidence`

### Wave 6 — Polish + Final (5 tasks)

- [x] P11-33. Refresh ALL goldens

  **What to do**: `cargo build -p unlace-cli && UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures`. Verify all pass.
  **Acceptance Criteria**: All golden tests pass.
  **QA Scenarios**:
  ```
  Scenario: All goldens refreshed
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures 2>&1 | grep "test result"
    Expected Result: all pass; 0 failed
    Evidence: .sisyphus/evidence/p11-33-goldens.txt
  ```
  **Commit**: `chore(goldens): Phase 11 final golden refresh`

- [x] P11-34. Update reference_metrics.toml for all new fixtures

  **What to do**: Ensure every fixture in golden_fixtures.rs has an entry in reference_metrics.toml.
  **Acceptance Criteria**: `cargo test -p unlace-test-harness reference_metrics_file_loads` passes.
  **QA Scenarios**:
  ```
  Scenario: Reference metrics complete
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness reference_metrics_file_loads 2>&1 | grep "test result"
    Expected Result: 1 passed; 0 failed
    Evidence: .sisyphus/evidence/p11-34-refmetrics.txt
  ```
  **Commit**: `chore(tests): reference metrics complete for all fixtures`

- [x] P11-35. Final aggregate parity score + delta

  **What to do**: `bash scripts/score_parity.sh`. Compare vs P11-0 baseline (59.6%). Evidence to `.sisyphus/evidence/p11-35-final-score.txt`.
  **Acceptance Criteria**: Aggregate parity ≥ 72%.
  **QA Scenarios**:
  ```
  Scenario: Parity score measured
    Tool: Bash
    Steps:
      1. bash scripts/score_parity.sh 2>&1 | grep "Aggregate"
    Expected Result: percentage ≥ 72.0
    Evidence: .sisyphus/evidence/p11-35-final-score.txt
  ```
  **Commit**: `chore(boulder): Phase 11 final parity score`

- [x] P11-36. Phase 11 quality report

  **What to do**: Write `.sisyphus/evidence/p11-36-quality-report.txt` with: test count delta, parity delta, per-fixture goto/if/for deltas, per-wave summary, Phase 12 follow-up notes.
  **Acceptance Criteria**: Report ≥ 80 lines with all 7 waves summarized.
  **QA Scenarios**:
  ```
  Scenario: Quality report generated
    Tool: Bash
    Steps:
      1. wc -l .sisyphus/evidence/p11-36-quality-report.txt
      2. grep -c "Wave " .sisyphus/evidence/p11-36-quality-report.txt
    Expected Result: ≥80 lines; 7 wave entries
    Evidence: .sisyphus/evidence/p11-36-quality-report.txt
  ```
  **Commit**: `chore(boulder): Phase 11 quality report`

- [x] P11-37. Push to GitHub

  **What to do**: `git push origin master`. Verify pre-push hook passes.
  **Acceptance Criteria**: Push succeeds.
  **QA Scenarios**:
  ```
  Scenario: Push succeeds
    Tool: Bash
    Steps:
      1. git push origin master 2>&1 | tail -3
    Expected Result: contains "master -> master"
    Evidence: terminal output
  ```
  **Commit**: NO (push only)

---

## Final Verification Wave (MANDATORY — after ALL implementation tasks)

- [x] P11-F1. **Comprehensive Quality Review** — `general`

  **What to do**:
  - `cargo test --workspace` ≥ 1450, 0 failures
  - `cargo xtask lint-determinism` clean
  - medium.c gotos ≤ 2, for-loops ≥ 3, ifs ≥ 40
  - Aggregate parity ≥ 72%
  - No fixture goto regression > 2 vs Wave 0 baseline
  - MIPS64 + RISC-V fixtures decompile
  - iOS KCM still decompiles ≥3 functions

  **Acceptance Criteria**:
  - [ ] All gates green
  - [ ] Evidence: `.sisyphus/evidence/p11-f1-quality.txt`

  **QA Scenarios**:
  ```
  Scenario: Final verification
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep "^test result:" | awk '{p+=$4; f+=$6} END {print "PASS:"p" FAIL:"f}'
      2. cargo xtask lint-determinism
      3. grep -c "goto" tests/golden/expected/medium.c
      4. bash scripts/score_parity.sh
    Expected Result: ≥1450 tests, 0 fail, gotos ≤2, parity ≥72%
    Evidence: .sisyphus/evidence/p11-f1-quality.txt
  ```

  **Commit**: NO (verification only)

---

## Commit Strategy

One commit per task, conventional commit format.

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace  # ≥ 1450 tests, 0 fail
cargo xtask lint-determinism  # OK
grep -c "goto" tests/golden/expected/medium.c  # ≤ 2
bash scripts/score_parity.sh  # ≥ 72%
```

### Final Checklist
- [ ] All "Must Have" present
- [ ] All "Must NOT Have" absent
- [ ] All implementation tasks complete
- [ ] Pushed to GitHub
