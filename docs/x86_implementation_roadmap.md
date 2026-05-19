# X86/X86_64 Implementation Roadmap for Unlace

## Overview

This document provides a structured roadmap for implementing x86/x86_64 support in unlace's lifter and output printer. It's derived from LLVM/Clang source analysis and prioritized by frequency in real binaries.

**Related Documents:**
- `x86_gap_analysis.md` - Comprehensive catalog of all x86 features
- `x86_quick_reference.md` - Quick lookup tables for lifter/printer developers

---

## Phase 1: Foundation (Critical Path)

### 1.1 Calling Convention Detection & Emission

**What to implement:**
- Detect calling convention from function prologue/register usage
- Infer parameter count and types from register/stack patterns
- Emit correct function signature with calling convention annotation

**Lifter tasks:**
```
1. Analyze function prologue (PUSH RBP, SUB RSP, etc.)
2. Track register usage in first N instructions
3. Detect parameter registers:
   - x86-64 sysv64: RDI, RSI, RDX, RCX, R8, R9
   - x86-64 win64: RCX, RDX, R8, R9
   - x86-32 cdecl: Stack only
   - x86-32 __fastcall: ECX, EDX
   - x86-32 __thiscall: ECX (this)
4. Infer return type from RAX/RDX:RAX usage
5. Build parameter list with types
```

**Output printer tasks:**
```
1. Emit calling convention keyword:
   - x86-64 sysv64: (no keyword, default)
   - x86-64 win64: (no keyword, default)
   - x86-32 cdecl: (no keyword, default)
   - x86-32 __fastcall: __fastcall
   - x86-32 __stdcall: __stdcall
   - x86-32 __thiscall: __thiscall
2. Emit parameter names (a1, a2, ..., aN)
3. Emit return type
4. Emit function signature
```

**Test cases:**
```c
// x86-64 sysv64 - 6 args
long func_6args(long a1, long a2, long a3, long a4, long a5, long a6);

// x86-64 sysv64 - 7 args (last on stack)
long func_7args(long a1, long a2, long a3, long a4, long a5, long a6, long a7);

// x86-64 win64 - 4 args
long func_win64(long a1, long a2, long a3, long a4);

// x86-32 __fastcall - 2 register args
long __fastcall func_fastcall(long a1, long a2, long a3);

// x86-32 __thiscall - this + args
void __thiscall ClassName::method(int a1, int a2);
```

**Verification:**
- [ ] Correct parameter registers recognized
- [ ] Correct parameter count inferred
- [ ] Correct calling convention emitted
- [ ] Correct function signature generated

---

### 1.2 Flag Tracking & Condition Code Emission

**What to implement:**
- Track which flags are set by each instruction
- Preserve flag dependencies through the IR
- Emit high-level conditions (if/while) instead of raw flag checks

**Lifter tasks:**
```
1. For each instruction, track flags it sets:
   - CMP/TEST/ADD/SUB/AND/OR/XOR → OF, CF, ZF, SF, AF, PF
   - BT → CF only
   - BSF/BSR → ZF only
2. For each conditional jump, decode condition:
   - JE/JZ → ZF == 1
   - JNE/JNZ → ZF == 0
   - JL/JNGE → SF != OF
   - JLE/JNG → ZF == 1 || SF != OF
   - JG/JNLE → ZF == 0 && SF == OF
   - JGE/JNL → SF == OF
   - JB/JC → CF == 1
   - JAE/JNC → CF == 0
   - JO → OF == 1
   - JNO → OF == 0
   - JP → PF == 1
   - JNP → PF == 0
   - JS → SF == 1
   - JNS → SF == 0
3. Preserve flag dependencies in IR
4. Emit high-level conditions
```

**Output printer tasks:**
```
1. Recognize flag-based conditions
2. Emit high-level comparisons:
   - CMP a, b; JL → if (a < b)
   - CMP a, b; JE → if (a == b)
   - TEST a, a; JZ → if (a == 0)
   - ADD a, b; JO → if (overflow)
3. Avoid emitting raw flag checks
```

