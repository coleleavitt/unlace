# unlace Phase 8 — C++ Support + Remaining Parity Gaps

## TL;DR

> **Quick Summary**: Add C++ decompilation support by (1) creating C++ test fixtures first for validation, (2) integrating C++ name demangling with type recovery from mangled names, (3) parsing .gcc_except_table for try/catch region recovery, (4) scanning RTTI for class hierarchy reconstruction, (5) adding C++ vtable dispatch detection, and (6) improving output quality with register comments and Callother intrinsic rendering.
>
> **Key Insight (Metis)**: C++ fixtures must come FIRST, not last. Every subsequent wave needs them for validation. Also: convert structurer panics to Results before adding exception edges.
>
> **Scope**: 28 tasks across 6 waves — focused on C++ support + output quality. SIMD type system changes deferred to Phase 9.
>
> **Estimated Effort**: Large (6 waves, 28 tasks)
> **Parallel Execution**: YES — 3-4 concurrent tasks per wave
> **Critical Path**: C++ fixtures → demangling → LSDA parser → RTTI scanner → vtable pass

---

## Context

### Phase 7 Results
- ~1238 tests passing across 16 crates (52K LOC)
- CMOVcc conditional fix landed — branches.elf produces 4 ifs
- Golden test infrastructure created
- Global copy propagation, GVN, alias-aware DSE added
- DWARF variable names, struct inference, Type propagation, array stride detection
- Variable naming heuristics, complex cast emission

### Remaining Gaps (from 5 exploration agents)
- **C++ support**: Zero — no demangling integration, no RTTI, no exception handling, no vtable dispatch
- **Dead code**: 191 dead assignments in medium.elf (DSE not catching all cases)
- **Output quality**: Register comments (85% gap), stack offsets (57% gap), Callother rendering
- **Structurer stability**: 20 panic! macros that will crash on unexpected C++ patterns
- **Parity metric**: 17% (broken — use fixture-based measurement instead)

### Intelligence Sources
- **bg_6de579ff**: Demangle references — symbolic-demangle already integrated, needs _ZTV/_ZTI recognition
- **bg_24fa629d**: IDA-binary references — 17,491 files, top gaps: register comments, calling conv, stack offsets
- **bg_0b03c48c**: Loaders/plugins/procs — Golang plugin, Mach-O features, ARM patterns
- **bg_657de7f7**: Current audit — 15/28 functions at 0%, 191 dead assignments, 42 panics
- **bg_121e31b9**: C++ research — LSDA parser ~300 LOC, RTTI scanner ~400 LOC, vtable pass ~150 LOC

### Metis Review
1. C++ fixtures FIRST (Wave 0), not last
2. Defer SIMD type system changes to Phase 9
3. Convert structurer panics before exception edges
4. Use fixture-based measurement, not hexx64.so parity
5. Cap at 28 tasks

---

## Work Objectives

### Core Objective
Add C++ decompilation support (demangling, RTTI, exceptions, vtables) with proper test fixtures, and improve output quality for remaining parity gaps.

### Definition of Done
- [ ] C++ fixtures compile and decompile successfully
- [ ] C++ mangled names demangled in output
- [ ] .gcc_except_table parsed for try/catch regions
- [ ] RTTI class hierarchy recovered from _ZTI*/_ZTV* symbols
- [ ] C++ vtable dispatch annotated
- [ ] `cargo test --workspace` passes with ≥ 1260 tests
- [ ] `cargo xtask lint-determinism` passes
- [ ] Golden tests pass for all fixtures (including new C++ ones)

### Must NOT Have (Guardrails)
- No SIMD type system changes (PrimitiveType enum extension) — defer to Phase 9
- No parity script modifications
- No HashMap/HashSet (BTreeMap only)
- No more than 28 tasks
- No exception edges fed into structurer without panic→Result conversion first

---

## Execution Strategy

