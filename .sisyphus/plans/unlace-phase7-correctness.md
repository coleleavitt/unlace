# unlace Phase 7 — Control Flow Correctness + Stable Measurement

## TL;DR

> **Quick Summary**: Fix the fundamental quality issues by (1) creating fixture-based golden tests as stable measurement, (2) investigating and fixing why debug fixtures produce 0 if-branches, (3) adding global optimization passes (cross-block copy propagation, global value numbering), (4) integrating DWARF local variable names into stack frame recovery, and (5) improving output quality (variable naming, complex casts).
>
> **Key Insight**: The 0-ifs on debug_structs/debug_calls is NOT a structurer bug — it's likely a CFG edge classification issue for `-O0` code patterns. The structurer correctly walks entry-reachable blocks; the blocks just don't have conditional edges.
>
> **Scope**: 22 tasks across 5 waves — focused on correctness over features. C++ support deferred to Phase 8 (no test fixtures).
>
> **Estimated Effort**: Medium-Large (5 waves, 22 tasks)
> **Parallel Execution**: YES — 3-4 concurrent tasks per wave
> **Critical Path**: Investigate 0-ifs → Fix CFG edges → Golden tests → Global optimization

---

## Context

### Phase 6 Results
- 1200 tests passing across 16 crates (52K LOC)
- Phase 6 added: Type enum wrapper, 40 simplification rules, libc signatures, DWARF integration, prologue scanner fix, block merging, goto emission, multiple returns, switch validation
- Parity metric unstable (regressed from 53% to 17% due to function discovery changes)

### Fixture Output Quality
| Fixture | Lines | Ifs | Returns | Issue |
|---------|-------|-----|---------|-------|
| medium.elf | 947 | 37 | 3 | Moderate quality |
| debug_structs.elf | 199 | 0 | 2 | **0 ifs — broken** |
| debug_calls.elf | 697 | 0 | 7 | **0 ifs — broken** |
| debug_hello.elf | 108 | 0 | 0 | Simple function, may be correct |

### Metis Review Key Points
1. The 0-ifs is NOT a structurer bug — it's upstream (CFG edge classification for `-O0` code)
2. Fixture-based golden tests are the right measurement approach
3. C++ support deferred — no test fixtures to validate against
4. Cap at 20-25 tasks for this phase
5. Investigate before implementing (Task 0.1 determines Wave 1 scope)

---

## Work Objectives

### Core Objective
Fix control flow correctness on debug fixtures (0 ifs → correct ifs), establish stable measurement via golden tests, and add global optimization for output quality.

### Definition of Done
- [ ] debug_calls.elf produces ≥ 5 if-branches (currently 0)
- [ ] debug_structs.elf produces ≥ 1 if-branch or correct struct access
- [ ] Golden tests pass for all 4 fixtures
- [ ] `cargo test --workspace` passes with ≥ 1220 tests
- [ ] `cargo xtask lint-determinism` passes

### Must NOT Have (Guardrails)
- No C++ RTTI/exception handling (no test fixtures — defer to Phase 8)
- No C++ name demangling (defer to Phase 8)
- No hexx64.so parity metric changes (use fixture-based measurement only)
- No prologue scanner changes (already hardened in Phase 6)
- No new crates (all work fits in existing crates)
- No HashMap/HashSet (BTreeMap only, lint enforced)
- No more than 22 tasks

---

## Verification Strategy

### Per-Wave Gate
```bash
cargo test --workspace  # ≥ 1200
cargo xtask lint-determinism  # OK
# Fixture quality checks
./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -c "if"
./target/debug/unlace decompile fixtures/debug_structs.elf 2>/dev/null | grep -c "if"
```

---

## Execution Strategy