**Test cases:**
```c
// Simple comparison
if (a < b) { ... }

// Unsigned comparison
if ((unsigned)a < (unsigned)b) { ... }

// Overflow check
if (a + b overflows) { ... }

// Zero check
if (a == 0) { ... }

// Bit test
if (a & (1 << bit)) { ... }
```

**Verification:**
- [ ] CMP → comparison condition
- [ ] TEST → zero/nonzero condition
- [ ] ADD/SUB with flags → overflow/carry condition
- [ ] BT → bit test condition
- [ ] Correct condition code emitted

---

### 1.3 Basic Arithmetic & Memory Operations

**What to implement:**
- MOV, LEA, ADD, SUB, MUL, DIV, AND, OR, XOR, NOT, SHL, SHR, SAR, ROL, ROR
- Recognize patterns and emit high-level operations

**Lifter tasks:**
```
1. MOV r, r/m → assignment
2. LEA r, [addr] → address-of
3. ADD r, r/m → addition
4. SUB r, r/m → subtraction
5. IMUL r, r/m → signed multiplication
6. MUL r/m → unsigned multiplication (EDX:EAX or RDX:RAX)
7. IDIV r/m → signed division (EDX:EAX or RDX:RAX)
8. DIV r/m → unsigned division
9. AND r, r/m → bitwise AND
10. OR r, r/m → bitwise OR
11. XOR r, r/m → bitwise XOR
12. NOT r → bitwise NOT
13. SHL r, imm/CL → shift left
14. SHR r, imm/CL → shift right logical
15. SAR r, imm/CL → shift right arithmetic
16. ROL r, imm/CL → rotate left
17. ROR r, imm/CL → rotate right
```

**Output printer tasks:**
```
1. Emit operators: +, -, *, /, %, &, |, ^, ~, <<, >>, etc.
2. Handle operator precedence
3. Emit parentheses when needed
4. Recognize compound assignments (+=, -=, etc.)
```

**Test cases:**
```c
// Arithmetic
int a = b + c;
int a = b - c;
int a = b * c;
int a = b / c;
int a = b % c;

// Bitwise
int a = b & c;
int a = b | c;
int a = b ^ c;
int a = ~b;
int a = b << 8;
int a = b >> 8;
int a = (int)b >> 8;  // arithmetic shift

// Compound
a += b;
a -= b;
a *= b;
a /= b;
a &= b;
a |= b;
a ^= b;
a <<= 8;
a >>= 8;
```

**Verification:**
- [ ] Basic arithmetic operations recognized
- [ ] Bitwise operations recognized
- [ ] Shift operations recognized
- [ ] Correct operators emitted
- [ ] Operator precedence correct

---

### 1.4 Memory Access & Addressing Modes

**What to implement:**
- Recognize addressing modes: [base], [base+offset], [base+index*scale+offset]
- Emit pointer dereferences, array indexing, struct field access
- Track memory types (stack, heap, global)

**Lifter tasks:**
```
1. Decode addressing modes:
   - [rax] → *ptr
   - [rax + 8] → *(ptr + 1) or ptr->field
   - [rax + rbx*4] → ptr[index]
   - [rax + rbx*4 + 8] → ptr[index].field
2. Recognize stack references (RBP/RSP relative)
3. Recognize global references (RIP relative)
4. Recognize heap references (malloc'd pointers)
5. Track memory access width (byte, word, dword, qword)
```

**Output printer tasks:**
```
1. Emit pointer dereferences: *ptr
2. Emit array indexing: ptr[index]
3. Emit struct field access: ptr->field or obj.field
4. Emit casts for type safety: *(int*)ptr
5. Emit stack variable references: v1, v2, etc.
```