### Wave Overview
```
Wave 0 (Foundation — C++ Fixtures + Panic Fixes):
├── P8-0: Create C++ vtable test fixture (virtual classes)
├── P8-1: Create C++ exception test fixture (try/catch/throw)
├── P8-2: Create C++ RTTI test fixture (dynamic_cast/typeid)
├── P8-3: Convert 10 critical structurer panics to Result types
└── P8-4: Add golden tests for new C++ fixtures

Wave 1 (Dead Code + Measurement):
├── P8-5: Fix dead assignment elimination (categorize + fix DSE misses)
├── P8-6: Reduce spurious type casts (120 → ~30 target)
├── P8-7: Fixture-based quality metrics baseline
└── P8-8: Measure improvement

Wave 2 (C++ Demangling):
├── P8-9: _ZTV/_ZTI/_ZTS symbol recognition in demangle.rs
├── P8-10: Type recovery from mangled names (extract param types, return type)
├── P8-11: Constructor/destructor detection from mangled names
└── P8-12: Demangled names in C output (function names, comments)

Wave 3 (LSDA + RTTI):
├── P8-13: .gcc_except_table LSDA parser (call site table, action records, type table)
├── P8-14: RTTI scanner (scan .rodata for _ZTI* typeinfo objects)
├── P8-15: Class hierarchy recovery from RTTI (single/multiple inheritance)
├── P8-16: Vtable method enumeration from _ZTV* symbols
└── P8-17: Integrate RTTI class names into C output

Wave 4 (C++ Vtable + Exception Annotation):
├── P8-18: C++ vtable dispatch pass (CALLIND through vptr at offset 0)
├── P8-19: Exception region annotation (try/catch comments from LSDA)
├── P8-20: __cxa_throw/__cxa_allocate_exception recognition
└── P8-21: Verify C++ fixtures produce correct decompiled output

Wave 5 (Output Quality):
├── P8-22: Callother → C intrinsic rendering (SSE/AVX intrinsic names)
├── P8-23: Reduce dead assignments in medium.elf output
└── P8-24: Final golden file updates + measurement

Wave FINAL (Verification):
├── P8-F1: Code quality review
├── P8-F2: C++ fixture golden test verification
├── P8-F3: Regression check
└── P8-F4: Feature compliance audit
```

---

## TODOs

- [x] P8-0. Create C++ vtable test fixture

  **What to do**:
  - Write `fixtures/src/cpp_vtable.cpp`:
    ```cpp
    struct Base { virtual int value(); virtual ~Base(); };
    struct Derived : Base { int value() override; };
    int Base::value() { return 0; }
    Base::~Base() {}
    int Derived::value() { return 42; }
    int use_base(Base* b) { return b->value(); }
    int main() { Derived d; return use_base(&d); }
    ```
  - Compile: `g++ -O2 -std=c++17 -o fixtures/cpp_vtable.elf fixtures/src/cpp_vtable.cpp`
  - Verify: `objdump -d fixtures/cpp_vtable.elf | grep -c "_ZTV"` shows vtable symbols
  - Verify: `./target/debug/unlace decompile fixtures/cpp_vtable.elf` produces output

  **QA Scenarios**:
  ```
  Scenario: C++ vtable fixture compiles and decompiles
    Tool: Bash
    Steps:
      1. file fixtures/cpp_vtable.elf
      2. ./target/debug/unlace decompile fixtures/cpp_vtable.elf 2>/dev/null | wc -l
      3. Assert output > 10 lines
    Expected Result: Fixture exists and produces decompiled output
    Evidence: .sisyphus/evidence/p8-0-vtable-fixture.txt
  ```

  **Commit**: `feat(fixtures): C++ vtable test fixture with virtual classes`

- [x] P8-1. Create C++ exception test fixture

  **What to do**:
  - Write `fixtures/src/cpp_exceptions.cpp`:
    ```cpp
    #include <stdexcept>
    void may_throw(int x) { if (x < 0) throw std::runtime_error("negative"); }
    int safe_call(int x) { try { may_throw(x); return 0; } catch (const std::exception& e) { return -1; } }
    int main() { return safe_call(-1); }
    ```
  - Compile: `g++ -O2 -std=c++17 -o fixtures/cpp_exceptions.elf fixtures/src/cpp_exceptions.cpp`
  - Verify: `readelf -S fixtures/cpp_exceptions.elf | grep gcc_except_table` shows LSDA section

  **QA Scenarios**:
  ```
  Scenario: C++ exception fixture has LSDA
    Tool: Bash
    Steps:
      1. readelf -S fixtures/cpp_exceptions.elf | grep -c "gcc_except_table"
      2. Assert count >= 1
    Expected Result: .gcc_except_table section present
    Evidence: .sisyphus/evidence/p8-1-exception-fixture.txt
  ```

  **Commit**: `feat(fixtures): C++ exception test fixture with try/catch/throw`

