# X86/X86_64 Documentation Index for Unlace

This directory contains comprehensive documentation for x86/x86_64 decompilation support in unlace, derived from LLVM/Clang source analysis.

## Documents

### 1. **x86_gap_analysis.md** (32 KB)
**Comprehensive catalog of all x86/x86_64 features, intrinsics, and builtins.**

**Contents:**
- Calling conventions (sysv64, win64, cdecl, __fastcall, __stdcall, __thiscall, __vectorcall)
- X86-specific ISD opcodes (bit manipulation, arithmetic, SIMD, string ops, etc.)
- SIMD intrinsics (SSE, SSE2, SSSE3, SSE4.1, AVX, AVX2, AVX-512)
- X86 builtins (system, timing, memory barriers, bit manipulation, atomic, CET, memory access)
- LLVM intrinsics (memory, atomic, math, bit manipulation, vector)
- Register file and calling convention summary
- Gaps and recommendations for unlace
- Priority ranking for implementation
- Testing strategy

**Use this when:**
- You need to understand what a specific x86 instruction does
- You need to know what unlace should emit for a given binary pattern
- You're researching a specific feature (SIMD, atomics, etc.)
- You need the complete feature list for gap analysis

---

### 2. **x86_quick_reference.md** (9.4 KB)
**Quick lookup tables for lifter and printer developers.**

**Contents:**
- Calling conventions at a glance (register/stack layout)
- X86ISD opcodes → output mapping (quick table)
- SIMD intrinsics → output mapping (SSE, SSE2, SSSE3, SSE4.1, AVX, AVX2, AVX-512)
- X86 builtins → output mapping (quick table)
- LLVM intrinsics → output mapping (quick table)
- Flag tracking essentials (flags set by instructions, condition codes)
- Register preservation rules (caller-saved, callee-saved)
- Priority implementation order (Phase 1, 2, 3)
- Testing checklist

**Use this when:**
- You're implementing a lifter or printer feature
- You need a quick lookup for an instruction
- You need to know what to emit for a given binary pattern
- You're writing test cases

---

### 3. **x86_implementation_roadmap.md** (16 KB)
**Structured roadmap for implementing x86/x86_64 support in unlace.**

**Contents:**
- Phase 1: Foundation (Critical Path)
  - Calling convention detection & emission
  - Flag tracking & condition code emission
  - Basic arithmetic & memory operations
  - Memory access & addressing modes
- Phase 2: SIMD Support (Medium Priority)
  - SSE/SSE2 (XMM operations)
  - AVX/AVX2 (YMM operations)
- Phase 3: Specialized Operations (Lower Priority)
  - Bit manipulation (BSF, BSR, POPCNT, BEXTR)
  - String operations (REP MOVSQ, REP STOSQ)
  - Atomic operations (LOCK prefixed)
- Implementation checklist
- Testing strategy
- References

**Use this when:**
- You're planning implementation work
- You need to understand the priority order
- You need detailed task breakdowns for a feature
- You're writing test cases for a phase

---

## Quick Start

### For Lifter Developers

1. **Start here:** `x86_quick_reference.md` → Calling conventions section
2. **Then read:** `x86_implementation_roadmap.md` → Phase 1.1 (Calling Convention Detection)
3. **Reference:** `x86_gap_analysis.md` → Section 1 (Calling Conventions)

### For Output Printer Developers

1. **Start here:** `x86_quick_reference.md` → X86ISD Opcodes section
2. **Then read:** `x86_implementation_roadmap.md` → Phase 1.1 (Calling Convention Emission)
3. **Reference:** `x86_gap_analysis.md` → Section 2 (X86-Specific ISD Opcodes)

### For SIMD Implementation

1. **Start here:** `x86_quick_reference.md` → SIMD Intrinsics section
2. **Then read:** `x86_implementation_roadmap.md` → Phase 2 (SIMD Support)
3. **Reference:** `x86_gap_analysis.md` → Section 3 (X86 SIMD Intrinsics)