**Test cases:**
```c
// Pointer dereference
int a = *ptr;
*ptr = 42;

// Array indexing
int a = arr[i];
arr[i] = 42;

// Struct field access
int a = obj.field;
obj.field = 42;

// Nested access
int a = obj.arr[i].field;

// Pointer arithmetic
int a = *(ptr + offset);
int a = ptr[offset];
```

**Verification:**
- [ ] Pointer dereferences recognized
- [ ] Array indexing recognized
- [ ] Struct field access recognized
- [ ] Correct addressing modes emitted
- [ ] Memory access width correct

---

## Phase 2: SIMD Support (Medium Priority)

### 2.1 SSE/SSE2 (XMM Operations)

**What to implement:**
- Recognize XMM register operations
- Map to `_mm_*` intrinsics or high-level SIMD operations
- Emit `__m128` / `__m128i` / `__m128d` types

**Lifter tasks:**
```
1. Recognize XMM register usage
2. Map instructions to intrinsics:
   - ADDPS xmm, xmm → _mm_add_ps(a, b)
   - ADDPD xmm, xmm → _mm_add_pd(a, b)
   - PADDD xmm, xmm → _mm_add_epi32(a, b)
   - SUBPS xmm, xmm → _mm_sub_ps(a, b)
   - MULPS xmm, xmm → _mm_mul_ps(a, b)
   - DIVPS xmm, xmm → _mm_div_ps(a, b)
   - MINPS xmm, xmm → _mm_min_ps(a, b)
   - MAXPS xmm, xmm → _mm_max_ps(a, b)
   - SQRTPS xmm, xmm → _mm_sqrt_ps(a)
   - SHUFPS xmm, xmm, imm → _mm_shuffle_ps(a, b, imm)
   - PSLLD xmm, imm → _mm_slli_epi32(a, imm)
   - PSRLD xmm, imm → _mm_srli_epi32(a, imm)
   - PSRAD xmm, imm → _mm_srai_epi32(a, imm)
3. Track element width (32-bit float, 64-bit double, 32-bit int, etc.)
4. Emit correct intrinsic with correct types
```

**Output printer tasks:**
```
1. Emit __m128 / __m128i / __m128d types
2. Emit _mm_* intrinsic calls
3. Recognize patterns and emit high-level operations:
   - _mm_add_ps(a, b) → a + b (SIMD)
   - _mm_shuffle_ps(a, b, imm) → shuffle(a, b, imm)
4. Emit vector literals when needed
```

**Test cases:**
```c
#include <immintrin.h>

__m128 test_add(__m128 a, __m128 b) {
    return _mm_add_ps(a, b);
}

__m128i test_shift(__m128i a) {
    return _mm_slli_epi32(a, 8);
}

__m128d test_double(__m128d a, __m128d b) {
    return _mm_add_pd(a, b);
}

__m128 test_shuffle(__m128 a, __m128 b) {
    return _mm_shuffle_ps(a, b, _MM_SHUFFLE(3, 2, 1, 0));
}
```

**Verification:**
- [ ] XMM operations recognized
- [ ] Correct intrinsics mapped
- [ ] Correct types emitted
- [ ] Element width correct

---

### 2.2 AVX/AVX2 (YMM Operations)

**What to implement:**
- Recognize YMM register operations
- Map to `_mm256_*` intrinsics
- Emit `__m256` / `__m256i` / `__m256d` types

**Lifter tasks:**
```
1. Recognize YMM register usage
2. Map instructions to intrinsics:
   - VADDPS ymm, ymm, ymm → _mm256_add_ps(a, b)
   - VPADDD ymm, ymm, ymm → _mm256_add_epi32(a, b)
   - VPSLLD ymm, ymm, imm → _mm256_slli_epi32(a, imm)
   - VBLENDPS ymm, ymm, ymm, imm → _mm256_blend_ps(a, b, imm)
   - VPERMILPS ymm, ymm, imm → _mm256_permute_ps(a, imm)
   - VEXTRACTF128 xmm, ymm, imm → _mm256_extractf128_ps(a, imm)
3. Track 256-bit vector width
4. Emit correct intrinsic with correct types
```