- [x] P8-2. Create C++ RTTI test fixture

  **What to do**:
  - Write `fixtures/src/cpp_rtti.cpp`:
    ```cpp
    struct Animal { virtual const char* speak() = 0; virtual ~Animal() = default; };
    struct Dog : Animal { const char* speak() override { return "woof"; } };
    struct Cat : Animal { const char* speak() override { return "meow"; } };
    const char* identify(Animal* a) { if (auto* d = dynamic_cast<Dog*>(a)) return d->speak(); return "unknown"; }
    int main() { Dog d; return identify(&d)[0]; }
    ```
  - Compile: `g++ -O2 -std=c++17 -frtti -o fixtures/cpp_rtti.elf fixtures/src/cpp_rtti.cpp`
  - Verify: `nm fixtures/cpp_rtti.elf | grep -c "_ZTI"` shows typeinfo symbols

  **QA Scenarios**:
  ```
  Scenario: C++ RTTI fixture has typeinfo symbols
    Tool: Bash
    Steps:
      1. nm fixtures/cpp_rtti.elf | grep -c "_ZTI"
      2. Assert count >= 3 (Animal, Dog, Cat)
    Expected Result: RTTI typeinfo symbols present
    Evidence: .sisyphus/evidence/p8-2-rtti-fixture.txt
  ```

  **Commit**: `feat(fixtures): C++ RTTI test fixture with dynamic_cast/typeid`

- [x] P8-3. Convert critical structurer panics to Result types

  **What to do**:
  - In `crates/unlace-struct/src/`:
    - Find all `panic!` macros: `grep -rn "panic!" crates/unlace-struct/src/`
    - Convert the 10 most critical ones to `Result<_, StructureError>` or `Option`
    - Focus on: ternary_recovery.rs, if_to_switch.rs, short_circuit.rs, switch_recovery.rs
    - These will crash when C++ exception edges create unexpected AST patterns
  - Add `StructureError` enum if not present
  - Update callers to handle Results

  **QA Scenarios**:
  ```
  Scenario: Structurer panics reduced
    Tool: Bash
    Steps:
      1. grep -c "panic!" crates/unlace-struct/src/*.rs
      2. Assert count < 15 (was ~20)
    Expected Result: Critical panics converted to Results
    Evidence: .sisyphus/evidence/p8-3-panics.txt
  ```

  **Commit**: `fix(struct): convert critical panics to Result types for C++ safety`

- [x] P8-4. Add golden tests for C++ fixtures

  **What to do**:
  - Extend `crates/unlace-test-harness/tests/golden_fixtures.rs` to include C++ fixtures
  - Capture initial golden output for cpp_vtable.elf, cpp_exceptions.elf, cpp_rtti.elf
  - Use `UPDATE_GOLDEN=1` to create initial snapshots

  **QA Scenarios**:
  ```
  Scenario: C++ golden tests pass
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures
      2. Assert all tests pass
    Expected Result: Golden tests exist for C++ fixtures
    Evidence: .sisyphus/evidence/p8-4-golden.txt
  ```

  **Commit**: `feat(tests): golden tests for C++ fixtures`

- [x] P8-5. Fix dead assignment elimination

  **What to do**:
  - Investigate the 191 dead assignments in medium.elf
  - Categorize: (a) genuine DSE misses vs (b) expression tree artifacts
  - For DSE misses: extend dead_store_elim.rs to catch more patterns
  - For expression tree artifacts: ensure foldable_exprs suppresses declarations
  - Target: reduce dead assignments from 191 to < 50

  **QA Scenarios**:
  ```
  Scenario: Dead assignments reduced
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -cE "v[0-9]+ = 0;"
      2. Assert count < 100 (was 191)
    Expected Result: Significant reduction in dead assignments
    Evidence: .sisyphus/evidence/p8-5-dead-code.txt
  ```

  **Commit**: `fix(passes): reduce dead assignments in output`