### Wave Overview
```
Wave 0 (Investigation + Measurement Foundation — 4 tasks):
├── P7-0: Investigate debug_calls.elf 0-ifs root cause (CFG edges? Lifter? -O0 patterns?)
├── P7-1: Create fixture-based golden test infrastructure
├── P7-2: Capture baseline golden snapshots for all 4 fixtures
└── P7-3: Capture baseline metrics (if_count, loop_count, var_count per fixture)

Wave 1 (Control Flow Correctness — 5 tasks, scope from P7-0):
├── P7-4: Fix root cause of 0-ifs on debug fixtures (based on investigation)
├── P7-5: Verify debug_calls.elf functions produce correct if-branches
├── P7-6: Verify debug_structs.elf functions produce correct struct access
├── P7-7: Update golden snapshots after fixes
└── P7-8: Measure improvement on all fixtures

Wave 2 (Global Optimization — 4 tasks):
├── P7-9: Global copy propagation (cross-block, beyond intra-block COPY chains)
├── P7-10: Global value numbering (extend CSE beyond dominator-tree scope)
├── P7-11: Dead store elimination improvements (alias-aware for stack slots)
└── P7-12: Measure optimization impact on fixture output

Wave 3 (Stack Frame + DWARF Integration — 4 tasks):
├── P7-13: Integrate DWARF local variable names into stack_vars pass
├── P7-14: Struct field layout inference from adjacent stack offsets
├── P7-15: Propagate Type enum through type inference lattice (not just PrimitiveType)
└── P7-16: Array stride detection for stack-allocated arrays

Wave 4 (Output Quality — 4 tasks):
├── P7-17: Variable naming heuristics (type-based: ptr, idx, result, buf)
├── P7-18: Complex cast emission (pointer casts, struct casts, function pointer casts)
└── P7-19: Final golden file updates and measurement

Wave FINAL (Verification — 3 tasks):
├── P7-F1: Code quality review
├── P7-F2: Fixture golden test verification
└── P7-F3: Regression check
```

---

## TODOs

- [x] P7-0. Investigate debug_calls.elf 0-ifs root cause

  **What to do**:
  - Run `./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null` and examine output for each function
  - Check if CBRANCH instructions exist in the lifted IR for functions with conditionals (abs_val, max, min, clamp)
  - Check if CFG has ConditionalTrue/ConditionalFalse edges
  - If no CBRANCH: the lifter isn't recognizing conditional branches in `-O0` code
  - If CBRANCH exists but no ifs in output: the structurer isn't matching the CFG pattern
  - Classify root cause: LIFTER / CFG_BUILDER / STRUCTURER / OUTPUT
  - Document in `.sisyphus/evidence/p7-0-investigation.txt`

  **QA Scenarios**:
  ```
  Scenario: Investigation complete
    Tool: Bash
    Steps:
      1. cat .sisyphus/evidence/p7-0-investigation.txt | grep "Root cause"
      2. Assert file exists with classification
    Expected Result: Root cause identified and classified
    Evidence: .sisyphus/evidence/p7-0-investigation.txt
  ```

  **Commit**: `chore: investigate 0-ifs root cause on debug fixtures`

- [x] P7-1. Create fixture-based golden test infrastructure

  **What to do**:
  - In `crates/unlace-test-harness/` or `tests/`:
    - Create golden test runner that decompiles each fixture and compares against expected output
    - Use structural comparison (AST equivalence via tree-sitter or line-based diff)
    - For medium.elf: use feature metrics (if_count, var_count, etc.) not full golden comparison
    - For debug fixtures: use snapshot testing (capture → review → approve → regression detect)
  - Create `tests/golden/expected/` directory for golden files
  - Add `cargo test --test golden` command

  **QA Scenarios**:
  ```
  Scenario: Golden test infrastructure works
    Tool: Bash
    Steps:
      1. cargo test --test golden 2>/dev/null || cargo test -p unlace-test-harness -- golden
      2. Assert tests run (may fail on first run before snapshots approved)
    Expected Result: Golden test runner exists and executes
    Evidence: .sisyphus/evidence/p7-1-golden.txt
  ```

  **Commit**: `feat(tests): fixture-based golden test infrastructure`