**Output printer tasks:**
```
1. Emit __m256 / __m256i / __m256d types
2. Emit _mm256_* intrinsic calls
3. Recognize patterns and emit high-level operations
```

**Test cases:**
```c
#include <immintrin.h>

__m256 test_add(__m256 a, __m256 b) {
    return _mm256_add_ps(a, b);
}

__m256i test_shift(__m256i a) {
    return _mm256_slli_epi32(a, 8);
}

__m256 test_blend(__m256 a, __m256 b) {
    return _mm256_blend_ps(a, b, 0xAA);
}
```

**Verification:**
- [ ] YMM operations recognized
- [ ] Correct intrinsics mapped
- [ ] Correct types emitted
- [ ] 256-bit width correct

---

## Phase 3: Specialized Operations (Lower Priority)

### 3.1 Bit Manipulation (BSF, BSR, POPCNT, BEXTR)

**What to implement:**
- Recognize bit scan, popcount, and bit extraction operations
- Map to `__builtin_ctz`, `__builtin_clz`, `__builtin_popcount`, etc.

**Lifter tasks:**
```
1. BSF r, r/m → __builtin_ctz(x) (count trailing zeros)
2. BSR r, r/m → __builtin_clz(x) (count leading zeros)
3. POPCNT r, r/m → __builtin_popcount(x) (population count)
4. BEXTR r, r/m, r → Extract bits [start:len]
5. Track ZF flag (set if input is 0 for BSF/BSR)
```

**Output printer tasks:**
```
1. Emit __builtin_ctz(x)
2. Emit __builtin_clz(x)
3. Emit __builtin_popcount(x)
4. Emit bit extraction operations
```

**Test cases:**
```c
int test_ctz(int x) {
    return __builtin_ctz(x);  // Count trailing zeros
}

int test_clz(int x) {
    return __builtin_clz(x);  // Count leading zeros
}

int test_popcount(int x) {
    return __builtin_popcount(x);  // Population count
}
```

**Verification:**
- [ ] BSF recognized as __builtin_ctz
- [ ] BSR recognized as __builtin_clz
- [ ] POPCNT recognized as __builtin_popcount
- [ ] Correct builtins emitted

---

### 3.2 String Operations (REP MOVSQ, REP STOSQ)

**What to implement:**
- Recognize REP MOVSQ as `memcpy()`
- Recognize REP STOSQ as `memset()`
- Track source, destination, count, and value registers

**Lifter tasks:**
```
1. Recognize REP MOVSQ pattern:
   - RDI = destination
   - RSI = source
   - RCX = count
   - Emit: memcpy(dst, src, count)
2. Recognize REP STOSQ pattern:
   - RDI = destination
   - RAX = value
   - RCX = count
   - Emit: memset(dst, val, count)
3. Handle direction flag (DF) for reverse copy
```

**Output printer tasks:**
```
1. Emit memcpy(dst, src, count)
2. Emit memset(dst, val, count)
3. Emit memmove(dst, src, count) if direction check needed
```

**Test cases:**
```c
void test_memcpy(void *dst, void *src, size_t count) {
    memcpy(dst, src, count);
}

void test_memset(void *dst, int val, size_t count) {
    memset(dst, val, count);
}

void test_memmove(void *dst, void *src, size_t count) {
    memmove(dst, src, count);
}
```

**Verification:**
- [ ] REP MOVSQ recognized as memcpy
- [ ] REP STOSQ recognized as memset
- [ ] Correct parameters tracked
- [ ] Correct function calls emitted

---

### 3.3 Atomic Operations (LOCK Prefixed)

**What to implement:**
- Recognize LOCK prefixed instructions
- Map to `__atomic_*` or `__sync_*` builtins
- Track memory ordering

