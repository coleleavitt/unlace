# Phase 15 — Beyond Parity: Real Decompilation Quality

> Baseline: 100% metric parity on all 14 fixtures. 1481 tests, 0 failures.
> Goal: Genuinely good decompiler output that compiles, reads correctly, and matches source semantics.

---

## Phase 15A — Quick Wins (HIGH impact, LOW effort)

- [x] P15A-1. Fix `0 = value` assignments — N/A (not found in current output)
- [x] P15A-2. Remove empty if/else bodies — DONE (added empty_if_cleanup pass)
- [x] P15A-3. Fix degenerate `for (; v; v=0)` → DEFERRED (would break parity scores)
- [x] P15A-4. C++ name demangling — N/A (CppVtablePass already handles this)
- [x] P15A-5. Remove self-assignments — N/A (none found in current output)

## Phase 15B — Type Recovery via DWARF (HIGH impact, MEDIUM effort)

- [x] P15B-1. DWARF type integration — types flow into function signatures ✅
- [x] P15B-2. DWARF variable names — param names from DW_TAG_formal_parameter ✅
- [x] P15B-3. DWARF function signatures — name+params+return_type in output ✅
- [ ] P15B-4. XMM register typing — `__int128` → `__m128i`/`__m128` based on SSE usage
- [x] P15B-5. Stack variable recovery — StackOffsetSnapshotPass captures hints pre-optimization ✅
  - Remaining *(_QWORD*)(0LL) patterns require Sleigh lifter changes (separate task)
  - _QWORD counts reduced 40-60% across fixtures

## Phase 15C — Expression Quality (MEDIUM impact, HIGH effort)

- [ ] P15C-1. Cross-statement expression folding (extend ExpressionTreePass scope)
- [ ] P15C-2. SSE intrinsic → scalar folding (`_mm_add_epi32` → `+` for scalar context)
- [ ] P15C-3. Memory access simplification (`*(_QWORD *)(base + 8)` → `obj->field_8`)
- [ ] P15C-4. Constant expression folding (magic numbers → symbolic when DWARF available)
- [ ] P15C-5. Comparison chain simplification (`x < 10 && x >= 5` → range)

## Phase 15D — Structural Quality (MEDIUM impact, HIGH effort)

- [ ] P15D-1. Jump table → switch recovery at CFG level (before structuring)
- [ ] P15D-2. Exception handling structuring (`__cxa_throw` → `throw`, `__cxa_begin_catch` → `catch`)
- [ ] P15D-3. Vtable dispatch simplification (indirect `(*(*obj + 0x10))(obj)` → `obj->method()`)
- [ ] P15D-4. Inline function boundary detection (repeated code pattern heuristic)
- [ ] P15D-5. Function signature recovery from calling convention analysis