- [x] P7-2. Capture baseline golden snapshots

  **What to do**:
  - Run unlace on all 4 fixtures, capture output as golden snapshots
  - Store in `tests/golden/expected/` or equivalent
  - For debug_structs: 3 functions (area, offset, main)
  - For debug_calls: ~11 functions
  - For debug_hello: 1 function (main)
  - For medium.elf: full output (~947 lines)
  - These become the regression ratchet — improvements update them, regressions fail

  **QA Scenarios**:
  ```
  Scenario: Baseline snapshots captured
    Tool: Bash
    Steps:
      1. ls tests/golden/expected/*.c 2>/dev/null || ls tests/golden/expected/*.txt 2>/dev/null
      2. Assert ≥ 4 golden files exist
    Expected Result: Golden files for all 4 fixtures
    Evidence: .sisyphus/evidence/p7-2-baseline.txt
  ```

  **Commit**: `chore: capture baseline golden snapshots for all fixtures`

- [x] P7-3. Capture baseline metrics

  **What to do**:
  - For each fixture, record:
    - Line count
    - if-branch count
    - for-loop count
    - while-loop count
    - return count
    - variable count
    - goto count
  - Store in `.sisyphus/evidence/p7-3-metrics.txt`
  - These metrics track progress through subsequent waves

  **QA Scenarios**:
  ```
  Scenario: Metrics captured
    Tool: Bash
    Steps:
      1. cat .sisyphus/evidence/p7-3-metrics.txt
      2. Assert file has metrics for all 4 fixtures
    Expected Result: Baseline metrics documented
    Evidence: .sisyphus/evidence/p7-3-metrics.txt
  ```

  **Commit**: NO (measurement only)

- [x] P7-4. Fix root cause of 0-ifs on debug fixtures

  **What to do**:
  - Based on P7-0 investigation, apply targeted fix
  - Possible fixes depending on root cause:
    - **LIFTER**: Jcc instructions not lifted for certain addressing modes → add match arms
    - **CFG_BUILDER**: Conditional edges not created for CBRANCH → fix edge classification
    - **STRUCTURER**: Pattern not matched for -O0 CFG shapes → add pattern
    - **OUTPUT**: Structured AST not emitted as if/else → fix C printer
  - This is the most critical task — determines quality of all subsequent work

  **QA Scenarios**:
  ```
  Scenario: debug_calls.elf produces if-branches
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -c "if"
      2. Assert count ≥ 3
    Expected Result: Functions with conditionals produce if-branches
    Evidence: .sisyphus/evidence/p7-4-fix.txt
  ```

  **Commit**: `fix: root cause of 0-ifs on debug fixtures`

- [x] P7-5. Verify debug_calls.elf correctness

  **What to do**:
  - Decompile debug_calls.elf and verify each function produces reasonable output
  - Functions to check: add (should show `return a + b`), abs_val (should show `if`), max/min (should show `if`/ternary), clamp (should show nested `if`)
  - Compare against source code (if available in fixtures/)
  - Update golden snapshots with improved output

  **QA Scenarios**:
  ```
  Scenario: debug_calls functions are correct
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -cE "if|return"
      2. Assert count ≥ 10
    Expected Result: All functions produce reasonable decompiled output
    Evidence: .sisyphus/evidence/p7-5-calls.txt
  ```

  **Commit**: `chore: verify and update debug_calls.elf golden output`

- [x] P7-6. Verify debug_structs.elf correctness

  **What to do**:
  - Decompile debug_structs.elf and verify struct access patterns
  - Functions to check: area (should show `r->size.x * r->size.y` or equivalent)
  - Verify DWARF struct field names appear in output (from Phase 6 P6-20)
  - Update golden snapshots

  **QA Scenarios**:
  ```
  Scenario: debug_structs shows struct access
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/debug_structs.elf 2>/dev/null | grep -cE "->|struct"
      2. Assert count ≥ 1
    Expected Result: Struct member access appears in output
    Evidence: .sisyphus/evidence/p7-6-structs.txt
  ```

  **Commit**: `chore: verify and update debug_structs.elf golden output`