**Lifter tasks:**
```
1. Recognize LOCK prefix
2. Map instructions:
   - LOCK ADD [mem], r → __atomic_fetch_add(ptr, val, order)
   - LOCK SUB [mem], r → __atomic_fetch_sub(ptr, val, order)
   - LOCK AND [mem], r → __atomic_fetch_and(ptr, val, order)
   - LOCK OR [mem], r → __atomic_fetch_or(ptr, val, order)
   - LOCK XOR [mem], r → __atomic_fetch_xor(ptr, val, order)
   - LOCK CMPXCHG [mem], r → __atomic_compare_exchange_n(ptr, &expected, desired, ...)
3. Infer memory ordering (usually __ATOMIC_SEQ_CST)
```

**Output printer tasks:**
```
1. Emit __atomic_fetch_add(ptr, val, __ATOMIC_SEQ_CST)
2. Emit __atomic_compare_exchange_n(ptr, &expected, desired, ...)
3. Emit memory ordering annotations
```

**Test cases:**
```c
#include <stdatomic.h>

void test_fetch_add(int *ptr) {
    __atomic_fetch_add(ptr, 1, __ATOMIC_SEQ_CST);
}

void test_cmpxchg(int *ptr, int expected, int desired) {
    __atomic_compare_exchange_n(ptr, &expected, desired, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
}
```

**Verification:**
- [ ] LOCK prefix recognized
- [ ] Correct atomic operations mapped
- [ ] Memory ordering correct
- [ ] Correct builtins emitted

---

## Implementation Checklist

### Phase 1: Foundation
- [ ] Calling convention detection (sysv64, win64, cdecl, __fastcall, __thiscall)
- [ ] Parameter register recognition
- [ ] Return value tracking
- [ ] Function signature emission
- [ ] Flag tracking (CMP, TEST, ADD, etc.)
- [ ] Condition code emission (JE, JL, JB, etc.)
- [ ] Basic arithmetic (ADD, SUB, MUL, DIV)
- [ ] Bitwise operations (AND, OR, XOR, NOT)
- [ ] Shift operations (SHL, SHR, SAR, ROL, ROR)
- [ ] Memory operations (MOV, LEA)
- [ ] Addressing modes (base, base+offset, base+index*scale)
- [ ] Pointer dereferences
- [ ] Array indexing
- [ ] Struct field access

### Phase 2: SIMD
- [ ] SSE/SSE2 (XMM operations)
- [ ] AVX/AVX2 (YMM operations)
- [ ] Shuffle/blend operations
- [ ] Vector reductions
- [ ] Type emission (__m128, __m256, etc.)
- [ ] Intrinsic mapping (_mm_*, _mm256_*, etc.)

### Phase 3: Specialized
- [ ] Bit manipulation (BSF, BSR, POPCNT)
- [ ] String operations (REP MOVSQ, REP STOSQ)
- [ ] Atomic operations (LOCK prefixed)
- [ ] Floating-point special (FMAX, FMIN, FRCP, FRSQRT)
- [ ] CET security instructions
- [ ] TLS operations
- [ ] Exception handling

---

## Testing Strategy

### Unit Tests
- Test each calling convention separately
- Test each instruction type separately
- Test flag tracking and condition codes
- Test SIMD intrinsics
- Test atomic operations

### Integration Tests
- Test complete functions with multiple calling conventions
- Test functions with mixed operations (arithmetic + SIMD)
- Test functions with flag dependencies
- Test functions with memory operations

### Golden Tests
- Compare output against IDA/Hex-Rays for real binaries
- Verify calling convention annotations
- Verify parameter names and types
- Verify return types
- Verify SIMD type annotations

---

## References

- `x86_gap_analysis.md` - Comprehensive feature catalog
- `x86_quick_reference.md` - Quick lookup tables
- LLVM X86 Target: `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Target/X86/`
- System V AMD64 ABI: https://refspecs.linuxbase.org/elf/x86_64-abi-0.99.pdf
- Microsoft x64 Calling Convention: https://docs.microsoft.com/en-us/cpp/build/x64-calling-convention
- Intel Intrinsics Guide: https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html