- [x] P8-6. Reduce spurious type casts

  **What to do**:
  - Currently unlace emits ~120 type casts where IDA emits ~19 for the same function
  - In c_printer.rs: add cast elision rules:
    - Don't cast when source and destination types are the same
    - Don't cast when widening is implicit in C (int → long long)
    - Don't cast pointer types when context already implies pointer
  - Target: reduce casts from 120 to < 40

  **QA Scenarios**:
  ```
  Scenario: Spurious casts reduced
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -cE "\([_A-Z]+ \*\)"
      2. Assert count < 80 (was ~120)
    Expected Result: Fewer unnecessary type casts
    Evidence: .sisyphus/evidence/p8-6-casts.txt
  ```

  **Commit**: `fix(output): reduce spurious type casts with elision rules`

- [x] P8-7. Fixture-based quality metrics baseline

  **What to do**:
  - For each fixture (including new C++ ones), capture metrics:
    - Line count, if count, for count, while count, return count, goto count, variable count, cast count
  - Store in `.sisyphus/evidence/p8-7-metrics.txt`

  **QA Scenarios**:
  ```
  Scenario: Metrics captured for all fixtures
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello branches cpp_vtable cpp_exceptions cpp_rtti; do lines=$(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l); ifs=$(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | grep -c "if"); echo "$f: $lines lines, $ifs ifs"; done
      2. Assert all fixtures produce output
    Expected Result: Metrics documented for all 8 fixtures
    Evidence: .sisyphus/evidence/p8-7-metrics.txt
  ```

  **Commit**: NO (measurement only)

- [x] P8-8. Measure Wave 1 improvement

  **What to do**:
  - Run metrics on all fixtures, compare against P8-7 baseline
  - Store in `.sisyphus/evidence/p8-8-wave1.txt`

  **QA Scenarios**:
  ```
  Scenario: Metrics captured and compared
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello branches; do echo "$f: $(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l) lines"; done
      2. Assert all fixtures produce output
    Expected Result: Metrics documented with improvement notes
    Evidence: .sisyphus/evidence/p8-8-wave1.txt
  ```

  **Commit**: NO (measurement only)

- [x] P8-9. _ZTV/_ZTI/_ZTS symbol recognition

  **What to do**:
  - In `crates/unlace-output/src/demangle.rs`:
    - Add recognition for special C++ symbols:
      - `_ZTV*` → "vtable for ClassName"
      - `_ZTI*` → "typeinfo for ClassName"
      - `_ZTS*` → "typeinfo name for ClassName"
      - `_ZGV*` → "guard variable for ..."
    - Add `SymbolKind` enum: `Normal`, `Vtable`, `TypeInfo`, `TypeInfoName`, `GuardVariable`, `Constructor`, `Destructor`
    - Detect from demangled output or prefix matching
  - Add tests

  **Commit**: `feat(output): _ZTV/_ZTI/_ZTS special symbol recognition`

  **QA Scenarios**:
  ```
  Scenario: Special symbols recognized
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- ztv_zti
      2. Assert tests pass
    Expected Result: _ZTV/_ZTI/_ZTS detected and classified
    Evidence: .sisyphus/evidence/p8-9-symbols.txt
  ```

- [x] P8-10. Type recovery from mangled names

  **What to do**:
  - Extend `demangle.rs` to extract structured type info from demangled signatures
  - Parse `full_signature` to extract: namespace path, class name, method name, parameter types, return type
  - Store in `DemangleResult` as structured fields
  - Feed into type inference when available

  **Commit**: `feat(output): type recovery from C++ mangled names`

  **QA Scenarios**:
  ```
  Scenario: Types extracted from mangled names
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- type_recovery
      2. Assert tests pass
    Expected Result: Parameter and return types extracted from mangled C++ names
    Evidence: .sisyphus/evidence/p8-10-typerecovery.txt
  ```

- [x] P8-11. Constructor/destructor detection

  **What to do**:
  - Detect C1/C2 constructors and D0/D1/D2 destructors from mangled names
  - Add `is_ctor`/`is_dtor` flags to `DemangleResult`
  - In C output: annotate constructors/destructors with comments

  **Commit**: `feat(output): C++ constructor/destructor detection from mangled names`

  **QA Scenarios**:
  ```
  Scenario: Ctors/dtors detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- ctor_dtor
      2. Assert tests pass
    Expected Result: C1/C2 constructors and D0/D1/D2 destructors identified
    Evidence: .sisyphus/evidence/p8-11-ctordtor.txt
  ```