- [x] P7-7. Update golden snapshots after fixes

  **What to do**:
  - Re-capture golden snapshots with improved output from P7-4/5/6
  - Verify golden tests pass with new snapshots
  - These become the new regression baseline

  **QA Scenarios**:
  ```
  Scenario: Golden tests pass
    Tool: Bash
    Steps:
      1. cargo test --test golden 2>/dev/null || cargo test -p unlace-test-harness -- golden
      2. Assert all golden tests pass
    Expected Result: Updated golden files match current output
    Evidence: .sisyphus/evidence/p7-7-golden.txt
  ```

  **Commit**: `chore: update golden snapshots after control flow fixes`

- [x] P7-8. Measure Wave 1 improvement

  **What to do**:
  - Re-run metrics from P7-3 and compare
  - Document improvement in if_count, return_count, etc.

  **QA Scenarios**:
  ```
  Scenario: Metrics improved
    Tool: Bash
    Steps:
      1. for f in debug_calls debug_structs; do echo "$f: $(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | grep -c 'if') ifs"; done
      2. Assert debug_calls ifs ≥ 3 (was 0)
    Expected Result: Significant improvement on debug fixtures
    Evidence: .sisyphus/evidence/p7-8-metrics.txt
  ```

  **Commit**: NO (measurement only)

- [x] P7-9. Global copy propagation

  **What to do**:
  - WRITE `crates/unlace-passes/src/global_copy_prop.rs` (new pass)
  - Current CopyPropagationPass only handles explicit COPY instructions within a block
  - Global copy propagation tracks value equivalence across basic blocks via the dominator tree
  - Algorithm:
    1. For each COPY instruction `dst = src`, record the equivalence
    2. Walk the dominator tree; at each use site, check if the value has a known equivalent
    3. Replace uses with the original source (skip if the equivalence is killed by a redefinition)
  - Add to pipeline after existing CopyPropagationPass

  **QA Scenarios**:
  ```
  Scenario: Cross-block copies propagated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- global_copy
      2. Assert tests pass
    Expected Result: Values propagated across basic blocks
    Evidence: .sisyphus/evidence/p7-9-gcopy.txt
  ```

  **Commit**: `feat(passes): global copy propagation (cross-block value equivalence)`

- [x] P7-10. Global value numbering

  **What to do**:
  - WRITE `crates/unlace-passes/src/gvn.rs` (new pass)
  - Current CSE is dominator-tree scoped — misses redundancies across non-dominating paths
  - GVN assigns unique "value numbers" to expressions; identical expressions get the same number
  - Algorithm (RPO-based):
    1. Walk blocks in reverse post-order
    2. For each instruction, compute a hash of (opcode, input value numbers)
    3. If hash already exists in the table, replace instruction output with existing value
    4. Otherwise, add new entry to value number table
  - This subsumes basic CSE and catches more redundancies

  **QA Scenarios**:
  ```
  Scenario: Redundant expressions eliminated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- gvn
      2. Assert tests pass
    Expected Result: More common subexpressions eliminated than basic CSE
    Evidence: .sisyphus/evidence/p7-10-gvn.txt
  ```

  **Commit**: `feat(passes): global value numbering (GVN)`

- [x] P7-11. Dead store elimination improvements

  **What to do**:
  - Extend `crates/unlace-passes/src/dead_store_elim.rs`:
    - Currently only eliminates stores to the SAME exact address varnode
    - Add: for stack slots (RSP/RBP-relative), treat stores to the same stack offset as aliasing even if the address varnode differs
    - This eliminates redundant stack spills that `-O0` code generates heavily

  **QA Scenarios**:
  ```
  Scenario: Stack slot dead stores eliminated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- dead_store
      2. Assert tests pass
    Expected Result: Redundant stack spills eliminated
    Evidence: .sisyphus/evidence/p7-11-dse.txt
  ```

  **Commit**: `feat(passes): alias-aware dead store elimination for stack slots`

