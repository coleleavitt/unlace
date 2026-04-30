# Phase 6: Path to 100% IDA Parity — FULL Intelligence Report

## Status
- **Current**: 53.1% parity (Phase 5 end)
- **Target**: 100% parity
- **Tests**: 1080 passing
- **Estimated full effort**: 500-750 hours (3-5 months)

## Agent Findings (8 of 8 complete)

### 1. Microcode Pipeline (bg_2df0d43a) — 30 patterns missing
IDA has **10 maturity levels**: ZERO → GENERATED → PREOPTIMIZED → LOCOPT → CALLS → GLBOPT1/2/3 → LVARS → FINAL
Unlace has only ~3 stages. **Top missing**: stack frame analysis, calling conv extraction, constant folding, dead code elim, strength reduction (x*8→x<<3), LEA-as-addition, memcpy/memset recognition.

### 2. Type System (bg_59db7dec) — 15 features missing
**Core problem**: unlace has flat PrimitiveType enum, IDA has recursive type system.
**Required redesign**: Recursive `Type` enum with Ptr<T>, Array{element,size}, Struct{name,fields}, Union, Enum, Function{params,return,variadic}, Qualified{const,volatile,restrict}.
**Top missing**: composite type inference (struct from binary patterns), pointer type refinement, array stride analysis, function type representation.

### 3. Expression Simplification (bg_7c848f0b) — 93 of 121 rules missing (77% gap)
**Top 10 missing rules** (by frequency):
1. `(x + a) - a → x` — offset cancellation
2. `(x - a) + a → x` — inverse offset cancellation
3. `(x - y) == 0 → x == y` — comparison simplification
4. `x * 2^n → x << n` — multiply to shift
5. `x / 2^n → x >> n` — divide to shift
6. `(x ^ y) ^ y → x` — XOR cancellation
7. `x | (x & y) → x` — absorption law
8. `x & (x | y) → x` — absorption law
9. `SEXT(SEXT(x, 4), 8) → SEXT(x, 8)` — extension composition
10. `ZEXT(ZEXT(x, 4), 8) → ZEXT(x, 8)` — extension composition

**By category** (missing): Algebraic (13), Bitwise (15), Comparison (13), Conversion (11), Mul/Div (7), Memory (6), Float (8), Carry (4), Piece (7), Pointer arith (5), Popcount (4)

### 4. Control Flow Recovery (bg_3043c869) — 13 algorithms missing
**TIER 1 (45-60% gain)**:
1. Switch table recovery (+15-20%) — sub_1BF0C0.c shows IDA's algorithm
2. For-loop pattern recognition (+10-15%) — init/cond/update detection
3. Goto elimination & block merging (+20-25%)

**TIER 2 (+25-35%)**: Sentinel loop detection, irreducible CFG handling (block duplication), range analysis on switches

**TIER 3 (+10-15%)**: Fall-through detection, De Morgan's laws, short-circuit logic, exception handling (.eh_frame)

### 5. C Output Formatting (bg_9c4d7305) — 15 formatting features missing
**P0 CRITICAL** (60% impact):
- Byte/Word/Dword extraction macros: LOBYTE, HIBYTE, LOWORD, HIWORD, LODWORD, HIDWORD, BYTE1-4, WORD1, DWORD1
- IDA type definitions: _QWORD, _DWORD, _WORD, _BYTE, _OWORD, __int64
- Calling convention annotations: __fastcall, __cdecl, __noreturn
- Memory access with type casts: `*(_QWORD *)addr`
- Bitwise operations with proper precedence

**P1 HIGH** (25% impact):
- Stack location comments: `// [rsp+10h] [rbp-E0h]`
- Cast formatting: `(_DWORD)v3`, `((__int64 (__fastcall *)(...))v7)(...)`

**P2 MEDIUM** (15% impact):
- Label & goto: `LABEL_N:` and `goto LABEL_M;`
- BYREF annotations
- Intrinsics: `__readfsqword`, `_mm_*`
- C++ exceptions: `operator new/delete`, `__cxa_*`
- External symbols: `off_*`, `unk_*`

### 6. Missing Features Catalog (bg_3963b1d4) — 20 features
**Phase 1 CRITICAL (60% impact, 200-300 hours)**:
- Stack offset tracking (40% impact)
- libc function signatures (35% impact)
- C++ name demangling (25% impact)
- RTTI/vtable analysis (25% impact)
- Exception pattern recognition (20% impact)