- [x] P8-12. Demangled names in C output

  **What to do**:
  - Ensure demangled C++ names appear in function signatures and call sites
  - Format: `// std::vector<int>::push_back(const int&)` as comment above function
  - Use sanitized short name as C identifier: `std_vector_int_push_back`

  **Commit**: `feat(output): demangled C++ names in function signatures and comments`

  **QA Scenarios**:
  ```
  Scenario: Demangled names in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- demangled_output
      2. ./target/debug/unlace decompile fixtures/cpp_vtable.elf 2>/dev/null | grep -ci "base\|derived\|value"
      3. Assert count > 0
    Expected Result: C++ class/method names visible in decompiled output
    Evidence: .sisyphus/evidence/p8-12-demangled.txt
  ```

- [x] P8-13. .gcc_except_table LSDA parser

  **What to do**:
  - WRITE `crates/unlace-loader/src/gcc_except_table.rs` (~300 LOC)
  - Parse: LsdaHeader, CallSiteTable, ActionRecords, TypeTable
  - Output: `FunctionLsda { function_start, try_regions: Vec<TryRegion>, caught_typeinfo_addrs }`
  - Use gimli (already a dependency) for DWARF encoding parsing
  - Reference: chop-project/chop LSDA parser

  **Commit**: `feat(loader): .gcc_except_table LSDA parser for try/catch regions`

  **QA Scenarios**:
  ```
  Scenario: LSDA parsed from C++ exception fixture
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- gcc_except
      2. Assert tests pass with try regions detected
    Expected Result: Call site table and type table parsed from .gcc_except_table
    Evidence: .sisyphus/evidence/p8-13-lsda.txt
  ```

- [x] P8-14. RTTI scanner

  **What to do**:
  - WRITE `crates/unlace-loader/src/rtti.rs` (~400 LOC)
  - Scan symbols for `_ZTI*` typeinfo objects
  - Parse typeinfo structure: vtable ptr, name ptr, base class ptrs
  - Detect: __class_type_info (leaf), __si_class_type_info (single inheritance), __vmi_class_type_info (multiple)
  - Output: `Vec<CppClass { mangled_name, demangled_name, typeinfo_addr, bases, vtable_methods }>`

  **Commit**: `feat(loader): RTTI scanner for C++ class hierarchy recovery`

  **QA Scenarios**:
  ```
  Scenario: RTTI typeinfo objects found
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- rtti
      2. Assert tests pass with _ZTI symbols detected
    Expected Result: Typeinfo objects parsed from .rodata
    Evidence: .sisyphus/evidence/p8-14-rtti.txt
  ```

- [x] P8-15. Class hierarchy recovery

  **What to do**:
  - Build inheritance tree from RTTI base class pointers
  - Detect: single inheritance chains, multiple inheritance, virtual inheritance
  - Store in BTreeMap<u64, CppClass> keyed by typeinfo address

  **Commit**: `feat(loader): C++ class hierarchy recovery from RTTI`

  **QA Scenarios**:
  ```
  Scenario: Inheritance tree built
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- class_hierarchy
      2. Assert tests pass
    Expected Result: Base class relationships recovered from RTTI
    Evidence: .sisyphus/evidence/p8-15-hierarchy.txt
  ```

- [x] P8-16. Vtable method enumeration

  **What to do**:
  - For each _ZTV* symbol, enumerate virtual method pointers
  - Skip first 2 slots (offset-to-top, typeinfo pointer)
  - Map slot index to method VA
  - Demangle method names where symbols available

  **Commit**: `feat(loader): vtable method enumeration from _ZTV* symbols`

  **QA Scenarios**:
  ```
  Scenario: Vtable methods enumerated
    Tool: Bash
    Steps:
      1. cargo test -p unlace-loader -- vtable_enum
      2. Assert tests pass
    Expected Result: Virtual method VAs extracted from vtable
    Evidence: .sisyphus/evidence/p8-16-vtable-enum.txt
  ```

- [x] P8-17. Integrate RTTI class names into C output

  **What to do**:
  - When emitting function signatures, use RTTI class names for `this` parameter type
  - When emitting vtable dispatch, annotate with class::method name
  - Add class hierarchy as comment block at top of output

  **Commit**: `feat(output): RTTI class names in C output`

  **QA Scenarios**:
  ```
  Scenario: Class names in output
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- rtti_names
      2. ./target/debug/unlace decompile fixtures/cpp_rtti.elf 2>/dev/null | grep -ci "animal\|dog\|cat"
      3. Assert count > 0
    Expected Result: RTTI-derived class names visible in C output
    Evidence: .sisyphus/evidence/p8-17-rtti-output.txt
  ```