- [x] P7-12. Measure Wave 2 optimization impact

  **QA Scenarios**:
  ```
  Scenario: Optimization reduces variable count
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -cE "v[0-9]+"
      2. Compare against baseline
    Expected Result: Fewer variables in output
    Evidence: .sisyphus/evidence/p7-12-metrics.txt
  ```

  **Commit**: NO (measurement only)

- [x] P7-13. Integrate DWARF local variable names into stack_vars

  **What to do**:
  - In `crates/unlace-passes/src/stack_vars.rs`:
    - After stack variable recovery, check if DWARF info has local variable names for the current function
    - If DWARF provides a name for a stack offset → use that name instead of generated `v1, v2, ...`
    - Access DWARF via a new field on SsaFunction or passed through pipeline context
  - Verify on debug_structs.elf and debug_calls.elf which have DWARF info

  **QA Scenarios**:
  ```
  Scenario: DWARF variable names appear
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- dwarf_stack
      2. ./target/debug/unlace decompile fixtures/debug_calls.elf 2>/dev/null | grep -vE "^(typedef|#define|//|_QWORD|_DWORD|void|$)" | head -20
    Expected Result: Some variables have DWARF-derived names
    Evidence: .sisyphus/evidence/p7-13-dwarf.txt
  ```

  **Commit**: `feat(passes): DWARF local variable names in stack_vars recovery`

- [x] P7-14. Struct field layout inference from adjacent stack offsets

  **What to do**:
  - In `crates/unlace-passes/src/stack_vars.rs` or new pass:
    - When multiple stack accesses at consecutive offsets have compatible types, infer a struct
    - Example: [rsp+0] int, [rsp+4] int, [rsp+8] ptr → struct { int a; int b; void *c; }
    - Create a RecoveredStruct and store in SsaFunction
    - Use the Type::Struct from Phase 6's Type enum

  **QA Scenarios**:
  ```
  Scenario: Adjacent stack offsets form structs
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- struct_infer
      2. Assert tests pass
    Expected Result: Adjacent stack accesses grouped into struct types
    Evidence: .sisyphus/evidence/p7-14-struct.txt
  ```

  **Commit**: `feat(passes): struct field layout inference from adjacent stack offsets`

- [x] P7-15. Propagate Type enum through type inference

  **What to do**:
  - Currently TypeInferPass only works with PrimitiveType
  - Extend to use the Type enum from Phase 6 (crates/unlace-ir/src/types.rs)
  - When DWARF provides struct types, feed them into the type inference lattice
  - When stack_vars creates RecoveredStruct, use Type::Struct in the lattice
  - The lattice join for composite types: Type::Struct only joins with itself (same name) or Unknown

  **QA Scenarios**:
  ```
  Scenario: Composite types propagated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- type_propagate
      2. Assert tests pass
    Expected Result: Struct/array types flow through type inference
    Evidence: .sisyphus/evidence/p7-15-type.txt
  ```

  **Commit**: `feat(passes): propagate composite Type enum through type inference lattice`

- [x] P7-16. Array stride detection

  **What to do**:
  - In type inference or a new pass:
    - When pointer arithmetic has pattern `base + index * constant_stride`:
      - Infer element type from stride: stride=1 → _BYTE, stride=2 → _WORD, stride=4 → _DWORD, stride=8 → _QWORD
      - Create Type::Array with inferred element type
    - Feed into Type inference lattice

  **QA Scenarios**:
  ```
  Scenario: Array types inferred from stride
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- array_stride
      2. Assert tests pass
    Expected Result: Pointer arithmetic with stride → array type
    Evidence: .sisyphus/evidence/p7-16-array.txt
  ```

  **Commit**: `feat(passes): array stride detection for type inference`