### For Atomic Operations

1. **Start here:** `x86_quick_reference.md` → Flag Tracking section
2. **Then read:** `x86_implementation_roadmap.md` → Phase 3.3 (Atomic Operations)
3. **Reference:** `x86_gap_analysis.md` → Section 5.2 (Atomic Intrinsics)

---

## Key Concepts

### Calling Conventions

**x86-64 System V (Linux/BSD):**
- Args: RDI, RSI, RDX, RCX, R8, R9 (+ stack)
- Return: RAX (int), RDX:RAX (128-bit)
- Caller-saved: RAX, RCX, RDX, RSI, RDI, R8-R11
- Callee-saved: RBX, RBP, R12-R15

**x86-64 Windows (Microsoft):**
- Args: RCX, RDX, R8, R9 (+ stack)
- Return: RAX (int), RDX:RAX (128-bit)
- Caller-saved: RAX, RCX, RDX, R8-R11
- Callee-saved: RBX, RSI, RDI, RBP, R12-R15
- Shadow space: 32 bytes reserved by caller

**x86-32 cdecl:**
- Args: Stack (right-to-left)
- Return: EAX (int), EDX:EAX (64-bit)
- Caller-saved: EAX, ECX, EDX
- Callee-saved: EBX, ESI, EDI, EBP
- Cleanup: Caller (ADD ESP, n)

**x86-32 __fastcall:**
- Args: ECX, EDX (+ stack)
- Return: EAX (int), EDX:EAX (64-bit)
- Caller-saved: EAX, ECX, EDX
- Callee-saved: EBX, ESI, EDI, EBP
- Cleanup: Callee (RET n)

### Flag Tracking

**Flags set by instructions:**
- CMP/TEST/ADD/SUB/AND/OR/XOR → OF, CF, ZF, SF, AF, PF
- BT → CF only
- BSF/BSR → ZF only

**Condition codes:**
- JE/JZ → ZF == 1
- JNE/JNZ → ZF == 0
- JL/JNGE → SF != OF
- JLE/JNG → ZF == 1 || SF != OF
- JG/JNLE → ZF == 0 && SF == OF
- JGE/JNL → SF == OF
- JB/JC → CF == 1
- JAE/JNC → CF == 0

### SIMD Intrinsics

**SSE (XMM, 128-bit):**
- `_mm_add_ps(a, b)` → ADDPS xmm, xmm
- `_mm_shuffle_ps(a, b, imm)` → SHUFPS xmm, xmm, imm
- `_mm_sqrt_ps(a)` → SQRTPS xmm, xmm

**AVX (YMM, 256-bit):**
- `_mm256_add_ps(a, b)` → VADDPS ymm, ymm, ymm
- `_mm256_blend_ps(a, b, imm)` → VBLENDPS ymm, ymm, ymm, imm

**AVX-512 (ZMM, 512-bit, masked):**
- `_mm512_add_ps(a, b)` → VADDPS zmm, zmm, zmm
- `_mm512_mask_add_ps(dst, mask, a, b)` → VADDPS zmm{k1}, zmm, zmm

---

## Implementation Priority

### Phase 1: Foundation (Critical Path)
1. Calling convention detection & emission
2. Flag tracking & condition code emission
3. Basic arithmetic & memory operations
4. Memory access & addressing modes

### Phase 2: SIMD (Medium Priority)
5. SSE/SSE2 (XMM operations)
6. AVX/AVX2 (YMM operations)

### Phase 3: Specialized (Lower Priority)
7. Bit manipulation (BSF, BSR, POPCNT)
8. String operations (REP MOVSQ, REP STOSQ)
9. Atomic operations (LOCK prefixed)

---

## Testing Checklist

