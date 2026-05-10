# IDA HexRays Full Parity — Complete Implementation Plan

## TL;DR

> **Quick Summary**: Achieve 100% feature parity with IDA HexRays decompiler output across ALL patterns — expression simplification, control flow recovery, type system, output formatting, and advanced features. Many algorithms already exist in unlace but are incomplete or not firing; this plan fixes them and adds what's missing.
> 
> **Deliverables**:
> - All 150 IDA golden C files producible by unlace
> - 60+ new expression simplification rules
> - Full switch/ternary/for-loop/short-circuit recovery
> - Recursive type system with struct/array/function pointer support
> - IDA-style output formatting (__int64, _QWORD, LOBYTE, etc.)
> - Stack canary elimination, SIMD intrinsics, C++ exception handling
> - Expanded test infrastructure with new fixtures and metrics
> 
> **Estimated Effort**: XL (multi-week)
> **Parallel Execution**: YES - 8 waves
> **Critical Path**: Wave 1 (foundation) → Wave 2 (simplification) → Wave 3 (control flow) → Wave 4 (types) → Wave 5 (advanced) → Wave 6 (polish) → Wave 7 (integration) → FINAL

---

## Context

### Original Request
User wants 100% parity with IDA HexRays decompiler output — every single pattern IDA produces must be handled by unlace, no exceptions.

### Interview Summary
**Key Discussions**:
- Current state: 14/14 golden fixtures at 100% on CURRENT metrics (if/for/while/return/goto/variable_count)
- But current metrics only measure 6 things — many IDA patterns aren't scored yet
- Many algorithms ALREADY EXIST but are incomplete/not firing: switch_recovery (647 LOC), ternary_recovery (296 LOC), while_to_for (652 LOC), short_circuit (914 LOC), struct_field_detect (230 LOC), condition_simplify (1557 LOC), type_infer (1448 LOC)
- IDA golden has 150 per-function C files from a specific binary in `tests/golden/x86_64/`
- 8,398 IDA-decompiled-IDA C files in `references/hexrays/ida_dump/hexx64/all/`
- HexRays internal pipeline extracted from hexx64.so binary strings