- [x] P7-17. Variable naming heuristics

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When no DWARF name is available, use type-based naming:
      - Pointer type → `ptr`, `pN` (p1, p2, p3)
      - Integer used as index → `idx`, `iN`
      - Integer used as counter → already handled by i/j/k from Phase 6
      - Return value → `result`
      - Boolean → `cond`, `flag`
      - String pointer → `str`, `s`
    - Apply heuristics based on how the variable is used (not just its type)

  **QA Scenarios**:
  ```
  Scenario: Semantic variable names
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- var_naming
      2. Assert tests pass
    Expected Result: Variables have semantic names (result, ptr, idx)
    Evidence: .sisyphus/evidence/p7-17-naming.txt
  ```

  **Commit**: `feat(output): variable naming heuristics (type-based: ptr, idx, result)`

- [x] P7-18. Complex cast emission

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Improve cast emission for complex types:
      - Pointer-to-struct: `(struct Foo *)v3`
      - Function pointer: `((int (*)(int, int))v3)(a, b)`
      - Array cast: `(int (*)[10])v3`
    - Use the Type enum from Phase 6 to format casts
    - When Type is Ptr(Struct{...}): emit the struct name in the cast
    - When Type is FuncPtr{...}: emit full function pointer syntax

  **QA Scenarios**:
  ```
  Scenario: Complex casts formatted correctly
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- complex_cast
      2. Assert tests pass
    Expected Result: Struct pointer and function pointer casts formatted properly
    Evidence: .sisyphus/evidence/p7-18-casts.txt
  ```

  **Commit**: `feat(output): complex cast emission (struct pointers, function pointers)`

- [x] P7-19. Final golden file updates and measurement

  **What to do**:
  - Re-capture golden snapshots with all improvements
  - Run full metric comparison against P7-3 baseline
  - Document all improvements in evidence file
  - Verify all golden tests pass

  **QA Scenarios**:
  ```
  Scenario: Final golden tests pass
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. cargo test --test golden 2>/dev/null || echo "golden test location may vary"
      3. Assert all pass
    Expected Result: All 1220+ tests pass, golden files updated
    Evidence: .sisyphus/evidence/p7-19-final.txt
  ```

  **Commit**: `chore: final golden file updates for Phase 7`

---

## Final Verification Wave

- [x] P7-F1. **Code Quality Review** — `general`

  **QA Scenarios**:
  ```
  Scenario: Build + test + lint
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. cargo xtask lint-determinism
      3. Assert 0 failures and lint OK
    Expected Result: ≥ 1220 tests pass, determinism maintained
    Evidence: .sisyphus/evidence/p7-f1-quality.txt
  ```

- [x] P7-F2. **Fixture Golden Test Verification** — `general`

  **QA Scenarios**:
  ```
  Scenario: All fixtures produce quality output
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello; do echo "$f: $(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | grep -c 'if') ifs"; done
      2. Assert debug_calls ifs ≥ 3, medium ifs ≥ 30
    Expected Result: All fixtures produce structurally correct output
    Evidence: .sisyphus/evidence/p7-f2-golden.txt
  ```

- [x] P7-F3. **Regression Check** — `general`

  **QA Scenarios**:
  ```
  Scenario: No regressions
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello; do ./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l; done
      2. cargo test --workspace 2>&1 | grep -c FAILED
      3. Assert all fixtures produce output and 0 failures
    Expected Result: All 4 fixtures decompile, 0 test failures
    Evidence: .sisyphus/evidence/p7-f3-regression.txt
  ```

---

## Commit Strategy
- Wave 0: 3 commits + 1 measurement
- Wave 1: 4 commits + 1 measurement
- Wave 2: 3 commits + 1 measurement
- Wave 3: 4 commits
- Wave 4: 3 commits
- Final: `chore: Phase 7 complete — N/N tasks, X tests`

## Success Criteria

### Final Checklist
- [ ] debug_calls.elf produces ≥ 5 if-branches
- [ ] debug_structs.elf produces struct access patterns
- [ ] Golden tests pass for all 4 fixtures
- [ ] All tests pass (≥ 1220)
- [ ] Lint determinism OK
- [ ] Pushed to GitHub
