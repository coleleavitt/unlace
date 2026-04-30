# unlace Phase 4 — Output Quality & 85% IDA Parity

## TL;DR

> **Quick Summary**: Push unlace from 49.4% to 85%+ IDA parity by fixing 6 semantic bugs in the C printer, plumbing PLT symbol resolution (the single highest-ROI change), adding string literal recovery from .rodata, implementing LODWORD/HIDWORD macros, array subscript recovery, and expanding compound assignment operators. Data-driven prioritization: measure parity per-feature first, then fix by `weight × gap`.
> 
> **Deliverables**:
> - Fix 6 C printer semantic bugs (BoolXor, IntNegate, parens, SUBPIECE mask, IntCarry)
> - PLT symbol resolution in C output (`sub_401020()` → `printf()`)
> - String literal recovery from .rodata sections
> - Global variable naming (`dword_604000` instead of raw addresses)
> - LODWORD/HIDWORD/BYTE1/LOBYTE macro emission for SUBPIECE
> - Array subscript recovery (`*(base + i*4)` → `base[i]`)
> - Compound assignment expansion (`*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `|=`, `^=`)
> - Break statement in HIR + switch fall-through support
> - Negation folding (`!(a < b)` → `a >= b`)
> - If-chain → switch conversion
> - Operator precedence table with auto-parenthesization
> - Calling convention annotation in C output
> - Parity gate: every wave must improve or maintain parity score
> 
> **Estimated Effort**: Large (4-5 waves, ~25 tasks)
> **Parallel Execution**: YES — 5-7 concurrent tasks per wave
> **Critical Path**: Parity baseline → PLT symbols → string recovery → array subscript → measurement

---

## Context

### Phase 3 Results
- 895 tests passing across 16 crates, 23 pass files
- 49.4% IDA parity (28 overlapping functions measured against hexx64.so)
- Phase 3 added: division/modulo idioms, SCCP, dead store elimination, CSE, for-loop/do-while/continue recovery, SSE2 MVP, .eh_frame, Rust-specific passes, batch mode, plugin API, negative constants, IDA-style type casts, function headers

### Gap Analysis (8 parallel exploration agents)
- **bg_183b3a84**: IDA reference output patterns — 15 feature categories cataloged across 55,000 reference files
- **bg_478331ba**: Address resolution gaps — PLT data exists but unused, zero string recovery, no global naming
- **bg_4db8767c**: HIR/structurer completeness — 16 gaps found including no Break, no fall-through, limited join detection
- **bg_9e00a32a**: Type system gaps — 11 gaps including no composite types, LOAD doesn't infer pointee, no parameter inference
- **bg_2a7cb133**: C printer audit — 6 critical semantic bugs, 9 major missing features, 8 minor style issues
- **bg_fa656b77**: Actual output vs IDA comparison — 12 specific gaps across 4 fixtures
- **bg_a0cd8a4b**: Decompiler ecosystem research — SAILR, RetDec, Ghidra techniques cataloged
- **bg_e22e8077**: IDA pseudocode internals — Ghidra PrintC RPN stack, RetDec 25+ optimizer passes

### Metis Review
- **Directive**: Measure per-feature parity BEFORE prioritizing work
- **Highest ROI**: PLT symbol resolution (calls feature weight 3.0, likely scoring ~0.0)
- **Locked out**: Pattern-based struct inference, structurer rewrites, Rust-specific additions, SAILR (unless data shows gotos are dragging)
- **Key insight**: `calls` Jaccard similarity is 0.0 when unlace emits `sub_XXXX` and IDA emits `printf` — fixing this alone could add 8-12 parity points

## Work Objectives

### Core Objective
Fix semantic bugs, plumb symbol/string resolution, and improve C output idioms to reach 85% IDA parity measured by the existing parity script.

### Concrete Deliverables
- 6 C printer bug fixes (BoolXor, IntNegate, parens, SUBPIECE, IntCarry, signed/unsigned ops)
- Symbol resolution pipeline: BinaryImage → pipeline → c_printer
- String table: .rodata scanning → BTreeMap<u64, String> → inline in LOAD
- Global naming: absolute address tracking → `dword_XXXX` / `qword_XXXX`
- SUBPIECE macro emission: LOBYTE/BYTE1/LOWORD/HIWORD/LODWORD/HIDWORD
- Array subscript: `*(base + index * stride)` → `base[index]`
- Expanded compound assignment: all 10 C compound operators
- HIR Break + switch fall-through
- Operator precedence table
- If-chain → switch conversion pass
- Negation folding in C printer
- Calling convention annotation

### Definition of Done
- [ ] `cargo xtask measure-parity` reports ≥ 85% overall parity
- [ ] `cargo test --workspace` passes with ≥ 920 tests (895 baseline + new tests)
- [ ] `cargo xtask lint-determinism` passes
- [ ] All 4 fixtures decompile successfully
- [ ] Zero semantic bugs in C printer operator emission

### Must Have
- PLT symbol resolution (biggest single ROI item)
- All 6 C printer bug fixes
- String literal recovery
- SUBPIECE → macro emission
- Parity measurement gate after each wave

### Must NOT Have (Guardrails)
- No pattern-based struct inference (DWARF-only is fine for 85%)
- No structurer rewrites (dominator-tree approach is working)
- No Rust-specific additions (Phase 3 already added RustPanic/Enum/Vtable)
- No C++ RTTI parsing (out of scope for parity target)
- No SAILR goto reduction UNLESS parity data shows gotos feature < 0.5
- No new crates (all work fits in existing crates)
- No modifications to `measure_parity.py` (metric integrity)
- No HashMap/HashSet in enforced crates

---

## Verification Strategy

> **ZERO HUMAN INTERVENTION** — ALL verification is agent-executed.

### Test Decision
- **Infrastructure exists**: YES (cargo test, 895 baseline)
- **Automated tests**: YES (tests-after — each fix adds regression test)
- **Framework**: cargo test

### QA Policy
- Every task includes `cargo test --workspace` verification
- Parity measurement gate: `python3 scripts/measure_parity.py --json` after each wave
- Evidence saved to `.sisyphus/evidence/p4-{N}-{slug}.txt`

---

## Execution Strategy

### Parallel Execution Waves

```
Wave 0 (Prerequisite — Measure Baseline):
├── P4-0: Run parity with --json, compute per-feature averages, store baseline

Wave 1 (Bug Fixes — all in c_printer.rs, independent line ranges):
├── P4-1: Fix BoolXor (!=→^) + IntNegate (!→~) + BoolNegate distinction [general]
├── P4-2: Fix parenthesization — precedence table with auto-parens [general]
├── P4-3: Fix SUBPIECE mask emission + LODWORD/HIDWORD/BYTE1 macros [general]
├── P4-4: Fix IntCarry/IntScarry/IntSborrow emission [general]
├── P4-5: Fix signed/unsigned op distinction (IntDiv vs IntSdiv, IntRight vs IntSright, IntLess vs IntSless) [general]
├── P4-6: Expand compound assignment (*=, /=, %=, <<=, >>=, &=, |=, ^=) + pre-increment [general]
└── P4-7: Negation folding in C printer (!(a<b) → a>=b) [general]

Wave 2 (Symbol Resolution — highest ROI, different files):
├── P4-8: Pass symbol table through pipeline to c_printer [general]
├── P4-9: PLT symbol resolution in CALL emission [general]
├── P4-10: String literal recovery from .rodata [general]
├── P4-11: Global variable naming (dword_XXXX, qword_XXXX) [general]
└── P4-12: Calling convention annotation in function signature [general]

Wave 3 (Structural Improvements — structurer.rs + hir.rs + c_printer.rs):
├── P4-13: Add Break to HIR + emit in C printer [general]
├── P4-14: Switch fall-through support (after P4-13) [general]
├── P4-15: If-chain → switch conversion pass [general]
├── P4-16: Array subscript recovery (*(base+i*stride) → base[i]) [general]
├── P4-17: CALLIND distinction ((*fptr)(args) vs fptr(args)) [general]
├── P4-23: CALLOTHER resolution to intrinsic/function names [general]
├── P4-24: Constant folding cleanup (popcount(0), XOR-self) [general]
└── P4-25: nullptr keyword + integer literal suffixes [general]

Wave 4 (Conditional — data-driven, only if parity < 80% after Wave 3):
├── P4-18: Goto reduction — EagerReturns (duplicate return blocks) [general]
├── P4-19: Goto reduction — CrossJumpRevert (undo tail merging) [general]
├── P4-20: Parameter type inference from calling convention registers [general]
├── P4-21: Return type inference (void vs int vs pointer) [general]
└── P4-22: Register/stack variable comments (v1 // rax) [general]

Wave FINAL (Verification):
├── P4-F1: Plan compliance audit (oracle)
├── P4-F2: Code quality review (general)
├── P4-F3: Parity measurement — must be ≥ 85% (general)
└── P4-F4: Regression check (general)
→ Present results → Get explicit user okay

Critical Path: P4-0 → P4-8/P4-9 → P4-10 → P4-16 → P4-F3
Parallel Speedup: ~65% faster than sequential
Max Concurrent: 7 (Wave 1)
```

### Dependency Matrix

| Task | Depends On | Blocks | Wave |
|------|-----------|--------|------|
| P4-0 | — | ALL | 0 |
| P4-1 | P4-0 | — | 1 |
| P4-2 | P4-0 | — | 1 |
| P4-3 | P4-0 | — | 1 |
| P4-4 | P4-0 | — | 1 |
| P4-5 | P4-0 | — | 1 |
| P4-6 | P4-0 | — | 1 |
| P4-7 | P4-0 | — | 1 |
| P4-8 | P4-0 | P4-9, P4-10, P4-11 | 2 |
| P4-9 | P4-8 | — | 2 |
| P4-10 | P4-8 | — | 2 |
| P4-11 | P4-8 | — | 2 |
| P4-12 | P4-0 | — | 2 |
| P4-13 | P4-0 | P4-14 | 3 |
| P4-14 | P4-13 | — | 3 |
| P4-15 | P4-0 | — | 3 |
| P4-16 | P4-0 | — | 3 |
| P4-17 | P4-0 | — | 3 |
| P4-18 | Wave 3 done + parity < 80% | — | 4 |
| P4-19 | Wave 3 done + parity < 80% | — | 4 |
| P4-20 | Wave 3 done + parity < 80% | — | 4 |
| P4-21 | Wave 3 done + parity < 80% | — | 4 |
| P4-22 | Wave 3 done + parity < 80% | — | 4 |

### Agent Dispatch Summary

- **Wave 0**: 1 task (measurement only)
- **Wave 1**: 7 tasks — all `general`, all in c_printer.rs (independent line ranges)
- **Wave 2**: 5 tasks — `general`, crosses loader/pipeline/output crates
- **Wave 3**: 5 tasks — `general`, structurer.rs + c_printer.rs
- **Wave 4**: 5 tasks — `general`, CONDITIONAL on parity data
- **FINAL**: 4 tasks — oracle + general

---

## TODOs

- [x] P4-0. Parity baseline measurement

  **What to do**:
  - Run `cargo build --release -p unlace-cli`
  - Run `python3 scripts/measure_parity.py --json > .sisyphus/evidence/p4-0-baseline.json`
  - Parse JSON: extract `overall_parity`, per-feature averages, per-function scores
  - Identify the 3 lowest-scoring features (by `weight × avg_score`)
  - Write summary to `.sisyphus/evidence/p4-0-baseline.txt`

  **Must NOT do**: Modify measure_parity.py or any source code.

  **Recommended Agent Profile**: `general`
  **Parallelization**: Sequential — Wave 0 prerequisite for all other work
  **Blocks**: ALL subsequent tasks
  **Blocked By**: None

  **References**:
  - `scripts/measure_parity.py` — parity measurement tool
  - `.sisyphus/evidence/p3-24-parity.txt` — Phase 3 parity results

  **Acceptance Criteria**:
  - [ ] Baseline JSON saved to `.sisyphus/evidence/p4-0-baseline.json`
  - [ ] Summary with per-feature breakdown in `.sisyphus/evidence/p4-0-baseline.txt`
  - [ ] Top 3 ROI features identified with `weight × gap` calculation

  **QA Scenarios**:
  ```
  Scenario: Baseline captured
    Tool: Bash
    Steps:
      1. python3 scripts/measure_parity.py --json > baseline.json
      2. cat baseline.json | python3 -c "import json,sys; d=json.load(sys.stdin); print(f'Overall: {d[\"overall_parity\"]:.1f}%')"
      3. Assert overall_parity is a number between 0 and 100
    Expected Result: Baseline JSON with overall parity ~49%
    Evidence: .sisyphus/evidence/p4-0-baseline.json
  ```

  **Commit**: NO (measurement only)

- [ ] P4-1. Fix BoolXor + IntNegate + BoolNegate semantic bugs

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Line ~1015: Change `BoolXor` from emitting `!=` to emitting `^`
    - Line ~1026: Change `IntNegate` from emitting `!` to emitting `~` (bitwise NOT)
    - Verify `BoolNegate` correctly emits `!` (logical NOT) — this one IS correct
    - Verify `Int2comp` correctly emits `-` (two's complement negation)
  - Add regression tests:
    - `test_boolxor_emits_caret`: BoolXor(a, b) → `a ^ b` not `a != b`
    - `test_intnegate_emits_tilde`: IntNegate(a) → `~a` not `!a`
    - `test_boolnegate_emits_bang`: BoolNegate(a) → `!a` (unchanged, verify)

  **Must NOT do**: Change any other operators. Don't refactor emit_binop/emit_unaryop.

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1, parallel with P4-2 through P4-7
  **Blocks**: None
  **Blocked By**: P4-0

  **References**:
  - `crates/unlace-output/src/c_printer.rs:1010-1030` — operator emission
  - `crates/unlace-ir/src/op.rs` — BoolXor, IntNegate, BoolNegate, Int2comp variants

  **Acceptance Criteria**:
  - [ ] `cargo test -p unlace-output -- boolxor` passes
  - [ ] `cargo test -p unlace-output -- intnegate` passes
  - [ ] `cargo test --workspace` passes with ≥ 895 tests

  **QA Scenarios**:
  ```
  Scenario: BoolXor emits ^ not !=
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- boolxor
      2. Assert test passes
    Expected Result: BoolXor test verifies ^ operator in output
    Evidence: .sisyphus/evidence/p4-1-boolxor.txt
  ```

  **Commit**: `fix(output): BoolXor emits ^ not !=, IntNegate emits ~ not !`

- [ ] P4-2. Operator precedence table with auto-parenthesization

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Define a precedence table mapping each IrOp to a C precedence level (use Ghidra's values: multiply=54, add=50, shift=46, compare=42, equal=38, bitand=34, xor=30, bitor=26, logand=22, logor=18, assign=14)
    - Modify `emit_binop` to accept parent precedence and insert parens when child precedence < parent
    - Modify `emit_unaryop` to wrap complex operands in parens
    - Handle associativity: `a + b + c` needs no parens, but `a - (b - c)` does
  - Add tests:
    - `test_parens_shift_in_add`: `(a << b) + c` not `a << b + c`
    - `test_parens_add_in_shift`: `a << (b + c)` not `a << b + c`
    - `test_no_parens_associative`: `a + b + c` (no extra parens)
    - `test_parens_nested_binop`: `(a + b) * c` not `a + b * c`
    - `test_parens_unary_on_binop`: `-(a + b)` not `-a + b`

  **Must NOT do**: Rewrite the entire C printer. Only add precedence awareness to existing emit functions.

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1, parallel with P4-1, P4-3 through P4-7
  **Blocks**: None
  **Blocked By**: P4-0

  **References**:
  - `crates/unlace-output/src/c_printer.rs:1230-1250` — emit_binop, emit_unaryop
  - Ghidra `printc.cc:22-77` — OpToken precedence table (documented in bg_e22e8077 findings)

  **Acceptance Criteria**:
  - [ ] `cargo test -p unlace-output -- parens` passes
  - [ ] `cargo test --workspace` passes

  **QA Scenarios**:
  ```
  Scenario: Nested operations parenthesized correctly
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- parens
      2. Assert all 5 tests pass
    Expected Result: Correct C operator precedence in output
    Evidence: .sisyphus/evidence/p4-2-parens.txt
  ```

  **Commit**: `fix(output): operator precedence table with auto-parenthesization`

- [ ] P4-3. SUBPIECE mask + LODWORD/HIDWORD/BYTE1 macros

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Find SUBPIECE handling (~line 1153-1165)
    - Replace bit shift emission with IDA-style macros based on output size and byte offset:
      - `SUBPIECE(x, 0) size=1` → `LOBYTE(x)`
      - `SUBPIECE(x, 1) size=1` → `BYTE1(x)`
      - `SUBPIECE(x, 2) size=1` → `BYTE2(x)`
      - `SUBPIECE(x, 3) size=1` → `BYTE3(x)`
      - `SUBPIECE(x, 0) size=2` → `LOWORD(x)`
      - `SUBPIECE(x, 2) size=2` → `HIWORD(x)`
      - `SUBPIECE(x, 0) size=4` → `LODWORD(x)`
      - `SUBPIECE(x, 4) size=4` → `HIDWORD(x)`
      - Fallback for non-standard sizes: `(type_cast)(x >> shift)`
    - Add macro typedefs to IDA_TYPEDEFS prelude:
      ```c
      #define LOBYTE(x)  ((_BYTE)(x))
      #define BYTE1(x)   ((_BYTE)((x) >> 8))
      #define BYTE2(x)   ((_BYTE)((x) >> 16))
      #define BYTE3(x)   ((_BYTE)((x) >> 24))
      #define LOWORD(x)  ((_WORD)(x))
      #define HIWORD(x)  ((_WORD)((x) >> 16))
      #define LODWORD(x) ((_DWORD)(x))
      #define HIDWORD(x) ((_DWORD)((x) >> 32))
      ```
  - Add tests:
    - `test_subpiece_lobyte`: SUBPIECE(v, 0) size=1 → `LOBYTE(v)`
    - `test_subpiece_byte1`: SUBPIECE(v, 1) size=1 → `BYTE1(v)`
    - `test_subpiece_lodword`: SUBPIECE(v, 0) size=4 → `LODWORD(v)`
    - `test_subpiece_hidword`: SUBPIECE(v, 4) size=4 → `HIDWORD(v)`
    - `test_subpiece_macros_in_prelude`: output contains `#define LOBYTE`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1, parallel with P4-1, P4-2, P4-4 through P4-7
  **Blocks**: None
  **Blocked By**: P4-0

  **References**:
  - `crates/unlace-output/src/c_printer.rs:1153-1165` — current SUBPIECE handling
  - `crates/unlace-output/src/c_printer.rs:1405-1414` — IDA_TYPEDEFS prelude
  - IDA reference files: `BYTE1(v4)`, `LOBYTE(v4)`, `HIDWORD(v167)` patterns throughout

  **Acceptance Criteria**:
  - [ ] `cargo test -p unlace-output -- subpiece` passes
  - [ ] `cargo test --workspace` passes
  - [ ] `./target/debug/unlace decompile fixtures/medium.elf | grep -c "LOBYTE\|LODWORD\|HIDWORD"` > 0

  **QA Scenarios**:
  ```
  Scenario: SUBPIECE emits IDA macros
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- subpiece
      2. cargo build && ./target/debug/unlace decompile fixtures/medium.elf | grep -c "LOBYTE\|BYTE1\|LODWORD\|HIDWORD"
      3. Assert count > 0
    Expected Result: IDA-style macros in decompiler output
    Evidence: .sisyphus/evidence/p4-3-subpiece.txt
  ```

  **Commit**: `feat(output): SUBPIECE → LODWORD/HIDWORD/BYTE1/LOBYTE macros`

- [ ] P4-4. Fix IntCarry/IntScarry/IntSborrow emission

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - `IntCarry`: currently emits `(a + b) < a` — verify this is correct for unsigned carry
    - `IntScarry`: currently emits `0` — implement proper signed overflow detection: `((a ^ ~b) & (a ^ (a + b))) >> (bits-1)` or simpler: `__builtin_add_overflow_p(a, b, (type)0)` comment
    - `IntSborrow`: currently emits `0` — implement proper signed borrow: similar to scarry but for subtraction
    - For MVP: emit `/* CARRY */`, `/* SCARRY */`, `/* SBORROW */` comments with the operation rather than silent `0`
  - Add tests:
    - `test_intcarry_emits_check`: IntCarry(a, b) → output contains carry detection pattern
    - `test_intscarry_not_zero`: IntScarry(a, b) → output is NOT just `0`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1
  **Commit**: `fix(output): IntCarry/IntScarry/IntSborrow emission`

  **QA Scenarios**:
  ```
  Scenario: IntCarry emits proper check
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- intcarry
      2. Assert test passes
    Expected Result: IntCarry output is not silent 0
    Evidence: .sisyphus/evidence/p4-4-carry.txt
  ```

- [ ] P4-5. Fix signed/unsigned operator distinction

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - `IntDiv` vs `IntSdiv`: both currently emit `/`. For unsigned: cast operands to unsigned type first: `(unsigned int)a / (unsigned int)b`
    - `IntRight` vs `IntSright`: both emit `>>`. For unsigned: `(unsigned)a >> b`. For signed: `(int)a >> b` (or document that C's `>>` is implementation-defined for signed)
    - `IntLess` vs `IntSless`: both emit `<`. For unsigned: `(unsigned)a < (unsigned)b`
    - `IntLessequal` vs `IntSlessequal`: same pattern
    - `IntRem` vs `IntSrem`: both emit `%`. For unsigned: cast to unsigned
  - Add tests for each operator pair verifying correct cast insertion

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1
  **Commit**: `fix(output): distinguish signed/unsigned division, shift, comparison`

  **QA Scenarios**:
  ```
  Scenario: Unsigned ops have unsigned casts
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- signed_unsigned
      2. Assert test passes
    Expected Result: IntDiv emits unsigned cast, IntSdiv does not
    Evidence: .sisyphus/evidence/p4-5-signed.txt
  ```

- [ ] P4-6. Expand compound assignment operators

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Find existing `try_emit_compound_assign` (~line 920) — already handles `+=`, `-=`, `++`, `--`
    - Add: `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `|=`, `^=`
    - Pattern: if `output == input[0]` and op is binary, emit `output op= input[1]`
    - Add pre-increment/pre-decrement (`++v`, `--v`) — currently only post is supported
  - Add tests:
    - `test_compound_mul_assign`: `v = v * 3` → `v *= 3`
    - `test_compound_shl_assign`: `v = v << 2` → `v <<= 2`
    - `test_compound_and_assign`: `v = v & mask` → `v &= mask`
    - `test_compound_or_assign`: `v = v | flag` → `v |= flag`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1
  **Commit**: `feat(output): expand compound assignment to all 10 C operators`

  **QA Scenarios**:
  ```
  Scenario: All compound operators work
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- compound
      2. Assert all 4+ tests pass
    Expected Result: v *= 3, v <<= 2, v &= mask, v |= flag in output
    Evidence: .sisyphus/evidence/p4-6-compound.txt
  ```

- [ ] P4-7. Negation folding in C printer

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting `BoolNegate(comparison)`, fold the negation into the comparison:
      - `!(a < b)` → `a >= b`
      - `!(a <= b)` → `a > b`
      - `!(a == b)` → `a != b`
      - `!(a != b)` → `a == b`
      - `!(a > b)` → `a <= b`
      - `!(a >= b)` → `a < b`
    - Check if inner expression is a comparison op (IntLess, IntLessequal, IntEqual, IntNotequal, IntSless, IntSlessequal, FloatLess, FloatEqual, etc.)
    - If so, emit the negated comparison directly
    - If not a comparison (e.g., `!flag`), emit `!flag` as before
  - NOTE: `condition_simplify.rs` already handles some of this at IR level. This catches what survives to the C output stage.
  - Add tests:
    - `test_negate_less_to_geq`: `!(a < b)` → `a >= b`
    - `test_negate_equal_to_neq`: `!(a == b)` → `a != b`
    - `test_negate_non_comparison_kept`: `!flag` → `!flag` (no change)

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 1
  **Commit**: `feat(output): negation folding — !(a<b) → a>=b`

  **QA Scenarios**:
  ```
  Scenario: Negated comparisons folded
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- negate
      2. Assert all 3 tests pass
    Expected Result: !(a < b) becomes a >= b in output
    Evidence: .sisyphus/evidence/p4-7-negate.txt
  ```

- [ ] P4-8. Pass symbol table through decompilation pipeline

  **What to do**:
  - In `crates/unlace-cli/src/pipeline.rs` (or wherever decompilation is orchestrated):
    - Pass `BinaryImage` (or a `SymbolTable: BTreeMap<u64, String>` extracted from it) through to the C printer
    - The `BinaryImage` already has `plt_symbols: BTreeMap<u64, String>` and `symbols` — just need to thread it through
  - In `crates/unlace-output/src/c_printer.rs`:
    - Add `symbols: &BTreeMap<u64, String>` parameter to `print_c` / `print_c_with_dwarf` (or add to a `PrintContext` struct)
    - Also accept a `string_table: &BTreeMap<u64, String>` (for P4-10)
  - This is infrastructure — the actual symbol USE is in P4-9/P4-10/P4-11

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 2, first task (P4-9/10/11 depend on it)
  **Blocks**: P4-9, P4-10, P4-11
  **Commit**: `refactor(output): thread symbol table through decompilation pipeline`

  **QA Scenarios**:
  ```
  Scenario: Symbol table reaches C printer
    Tool: Bash
    Steps:
      1. cargo build --workspace
      2. Assert build succeeds with no errors
    Expected Result: Pipeline compiles with symbol table parameter
    Evidence: .sisyphus/evidence/p4-8-pipeline.txt
  ```

- [ ] P4-9. PLT symbol resolution in CALL emission

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Find CALL target emission (~line 88-95, currently `format!("sub_{:x}", target.offset)`)
    - Before emitting `sub_XXXX`, check `symbols.get(&target_addr)`:
      1. If found → emit symbol name (e.g., `printf(...)`)
      2. If not found → emit `sub_{:x}(...)` as before
    - Handle PLT resolution: PLT stub at 0x401020 → `plt_symbols[0x401020]` = "printf"
    - Also check the function's own symbol table for internal calls
  - Add tests:
    - `test_call_plt_resolved`: CALL to PLT address with known symbol → `printf(...)` in output
    - `test_call_unknown_keeps_sub`: CALL to unknown address → `sub_XXXX(...)` in output
    - `test_call_internal_resolved`: CALL to internal function with symbol → `my_func(...)`
  - Run parity measurement after — `calls` feature should improve significantly

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 2, after P4-8
  **Blocked By**: P4-8
  **Commit**: `feat(output): resolve PLT/symbol names in CALL emission`

  **QA Scenarios**:
  ```
  Scenario: PLT calls resolved to names
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- call_plt
      2. cargo build && ./target/debug/unlace decompile fixtures/debug_hello.elf 2>/dev/null | grep -c "puts\|printf"
      3. Assert grep count > 0
    Expected Result: External calls show real function names
    Evidence: .sisyphus/evidence/p4-9-plt.txt
  ```

- [ ] P4-10. String literal recovery from .rodata

  **What to do**:
  - In `crates/unlace-loader/src/elf.rs` (or new file `crates/unlace-loader/src/strings.rs`):
    - After loading ELF, scan `.rodata` and `.data` sections for null-terminated strings
    - Heuristic: sequence of printable ASCII bytes (0x20-0x7E) + newlines/tabs, terminated by 0x00, length ≥ 4
    - Build `BTreeMap<u64, String>` mapping virtual address → string content
    - Add to `BinaryImage` as `string_table: BTreeMap<u64, String>`
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting a LOAD from a constant address, check `string_table.get(&addr)`
    - If found and context is pointer-to-char: emit `"string"` instead of `*(_BYTE *)(addr)`
    - Also check: if a CALL argument is a constant that's in string_table, emit the string
  - Add tests:
    - `test_rodata_string_detected`: fixture with known string → string appears in string_table
    - `test_string_inlined_in_call`: `call(0x402000)` where 0x402000 is "hello" → `call("hello")`
    - `test_non_string_address_unchanged`: address not in string_table → raw address

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 2, after P4-8
  **Blocked By**: P4-8
  **Commit**: `feat(loader+output): string literal recovery from .rodata sections`

  **QA Scenarios**:
  ```
  Scenario: Strings inlined in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- string
      2. cargo build && ./target/debug/unlace decompile fixtures/debug_hello.elf 2>/dev/null | grep -c '"'
      3. Assert grep count > 0 (quoted strings in output)
    Expected Result: String literals from .rodata appear in C output
    Evidence: .sisyphus/evidence/p4-10-strings.txt
  ```

- [ ] P4-11. Global variable naming

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting LOAD/STORE with a constant absolute address (not stack, not string):
      - Check if address is in `.data`, `.bss`, or `.rodata` section range
      - If so, name it based on access size: `byte_XXXX`, `word_XXXX`, `dword_XXXX`, `qword_XXXX`
      - If address has a symbol name, use that instead
    - Collect all global variable references during emission, declare them at the top of the function
  - Add tests:
    - `test_global_dword_naming`: LOAD 4 bytes from 0x604000 → `dword_604000`
    - `test_global_qword_naming`: LOAD 8 bytes from 0x604008 → `qword_604008`
    - `test_global_with_symbol`: LOAD from address with symbol "my_global" → `my_global`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 2, after P4-8
  **Blocked By**: P4-8
  **Commit**: `feat(output): global variable naming (dword_XXXX, qword_XXXX)`

  **QA Scenarios**:
  ```
  Scenario: Globals named by access size
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- global
      2. Assert tests pass
    Expected Result: LOAD from absolute addr emits dword_XXXX or qword_XXXX
    Evidence: .sisyphus/evidence/p4-11-globals.txt
  ```

- [ ] P4-12. Calling convention annotation in function signature

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting the function signature, include the calling convention:
      - `CallingConvention::SystemV` → `__attribute__((sysv_abi))` or `/* sysv */` prefix
      - `CallingConvention::MicrosoftX64` → `__fastcall`
      - `CallingConvention::Cdecl` → `__cdecl`
      - `CallingConvention::Unknown` → no annotation
    - IDA format: `__int64 __fastcall sub_1DB100(__int64 a1, __int64 a2)`
    - Emit between return type and function name
  - Add tests:
    - `test_fastcall_annotation`: MS x64 convention → `__fastcall` in signature
    - `test_sysv_annotation`: SysV convention → convention name in signature
    - `test_unknown_no_annotation`: Unknown convention → no annotation

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 2, independent (no dependency on P4-8)
  **Commit**: `feat(output): calling convention annotation in function signatures`

  **QA Scenarios**:
  ```
  Scenario: Convention in signature
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- convention
      2. Assert tests pass
    Expected Result: Output contains __fastcall or convention name in function signature
    Evidence: .sisyphus/evidence/p4-12-convention.txt
  ```

- [ ] P4-13. Add Break to HIR + emit in C printer

  **What to do**:
  - In `crates/unlace-struct/src/hir.rs`:
    - Add `Break(Option<LabelId>)` variant to `HirNode` enum
    - The `Option<LabelId>` supports labeled breaks for nested loops (emit `break label;`)
    - Plain `Break(None)` emits `break;`
  - In `crates/unlace-struct/src/structurer.rs`:
    - In loop structuring, detect edges that exit the current loop → emit `Break` instead of `Goto`
    - Specifically: if a block inside a loop has a successor that is the loop's exit block, emit Break
  - In `crates/unlace-output/src/c_printer.rs`:
    - Add match arm for `HirNode::Break` → emit `break;` or `break label;`
  - Use `lsp_find_references` on HirNode before adding the variant to understand blast radius
  - Add tests:
    - `test_break_in_while`: while loop with conditional exit → `break;` in output
    - `test_break_replaces_goto`: edge to loop exit → Break not Goto
    - `test_break_in_c_output`: C output contains `break;` inside loop

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, blocks P4-14
  **Blocks**: P4-14
  **Commit**: `feat(struct): Break statement in HIR and C output`

  **QA Scenarios**:
  ```
  Scenario: Break emitted in loops
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- break
      2. cargo test -p unlace-output -- break
      3. Assert all tests pass
    Expected Result: Loop exits emit break; instead of goto
    Evidence: .sisyphus/evidence/p4-13-break.txt
  ```

- [ ] P4-14. Switch fall-through support

  **What to do**:
  - In `crates/unlace-struct/src/hir.rs`:
    - Add `fall_through: bool` field to switch case representation (or modify `SwitchCase`)
  - In `crates/unlace-struct/src/structurer.rs`:
    - In switch structuring, detect when two consecutive cases share the same body block → mark as fall-through
    - Detect: case N and case N+1 both jump to the same target block
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting switch cases, only emit `break;` when `fall_through == false`
    - For fall-through cases, emit `// fall through` comment (GCC -Wimplicit-fallthrough compliance)
  - Add tests:
    - `test_switch_no_fallthrough`: normal case → emits `break;`
    - `test_switch_fallthrough`: two cases same body → no break, has `// fall through`
    - `test_switch_default_no_break`: default as last case → no break needed

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, after P4-13
  **Blocked By**: P4-13
  **Commit**: `feat(struct): switch case fall-through support`

  **QA Scenarios**:
  ```
  Scenario: Fall-through cases omit break
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- fallthrough
      2. cargo test -p unlace-output -- fallthrough
      3. Assert tests pass
    Expected Result: Shared-body cases don't emit break
    Evidence: .sisyphus/evidence/p4-14-fallthrough.txt
  ```

- [ ] P4-15. If-chain → switch conversion pass

  **What to do**:
  - WRITE `crates/unlace-struct/src/if_to_switch.rs` (new post-structuring pass)
  - Add `pub mod if_to_switch;` to `crates/unlace-struct/src/lib.rs`
  - Algorithm (RetDec-style):
    1. Walk HIR looking for if-else-if chains
    2. All conditions must be `(expr == const)` with the SAME expr
    3. Expr must not be a function call, array access, or dereference (side-effect safety)
    4. Require ≥ 3 cases (2 is just if/else)
    5. Convert: each `else if (x == N)` → `case N:` with appended `break`
    6. `else` clause → `default:`
  - Run after ternary_recovery, before C emission
  - Add tests:
    - `test_if_chain_to_switch_3_cases`: if(x==1)...else if(x==2)...else if(x==3) → switch(x)
    - `test_if_chain_different_vars_no_convert`: if(x==1)...else if(y==2) → stays if-else
    - `test_if_chain_2_cases_no_convert`: only 2 cases → stays if-else
    - `test_if_chain_with_else_becomes_default`: else clause → default case

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, independent
  **Commit**: `feat(struct): if-chain → switch conversion post-structuring pass`

  **QA Scenarios**:
  ```
  Scenario: If-chains become switches
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- if_to_switch
      2. Assert all 4 tests pass
    Expected Result: 3+ case if-chain converted to switch
    Evidence: .sisyphus/evidence/p4-15-if-switch.txt
  ```

- [ ] P4-16. Array subscript recovery

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Detect PTRADD pattern in LOAD/STORE: when emitting `*(type *)(base + index * stride)`:
      1. If the address is `INT_ADD(base, INT_MULT(index, const_stride))` AND `const_stride` matches the access size → emit `base[index]`
      2. If the address is `PTRADD(base, index, stride)` → emit `base[index]`
      3. Also handle: `*(base + const_offset)` where offset is a multiple of access size → `base[offset/size]` (constant index)
    - Only apply to simple cases: single-level array, constant stride matching load size
  - Add tests:
    - `test_array_subscript_basic`: `*(base + i * 4)` load 4 bytes → `base[i]`
    - `test_array_subscript_ptradd`: PTRADD(base, i, 4) → `base[i]`
    - `test_array_constant_index`: `*(base + 16)` load 4 bytes → `base[4]`
    - `test_array_stride_mismatch_keeps_deref`: stride doesn't match size → keep pointer deref
    - `test_array_no_multiply_keeps_deref`: plain add without multiply → keep pointer deref

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, independent
  **Commit**: `feat(output): array subscript recovery — *(base+i*stride) → base[i]`

  **QA Scenarios**:
  ```
  Scenario: Array access detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- array_subscript
      2. Assert all 5 tests pass
    Expected Result: *(base + i*4) becomes base[i] in output
    Evidence: .sisyphus/evidence/p4-16-array.txt
  ```

- [ ] P4-17. CALLIND distinction in C output

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Find CALLIND emission (currently same as CALL)
    - Emit indirect calls as `(*fptr)(args)` instead of `fptr(args)` to distinguish from direct calls
    - Or: emit `((return_type (*)(param_types))fptr)(args)` with function pointer cast
    - For MVP: just `(*fptr)(args)` is sufficient
  - Add tests:
    - `test_callind_star_syntax`: CALLIND(fptr, args) → `(*fptr)(args)`
    - `test_call_direct_no_star`: CALL(addr, args) → `sub_XXXX(args)` (no star)

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, independent
  **Commit**: `feat(output): distinguish CALL vs CALLIND — (*fptr)(args) syntax`

  **QA Scenarios**:
  ```
  Scenario: Indirect calls use star syntax
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- callind
      2. Assert both tests pass
    Expected Result: CALLIND emits (*fptr)(args), CALL emits func(args)
    Evidence: .sisyphus/evidence/p4-17-callind.txt
  ```

- [ ] P4-18. Goto reduction — EagerReturns

  **What to do**:
  - WRITE `crates/unlace-struct/src/eager_returns.rs` (pre-structuring CFG pass)
  - Add `pub mod eager_returns;` to `crates/unlace-struct/src/lib.rs`
  - Algorithm (from SAILR paper, USENIX 2024):
    1. Find all RETURN blocks with ≥ 2 predecessors
    2. If the return block is small (≤ 3 instructions), duplicate it into each predecessor
    3. Remove the original shared return block
    4. This eliminates gotos-to-return that the structurer can't handle
  - Run BEFORE the structurer (pre-structuring normalization)
  - **CONDITIONAL**: Only implement if parity JSON shows `gotos` feature averaging < 0.5
  - Add tests:
    - `test_eager_return_duplicated`: return block with 2 predecessors → duplicated into each
    - `test_large_return_not_duplicated`: return block with 10+ instructions → not duplicated
    - `test_single_pred_unchanged`: return block with 1 predecessor → unchanged

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 4, conditional
  **Commit**: `feat(struct): EagerReturns pre-structuring pass for goto reduction`

  **QA Scenarios**:
  ```
  Scenario: Return blocks duplicated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- eager_return
      2. Assert all 3 tests pass
    Expected Result: Small return blocks duplicated into predecessors
    Evidence: .sisyphus/evidence/p4-18-eager.txt
  ```

- [ ] P4-19. Goto reduction — CrossJumpRevert

  **What to do**:
  - WRITE `crates/unlace-struct/src/cross_jump_revert.rs` (pre-structuring CFG pass)
  - Algorithm (from SAILR paper):
    1. Detect pairs of blocks with identical instruction tails (last N instructions match)
    2. If they were merged by GCC's cross-jump optimization (same successor, identical tails), split them back
    3. This undoes tail merging that creates irreducible control flow
  - Run BEFORE the structurer, AFTER EagerReturns
  - **CONDITIONAL**: Only implement if parity JSON shows `gotos` feature averaging < 0.5
  - Add tests:
    - `test_cross_jump_split`: two blocks with identical 3-instruction tails → split
    - `test_different_tails_unchanged`: different tails → unchanged

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 4, conditional, after P4-18
  **Commit**: `feat(struct): CrossJumpRevert pre-structuring pass`

  **QA Scenarios**:
  ```
  Scenario: Merged tails split back
    Tool: Bash
    Steps:
      1. cargo test -p unlace-struct -- cross_jump
      2. Assert both tests pass
    Expected Result: Identical tail blocks split to reduce irreducibility
    Evidence: .sisyphus/evidence/p4-19-crossjump.txt
  ```

- [ ] P4-20. Parameter type inference from calling convention

  **What to do**:
  - Extend `crates/unlace-passes/src/calling_convention.rs`:
    - After detecting the calling convention, infer parameter types from register usage in the entry block
    - SystemV: RDI=a1 (int/ptr), RSI=a2, RDX=a3, RCX=a4, R8=a5, R9=a6; XMM0-XMM7 for float params
    - If parameter register is used in float ops → `double` param; in pointer ops → `void *` param; else → `__int64` param
  - Update function signature in C output to include inferred types
  - **CONDITIONAL**: Only if parity < 80% after Wave 3
  - Add tests:
    - `test_param_count_from_convention`: SystemV function using RDI+RSI → 2 params
    - `test_param_float_type`: XMM0 used in FloatAdd → first param is `double`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 4, conditional
  **Commit**: `feat(passes): parameter type inference from calling convention registers`

  **QA Scenarios**:
  ```
  Scenario: Params inferred from registers
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- param_type
      2. Assert both tests pass
    Expected Result: Functions show typed params instead of (void)
    Evidence: .sisyphus/evidence/p4-20-params.txt
  ```

- [ ] P4-21. Return type inference

  **What to do**:
  - Extend `crates/unlace-passes/src/calling_convention.rs` or new pass:
    - Detect return type from RAX/XMM0 usage at RETURN instructions
    - If function has no RETURN with value → `void`
    - If RETURN value is from float op / XMM0 → `double`
    - If RETURN value is from pointer op → `void *`
    - If RETURN value is from comparison → `bool` or `_BOOL`
    - Else → `__int64` (default for x86-64)
  - Update function signature in C output
  - **CONDITIONAL**: Only if parity < 80% after Wave 3
  - Add tests:
    - `test_void_return`: function with no return value → `void`
    - `test_int_return`: function returning RAX from IntAdd → `__int64`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 4, conditional
  **Commit**: `feat(passes): return type inference`

  **QA Scenarios**:
  ```
  Scenario: Return types inferred
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- return_type
      2. Assert both tests pass
    Expected Result: void functions show void, others show __int64
    Evidence: .sisyphus/evidence/p4-21-return.txt
  ```

- [ ] P4-22. Register/stack variable comments

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When declaring local variables at function top, add IDA-style register comments:
      - `__int64 v1; // rax` — register-backed variable
      - `__int64 v5; // [rsp+20h] [rbp-18h]` — stack variable with offset
    - Source: `SsaVarnode.base` tells us the Varnode's space (Register, Stack, Unique)
    - For Register: emit `// {register_name}` using register_file lookup
    - For Stack: emit `// [rsp+{offset}h]` using stack_vars info
  - **CONDITIONAL**: Only if parity < 80% after Wave 3
  - Add tests:
    - `test_register_comment`: register-backed var → `// rax` comment
    - `test_stack_comment`: stack var → `// [rsp+XXh]` comment

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 4, conditional
  **Commit**: `feat(output): register/stack variable comments in declarations`

  **QA Scenarios**:
  ```
  Scenario: Register comments on variables
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- register_comment
      2. Assert both tests pass
    Expected Result: Variable declarations include // rax, // [rsp+XXh] comments
    Evidence: .sisyphus/evidence/p4-22-comments.txt
  ```

- [ ] P4-23. CALLOTHER resolution to intrinsic/function names

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - Find CALLOTHER emission (currently emits `/* CALLOTHER */ 0`)
    - CALLOTHER carries a tag/index identifying the operation
    - Resolve the tag to a human-readable name using the IntrinsicRegistry (from P3-13)
    - For SSE intrinsics: emit `_mm_add_epi8(a, b)` instead of `/* CALLOTHER */ 0`
    - For unknown CALLOTHER: emit `/* unresolved CALLOTHER tag=N */` with the tag value
  - Add tests:
    - `test_callother_sse_resolved`: CALLOTHER with SSE tag → `_mm_add_epi8(...)` in output
    - `test_callother_unknown_annotated`: unknown tag → `/* CALLOTHER N */` comment

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, independent
  **References**:
  - `crates/unlace-lift-x86/src/intrinsics.rs` — IntrinsicRegistry with C names
  - `crates/unlace-output/src/c_printer.rs` — CALLOTHER emission
  **Commit**: `feat(output): resolve CALLOTHER to intrinsic names`

  **QA Scenarios**:
  ```
  Scenario: CALLOTHER resolved to intrinsic
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- callother
      2. cargo build && ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -c "CALLOTHER"
      3. Assert CALLOTHER count decreased or is 0
    Expected Result: SSE CALLOTHER becomes _mm_add_epi8 etc.
    Evidence: .sisyphus/evidence/p4-23-callother.txt
  ```

- [ ] P4-24. Constant folding cleanup in C output

  **What to do**:
  - Address the 31 occurrences of `__builtin_popcount(0)` and similar dead-code constants in output
  - In `crates/unlace-output/src/c_printer.rs` or as a post-emission HIR pass:
    - Detect `__builtin_popcount(0)` → replace with `0`
    - Detect `v = v ^ v` (XOR-with-self, 13 occurrences) → replace with `v = 0`
    - Detect `v & 0` → replace with `0`
    - Detect `v | 0` → replace with `v`
    - Detect `v + 0` → replace with `v`
    - These should ideally be caught by const_fold/SCCP, but some survive to output
  - Alternatively: strengthen SCCP or add a late-stage IR cleanup pass
  - Add tests:
    - `test_xor_self_becomes_zero`: `v = v ^ v` → `v = 0`
    - `test_popcount_zero_folded`: `__builtin_popcount(0)` → `0`
    - `test_and_zero_folded`: `v & 0` → `0`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, independent
  **Commit**: `fix(output): fold remaining constant expressions in C output`

  **QA Scenarios**:
  ```
  Scenario: Dead constants folded
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- fold_const
      2. cargo build && ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -c "__builtin_popcount(0)"
      3. Assert popcount(0) count is 0
    Expected Result: popcount(0) → 0, v^v → 0 in output
    Evidence: .sisyphus/evidence/p4-24-constfold.txt
  ```

- [ ] P4-25. nullptr keyword + integer literal suffixes

  **What to do**:
  - In `crates/unlace-output/src/c_printer.rs`:
    - When emitting a constant 0 used as a pointer (in pointer context: CALL/CALLIND argument, STORE address, PTRADD base, comparison with pointer): emit `nullptr` instead of `0`
    - For 64-bit integer literals: emit `0LL` suffix (IDA pattern)
    - For unsigned 64-bit: emit `0ULL` suffix
    - For unsigned 32-bit: emit `0u` suffix
    - Detect pointer context from type inference: if `var_types[sv] == PrimitiveType::Ptr` and value is 0, emit `nullptr`
  - Add tests:
    - `test_nullptr_in_pointer_context`: null pointer comparison → `if (ptr == nullptr)`
    - `test_0LL_suffix`: 64-bit zero → `0LL`
    - `test_unsigned_suffix`: unsigned constant → `0u` or `0ULL`

  **Recommended Agent Profile**: `general`
  **Parallelization**: Wave 3, independent
  **Commit**: `feat(output): nullptr keyword and integer literal suffixes`

  **QA Scenarios**:
  ```
  Scenario: nullptr in pointer context
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- nullptr
      2. Assert all 3 tests pass
    Expected Result: Null pointer comparisons use nullptr, 64-bit ints use LL suffix
    Evidence: .sisyphus/evidence/p4-25-nullptr.txt
  ```

---

## Final Verification Wave

- [ ] P4-F1. **Plan Compliance Audit** — `oracle`
  Read the plan end-to-end. For each "Must Have": verify implementation exists. For each "Must NOT Have": search codebase for forbidden patterns. Check evidence files exist. Compare deliverables against plan.
  Output: `Must Have [N/N] | Must NOT Have [N/N] | Tasks [N/N] | VERDICT: APPROVE/REJECT`

  **QA Scenarios**:
  ```
  Scenario: All Must Have items present
    Tool: Bash
    Steps:
      1. cargo build && ./target/debug/unlace decompile fixtures/debug_hello.elf 2>/dev/null | grep -c "puts\|printf"
      2. Assert count > 0 (PLT symbol resolution working)
      3. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -c "LOBYTE\|LODWORD"
      4. Assert count > 0 (SUBPIECE macros working)
    Expected Result: All Must Have features functional
    Evidence: .sisyphus/evidence/p4-f1-compliance.txt
  ```

- [ ] P4-F2. **Code Quality Review** — `general`
  Run `cargo test --workspace` + `cargo xtask lint-determinism` + `cargo clippy --workspace`. Review all changed files for semantic correctness. Check for empty error handling, commented-out code.
  Output: `Build [PASS/FAIL] | Lint [PASS/FAIL] | Tests [N pass/N fail] | VERDICT`

  **QA Scenarios**:
  ```
  Scenario: Build + test + lint clean
    Tool: Bash
    Steps:
      1. cargo test --workspace 2>&1 | grep -E "^test result:" | awk '{p+=$4; f+=$6} END {print "PASS: "p", FAIL: "f}'
      2. cargo xtask lint-determinism 2>&1 | tail -1
      3. Assert 0 failures and lint OK
    Expected Result: 920+ tests pass, determinism maintained
    Evidence: .sisyphus/evidence/p4-f2-quality.txt
  ```

- [ ] P4-F3. **Parity Measurement** — `general`
  Run `python3 scripts/measure_parity.py --json` and verify overall_parity ≥ 85.0%. Compare per-feature scores against Wave 0 baseline. Identify any features that regressed.
  Output: `Parity [X%] | vs Baseline [+Y%] | Regressions [NONE/list] | VERDICT`

  **QA Scenarios**:
  ```
  Scenario: Parity target met
    Tool: Bash
    Steps:
      1. cargo build --release
      2. python3 scripts/measure_parity.py 2>/dev/null | grep "Overall Parity"
      3. Assert parity >= 85.0%
    Expected Result: Overall parity 85%+ (up from 49.4%)
    Evidence: .sisyphus/evidence/p4-f3-parity.txt
  ```

- [ ] P4-F4. **Regression Check** — `general`
  Run all fixtures: medium.elf, debug_structs.elf, debug_calls.elf, debug_hello.elf. Verify each decompiles. Verify test count ≥ 920. Verify no FAILED tests.
  Output: `Fixtures [N/N] | Tests [N pass] | VERDICT`

  **QA Scenarios**:
  ```
  Scenario: No regressions from Phase 3
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello; do ./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l; done
      2. cargo test --workspace 2>&1 | grep -c "FAILED"
      3. Assert all fixtures produce output and 0 failures
    Expected Result: All 4 fixtures decompile, 0 test failures
    Evidence: .sisyphus/evidence/p4-f4-regression.txt
  ```

---

## Commit Strategy

- Wave 0: no commit (measurement only)
- Wave 1: 1 commit per bug fix (7 commits)
- Wave 2: 1 commit per feature (5 commits)
- Wave 3: 1 commit per feature (5 commits)
- Wave 4: 1 commit per feature (conditional, 0-5 commits)
- Final: `chore: Phase 4 complete — N/N tasks, X tests, Y% IDA parity`

---

## Success Criteria

### Verification Commands
```bash
cargo test --workspace                                    # ≥ 920 tests, 0 failures
cargo xtask lint-determinism                             # OK
python3 scripts/measure_parity.py --json | jq .overall   # ≥ 85.0
./target/debug/unlace decompile fixtures/medium.elf | grep -c "printf\|malloc\|free"  # > 0 (symbols resolved)
./target/debug/unlace decompile fixtures/medium.elf | grep -c '"'  # > 0 (string literals)
./target/debug/unlace decompile fixtures/medium.elf | grep -c "LOBYTE\|LODWORD"  # > 0 (macros)
```

### Final Checklist
- [ ] All "Must Have" present
- [ ] All "Must NOT Have" absent
- [ ] Parity ≥ 85%
- [ ] All tests pass
- [ ] All fixtures decompile
- [ ] Pushed to GitHub