**Research Findings**:
- IDA's pipeline: MMAT_ZERO → GENERATED → PREOPTIMIZED → LOCOPT → CALLS → GLBOPT1/2/3 → LVARS → FINAL
- Named passes: CONVERT_IF_TO_SET (ternary), RESOLVE_TABLE_JUMP (switch), COLLAPSE_LVARS, EXTRACT_EQUAL_IF_TAIL_INSNS, REMOVE_USELESS_JX_VALRANGES, etc.
- Prior analysis in /tmp/*.md files: 60+ simplification rules cataloged, 13 control flow algorithms prioritized, 15 type system gaps identified, 22 missing passes documented

### Metis Review
**Identified Gaps** (addressed):
- Must validate that existing passes actually fire before writing new ones
- Test infrastructure needs expansion before measuring improvements
- Expression simplification rules need unit tests with SSA IR, not just golden file comparison
- Type system needs recursive representation before struct/array/function pointer support

---

## Work Objectives

### Core Objective
Make unlace produce output equivalent to IDA HexRays for all 150 golden reference files and all known pattern categories.

### Concrete Deliverables
- Expanded `reference_metrics.toml` with switch/ternary/struct/array/cast/goto metrics
- New test fixtures exercising all pattern categories
- 60+ new expression simplification rules across existing and new passes
- Fixed and enhanced control flow passes (switch, ternary, for-loop, short-circuit, goto)
- Recursive type system with composite type inference
- IDA-style C output formatting (types, macros, annotations)
- Advanced features: stack canary elimination, SIMD, C++ exception/RTTI

### Definition of Done
- [ ] `cargo test --workspace` passes with 0 failures
- [ ] All 150 IDA golden files can be decompiled without panic
- [ ] New metrics show ≥80% parity across all pattern categories
- [ ] Every existing pass confirmed firing on relevant fixtures

### Must Have
- All Tier 1 patterns (18 patterns from golden analysis)
- All Tier 2 patterns (8 patterns from golden analysis)
- All 60+ expression simplification rules from /tmp/ida_simplification_rules.md
- All 13 control flow algorithms from /tmp/prioritized_algorithms.md
- All 15 type system features from /tmp/type_system_analysis.md

### Must NOT Have (Guardrails)
- No interactive/GUI features (user-renamable variables, comment persistence)
- No FLIRT-style signature database (too large a scope — use symbol table only)
- No PDB support changes (Windows-specific, out of scope)
- No new architecture backends (x86-64 only for parity work)
- No interprocedural analysis (function inlining, whole-program optimization)
- No changes to the ELF loader beyond what's needed for jump table data

---

## Verification Strategy

> **ZERO HUMAN INTERVENTION** - ALL verification is agent-executed. No exceptions.

### Test Decision
- **Infrastructure exists**: YES (cargo test, golden_fixtures test harness)
- **Automated tests**: YES (Tests-after — unit tests for new rules, golden tests for integration)
- **Framework**: cargo test (Rust built-in)

### QA Policy
Every task MUST include agent-executed QA scenarios.
Evidence saved to `.sisyphus/evidence/task-{N}-{scenario-slug}.{ext}`.

**Standard QA Template** (for tasks that don't specify custom scenarios):
```
Scenario: Unit tests pass
  Tool: Bash
  Steps:
    1. Run: cargo test -p {relevant_crate} --lib -- --nocapture 2>&1 | grep 'test result'
    2. Assert: 0 failures
  Expected Result: All unit tests in changed crate pass
  Evidence: .sisyphus/evidence/task-{N}-unit-tests.txt

Scenario: No workspace regressions
  Tool: Bash
  Steps:
    1. Run: cargo test --workspace 2>&1 | tail -5
    2. Assert: "test result: ok. N passed; 0 failed"
  Expected Result: Zero failures across entire workspace
  Failure Indicators: Any "FAILED" in output
  Evidence: .sisyphus/evidence/task-{N}-regression.txt

Scenario: Feature appears in decompiled output
  Tool: Bash
  Steps:
    1. Run: unlace decompile fixtures/medium.elf --emit c 2>/dev/null | grep -c '{expected_pattern}'
    2. Assert: count >= 1
  Expected Result: The implemented feature's output pattern is visible
  Evidence: .sisyphus/evidence/task-{N}-feature-output.txt
```

All tasks below use this standard template UNLESS they specify custom QA scenarios that override it.
The executing agent MUST run all three standard scenarios plus any custom scenarios listed in the task.

- **Pass correctness**: `cargo test -p unlace-passes --lib` for unit tests
- **Golden parity**: `cargo test -p unlace-test-harness --test golden_fixtures` for integration
- **No regressions**: Full `cargo test --workspace` must pass
- **Output inspection**: Decompile specific fixtures and grep for expected patterns

---

## Execution Strategy

### Parallel Execution Waves

```
Wave 1 (Foundation — test infrastructure + pass validation):
├── Task 1: Expand reference_metrics.toml with new metric categories [general]
├── Task 2: Add new test fixtures covering all pattern categories [general]
├── Task 3: Validate existing passes fire correctly (switch, ternary, for-loop, short-circuit) [general]
├── Task 4: Add tracing instrumentation to all structuring passes [general]
├── Task 5: Create algebraic_simplify.rs pass skeleton [general]

Wave 2 (Expression Simplification — 60+ rules):
├── Task 6: Algebraic identities (15 rules) [general]
├── Task 7: Bitwise patterns (18 rules) [general]
├── Task 8: Comparison simplifications (16 rules) [general]
├── Task 9: Conversion canonicalization (12 rules) [general]
├── Task 10: Multiplication/division patterns (10 rules) [general]
├── Task 11: Memory access patterns (8 rules) [general]
├── Task 12: Piece/subpiece patterns (7 rules) [general]

Wave 3 (Control Flow Refinement — fix existing + add missing):
├── Task 13: Fix switch_recovery.rs — make it fire on medium.elf (depends: 3) [general]
├── Task 14: Fix ternary_recovery.rs — CONVERT_IF_TO_SET equivalent (depends: 3) [general]
├── Task 15: Enhance while_to_for.rs — init/cond/step extraction (depends: 3) [general]
├── Task 16: Enhance short_circuit.rs — compound boolean recovery (depends: 3) [general]
├── Task 17: Implement goto generation for unstructurable CFG regions [general]
├── Task 18: Implement do-while detection improvement [general]
├── Task 19: Implement sentinel loop detection [general]
├── Task 20: Implement irreducible CFG handling (node splitting) [general]

Wave 4 (Type System + Output Formatting):
├── Task 21: Recursive type system (replace PrimitiveType with recursive Type enum) [deep]
├── Task 22: IDA type output (__int64, _QWORD, _DWORD, _BYTE, unsigned variants) [general]
├── Task 23: Cast insertion pass (sign-extension, truncation, pointer arithmetic) [general]
├── Task 24: Array index recovery (stride inference, LOAD(base+idx*stride) → base[idx]) [general]
├── Task 25: Struct field access recovery (offset-to-field mapping) [general]
├── Task 26: Function pointer type rendering [general]
├── Task 27: LOBYTE/HIBYTE/LODWORD/HIDWORD macro generation [general]

Wave 5 (Advanced Features):
├── Task 28: Stack canary recognition + elimination (__readfsqword(0x28u)) [general]
├── Task 29: Calling convention annotation (__fastcall in signatures) [general]
├── Task 30: Compound assignment recovery (+=, -=, &=, |=) [general]
├── Task 31: Increment/decrement recovery (++i, i--) [general]
├── Task 32: Variable naming conventions (v1/v2, a1/a2, result) [general]
├── Task 33: Register comments (// rax, // rbx annotations) [general]
├── Task 34: Stack frame annotations ([rsp+offset] [rbp-offset] BYREF) [general]

Wave 6 (C++ + SIMD + Polish):
├── Task 35: C++ exception handling (__cxa_allocate_exception, __cxa_throw) [general]
├── Task 36: C++ RTTI/vtable enhancement (CppVtablePass improvement) [general]
├── Task 37: SIMD type support (__m128, __m128i, __m256) [general]
├── Task 38: SIMD intrinsic recognition (_mm_loadu_si128, _mm_storeu_si128) [general]
├── Task 39: Floating-point simplification rules (8 rules) [general]
├── Task 40: De Morgan's law + comparison negation enhancement [general]

Wave 7 (Integration + Metrics):
├── Task 41: Wire all new passes into pipeline.rs in correct order [general]
├── Task 42: Update golden expected output files [general]
├── Task 43: Expand scoring function with new metrics [general]
├── Task 44: Run full 150-file IDA golden comparison and report gaps [general]

Wave FINAL (After ALL tasks — 4 parallel reviews, then user okay):
├── Task F1: Plan compliance audit (oracle)
├── Task F2: Code quality review (general)
├── Task F3: Real manual QA (general)
└── Task F4: Scope fidelity check (general)
-> Present results -> Get explicit user okay
```

### Dependency Matrix

| Task | Depends On | Blocks | Wave |
|------|-----------|--------|------|
| 1-5 | None | 6-44 | 1 |
| 6-12 | 5 | 41 | 2 |
| 13-20 | 3 | 41, 42 | 3 |
| 21 | None | 22-27, 29 | 4 |
| 22-27 | 21 | 41, 42 | 4 |
| 28-34 | None | 41, 42 | 5 |
| 35-40 | 21 | 41, 42 | 6 |
| 41-44 | All prior | F1-F4 | 7 |
| F1-F4 | 41-44 | User okay | FINAL |

### Agent Dispatch Summary

| Wave | Tasks | Agent |
|------|-------|-------|
| 1 | 5 | general |
| 2 | 7 | general |
| 3 | 8 | general |
| 4 | 7 | general + deep (T21) |
| 5 | 7 | general |
| 6 | 6 | general |
| 7 | 4 | general |
| FINAL | 4 | oracle + general |

---

## TODOs

### Wave 1: Foundation + Test Infrastructure

- [ ] 1. Expand reference_metrics.toml with new metric categories

  **What to do**:
  - Add `switch_count`, `ternary_count`, `do_while_count`, `goto_count`, `struct_access_count`, `array_access_count`, `cast_count`, `compound_assign_count` fields to `reference_metrics.toml`
  - For each of the 14 existing fixtures, populate the new fields by counting patterns in IDA golden reference output (decompile with IDA or count manually from the golden files)
  - Update the `Metrics` struct in the test harness to include the new fields
  - Update the `extract_metrics()` function to count the new patterns via regex on the C output
  - Update the `score()` function to weight the new metrics (switch=3.0, ternary=2.0, struct=2.0, array=2.0, cast=1.0, compound_assign=1.0)

  **Must NOT do**:
  - Do not change the existing 6 metric weights or break existing 100% scores
  - Do not remove any existing fixtures

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]
    - `rust-style`: Idiomatic Rust struct/enum patterns for the Metrics struct

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 2, 3, 4, 5)
  - **Blocks**: Tasks 42, 43
  - **Blocked By**: None

  **References**:

  **Pattern References**:
  - `tests/golden/reference_metrics.toml` — Current metrics definitions (add new fields here)
  - `crates/unlace-test-harness/tests/golden_fixtures.rs:80-160` — `Metrics` struct, `extract_metrics()`, `score()` functions (extend all three)

  **API/Type References**:
  - `crates/unlace-test-harness/tests/golden_fixtures.rs:113` — `Metrics` struct fields to extend

  **External References**:
  - `tests/golden/x86_64/*.c` — IDA golden C files to count patterns from for populating new metric values

  **Acceptance Criteria**:

  - [ ] `reference_metrics.toml` has all new fields for all 14 fixtures
  - [ ] `cargo test -p unlace-test-harness --test golden_fixtures` passes (no regressions on existing scores)
  - [ ] New metrics struct compiles and has all fields

  **QA Scenarios**:

  ```
  Scenario: Existing scores unchanged
    Tool: Bash
    Preconditions: Clean build
    Steps:
      1. Run: cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture
      2. Assert: all 14 fixtures show 100.0% (existing metrics unchanged)
    Expected Result: 14/14 at 100.0%
    Failure Indicators: Any fixture score below 100.0%
    Evidence: .sisyphus/evidence/task-1-existing-scores.txt

  Scenario: New metrics fields parse correctly
    Tool: Bash
    Preconditions: Updated reference_metrics.toml
    Steps:
      1. Run: cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture 2>&1 | head -50
      2. Assert: no TOML parse errors, no field-missing panics
    Expected Result: Clean test output with no parse errors
    Failure Indicators: "missing field" or "unknown field" errors
    Evidence: .sisyphus/evidence/task-1-new-metrics-parse.txt
  ```

  **Commit**: YES (groups with Wave 1)
  - Message: `feat(test): expand reference_metrics.toml with switch/ternary/struct/array metrics`
  - Files: `tests/golden/reference_metrics.toml`, `crates/unlace-test-harness/tests/golden_fixtures.rs`
  - Pre-commit: `cargo test -p unlace-test-harness --test golden_fixtures`

- [ ] 2. Add new test fixtures covering all pattern categories

  **What to do**:
  - Create C source files in `fixtures/src/` that exercise EVERY pattern category:
    - `switch_test.c`: switch with 5+ cases, default, fall-through, nested switch
    - `ternary_test.c`: simple ternary, nested ternary, ternary in assignment/return/call
    - `struct_test.c`: struct definition, member access via `.` and `->`, array of structs, nested structs
    - `array_test.c`: static arrays, dynamic arrays, multi-dimensional, stride patterns
    - `simd_test.c`: SSE/AVX intrinsics, __m128/__m256 types
    - `cpp_test.cpp`: C++ with exceptions, RTTI, vtables, templates
    - `complex_control.c`: deeply nested loops, irreducible CFG (goto into loop), labeled break/continue
    - `bitops_test.c`: LOBYTE/HIBYTE patterns, bit field operations, compound assignments (+=, &=, |=)
  - Compile each to ELF with `gcc -O1 -o fixtures/{name}.elf fixtures/src/{name}.c` (O1 to get interesting optimizations without total inlining)
  - Add each to `reference_metrics.toml` with IDA golden reference counts (decompile with IDA or estimate)
  - Create expected output golden files in `tests/golden/expected/`

  **Must NOT do**:
  - Do not modify existing fixture source files
  - Do not use -O0 (too trivial) or -O3 (too aggressive, destroys structure)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: []

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 3, 4, 5)
  - **Blocks**: Tasks 13-20, 42, 44
  - **Blocked By**: None

  **References**:

  **Pattern References**:
  - `fixtures/src/medium.c` — Existing fixture source (follow this style: multiple functions, variety of patterns)
  - `fixtures/Makefile` or build scripts — How fixtures are compiled (if exists, otherwise use gcc directly)

  **External References**:
  - `tests/golden/x86_64/sub_1029D0.c` — IDA's switch output (model our switch_test.c after this)
  - `tests/golden/x86_64/sub_103B50.c` — IDA's for-loop output (model our array_test.c after this)

  **Acceptance Criteria**:

  - [ ] All new .elf fixtures exist in `fixtures/`
  - [ ] All new .c source files exist in `fixtures/src/`
  - [ ] `cargo test -p unlace-test-harness --test golden_fixtures` includes new fixtures
  - [ ] unlace can decompile all new fixtures without panic: `unlace decompile fixtures/{name}.elf --emit c`

  **QA Scenarios**:

  ```
  Scenario: All new fixtures decompile without panic
    Tool: Bash
    Preconditions: New fixtures compiled and present
    Steps:
      1. For each new .elf: run unlace decompile fixtures/{name}.elf --emit c 2>&1
      2. Assert: exit code 0, no "panic" or "RUST_BACKTRACE" in stderr
    Expected Result: All 8 new fixtures decompile cleanly
    Failure Indicators: Non-zero exit code, panic message
    Evidence: .sisyphus/evidence/task-2-fixture-decompile.txt

  Scenario: Switch fixture produces switch in output
    Tool: Bash
    Preconditions: switch_test.elf compiled from switch_test.c
    Steps:
      1. Run: unlace decompile fixtures/switch_test.elf --emit c 2>/dev/null | grep -c 'switch'
      2. Assert: count > 0 (switch keyword appears in output)
    Expected Result: At least 1 switch keyword in output
    Failure Indicators: count = 0
    Evidence: .sisyphus/evidence/task-2-switch-output.txt
  ```

  **Commit**: YES (groups with Wave 1)
  - Message: `test(fixtures): add switch/ternary/struct/array/simd/cpp/bitops test fixtures`
  - Files: `fixtures/src/*.c`, `fixtures/*.elf`, `tests/golden/expected/*.c`, `tests/golden/reference_metrics.toml`
  - Pre-commit: `cargo test -p unlace-test-harness --test golden_fixtures`

- [x] 3. Validate existing passes fire correctly on medium.elf

  **What to do**:
  - Add `tracing::debug!` instrumentation to EVERY structuring pass entry point:
    - `switch_recovery.rs` — log when switch recovery is attempted and what the result is
    - `ternary_recovery.rs` — log when ternary pattern is matched
    - `if_to_switch.rs` — log when if-chain-to-switch fires
    - `while_to_for.rs` — log when while-to-for converts a loop
    - `short_circuit.rs` — log when compound boolean is recovered
    - `struct_field_detect.rs` — log when struct field is detected
    - `condition_simplify.rs` — log when condition is simplified
  - Run `RUST_LOG=unlace_struct=debug unlace decompile fixtures/medium.elf --emit c -vv` and capture output
  - For each pass: determine if it fires, what input it sees, why it succeeds/fails
  - Document findings: which passes fire, which don't, and why
  - File a brief report to `.sisyphus/evidence/task-3-pass-validation.md`

  **Must NOT do**:
  - Do not change pass LOGIC yet — just add tracing and observe
  - Do not remove existing tracing

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`tracing`, `rust-style`]
    - `tracing`: How to use tracing::debug! with structured fields
    - `rust-style`: Idiomatic Rust patterns for instrumentation

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 2, 4, 5)
  - **Blocks**: Tasks 13-20 (all control flow fixes depend on knowing what fires)
  - **Blocked By**: None

  **References**:

  **Pattern References**:
  - `crates/unlace-struct/src/structurer.rs:804` — Existing `tracing::debug!` for While emission (follow this style)
  - `crates/unlace-struct/src/switch_recovery.rs` — Switch recovery (647 lines, add tracing at entry + each decision point)
  - `crates/unlace-struct/src/ternary_recovery.rs` — Ternary recovery (296 lines)
  - `crates/unlace-struct/src/while_to_for.rs` — While-to-for (652 lines)
  - `crates/unlace-struct/src/short_circuit.rs` — Short-circuit (914 lines)
  - `crates/unlace-struct/src/flatten_if_else.rs` — If-else flattening
  - `crates/unlace-struct/src/goto_elim.rs` — Goto elimination

  **Acceptance Criteria**:

  - [ ] Every structuring pass has at least 1 tracing::debug! at entry
  - [ ] `RUST_LOG=unlace_struct=debug` shows pass execution for medium.elf
  - [ ] Report in `.sisyphus/evidence/task-3-pass-validation.md` documents which passes fire/don't fire

  **QA Scenarios**:

  ```
  Scenario: Tracing output shows pass execution
    Tool: Bash
    Preconditions: Tracing added to all passes
    Steps:
      1. Run: RUST_LOG=unlace_struct=debug unlace decompile fixtures/medium.elf --emit c -vv 2>&1 | grep -cE 'switch_recovery|ternary_recovery|while_to_for|short_circuit|struct_field|condition_simplify'
      2. Assert: count >= 5 (at least 5 different passes logged)
    Expected Result: Multiple pass names appear in trace output
    Failure Indicators: count < 3
    Evidence: .sisyphus/evidence/task-3-pass-tracing.txt

  Scenario: No regressions from tracing additions
    Tool: Bash
    Preconditions: Tracing added
    Steps:
      1. Run: cargo test --workspace 2>&1 | tail -5
      2. Assert: 0 failures
    Expected Result: All tests pass
    Failure Indicators: Any test failure
    Evidence: .sisyphus/evidence/task-3-regression.txt
  ```

  **Commit**: YES (groups with Wave 1)
  - Message: `feat(trace): add debug instrumentation to all structuring passes`
  - Files: `crates/unlace-struct/src/*.rs`
  - Pre-commit: `cargo test --workspace`

- [x] 4. Add tracing instrumentation to SSA optimization passes

  **What to do**:
  - Add `tracing::debug!` to each SSA pass in the fixedpoint loop:
    - `const_fold.rs` — log number of folds per iteration
    - `copy_prop.rs` — log number of copies propagated
    - `dce.rs` — log number of dead instructions removed
    - `sccp.rs` — log lattice convergence (how many iterations)
    - `cse.rs` — log number of CSE replacements
    - `gvn.rs` — log number of value numbering merges
    - `idiom_recognition.rs` — log which idioms matched (division, modulo, SIMD)
    - `condition_simplify.rs` — log number of simplifications applied
  - Run on medium.elf and verify all passes report their activity
  - This enables debugging of ALL future work in Waves 2-6

  **Must NOT do**:
  - Do not change pass logic — tracing only
  - Do not add per-instruction tracing (too verbose) — summary per pass invocation

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`tracing`, `rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 2, 3, 5)
  - **Blocks**: Tasks 6-12
  - **Blocked By**: None

  **References**:

  **Pattern References**:
  - `crates/unlace-passes/src/const_fold.rs` — Constant folding (add summary tracing)
  - `crates/unlace-passes/src/copy_prop.rs` — Copy propagation
  - `crates/unlace-passes/src/dce.rs` — Dead code elimination
  - `crates/unlace-passes/src/sccp.rs` — Sparse conditional constant propagation
  - `crates/unlace-cli/src/pipeline.rs:698+` — Pipeline assembly showing pass order

  **Acceptance Criteria**:

  - [ ] Every SSA pass has at least 1 tracing::debug! with summary counts
  - [ ] `RUST_LOG=unlace_passes=debug` shows pass execution for medium.elf
  - [ ] `cargo test --workspace` passes

  **QA Scenarios**:

  ```
  Scenario: SSA pass tracing works
    Tool: Bash
    Steps:
      1. Run: RUST_LOG=unlace_passes=debug unlace decompile fixtures/medium.elf --emit c -vv 2>&1 | grep -cE 'constant_fold|copy_prop|dead_code|sccp|cse|gvn|idiom'
      2. Assert: count >= 5
    Expected Result: Multiple SSA passes logged
    Evidence: .sisyphus/evidence/task-4-ssa-tracing.txt
  ```

  **Commit**: YES (groups with Wave 1)
  - Message: `feat(trace): add debug instrumentation to SSA optimization passes`
  - Files: `crates/unlace-passes/src/*.rs`
  - Pre-commit: `cargo test --workspace`

- [x] 5. Create algebraic_simplify.rs pass skeleton

  **What to do**:
  - Create new file `crates/unlace-passes/src/algebraic_simplify.rs`
  - Define a `AlgebraicSimplifyPass` struct implementing the pass trait
  - The pass walks every SSA instruction and applies pattern-match simplification rules
  - Initially empty rule set — Wave 2 tasks will add the actual rules
  - Register the pass in `crates/unlace-passes/src/lib.rs` (pub mod)
  - Add it to the pipeline in `crates/unlace-cli/src/pipeline.rs` inside the fixedpoint loop, AFTER constant_fold and BEFORE copy_propagation
  - Create unit test scaffold in the same file

  **Must NOT do**:
  - Do not implement actual rules yet (Wave 2)
  - Do not change the fixedpoint loop structure

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 2, 3, 4)
  - **Blocks**: Tasks 6-12
  - **Blocked By**: None

  **References**:

  **Pattern References**:
  - `crates/unlace-passes/src/const_fold.rs` — Follow this pass structure (impl Pass trait, walk instructions)
  - `crates/unlace-passes/src/idiom_recognition.rs` — Pattern-match style pass (match on opcode, check operands)
  - `crates/unlace-cli/src/pipeline.rs` — Where to register the new pass

  **External References**:
  - `/tmp/ida_simplification_rules.md` — The 60+ rules to be implemented in Wave 2

  **Acceptance Criteria**:

  - [ ] `crates/unlace-passes/src/algebraic_simplify.rs` exists with pass skeleton
  - [ ] Pass is registered in lib.rs and pipeline.rs
  - [ ] `cargo test --workspace` passes (no regressions)
  - [ ] Pass runs in pipeline but makes 0 changes (empty rule set)

  **QA Scenarios**:

  ```
  Scenario: New pass compiles and runs without error
    Tool: Bash
    Steps:
      1. Run: cargo test --workspace 2>&1 | tail -5
      2. Assert: 0 failures
      3. Run: RUST_LOG=unlace_passes=debug unlace decompile fixtures/medium.elf --emit c -vv 2>&1 | grep 'algebraic_simplify'
      4. Assert: pass name appears in trace output
    Expected Result: Pass registered and executing
    Evidence: .sisyphus/evidence/task-5-skeleton.txt
  ```

  **Commit**: YES (groups with Wave 1)
  - Message: `feat(passes): create algebraic_simplify pass skeleton`
  - Files: `crates/unlace-passes/src/algebraic_simplify.rs`, `crates/unlace-passes/src/lib.rs`, `crates/unlace-cli/src/pipeline.rs`
  - Pre-commit: `cargo test --workspace`

### Wave 2: Expression Simplification (60+ rules)

- [x] 6. Algebraic identities (15 rules)

  **What to do**:
  Implement the following rules in `algebraic_simplify.rs`, each as a match arm:
  - `x + 0 → x`, `x - 0 → x`, `x * 1 → x`, `x * 0 → 0`
  - `x / 1 → x`, `x % 1 → 0`
  - `x & 0 → 0`, `x & -1 → x` (where -1 = all bits set)
  - `x | 0 → x`, `x | -1 → -1`
  - `x ^ 0 → x`, `x ^ x → 0`
  - `x - x → 0`, `x + (-x) → 0`
  - `~~x → x` (double negation)
  Each rule needs a unit test with SSA IR input → expected output.

  **Must NOT do**:
  - Do not implement these as C-level string transformations — they must operate on SSA IR
  - Do not duplicate rules that `const_fold.rs` already handles

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2 (with Tasks 7-12)
  - **Blocks**: Task 41
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/algebraic_simplify.rs` — The skeleton from Task 5
  - `crates/unlace-passes/src/const_fold.rs` — How existing constant folding works (don't duplicate)
  - `crates/unlace-ir/src/op.rs` — PcodeOp enum with INT_ADD, INT_SUB, INT_MULT, INT_AND, INT_OR, INT_XOR, etc.
  - `/tmp/ida_simplification_rules.md:1-50` — Full rule catalog

  **Acceptance Criteria**:
  - [ ] 15 rules implemented with pattern matching on PcodeOp + operand constants
  - [ ] 15 unit tests, one per rule
  - [ ] `cargo test -p unlace-passes --lib algebraic_simplify` — all pass

  **QA Scenarios**:
  ```
  Scenario: x + 0 simplifies to x
    Tool: Bash
    Steps:
      1. Run: cargo test -p unlace-passes --lib algebraic_simplify -- --nocapture
      2. Assert: 15 tests, 0 failures
    Expected Result: All 15 algebraic identity tests pass
    Evidence: .sisyphus/evidence/task-6-algebraic.txt
  ```

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 15 algebraic identity rules`
  - Files: `crates/unlace-passes/src/algebraic_simplify.rs`
  - Pre-commit: `cargo test -p unlace-passes --lib`

- [ ] 7. Bitwise patterns (18 rules)

  **What to do**:
  Add to `algebraic_simplify.rs`:
  - `(x & mask) & mask → x & mask` (repeated AND)
  - `(x | mask) | mask → x | mask` (repeated OR)
  - `(x & mask) | (x & ~mask) → x` (complementary AND/OR)
  - `(x >> n) << n → x & ~((1<<n)-1)` (shift pair to mask)
  - `(x << n) >> n → x & ((1<<(width-n))-1)` (shift pair to mask, unsigned)
  - `x & (x-1) → clear lowest set bit` pattern recognition
  - `x & (-x) → isolate lowest set bit` pattern recognition
  - `(x & 0xFF) → ZEXT8(x)` / `(x & 0xFFFF) → ZEXT16(x)` — mask-to-zero-extend
  - `(x << 56) >> 56 → SEXT8(x)` — shift pair to sign-extend
  - `(x << 48) >> 48 → SEXT16(x)` — shift pair to sign-extend
  - `~(~x & ~y) → x | y` (De Morgan's)
  - `~(~x | ~y) → x & y` (De Morgan's)
  - `(x ^ -1) → ~x` (XOR with all-ones is bitwise NOT)
  - `(x & c1) | (x & c2) → x & (c1 | c2)` (factor AND over OR)
  - `(x | c1) & (x | c2) → x | (c1 & c2)` (factor OR over AND)
  - `x & x → x` (idempotent AND)
  - `x | x → x` (idempotent OR)
  - `(x & mask) == 0` when mask proves condition (value range)

  **Must NOT do**:
  - Do not implement value range tracking (too complex for this task)
  - Do not handle variable-width shifts (only constant shift amounts)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2 (with Tasks 6, 8-12)
  - **Blocks**: Task 41
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/algebraic_simplify.rs` — Add rules here
  - `crates/unlace-ir/src/op.rs` — PcodeOp::INT_AND, INT_OR, INT_XOR, INT_LEFT, INT_RIGHT, INT_SRIGHT
  - `/tmp/ida_simplification_rules.md:50-120` — Bitwise rules catalog

  **Acceptance Criteria**:
  - [ ] 18 bitwise rules implemented
  - [ ] 18 unit tests
  - [ ] `cargo test -p unlace-passes --lib` passes

  **QA Scenarios**:
  ```
  Scenario: Bitwise simplification rules pass
    Tool: Bash
    Steps:
      1. Run: cargo test -p unlace-passes --lib algebraic_simplify -- --nocapture 2>&1 | grep 'test result'
      2. Assert: 0 failures
    Expected Result: All bitwise tests pass
    Evidence: .sisyphus/evidence/task-7-bitwise.txt
  ```

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 18 bitwise pattern rules`
  - Files: `crates/unlace-passes/src/algebraic_simplify.rs`
  - Pre-commit: `cargo test -p unlace-passes --lib`

- [ ] 8. Comparison simplifications (16 rules)

  **What to do**:
  Add to `algebraic_simplify.rs` or `condition_simplify.rs` (whichever is more appropriate):
  - `(x == x) → true`, `(x != x) → false`
  - `(x < x) → false`, `(x > x) → false`
  - `(x <= x) → true`, `(x >= x) → true`
  - `!(x == y) → x != y`, `!(x != y) → x == y` (comparison negation)
  - `!(x < y) → x >= y`, `!(x > y) → x <= y`
  - `!(x <= y) → x > y`, `!(x >= y) → x < y`
  - `(x == 0) → !x` (zero comparison to boolean NOT)
  - `(x != 0) → !!x` or just `x` (nonzero comparison)
  - `(x - y) == 0 → x == y` (subtraction comparison)
  - `(x - y) != 0 → x != y`
  - `(x & 1) != 0 → (bool)(x & 1)` (test low bit)
  - `(unsigned)x < 0 → false` (unsigned can't be negative)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/condition_simplify.rs` — Existing condition simplifier (1557 lines — check what's already there before adding)
  - `crates/unlace-ir/src/op.rs` — INT_EQUAL, INT_NOTEQUAL, INT_SLESS, INT_LESS, INT_SLESSEQUAL, INT_LESSEQUAL, BOOL_NEGATE

  **Acceptance Criteria**:
  - [ ] 16 comparison rules implemented (after deduplicating with existing `condition_simplify.rs` rules)
  - [ ] Unit tests for each new rule
  - [ ] `cargo test --workspace` passes

  **QA Scenarios**:
  ```
  Scenario: Comparison rules pass
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes --lib -- --nocapture 2>&1 | grep 'test result'
      2. Assert: 0 failures
    Expected Result: All comparison tests pass
    Evidence: .sisyphus/evidence/task-8-comparison.txt
  ```

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 16 comparison simplification rules`

- [ ] 9. Conversion canonicalization (12 rules)

  **What to do**:
  - `ZEXT(ZEXT(x)) → ZEXT(x)` (redundant zero-extension)
  - `SEXT(SEXT(x)) → SEXT(x)` (redundant sign-extension)
  - `TRUNC(ZEXT(x)) → x` when sizes match (round-trip)
  - `TRUNC(SEXT(x)) → x` when sizes match
  - `ZEXT(TRUNC(x)) → x & mask` (zero-extend of truncation is masking)
  - `SEXT(x) where x is already sign-extended → x` (redundant SEXT)
  - `ZEXT(0) → 0`, `SEXT(0) → 0`
  - `TRUNC(const) → const & mask` (truncate constant)
  - `ZEXT(const) → const` (extend constant)
  - `SEXT(const) → sign_extend(const)` (extend constant)
  - `INT_2COMP(INT_2COMP(x)) → x` (double negation)
  - `BOOL_NEGATE(BOOL_NEGATE(x)) → x` (double boolean negation)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-ir/src/op.rs` — INT_ZEXT, INT_SEXT, SUBPIECE (truncation), INT_2COMP, BOOL_NEGATE
  - `crates/unlace-passes/src/algebraic_simplify.rs` — Add rules here

  **Acceptance Criteria**:
  - [ ] 12 conversion rules implemented with unit tests
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 12 conversion canonicalization rules`

  **QA Scenarios**:
  ```
  Scenario: Conversion canonicalization unit tests pass
    Tool: Bash
    Steps:
      1. Run: cargo test -p unlace-passes --lib algebraic_simplify::conversion -- --nocapture
      2. Assert: 12 tests, 0 failures
    Expected Result: All conversion rule unit tests pass
    Failure Indicators: Any test failure or compilation error
    Evidence: .sisyphus/evidence/task-9-conversion.txt

  Scenario: No regressions in existing tests
    Tool: Bash
    Steps:
      1. Run: cargo test --workspace 2>&1 | tail -5
      2. Assert: 0 failures
    Expected Result: All workspace tests pass
    Evidence: .sisyphus/evidence/task-9-regression.txt
  ```

- [ ] 10. Multiplication/division patterns (10 rules)

  **What to do**:
  - `x * 2 → x << 1`, `x * 4 → x << 2`, ..., `x * 2^n → x << n` (strength reduction)
  - `x / 2^n → x >> n` (unsigned division by power of 2)
  - `x % 2^n → x & (2^n - 1)` (unsigned modulo by power of 2)
  - `x * 0 → 0`, `x * (-1) → -x`
  - `x / 1 → x`, `x / (-1) → -x`
  - `(x * c) / c → x` when no overflow possible (conservative: only when c is power of 2)
  - `-(-x) → x` (double negation via multiplication)
  - Recognize compiler-generated magic number division: `(x * MAGIC) >> SHIFT → x / DIVISOR` (enhance existing `division_idiom.rs`)
  - Recognize compiler-generated modulo: `x - (x / d) * d → x % d` (enhance existing `modulo_idiom.rs`)
  - `x << 0 → x`, `x >> 0 → x` (zero-shift identity)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/division_idiom.rs` (248 lines) — Existing division idiom recognition (extend, don't duplicate)
  - `crates/unlace-passes/src/modulo_idiom.rs` (220 lines) — Existing modulo idiom recognition
  - `crates/unlace-passes/src/algebraic_simplify.rs` — Strength reduction rules go here

  **Acceptance Criteria**:
  - [ ] 10 rules implemented
  - [ ] No regression in existing division/modulo idiom tests
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 10 multiplication/division pattern rules`

  **QA Scenarios**:
  ```
  Scenario: Mul/div rules unit tests pass
    Tool: Bash
    Steps:
      1. Run: cargo test -p unlace-passes --lib -- --nocapture 2>&1 | grep 'test result'
      2. Assert: 0 failures
    Expected Result: All mul/div unit tests pass
    Evidence: .sisyphus/evidence/task-10-muldiv.txt
  ```

- [ ] 11. Memory access patterns (8 rules)

  **What to do**:
  - `STORE(addr, LOAD(addr)) → nop` (redundant store of loaded value — dead store)
  - `LOAD(STORE(addr, val), addr) → val` (load after store forwarding)
  - `LOAD(const_addr)` where const_addr is in .rodata → inline the constant
  - `STORE(addr, 0); STORE(addr+8, 0); ...` → recognize memset pattern
  - `LOAD(base + 0), LOAD(base + 8), LOAD(base + 16)` → recognize sequential struct access
  - `LOAD(base + idx * stride)` → mark as array access candidate (feeds Task 24)
  - `STORE(sp + offset, reg); ... ; reg2 = LOAD(sp + offset)` → stack spill/reload elimination
  - `COPY(LOAD(addr))` → `LOAD(addr)` (remove redundant copy after load)

  **Must NOT do**:
  - Do not implement full alias analysis — use conservative rules (same SSA def or exact address match only)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/dead_store_elim.rs` (345 lines) — Existing dead store elimination (extend)
  - `crates/unlace-passes/src/stack_vars.rs` (587 lines) — Stack variable recovery (spill patterns)
  - `crates/unlace-ir/src/op.rs` — LOAD, STORE opcodes

  **Acceptance Criteria**:
  - [ ] 8 memory pattern rules implemented
  - [ ] Unit tests for each
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 8 memory access pattern rules`

  **QA Scenarios**:
  ```
  Scenario: Memory access rules pass
    Tool: Bash
    Steps:
      1. Run: cargo test -p unlace-passes --lib -- --nocapture 2>&1 | grep 'test result'
      2. Assert: 0 failures
    Expected Result: All memory pattern unit tests pass
    Evidence: .sisyphus/evidence/task-11-memory.txt
  ```

- [ ] 12. Piece/subpiece patterns (7 rules)

  **What to do**:
  These handle HexRays' PIECE/SUBPIECE (register splitting/joining) patterns:
  - `PIECE(SUBPIECE(x, 0, 4), SUBPIECE(x, 4, 4)) → x` (split and rejoin 64-bit)
  - `SUBPIECE(PIECE(lo, hi), 0, 4) → lo` (extract low from pair)
  - `SUBPIECE(PIECE(lo, hi), 4, 4) → hi` (extract high from pair)
  - `SUBPIECE(ZEXT(x), 0, n) → x` when n >= sizeof(x) (subpiece of zero-extend)
  - `PIECE(x, 0) → ZEXT(x)` (pair with zero high → zero extend)
  - `SUBPIECE(x, 0, sizeof(x)) → x` (full-width subpiece is identity)
  - `SUBPIECE(const, offset, size) → (const >> (offset*8)) & mask` (constant subpiece)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-ir/src/op.rs` — PIECE, SUBPIECE opcodes
  - `crates/unlace-passes/src/algebraic_simplify.rs` — Add rules here

  **Acceptance Criteria**:
  - [ ] 7 piece/subpiece rules with unit tests
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 2)
  - Message: `feat(simplify): add 7 piece/subpiece pattern rules`

### Wave 3: Control Flow Refinement

- [ ] 13. Fix switch_recovery.rs — make it fire on fixtures

  **What to do**:
  - Using Task 3's validation report, identify WHY switch_recovery doesn't fire
  - Common issues: jump table not detected in ELF, switch condition not identified, case values not extracted
  - Fix the detection criteria: look for indirect jump `JMP [base + idx * 8]` pattern in the CFG
  - Ensure `RESOLVE_TABLE_JUMP` equivalent: read .rodata jump table entries, map to case blocks
  - Handle default case (the fall-through block when index is out of range)
  - Handle non-contiguous case values (case 0, case 3, case 7 with gaps)
  - Handle fall-through between cases (consecutive blocks without explicit break)
  - Verify on `switch_test.elf` from Task 2 and on `medium.elf`

  **Must NOT do**:
  - Do not implement computed goto (only switch/case from jump tables)
  - Do not handle indirect calls as switch (different pattern)

  **Recommended Agent Profile**:
  - **Category**: `deep`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3 (with Tasks 14-20)
  - **Blocks**: Task 41, 42
  - **Blocked By**: Task 3 (need validation report)

  **References**:
  - `crates/unlace-struct/src/switch_recovery.rs` (647 lines) — Existing implementation to fix
  - `crates/unlace-struct/src/if_to_switch.rs` (615 lines) — If-chain to switch (complementary pass)
  - `.sisyphus/evidence/task-3-pass-validation.md` — Validation report explaining why it doesn't fire
  - `tests/golden/x86_64/sub_1029D0.c` — IDA's switch output (the target to match)
  - `references/hexrays/ida_dump/hexx64/all/sub_1BF0C0.c` — IDA's own switch recovery algorithm (decompiled)

  **Acceptance Criteria**:
  - [ ] `switch` keyword appears in `unlace decompile fixtures/medium.elf --emit c` output
  - [ ] `switch` keyword appears in `unlace decompile fixtures/switch_test.elf --emit c` output
  - [ ] `cargo test --workspace` passes

  **QA Scenarios**:
  ```
  Scenario: Switch recovery produces switch in medium.elf
    Tool: Bash
    Steps:
      1. Run: unlace decompile fixtures/medium.elf --emit c 2>/dev/null | grep -c 'switch'
      2. Assert: count >= 1
    Expected Result: At least 1 switch statement
    Failure Indicators: count = 0
    Evidence: .sisyphus/evidence/task-13-switch-medium.txt

  Scenario: Switch with cases in switch_test.elf
    Tool: Bash
    Steps:
      1. Run: unlace decompile fixtures/switch_test.elf --emit c 2>/dev/null | grep -c 'case'
      2. Assert: count >= 3
    Expected Result: Multiple case labels
    Evidence: .sisyphus/evidence/task-13-switch-cases.txt
  ```

  **Commit**: YES (groups with Wave 3)
  - Message: `fix(struct): make switch recovery fire on real binaries`

- [ ] 14. Fix ternary_recovery.rs — CONVERT_IF_TO_SET equivalent

  **What to do**:
  - Using Task 3's validation report, identify WHY ternary_recovery doesn't fire
  - The pattern to match: `if(cond) { x = a; } else { x = b; }` → `x = cond ? a : b`
  - Also match: `if(cond) { return a; } else { return b; }` → `return cond ? a : b`
  - Extend to match: `x = b; if(cond) { x = a; }` → `x = cond ? a : b` (single-arm with default)
  - Add HirNode::Ternary variant if not already present
  - Add ternary rendering in C printer
  - Verify on `ternary_test.elf` from Task 2

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3

  **References**:
  - `crates/unlace-struct/src/ternary_recovery.rs` (296 lines) — Existing implementation
  - `crates/unlace-struct/src/hir.rs` — HirNode enum (check if Ternary variant exists)
  - `crates/unlace-output/src/c_printer.rs` — C printer (add ternary rendering)

  **Acceptance Criteria**:
  - [ ] `?` operator appears in output for ternary_test.elf
  - [ ] `cargo test --workspace` passes

  **QA Scenarios**:
  ```
  Scenario: Ternary recovery produces ?: in output
    Tool: Bash
    Steps:
      1. Run: unlace decompile fixtures/ternary_test.elf --emit c 2>/dev/null | grep -c '?'
      2. Assert: count >= 1
    Expected Result: At least 1 ternary operator
    Evidence: .sisyphus/evidence/task-14-ternary.txt
  ```

  **Commit**: YES (groups with Wave 3)
  - Message: `fix(struct): make ternary recovery fire and render`

- [ ] 15. Enhance while_to_for.rs — complete init/cond/step extraction

  **What to do**:
  - Current implementation handles some cases but misses common patterns
  - Implement full pattern: `var = init; while(var CMP limit) { body; var OP= step; }`
  - Handle: `++i`, `i++`, `--i`, `i--`, `i += n`, `i -= n` as step expressions
  - Handle: `<`, `<=`, `!=`, `>`, `>=` as comparison operators
  - Handle: init can be 0, 1, or any constant
  - Handle: step can be 1, -1, or any constant
  - Handle: iterator variable can be used in the body (not just the loop header)
  - Do NOT convert while loops where the iterator is modified inside the body (non-canonical for)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3

  **References**:
  - `crates/unlace-struct/src/while_to_for.rs` (652 lines) — Enhance this
  - `tests/golden/x86_64/sub_103B50.c` — IDA's for-loop output: `for ( i = 0; i != v4; ++i )`
  - `tests/golden/x86_64/sub_104080.c` — Another IDA for-loop example

  **Acceptance Criteria**:
  - [ ] More `for` keywords in medium.elf output than before
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 3)
  - Message: `feat(struct): enhance while-to-for with complete init/cond/step extraction`

- [ ] 16. Enhance short_circuit.rs — compound boolean recovery

  **What to do**:
  - Recover `if (a && b)` from `if (a) { if (b) { ... } }`
  - Recover `if (a || b)` from `if (a) { ... } else if (b) { ... }` (same body)
  - Handle deeply nested: `if (a && b && c)` from triple-nested if
  - Handle mixed: `if (a && (b || c))` 
  - Handle negated: `if (!(a && b))` → `if (!a || !b)`
  - Handle comparison chains: `if (x > 0 && x < 100)`
  - Ensure De Morgan's law is applied for readability

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3

  **References**:
  - `crates/unlace-struct/src/short_circuit.rs` (914 lines) — Enhance this
  - `crates/unlace-struct/src/flatten_if_else.rs` — Complement (if-else flattening)

  **Acceptance Criteria**:
  - [ ] `&&` and `||` appear in decompiled output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 3)
  - Message: `feat(struct): enhance short-circuit boolean recovery`

- [ ] 17. Implement goto generation for unstructurable CFG regions

  **What to do**:
  - IDA uses `goto LABEL_N` for CFG regions that can't be structured into if/while/for/switch
  - Currently unlace has `goto_elim.rs` but doesn't GENERATE gotos — it only eliminates them
  - Add `HirNode::Goto { label: LabelId }` and `HirNode::Label { label: LabelId }` to the HIR
  - In the structurer, when a block has edges that can't be structured (back-edge to non-loop-header, cross-edge to unrelated block), emit `goto LABEL_N`
  - Add goto/label rendering in C printer
  - This is the LAST RESORT — only when all structuring attempts fail
  - Use `LABEL_{block_id}` naming convention (matches IDA's `LABEL_N` pattern)

  **Recommended Agent Profile**:
  - **Category**: `deep`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3

  **References**:
  - `crates/unlace-struct/src/structurer.rs` — Core structuring algorithm (add goto fallback)
  - `crates/unlace-struct/src/goto_elim.rs` — Existing goto elimination (add generation counterpart)
  - `crates/unlace-struct/src/hir.rs` — HirNode enum (add Goto/Label variants)
  - `crates/unlace-output/src/c_printer.rs` — C printer (add goto/label rendering)
  - `tests/golden/x86_64/func.c` — IDA output with 18 LABEL_ targets (the target to match)

  **Acceptance Criteria**:
  - [ ] `goto` and `LABEL_` appear in output for functions with irreducible CFG
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 3)
  - Message: `feat(struct): add goto generation for unstructurable CFG regions`

- [ ] 18. Improve do-while detection

  **What to do**:
  - Currently unlace has minimal do-while support
  - Pattern: loop where the condition is at the END of the loop body, not the header
  - Detect: single-latch loop where the latch block has a conditional branch (latch is the exit test)
  - Emit: `HirNode::DoWhile { body, cond }` → `do { body } while (cond);`
  - Handle: `do { ... } while (--count);` (decrement-and-test)
  - Handle: `do { ... } while (ptr = ptr->next);` (linked list traversal)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3

  **References**:
  - `crates/unlace-struct/src/structurer.rs:770-900` — Loop classification (enhance for do-while detection)
  - `crates/unlace-struct/src/hir.rs` — HirNode::DoWhile (check if exists)
  - `crates/unlace-output/src/c_printer.rs` — DoWhile rendering

  **Acceptance Criteria**:
  - [ ] `do {` appears in output for appropriate loop patterns
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 3)
  - Message: `feat(struct): improve do-while loop detection`

- [ ] 19. Implement sentinel loop detection

  **What to do**:
  - Detect loops that iterate until a sentinel value is found: `while (*ptr != '\0')`, `while (arr[i] != -1)`
  - These are common in string processing and array scanning
  - The pattern: LOAD from incrementing address, compare to constant, branch
  - Represent as `while (*ptr++)` or `while (arr[i++] != SENTINEL)` in output

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3

  **References**:
  - `crates/unlace-struct/src/while_to_for.rs` — Related loop analysis

  **Acceptance Criteria**:
  - [ ] Sentinel loop patterns recognized in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 3)
  - Message: `feat(struct): add sentinel loop detection`

- [ ] 20. Implement irreducible CFG handling (node splitting)

  **What to do**:
  - When the CFG has irreducible regions (multiple entry points to a loop), the structurer currently fails
  - Implement node splitting: duplicate the shared entry block to make the CFG reducible
  - This is a standard compiler technique: for each irreducible SCC, find the entry with the least code, clone it
  - After splitting, the normal structuring algorithm can handle it
  - Fall back to goto (Task 17) if splitting would create too much code duplication (threshold: 3x code size increase)

  **Recommended Agent Profile**:
  - **Category**: `deep`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3
  - **Blocked By**: Task 3, Task 17

  **References**:
  - `crates/unlace-struct/src/structurer.rs` — Core structuring (add SCC detection + node splitting)
  - `references/hexrays/ida_dump/hexx64/all/sub_D81C0.c` — IDA's potential irreducible CFG handler

  **Acceptance Criteria**:
  - [ ] Complex CFG patterns (goto-into-loop) produce structured output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 3)
  - Message: `feat(struct): add irreducible CFG handling via node splitting`

### Wave 4: Type System + Output Formatting

- [ ] 21. Recursive type system (replace flat types with recursive Type enum)

  **What to do**:
  - Current type system uses flat `PrimitiveType` — no composite types
  - Create a recursive `Type` enum in a new or existing type module:
    ```
    enum Type {
      Void, Bool,
      Int { width: u8, signed: bool },         // int8..int128, signed/unsigned
      Float { width: u8 },                      // float, double, long double
      Pointer { pointee: Box<Type> },            // T*
      Array { element: Box<Type>, count: Option<usize> },  // T[N]
      Struct { name: Option<String>, fields: Vec<(String, Type, u64)> },  // struct { T field @ offset }
      FuncPtr { ret: Box<Type>, params: Vec<Type>, conv: CallingConv },   // T (*)(params)
      Simd { width: u8, element: Box<Type> },    // __m128, __m256
      Named(String),                             // typedef / forward decl
    }
    ```
  - Integrate with existing `type_infer.rs` (1448 lines) — it should produce `Type` instead of `PrimitiveType`
  - Update `SsaVarnode` or variable metadata to carry `Type`
  - This is the FOUNDATION for Tasks 22-27 and 35-38

  **Must NOT do**:
  - Do not implement full DWARF type import (separate concern)
  - Do not break existing output — if type inference fails, fall back to `int64_t` / `void*`

  **Recommended Agent Profile**:
  - **Category**: `deep`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: NO (foundation for Wave 4)
  - **Blocks**: Tasks 22-27, 35-38
  - **Blocked By**: None (can start in parallel with Wave 2/3)

  **References**:
  - `crates/unlace-passes/src/type_infer.rs` (1448 lines) — Existing type inference (extend)
  - `crates/unlace-ir/src/varnode.rs` — Varnode definition (where type info attaches)
  - `crates/unlace-output/src/c_printer.rs` — C printer type rendering (update for new Type enum)
  - `/tmp/type_system_analysis.md` — Full type system gap analysis

  **Acceptance Criteria**:
  - [ ] `Type` enum defined with all variants
  - [ ] `type_infer.rs` produces `Type` for variables
  - [ ] C printer renders `Type` correctly
  - [ ] `cargo test --workspace` passes (no regressions)

  **Commit**: YES
  - Message: `feat(types): recursive type system with struct/array/funcptr support`

- [ ] 22. IDA type output (__int64, _QWORD, _DWORD, _BYTE)

  **What to do**:
  - Add an output mode that uses IDA-style type names instead of C99 stdint types
  - Mapping: `int64_t` → `__int64`, `uint64_t` → `unsigned __int64`
  - Mapping: sized access types: `_BYTE` (1 byte), `_WORD` (2), `_DWORD` (4), `_QWORD` (8), `_OWORD` (16)
  - Add `_BOOL8` type (IDA's 8-byte boolean)
  - Make this the default for `--emit c` (configurable via flag if needed)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES (after Task 21)
  - **Parallel Group**: Wave 4 (with Tasks 23-27)
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-output/src/c_printer.rs` — Type rendering (update type name strings)
  - `tests/golden/x86_64/sub_100140.c` — IDA golden showing `__int64`, `_DWORD *`, etc.

  **Acceptance Criteria**:
  - [ ] `__int64` appears in output instead of `int64_t`
  - [ ] `_QWORD`, `_DWORD`, `_BYTE` appear for sized pointer dereferences

  **Commit**: YES (groups with Wave 4)
  - Message: `feat(output): IDA-style type names (__int64, _QWORD, etc.)`

- [ ] 23. Cast insertion pass

  **What to do**:
  - Insert explicit casts at type boundary points:
    - Sign extension: `(int64_t)(int32_t)x` when 32→64 bit signed extend
    - Zero extension: `(unsigned int)x` when widening unsigned
    - Truncation: `(unsigned __int8)x` when narrowing
    - Pointer cast: `*(_QWORD *)(addr)` when dereferencing computed address
    - Function pointer cast: `((__int64 (__fastcall *)(...))ptr)(args)` for indirect calls
  - Create new pass `cast_insertion.rs` that runs AFTER type inference
  - The pass walks the expression tree and inserts `HirNode::Cast { expr, target_type }` nodes

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES (after Task 21)
  - **Parallel Group**: Wave 4
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-struct/src/hir.rs` — Add HirNode::Cast variant if not present
  - `crates/unlace-output/src/c_printer.rs` — Render cast expressions
  - `tests/golden/x86_64/sub_100140.c` — IDA casts: `(unsigned __int8)segtype(v8)`

  **Acceptance Criteria**:
  - [ ] Cast expressions appear in output at type boundaries
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 4)
  - Message: `feat(passes): add cast insertion pass for type-safe output`

- [ ] 24. Array index recovery

  **What to do**:
  - Detect `LOAD(base + idx * stride)` and render as `base[idx]` or `*(type *)(base + idx * stride)`
  - Detect stride from the multiplication: `* 1` → `_BYTE[]`, `* 2` → `_WORD[]`, `* 4` → `_DWORD[]`, `* 8` → `_QWORD[]`
  - Handle constant index: `LOAD(base + 56)` → `base[7]` when stride=8
  - Handle pointer parameter access: `a1[57]` (from IDA golden)
  - Handle multi-dimensional: `base[i][j]` from `base + i * row_stride + j * elem_stride`
  - This integrates with the Type system (Task 21) — `Array { element, count }` type

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES (after Task 21)
  - **Parallel Group**: Wave 4
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-passes/src/stack_vars.rs` (587 lines) — Stack variable recovery (has offset analysis)
  - `crates/unlace-output/src/c_printer.rs` — Render array access `base[idx]`
  - `tests/golden/x86_64/sub_103B50.c` — IDA: `qfree(*(_QWORD *)(v3 + 8 * v6))`
  - `tests/golden/x86_64/sub_100140.c` — IDA: `a1[57]` parameter access

  **Acceptance Criteria**:
  - [ ] `[` array access appears in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 4)
  - Message: `feat(passes): add array index recovery from pointer arithmetic`

- [ ] 25. Struct field access recovery

  **What to do**:
  - Detect `LOAD(ptr + const_offset)` patterns and render as `ptr->field_N`
  - When same base pointer is accessed at multiple offsets, infer struct layout
  - Name fields: `field_0`, `field_8`, `field_10` (hex offset, matching IDA convention)
  - Handle nested: `ptr->field_8->field_0` from `LOAD(LOAD(ptr + 8) + 0)`
  - Integrate with struct_field_detect.rs (230 lines, already exists)
  - Create synthetic struct types in the Type system

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES (after Task 21)
  - **Parallel Group**: Wave 4
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-passes/src/struct_field_detect.rs` (230 lines) — Existing (enhance)
  - `crates/unlace-output/src/c_printer.rs` — Render `->` access
  - `tests/golden/x86_64/sub_1073D0.c` — IDA struct access patterns

  **Acceptance Criteria**:
  - [ ] `->` struct access appears in output for struct-heavy functions
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 4)
  - Message: `feat(passes): enhance struct field access recovery`

- [ ] 26. Function pointer type rendering

  **What to do**:
  - Render indirect calls with proper function pointer types:
    - `((__int64 (__fastcall *)(__int64, int *))v11)(v111, v1)`
    - `__int64 (__fastcall **v120)()`
  - Infer function pointer types from:
    - Call site arguments (number and types of args)
    - Return value usage
    - vtable slot (C++ virtual calls)
  - Add to C printer: function pointer declaration and cast rendering

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES (after Task 21)
  - **Parallel Group**: Wave 4
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-output/src/c_printer.rs` — Add function pointer rendering
  - `tests/golden/x86_64/sub_100140.c` — IDA: `((__int64 (__fastcall *)(__int64, int *))v11)`

  **Acceptance Criteria**:
  - [ ] Indirect calls rendered with function pointer types
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 4)
  - Message: `feat(output): function pointer type rendering`

- [ ] 27. LOBYTE/HIBYTE/LODWORD/HIDWORD macro generation

  **What to do**:
  - Detect sub-register access patterns and emit IDA-style macros:
    - `x & 0xFF` → `LOBYTE(x)` (low byte)
    - `(x >> 8) & 0xFF` → `BYTE1(x)` (second byte)
    - `(x >> 16) & 0xFF` → `BYTE2(x)` (third byte)
    - `(x >> 24) & 0xFF` → `HIBYTE(x)` for 32-bit, `BYTE3(x)` for 64-bit
    - `x & 0xFFFF` → `LOWORD(x)` (low word)
    - `(x >> 16) & 0xFFFF` → `HIWORD(x)` (high word)
    - `x & 0xFFFFFFFF` → `LODWORD(x)` (low dword of 64-bit)
    - `(x >> 32) & 0xFFFFFFFF` → `HIDWORD(x)` (high dword)
  - Also handle WRITE variants: `LOBYTE(x) = val` → `x = (x & ~0xFF) | (val & 0xFF)`
  - This runs as a C output pass (pattern match on expression tree, not SSA)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES (after Task 21)
  - **Parallel Group**: Wave 4
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-output/src/c_printer.rs` — Add macro rendering
  - `tests/golden/x86_64/sub_1048A0.c` — IDA: `LODWORD(v10) = *(_DWORD *)(a5 + 40)`

  **Acceptance Criteria**:
  - [ ] `LOBYTE`, `HIDWORD`, etc. appear in output for sub-register access patterns
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 4)
  - Message: `feat(output): LOBYTE/HIBYTE/LODWORD/HIDWORD macro generation`

### Wave 5: Advanced Output Features

- [ ] 28. Stack canary recognition + elimination

  **What to do**:
  - Detect `__readfsqword(0x28u)` pattern: `LOAD(FS_BASE + 0x28)` at function entry
  - Detect canary check at function exit: `if (saved_canary != __readfsqword(0x28u)) __stack_chk_fail()`
  - Either: (a) eliminate the entire canary check code (like HexRays' `REMOVED SECURITY COOKIE`), OR
  - (b) render as `v_canary = __readfsqword(0x28u)` and the check naturally (matching IDA golden style)
  - IDA golden shows the canary as: `return v18 - __readfsqword(0x28u);` — it keeps the check but renders it cleanly
  - Approach (b) is simpler and matches IDA — render `__readfsqword(0x28u)` as a recognized intrinsic

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5 (with Tasks 29-34)
  - **Blocked By**: None

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` (779 lines) — Add canary pattern here
  - `tests/golden/x86_64/sub_100140.c` — IDA: `__readfsqword(0x28u)`

  **Acceptance Criteria**:
  - [ ] `__readfsqword` appears in output for canary functions
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(idiom): recognize stack canary (__readfsqword) pattern`

- [ ] 29. Calling convention annotation

  **What to do**:
  - Detect calling convention from parameter register usage and annotate function signatures
  - x86-64 System V ABI: params in RDI, RSI, RDX, RCX, R8, R9 → `__fastcall`
  - Render: `__int64 __fastcall func_name(__int64 a1, __int64 a2)`
  - Use existing `calling_convention.rs` detection (already exists)
  - Add convention string to function signature in C printer

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5
  - **Blocked By**: Task 21 (needs Type system for param types)

  **References**:
  - `crates/unlace-passes/src/calling_convention.rs` (341 lines) — Existing detection
  - `crates/unlace-output/src/c_printer.rs` — Add convention to function signature
  - `tests/golden/x86_64/*.c` — 83% of IDA golden files have `__fastcall`

  **Acceptance Criteria**:
  - [ ] `__fastcall` appears in function signatures
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(output): calling convention annotation (__fastcall)`

- [ ] 30. Compound assignment recovery (+=, -=, &=, |=)

  **What to do**:
  - Detect `x = x + n` → `x += n`, `x = x - n` → `x -= n`
  - Detect `x = x & mask` → `x &= mask`, `x = x | mask` → `x |= mask`
  - Detect `x = x ^ mask` → `x ^= mask`
  - Detect `x = x << n` → `x <<= n`, `x = x >> n` → `x >>= n`
  - This is a C output-level transformation (pattern match on HirNode::Assign where LHS appears in RHS)
  - Also detect memory compound: `*(_DWORD *)(a1 + 24) &= ~8u` (IDA golden pattern)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5
  - **Blocked By**: None

  **References**:
  - `crates/unlace-output/src/c_printer.rs` — Add compound assignment rendering
  - `tests/golden/x86_64/sub_100140.c` — IDA: `*(_DWORD *)(a1 + 24) &= ~8u`

  **Acceptance Criteria**:
  - [ ] `+=`, `-=`, `&=`, `|=` appear in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(output): compound assignment recovery (+=, &=, |=)`

- [ ] 31. Increment/decrement recovery (++i, i--)

  **What to do**:
  - Detect `x = x + 1` → `++x` or `x++` (pre/post increment)
  - Detect `x = x - 1` → `--x` or `x--` (pre/post decrement)
  - Pre vs post: if the OLD value is used elsewhere → post-increment; if only the NEW value → pre-increment
  - This is closely related to Task 30 (compound assignment) — `x += 1` → `++x`
  - Important for for-loop step rendering: `for (i = 0; i < n; ++i)` (Task 15)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5
  - **Blocked By**: None

  **References**:
  - `crates/unlace-output/src/c_printer.rs` — Render ++ and --
  - `tests/golden/x86_64/sub_103B50.c` — IDA: `++i` in for loop

  **Acceptance Criteria**:
  - [ ] `++` and `--` appear in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(output): increment/decrement recovery (++, --)`

- [ ] 32. Variable naming conventions (v1/v2, a1/a2, result)

  **What to do**:
  - IDA names temporaries: `v1`, `v2`, `v3`, ... (sequential, per function)
  - IDA names parameters: `a1`, `a2`, `a3`, ... (sequential, by register order)
  - IDA names return value: `result`
  - Currently unlace may use different naming — align with IDA convention
  - Update `variable_merge.rs` or C printer to use this naming scheme
  - Ensure variable numbering is deterministic and sequential

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5
  - **Blocked By**: None

  **References**:
  - `crates/unlace-passes/src/variable_merge.rs` (508 lines) — Variable naming
  - `crates/unlace-output/src/c_printer.rs` — Variable name rendering
  - `tests/golden/x86_64/*.c` — IDA naming patterns

  **Acceptance Criteria**:
  - [ ] Variables named `v1`, `v2`, ... and parameters `a1`, `a2`, ...
  - [ ] Return variable named `result`
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(output): IDA-style variable naming (v1, a1, result)`

- [ ] 33. Register comments (// rax, // rbx annotations)

  **What to do**:
  - IDA adds register annotations as comments: `__int64 v1; // r15`
  - Track which register each variable originated from (already available from SSA)
  - Add inline comments in C printer after variable declarations
  - Format: `{type} {name}; // {register}` for register variables
  - Format: `{type} {name}; // [rsp+{offset}h] [rbp-{offset}h]` for stack variables

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5
  - **Blocked By**: None

  **References**:
  - `crates/unlace-output/src/c_printer.rs` — Add comment rendering
  - `tests/golden/x86_64/sub_100140.c` — IDA: `__int64 v1; // r15`

  **Acceptance Criteria**:
  - [ ] `// rax`, `// rbx` etc. appear as comments in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(output): register and stack offset comments`

- [ ] 34. Stack frame annotations ([rsp+offset] [rbp-offset] BYREF)

  **What to do**:
  - IDA annotates stack variables with their frame layout:
    - `__int64 v119[6]; // [rsp+40h] [rbp-A8h] BYREF`
  - `BYREF` means the variable's address is taken (passed to a function)
  - Calculate RSP and RBP offsets from stack variable analysis
  - Detect BYREF: if any STORE of `&variable` to a call argument position

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5
  - **Blocked By**: None

  **References**:
  - `crates/unlace-passes/src/stack_vars.rs` (587 lines) — Stack variable recovery (has offset info)
  - `tests/golden/x86_64/sub_1056B0.c` — IDA: `[rsp+40h] [rbp-A8h] BYREF`

  **Acceptance Criteria**:
  - [ ] Stack offset comments appear for stack variables
  - [ ] `BYREF` annotation for address-taken variables
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 5)
  - Message: `feat(output): stack frame annotations with BYREF`

### Wave 6: C++ + SIMD + Polish

- [ ] 35. C++ exception handling

  **What to do**:
  - Recognize `__cxa_allocate_exception`, `__cxa_throw`, `__cxa_begin_catch`, `__cxa_end_catch`
  - Recognize `.gcc_except_table` and LSDA (Language Specific Data Area)
  - Map exception regions to try/catch blocks in output
  - Render: `try { ... } catch (...) { ... }` when possible
  - Fall back to raw function calls when structure is unclear

  **Recommended Agent Profile**:
  - **Category**: `deep`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6 (with Tasks 36-40)
  - **Blocked By**: Task 21 (needs Type system)

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — Add exception idiom recognition
  - `tests/golden/x86_64/sub_1073D0.c` — IDA: `__cxa_allocate_exception`, `__cxa_throw`
  - `/tmp/gcc_except_table_spec.md` — LSDA format specification

  **Acceptance Criteria**:
  - [ ] Exception functions recognized and named in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 6)
  - Message: `feat(cpp): C++ exception handling recognition`

- [ ] 36. C++ RTTI/vtable enhancement

  **What to do**:
  - Enhance existing `CppVtablePass` to:
    - Detect vtable pointers and render as `vtable for ClassName`
    - Detect typeinfo and render as `typeinfo for ClassName`
    - Map virtual call sites to vtable slots
    - Demangle C++ names in output (use existing demangling if available)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-passes/src/cpp_vtable.rs` — Existing vtable pass (enhance)
  - `/tmp/llvm_rtti_vtable_analysis.md` — RTTI/vtable layout analysis

  **Acceptance Criteria**:
  - [ ] `vtable for` and `typeinfo for` appear in output for C++ binaries
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 6)
  - Message: `feat(cpp): enhance RTTI/vtable recognition`

- [ ] 37. SIMD type support (__m128, __m128i, __m256)

  **What to do**:
  - Add SIMD types to the Type enum (Task 21): `__m128`, `__m128i`, `__m128d`, `__m256`, `__m256i`, `__m256d`
  - Detect SIMD register usage (XMM0-XMM15, YMM0-YMM15) and assign SIMD types
  - Render variable declarations with SIMD types: `__m128 v12; // xmm0`

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — Existing SIMD idiom recognition
  - `tests/golden/x86_64/func.c` — IDA: `__m128 v12; // xmm0`
  - `/tmp/simd_analysis.md` — SIMD pattern analysis

  **Acceptance Criteria**:
  - [ ] `__m128` type appears in output for SSE functions
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 6)
  - Message: `feat(types): SIMD type support (__m128, __m256)`

- [ ] 38. SIMD intrinsic recognition

  **What to do**:
  - Map SSE/AVX instructions to C intrinsic names:
    - MOVDQU → `_mm_loadu_si128` / `_mm_storeu_si128`
    - MOVAPS → `_mm_load_ps` / `_mm_store_ps`
    - PUNPCKLQDQ → `_mm_unpacklo_epi64`
    - PADDD → `_mm_add_epi32`
    - PXOR → `_mm_xor_si128`
    - etc. (cover the 20-30 most common SSE instructions)
  - Enhance existing idiom recognition pass

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6
  - **Blocked By**: Task 21

  **References**:
  - `crates/unlace-passes/src/idiom_recognition.rs` — Extend with SSE intrinsics
  - `tests/golden/x86_64/sub_1056B0.c` — IDA: `_mm_unpacklo_epi64`

  **Acceptance Criteria**:
  - [ ] SIMD intrinsic names appear in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 6)
  - Message: `feat(idiom): SIMD intrinsic recognition (_mm_*)`

- [ ] 39. Floating-point simplification rules (8 rules)

  **What to do**:
  - `x + 0.0 → x`, `x * 1.0 → x`, `x * 0.0 → 0.0` (with NaN caveat)
  - `x / 1.0 → x`
  - `x - x → 0.0` (if -ffast-math flag detected)
  - `-(-x) → x` (float negation cancellation)
  - `float_to_int(int_to_float(x)) → x` when lossless
  - `FABS(x) → x` when x is provably non-negative

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/algebraic_simplify.rs` — Add float rules
  - `crates/unlace-ir/src/op.rs` — FLOAT_ADD, FLOAT_SUB, FLOAT_MULT, etc.

  **Acceptance Criteria**:
  - [ ] 8 float rules with unit tests
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 6)
  - Message: `feat(simplify): floating-point simplification rules`

- [ ] 40. De Morgan's law + comparison negation enhancement

  **What to do**:
  - Ensure condition_simplify.rs applies De Morgan's comprehensively:
    - `!(a && b)` → `!a || !b`
    - `!(a || b)` → `!a && !b`
  - Apply comparison pushing: `!(a < b)` → `a >= b` instead of `!a < b`
  - Handle nested: `!(a && !(b || c))` → `!a || b || c`
  - This enhances short_circuit recovery (Task 16) output quality

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6
  - **Blocked By**: Task 5

  **References**:
  - `crates/unlace-passes/src/condition_simplify.rs` (1557 lines) — Enhance

  **Acceptance Criteria**:
  - [ ] Negated conditions simplified in output
  - [ ] `cargo test --workspace` passes

  **Commit**: YES (groups with Wave 6)
  - Message: `feat(simplify): comprehensive De Morgan's law and comparison negation`

### Wave 7: Integration + Metrics

- [ ] 41. Wire all new passes into pipeline.rs in correct order

  **What to do**:
  - Add `algebraic_simplify` to the SSA fixedpoint loop (after constant_fold, before copy_propagation)
  - Add `cast_insertion` after type_infer
  - Ensure all structuring passes run in correct order
  - Verify the full pipeline: lift → SSA → optimize (fixedpoint) → dead_store → stack_vars → type_infer → cast_insertion → structure → control_flow_refinement → output
  - Run the full pipeline on ALL fixtures and verify no panics

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: NO (integration)
  - **Blocks**: Tasks 42-44
  - **Blocked By**: All Wave 1-6 tasks

  **References**:
  - `crates/unlace-cli/src/pipeline.rs` — Pipeline assembly (update)

  **Acceptance Criteria**:
  - [ ] All new passes registered in pipeline
  - [ ] `cargo test --workspace` passes
  - [ ] All fixtures decompile without panic

  **Commit**: YES
  - Message: `feat(pipeline): wire all new passes in correct order`

- [ ] 42. Update golden expected output files

  **What to do**:
  - Run `UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures` to regenerate expected output
  - Review diffs: ensure improvements (more whiles, fors, switches, ternaries, structs, arrays)
  - Verify no regressions (no loss of existing patterns)

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: []

  **Parallelization**:
  - **Can Run In Parallel**: NO (depends on 41)
  - **Blocked By**: Task 41

  **References**:
  - `tests/golden/expected/*.c` — Expected output files to regenerate

  **Acceptance Criteria**:
  - [ ] All golden expected files updated
  - [ ] `cargo test -p unlace-test-harness --test golden_fixtures` passes

  **Commit**: YES
  - Message: `test(golden): update expected output with all improvements`

- [ ] 43. Expand scoring function with new metrics

  **What to do**:
  - Update `score()` to include new metrics from Task 1
  - Weights: switch=3.0, ternary=2.0, struct_access=2.0, array_access=2.0, cast=1.0, compound_assign=1.0
  - Add do_while_count with weight 2.0
  - Verify all 14 fixtures still score ≥90% with new metrics

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: [`rust-style`]

  **Parallelization**:
  - **Can Run In Parallel**: NO (depends on 42)
  - **Blocked By**: Task 42

  **References**:
  - `crates/unlace-test-harness/tests/golden_fixtures.rs` — Scoring function

  **Acceptance Criteria**:
  - [ ] New metrics included in scoring
  - [ ] All fixtures score ≥90% on expanded metrics

  **Commit**: YES
  - Message: `feat(test): expand scoring with switch/ternary/struct/array metrics`

- [ ] 44. Run full 150-file IDA golden comparison

  **What to do**:
  - Decompile `hexrays/ida-9.33/hexx64.so` (LOCAL FILE, .gitignored, 5.1MB — this is the binary the 150 IDA golden files were produced from; if missing, skip this task and file a note)
  - Compare unlace output against all 150 IDA golden C files
  - Report: how many patterns match, what's still different
  - Create a coverage report: `pattern_category → percentage_match`
  - This is informational — identifies remaining work for future iterations

  **Recommended Agent Profile**:
  - **Category**: `general`
  - **Skills**: []

  **Parallelization**:
  - **Can Run In Parallel**: NO (final integration)
  - **Blocked By**: Task 41

  **References**:
  - `tests/golden/x86_64/*.c` — 150 IDA golden C files
  - `.sisyphus/evidence/task-44-coverage-report.md` — Output report

  **Acceptance Criteria**:
  - [ ] Coverage report generated
  - [ ] All 150 files decompile without panic

  **Commit**: NO (informational only)

---

## Final Verification Wave (MANDATORY — after ALL implementation tasks)

> 4 review agents run in PARALLEL. ALL must APPROVE. Present consolidated results to user and get explicit "okay" before completing.

- [ ] F1. **Plan Compliance Audit** — `oracle`
  Read the plan end-to-end. For each "Must Have": verify implementation exists (read file, run command). For each "Must NOT Have": search codebase for forbidden patterns — reject with file:line if found. Check evidence files exist in .sisyphus/evidence/. Compare deliverables against plan.
  Output: `Must Have [N/N] | Must NOT Have [N/N] | Tasks [N/N] | VERDICT: APPROVE/REJECT`

- [ ] F2. **Code Quality Review** — `general`
  Run `cargo test --workspace` + `cargo clippy --workspace`. Review all changed files for: `as any` style casts, empty catches, debug prints in prod, commented-out code, unused imports. Check for AI slop: excessive comments, over-abstraction, generic names.
  Output: `Build [PASS/FAIL] | Clippy [PASS/FAIL] | Tests [N pass/N fail] | Files [N clean/N issues] | VERDICT`

- [ ] F3. **Real Manual QA** — `general`
  Start from clean state. Decompile ALL 14 fixtures and verify output. If `hexrays/ida-9.33/hexx64.so` exists locally (5.1MB, .gitignored), decompile it and compare 10 representative functions against `tests/golden/x86_64/*.c`. If the binary is missing, skip the 150-file comparison and note it. Test edge cases: empty functions, huge functions, stripped binaries. Save evidence to `.sisyphus/evidence/final-qa/`.
  Output: `Fixtures [N/N pass] | Golden [N/10 match] | Edge Cases [N tested] | VERDICT`

- [ ] F4. **Scope Fidelity Check** — `general`
  For each task: read "What to do", read actual diff (git log/diff). Verify 1:1 — everything in spec was built, nothing beyond spec was built. Check "Must NOT do" compliance. Detect cross-task contamination. Flag unaccounted changes.
  Output: `Tasks [N/N compliant] | Contamination [CLEAN/N issues] | Unaccounted [CLEAN/N files] | VERDICT`

---

## Commit Strategy

Commit after each wave completion:
- Wave 1: `feat(test): expand test infrastructure and validate existing passes`
- Wave 2: `feat(passes): add 60+ expression simplification rules`
- Wave 3: `feat(struct): fix and enhance control flow recovery passes`
- Wave 4: `feat(types): recursive type system and IDA output formatting`
- Wave 5: `feat(output): advanced output features and annotations`
- Wave 6: `feat(cpp): C++ support, SIMD, floating-point rules`
- Wave 7: `feat(pipeline): wire all passes and update golden tests`

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace  # Expected: 0 failures
cargo test -p unlace-test-harness --test golden_fixtures golden_fixtures_metrics_summary -- --nocapture  # Expected: 14/14 at 100%
cargo clippy --workspace  # Expected: 0 errors
```

### Final Checklist
- [ ] All "Must Have" patterns present
- [ ] All "Must NOT Have" patterns absent
- [ ] All tests pass
- [ ] 150 IDA golden files decompilable without panic
- [ ] New metrics show ≥80% parity across all categories