**Phase 2 HIGH (25% impact, 150-200 hours)**:
- Function prototype inference (30%)
- DWARF variable name integration (25%)
- String parameter naming (20%)
- Compiler runtime recognition (20%)
- Loop counter detection (15%)

**Phase 3 MEDIUM (15% impact, 100-150 hours)**:
- Stack location comments (20%)
- Memory allocation patterns (15%)
- Switch jump table comments (15%)
- Size/count parameter naming (15%)

**Quick Wins (35% impact, ~100 hours total)**:
- Compiler runtime recognition (~40h, 20% impact)
- Loop counter detection (~30h, 15% impact)
- Stack location comments (~50h, 20% impact)
- Size parameter naming (~30h, 15% impact)

## Phase 6 Plan Structure (Final)

### Wave 0: Type System Foundation
- Replace flat PrimitiveType with recursive Type enum
- Update type_infer.rs lattice operations for recursive types
- Migrate ~150 use sites across codebase
- Add Type::compose, Type::deref, Type::array_element methods

### Wave 1: Quick Wins (35% impact, 100 hours equivalent)
- Compiler runtime recognition (__stack_chk_fail, __cxa_*, etc.)
- Loop counter detection (i++, j--, k+=2 → rename)
- Stack location comments (// [rsp+Xh] [rbp-Yh])
- Size parameter naming (memcpy/memset/strlen 3rd args)
- IDA byte/word/dword extraction macros (LOBYTE, BYTE1-4, etc.)

### Wave 2: Expression Simplification (35-50% IR cleanup)
Add 50+ missing rules across passes:
- Algebraic: (x+a)-a→x, (x-a)+a→x, (x*a)*b→x*(a*b), associativity
- Bitwise: absorption laws, XOR cancellation chains, masks
- Comparison: (x-y)==0→x==y, sign-bit comparisons
- Conversion: composition rules, redundant ext elimination
- Strength reduction: x*2^n→x<<n, x/2^n→x>>n
- Memory: load-after-store forwarding, dead-store within-block

### Wave 3: Control Flow Recovery (45-60% parity gain)
- Switch table recovery (jump table analysis, validate targets)
- For-loop pattern recognition (init+cond+update)
- Goto elimination via single-pred-single-succ merging
- Sentinel loop detection (while x != 0, while x != sentinel)
- Range analysis on switches (case 1..5 → if (x>=1 && x<=5))
- Fall-through detection in switches

### Wave 4: Function Discovery & Symbols (35% impact)
- libc function signature matching (memcpy, strlen, malloc, etc.)
- Compiler runtime patterns (__stack_chk_fail, __cxa_throw)
- C++ name demangling (Itanium ABI for __ZN... → readable)
- RTTI/vtable analysis (class hierarchy from typeinfo)
- Stack canary detection and suppression
- DWARF variable name integration

### Wave 5: Advanced Type Inference (binary pattern based)
- Composite type inference (struct from access patterns)
- Pointer arithmetic stride analysis (array recovery)
- Bitfield detection from shift+mask patterns
- Enum inference from constant comparison sets
- Union detection from offset overlap
- Function pointer type recovery from indirect calls

### Wave 6: C++ Exception Handling
- .eh_frame full parsing
- Try/catch region reconstruction
- Cleanup landing pad detection
- Exception type tracking via typeinfo
- C++ exception patterns: __cxa_allocate_exception, __cxa_throw

### Wave 7: Output Quality Polish
- Variable naming heuristics (loop counters, type-prefixed: pBlock, hHandle)
- Calling convention in signature: `__int64 __fastcall sub_X(__int64 a1)`
- Operator precedence with proper parenthesization
- IDA-style cast formatting: `(_DWORD)v3` not `(uint32_t)v3`
- BYREF annotations for stack vars passed by reference
- Switch jump table comments

## Execution Plan
**Realistic Phase 6 scope**: 5-6 waves, ~30-40 tasks
**Expected outcome**: 53.1% → 75-85% parity
**Time estimate**: 5-7 days agent execution

**Hitting 100% parity is multi-phase work** — Phases 6, 7, 8 likely needed for full feature parity.
- Phase 6: Foundation + Quick Wins → 75-85%
- Phase 7: Advanced features (C++ support, full type system) → 90-95%
- Phase 8: Polish + edge cases → 99-100%