- [x] P8-18. C++ vtable dispatch pass

  **What to do**:
  - WRITE `crates/unlace-passes/src/cpp_vtable.rs` (~150 LOC)
  - Pattern: `CALLIND(LOAD(LOAD(this + 0) + N))` — vptr at offset 0 (not 8 like Rust)
  - Reuse logic from rust_vtable.rs with configurable vtable_ptr_offset
  - Annotate CALLIND with vtable slot index and resolved method name (from RTTI)

  **Commit**: `feat(passes): C++ vtable dispatch detection`

  **QA Scenarios**:
  ```
  Scenario: Vtable dispatch detected
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- cpp_vtable
      2. Assert tests pass
    Expected Result: CALLIND through vptr at offset 0 annotated as vtable dispatch
    Evidence: .sisyphus/evidence/p8-18-vtable.txt
  ```

- [x] P8-19. Exception region annotation

  **What to do**:
  - Using LSDA data from P8-13, annotate functions with try/catch regions
  - In C output: emit `/* try { */` and `/* } catch (ClassName) { */` comments
  - Don't modify the structurer (annotation-only for safety)
  - Mark landing pad blocks with comments

  **Commit**: `feat(output): try/catch region annotation from LSDA data`

  **QA Scenarios**:
  ```
  Scenario: Try/catch annotations in output
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/cpp_exceptions.elf 2>/dev/null | grep -ci "try\|catch\|throw"
      2. Assert count > 0
    Expected Result: Exception handling annotations visible in C output
    Evidence: .sisyphus/evidence/p8-19-exception.txt
  ```

- [x] P8-20. __cxa_throw/__cxa_allocate_exception recognition

  **What to do**:
  - Add to libc_signatures.rs: __cxa_allocate_exception, __cxa_throw, __cxa_begin_catch, __cxa_end_catch, __cxa_rethrow
  - When these are called, annotate in output: `/* throw */`, `/* catch */`
  - Recognize __gxx_personality_v0 as exception personality function

  **Commit**: `feat(passes): __cxa_throw/__cxa_allocate_exception recognition`

  **QA Scenarios**:
  ```
  Scenario: Exception functions recognized
    Tool: Bash
    Steps:
      1. cargo test -p unlace-passes -- cxa_throw
      2. Assert tests pass
    Expected Result: __cxa_throw and __cxa_allocate_exception annotated
    Evidence: .sisyphus/evidence/p8-20-cxa.txt
  ```

- [x] P8-21. Verify C++ fixtures produce correct output

  **What to do**:
  - Decompile all 3 C++ fixtures and verify:
    - cpp_vtable.elf: shows virtual method dispatch
    - cpp_exceptions.elf: shows try/catch annotations
    - cpp_rtti.elf: shows class names from RTTI
  - Update golden files

  **Commit**: `chore: verify C++ fixtures and update golden files`

  **QA Scenarios**:
  ```
  Scenario: C++ fixtures produce correct output
    Tool: Bash
    Steps:
      1. for f in cpp_vtable cpp_exceptions cpp_rtti; do echo "$f: $(./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l) lines"; done
      2. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures
      3. Assert all golden tests pass
    Expected Result: All C++ fixtures decompile with C++ features visible
    Evidence: .sisyphus/evidence/p8-21-verify.txt
  ```

- [x] P8-22. Callother → C intrinsic rendering

  **What to do**:
  - In c_printer.rs: when emitting CALLOTHER, look up the tag in IntrinsicRegistry
  - If found: emit `_mm_add_epi8(a, b)` instead of `/* CALLOTHER 258 */ 0`
  - If not found: emit `/* CALLOTHER tag=N */ 0` with tag value
  - This resolves the 4 CALLOTHER instances in medium.elf

  **Commit**: `feat(output): render CALLOTHER as C intrinsic calls`

  **QA Scenarios**:
  ```
  Scenario: CALLOTHER rendered as intrinsics
    Tool: Bash
    Steps:
      1. cargo test -p unlace-output -- callother_intrinsic
      2. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -c "CALLOTHER"
      3. Assert CALLOTHER count == 0 (all resolved to intrinsic names)
    Expected Result: No raw CALLOTHER in output — all rendered as _mm_* or __builtin_*
    Evidence: .sisyphus/evidence/p8-22-callother.txt
  ```