- [ ] Calling convention detection (sysv64, win64, cdecl, __fastcall)
- [ ] Parameter register recognition (RDI/RSI/RDX/RCX/R8/R9)
- [ ] Return value tracking (RAX, RDX:RAX)
- [ ] Flag dependency chains (CMP → JE/JL/etc)
- [ ] ADC/SBB chains (128-bit operations)
- [ ] SSE/SSE2 intrinsics (XMM operations)
- [ ] AVX/AVX2 intrinsics (YMM operations)
- [ ] String operations (REP MOVSQ, REP STOSQ)
- [ ] Atomic operations (LOCK prefixed)
- [ ] Bit manipulation (BSF, BSR, POPCNT)

---

## References

- **LLVM X86 Target:** `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Target/X86/`
- **Clang Builtins:** `/home/cole/CLionProjects/forks/llvm-project/clang/lib/CodeGen/CGBuiltin.cpp`
- **LLVM Intrinsics:** `/home/cole/CLionProjects/forks/llvm-project/llvm/include/llvm/IR/Intrinsics*.td`
- **System V AMD64 ABI:** https://refspecs.linuxbase.org/elf/x86_64-abi-0.99.pdf
- **Microsoft x64 Calling Convention:** https://docs.microsoft.com/en-us/cpp/build/x64-calling-convention
- **Intel Intrinsics Guide:** https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html

---

## Document Statistics

| Document | Size | Sections | Tables | Code Examples |
|----------|------|----------|--------|----------------|
| x86_gap_analysis.md | 32 KB | 10 | 50+ | 20+ |
| x86_quick_reference.md | 9.4 KB | 10 | 15+ | 10+ |
| x86_implementation_roadmap.md | 16 KB | 15 | 5+ | 30+ |
| **Total** | **57.4 KB** | **35** | **70+** | **60+** |

---

## How to Use These Documents

### Scenario 1: "I need to implement calling convention detection"
1. Read `x86_implementation_roadmap.md` → Phase 1.1
2. Reference `x86_quick_reference.md` → Calling Conventions section
3. Deep dive: `x86_gap_analysis.md` → Section 1

### Scenario 2: "I need to emit the correct function signature"
1. Read `x86_implementation_roadmap.md` → Phase 1.1 (Output printer tasks)
2. Reference `x86_quick_reference.md` → Calling Conventions section
3. Deep dive: `x86_gap_analysis.md` → Section 1

### Scenario 3: "I need to recognize SSE intrinsics"
1. Read `x86_implementation_roadmap.md` → Phase 2.1
2. Reference `x86_quick_reference.md` → SIMD Intrinsics section
3. Deep dive: `x86_gap_analysis.md` → Section 3.1

### Scenario 4: "I need to understand flag tracking"
1. Read `x86_implementation_roadmap.md` → Phase 1.2
2. Reference `x86_quick_reference.md` → Flag Tracking section
3. Deep dive: `x86_gap_analysis.md` → Section 2.3

### Scenario 5: "I need to write test cases"
1. Read `x86_implementation_roadmap.md` → Phase 1.1 (Test cases)
2. Reference `x86_quick_reference.md` → Testing Checklist
3. Deep dive: `x86_gap_analysis.md` → Section 9 (Testing Strategy)

---

## Contributing

When adding new x86 features to unlace:

1. **Update the roadmap:** Add to `x86_implementation_roadmap.md` if it's a new phase
2. **Update the quick reference:** Add to `x86_quick_reference.md` for quick lookup
3. **Update the gap analysis:** Add to `x86_gap_analysis.md` for comprehensive documentation
4. **Add test cases:** Include in the appropriate phase section
5. **Update this index:** Link to new sections if needed

---

## Questions?

- **What does instruction X do?** → See `x86_gap_analysis.md`
- **How do I emit Y?** → See `x86_quick_reference.md`
- **What should I implement next?** → See `x86_implementation_roadmap.md`
- **How do I test Z?** → See `x86_implementation_roadmap.md` → Testing Strategy