- [x] P8-23. Reduce dead assignments in medium.elf

  **What to do**:
  - After P8-5 general fix, specifically target medium.elf
  - Run DCE + DSE passes with enhanced rules
  - Verify: dead assignment count < 50 (was 191)

  **Commit**: `fix(passes): targeted dead assignment reduction for medium.elf`

  **QA Scenarios**:
  ```
  Scenario: Dead assignments reduced in medium.elf
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/medium.elf 2>/dev/null | grep -cE "v[0-9]+ = 0;"
      2. Assert count < 50 (was 191)
    Expected Result: Dead assignments significantly reduced
    Evidence: .sisyphus/evidence/p8-23-dead.txt
  ```

- [x] P8-24. Final golden file updates + measurement

  **What to do**:
  - Re-capture all golden files
  - Run full metrics comparison
  - Document improvements

  **Commit**: `chore: final golden file updates for Phase 8`

  **QA Scenarios**:
  ```
  Scenario: All golden tests pass
    Tool: Bash
    Steps:
      1. UPDATE_GOLDEN=1 cargo test -p unlace-test-harness --test golden_fixtures
      2. cargo test -p unlace-test-harness --test golden_fixtures
      3. Assert all pass
    Expected Result: Golden files updated and verified
    Evidence: .sisyphus/evidence/p8-24-final.txt
  ```

---

## Final Verification Wave

- [x] P8-F1. **Code Quality Review** — `general`

  **QA Scenarios**:
  ```
  Scenario: Build + test + lint
    Tool: Bash
    Steps:
      1. cargo test --workspace
      2. cargo xtask lint-determinism
      3. Assert ≥ 1260 tests, 0 failures, lint OK
    Expected Result: All tests pass
    Evidence: .sisyphus/evidence/p8-f1-quality.txt
  ```

- [x] P8-F2. **C++ Fixture Golden Test Verification** — `general`

  **QA Scenarios**:
  ```
  Scenario: C++ golden tests pass
    Tool: Bash
    Steps:
      1. cargo test -p unlace-test-harness --test golden_fixtures
      2. Assert all golden tests pass (including C++ fixtures)
    Expected Result: All fixture golden tests pass
    Evidence: .sisyphus/evidence/p8-f2-golden.txt
  ```

- [x] P8-F3. **Regression Check** — `general`

  **QA Scenarios**:
  ```
  Scenario: No regressions
    Tool: Bash
    Steps:
      1. for f in medium debug_structs debug_calls debug_hello branches cpp_vtable cpp_exceptions cpp_rtti; do ./target/debug/unlace decompile fixtures/$f.elf 2>/dev/null | wc -l; done
      2. Assert all produce output
    Expected Result: All 8 fixtures decompile successfully
    Evidence: .sisyphus/evidence/p8-f3-regression.txt
  ```

- [x] P8-F4. **Feature Compliance Audit** — `oracle`

  **QA Scenarios**:
  ```
  Scenario: C++ features present
    Tool: Bash
    Steps:
      1. ./target/debug/unlace decompile fixtures/cpp_vtable.elf 2>/dev/null | grep -c "vtable\|virtual\|vfunc"
      2. ./target/debug/unlace decompile fixtures/cpp_rtti.elf 2>/dev/null | grep -ci "class\|typeinfo\|Animal\|Dog\|Cat"
      3. Assert both counts > 0
    Expected Result: C++ features visible in decompiled output
    Evidence: .sisyphus/evidence/p8-f4-compliance.txt
  ```

---

## Success Criteria

### Final Checklist
- [ ] C++ fixtures compile and decompile
- [ ] Demangled C++ names in output
- [ ] LSDA try/catch regions annotated
- [ ] RTTI class hierarchy recovered
- [ ] C++ vtable dispatch detected
- [ ] Dead assignments < 50 in medium.elf
- [ ] All tests pass (≥ 1260)
- [ ] Lint OK
- [ ] Pushed to GitHub
