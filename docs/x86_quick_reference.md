# X86/X86_64 Quick Reference for Unlace Lifter & Printer

## Calling Conventions at a Glance

### x86-64 System V (Linux/BSD)
```
Args:    RDI, RSI, RDX, RCX, R8, R9 (+ stack)
Return:  RAX (int), RDX:RAX (128-bit)
Saved:   RBX, RBP, R12-R15
Clobbered: RAX, RCX, RDX, RSI, RDI, R8-R11
```

### x86-64 Windows (Microsoft)
```
Args:    RCX, RDX, R8, R9 (+ stack)
Return:  RAX (int), RDX:RAX (128-bit)
Saved:   RBX, RSI, RDI, RBP, R12-R15
Clobbered: RAX, RCX, RDX, R8-R11
Shadow:  32 bytes reserved by caller
```

### x86-32 cdecl
```
Args:    Stack (right-to-left)
Return:  EAX (int), EDX:EAX (64-bit)
Saved:   EBX, ESI, EDI, EBP
Clobbered: EAX, ECX, EDX
Cleanup: Caller (ADD ESP, n)
```

### x86-32 __fastcall
```
Args:    ECX, EDX (+ stack)
Return:  EAX (int), EDX:EAX (64-bit)
Saved:   EBX, ESI, EDI, EBP
Clobbered: EAX, ECX, EDX
Cleanup: Callee (RET n)
```

### x86-32 __thiscall
```
Args:    ECX (this), then stack
Return:  EAX
Saved:   EBX, ESI, EDI, EBP
Clobbered: EAX, ECX, EDX
Cleanup: Callee (RET n)
```

---

## X86ISD Opcodes → Output Mapping

| X86ISD | Binary | Output |
|--------|--------|--------|
| BSF | `BSF r, r/m` | `__builtin_ctz(x)` |
| BSR | `BSR r, r/m` | `__builtin_clz(x)` |
| BEXTR | `BEXTR r, r/m, r` | Extract bits |
| BT | `BT r/m, r` | Test bit, set CF |
| SETCC | `SETcc r` | `x = (cond) ? 1 : 0` |
| CMOV | `CMOVcc r, r/m` | `x = (cond) ? y : x` |
| CMP | `CMP r/m, r` | Compare, set flags |
| FCMP | `UCOMISD xmm, xmm` | Float compare |
| ADD | `ADD r, r/m` | Add with flags |
| ADC | `ADC r, r/m` | Add + carry |
| SBB | `SBB r, r/m` | Sub - borrow |
| SMUL | `IMUL r, r/m` | Signed multiply |
| UMUL | `MUL r/m` | Unsigned multiply |
| VSHL | `PSLLW/D/Q xmm, xmm` | Vector shift left |
| VSRL | `PSRLW/D/Q xmm, xmm` | Vector shift right |
| VSRA | `PSRAW/D/Q xmm, xmm` | Vector shift arithmetic |
| BLENDI | `PBLENDW xmm, xmm, imm` | Blend by mask |
| BLENDV | `PBLENDVB xmm, xmm, xmm` | Blend by sign |
| FMAX | `MAXSD xmm, xmm` | `fmax(a, b)` |
| FMIN | `MINSD xmm, xmm` | `fmin(a, b)` |
| FRCP | `RCPSS xmm, xmm` | `1.0 / x` (approx) |
| FRSQRT | `RSQRTSS xmm, xmm` | `1.0 / sqrt(x)` (approx) |
| REP_STOS | `REP STOSQ` | `memset(dst, val, count)` |
| REP_MOVS | `REP MOVSQ` | `memcpy(dst, src, count)` |
| CALL | `CALL rel32` | Function call |
| RET_GLUE | `RET` | Return |
| TC_RETURN | `JMP` | Tail call |

---

## SIMD Intrinsics → Output Mapping

### SSE (XMM, 128-bit)
```
_mm_add_ps(a, b)      → ADDPS xmm, xmm
_mm_sub_ps(a, b)      → SUBPS xmm, xmm
_mm_mul_ps(a, b)      → MULPS xmm, xmm
_mm_div_ps(a, b)      → DIVPS xmm, xmm
_mm_min_ps(a, b)      → MINPS xmm, xmm
_mm_max_ps(a, b)      → MAXPS xmm, xmm
_mm_sqrt_ps(a)        → SQRTPS xmm, xmm
_mm_rcp_ps(a)         → RCPPS xmm, xmm
_mm_rsqrt_ps(a)       → RSQRTPS xmm, xmm
_mm_shuffle_ps(a,b,i) → SHUFPS xmm, xmm, imm
```

### SSE2 (XMM, 128-bit, double/int)
```
_mm_add_pd(a, b)      → ADDPD xmm, xmm
_mm_add_epi32(a, b)   → PADDD xmm, xmm
_mm_slli_epi32(a, i)  → PSLLD xmm, imm
_mm_srli_epi32(a, i)  → PSRLD xmm, imm
_mm_srai_epi32(a, i)  → PSRAD xmm, imm
_mm_unpacklo_epi32(a,b) → PUNPCKLDQ xmm, xmm
_mm_packs_epi32(a, b) → PACKSSDW xmm, xmm
```

### SSSE3 (XMM, 128-bit, supplemental)
```
_mm_hadd_ps(a, b)     → HADDPS xmm, xmm
_mm_shuffle_epi8(a,b) → PSHUFB xmm, xmm
_mm_abs_epi32(a)      → PABSD xmm, xmm
_mm_sign_epi32(a, b)  → PSIGND xmm, xmm
```

### SSE4.1 (XMM, 128-bit)
```
_mm_blend_epi16(a,b,i) → PBLENDW xmm, xmm, imm
_mm_insert_epi32(a,v,i) → PINSRD xmm, r/m, imm
_mm_extract_epi32(a, i) → PEXTRD r/m, xmm, imm
_mm_dp_ps(a, b, i)    → DPPS xmm, xmm, imm
```

### AVX (YMM, 256-bit)
```
_mm256_add_ps(a, b)   → VADDPS ymm, ymm, ymm
_mm256_blend_ps(a,b,i) → VBLENDPS ymm, ymm, ymm, imm
_mm256_permute_ps(a,i) → VPERMILPS ymm, ymm, imm
_mm256_extractf128_ps(a, i) → VEXTRACTF128 xmm, ymm, imm
```

### AVX2 (YMM, 256-bit, integer)
```
_mm256_add_epi32(a, b) → VPADDD ymm, ymm, ymm
_mm256_slli_epi32(a, i) → VPSLLD ymm, ymm, imm
_mm256_i32gather_epi32(base, idx, scale) → VPGATHERDD ymm, [base+idx*scale], mask
```

### AVX-512 (ZMM, 512-bit, masked)
```
_mm512_add_ps(a, b)   → VADDPS zmm, zmm, zmm
_mm512_mask_add_ps(dst, mask, a, b) → VADDPS zmm{k1}, zmm, zmm
_mm512_compress_epi32(a, mask) → VPCOMPRESSD zmm{k1}, zmm
```

---

## X86 Builtins → Output Mapping

| Builtin | Binary | Output |
|---------|--------|--------|
| `__builtin_ia32_readeflags_u32()` | `PUSHFD; POP EAX` | `uint32_t flags = ...` |
| `__builtin_ia32_writeeflags_u32(f)` | `PUSH EAX; POPFD` | `__builtin_ia32_writeeflags_u32(flags)` |
| `__builtin_ia32_rdtsc()` | `RDTSC` | `uint64_t tsc = __builtin_ia32_rdtsc()` |
| `__builtin_ia32_rdtscp(&aux)` | `RDTSCP` | `uint64_t tsc = __builtin_ia32_rdtscp(&aux)` |
| `__builtin_ia32_rdpmc(counter)` | `RDPMC` | `uint64_t pmc = __builtin_ia32_rdpmc(counter)` |
| `__builtin_ia32_sfence()` | `SFENCE` | `__builtin_ia32_sfence()` |
| `__builtin_ia32_lfence()` | `LFENCE` | `__builtin_ia32_lfence()` |
| `__builtin_ia32_mfence()` | `MFENCE` | `__builtin_ia32_mfence()` |
| `__builtin_ia32_bsfd32(x)` | `BSF EAX, r/m` | `int pos = __builtin_ctz(x)` |
| `__builtin_ia32_bsrd32(x)` | `BSR EAX, r/m` | `int pos = __builtin_clz(x)` |
| `__builtin_ia32_atomic_bts(ptr, bit)` | `BTS [mem], r` | `old = __sync_fetch_and_or(ptr, 1<<bit)` |
| `__builtin_ia32_readfsqword(off)` | `MOV RAX, [FS:off]` | `uint64_t val = __builtin_ia32_readfsqword(off)` |
| `__builtin_ia32_readgsqword(off)` | `MOV RAX, [GS:off]` | `uint64_t val = __builtin_ia32_readgsqword(off)` |

---

## LLVM Intrinsics → Output Mapping

| Intrinsic | Binary | Output |
|-----------|--------|--------|
| `llvm.memcpy` | `REP MOVSQ` | `memcpy(dst, src, count)` |
| `llvm.memmove` | `REP MOVSQ` (dir check) | `memmove(dst, src, count)` |
| `llvm.memset` | `REP STOSQ` | `memset(dst, val, count)` |
| `llvm.sqrt` | `SQRTSD xmm, xmm` | `result = sqrt(x)` |
| `llvm.sin` | `FSIN` or libm | `result = sin(x)` |
| `llvm.cos` | `FCOS` or libm | `result = cos(x)` |
| `llvm.cttz` | `BSF r, r/m` | `count = __builtin_ctz(x)` |
| `llvm.ctlz` | `BSR r, r/m` | `count = __builtin_clz(x)` |
| `llvm.ctpop` | `POPCNT r, r/m` | `count = __builtin_popcount(x)` |
| `llvm.atomic.load` | `MOV` (LOCK if needed) | `val = __atomic_load_n(ptr, order)` |
| `llvm.atomic.store` | `MOV` (LOCK if needed) | `__atomic_store_n(ptr, val, order)` |
| `llvm.atomic.cmpxchg` | `LOCK CMPXCHG` | `success = __atomic_compare_exchange_n(...)` |
| `llvm.atomic.rmw` | `LOCK ADD/SUB/AND/OR/XOR` | `old = __atomic_fetch_*(ptr, val, order)` |

---

## Flag Tracking Essentials

### Flags Set by Instructions
```
CMP r/m, r      → OF, CF, ZF, SF, AF, PF
ADD r, r/m      → OF, CF, ZF, SF, AF, PF
SUB r, r/m      → OF, CF, ZF, SF, AF, PF
AND r, r/m      → OF, CF, ZF, SF, AF, PF (OF=0, CF=0)
OR r, r/m       → OF, CF, ZF, SF, AF, PF (OF=0, CF=0)
XOR r, r/m      → OF, CF, ZF, SF, AF, PF (OF=0, CF=0)
TEST r/m, r     → OF, CF, ZF, SF, AF, PF (OF=0, CF=0)
BT r/m, r       → CF (only)
BSF r, r/m      → ZF (only)
BSR r, r/m      → ZF (only)
```

### Condition Codes
```
JE / JZ         → ZF == 1
JNE / JNZ       → ZF == 0
JL / JNGE       → SF != OF
JLE / JNG       → ZF == 1 || SF != OF
JG / JNLE       → ZF == 0 && SF == OF
JGE / JNL       → SF == OF
JB / JNAE / JC  → CF == 1
JBE / JNA       → CF == 1 || ZF == 1
JA / JNBE       → CF == 0 && ZF == 0
JAE / JNB / JNC → CF == 0
JO              → OF == 1
JNO             → OF == 0
JP / JPE        → PF == 1
JNP / JPO       → PF == 0
JS              → SF == 1
JNS             → SF == 0
```

---

## Register Preservation Rules

### x86-64 System V
```
Caller-saved (can be clobbered):
  RAX, RCX, RDX, RSI, RDI, R8-R11

Callee-saved (must preserve):
  RBX, RBP, R12-R15, RSP

Argument registers (caller-saved):
  RDI (arg1), RSI (arg2), RDX (arg3), RCX (arg4), R8 (arg5), R9 (arg6)

Return registers:
  RAX (int), RDX:RAX (128-bit), XMM0-XMM1 (FP)
```

### x86-64 Windows
```
Caller-saved (can be clobbered):
  RAX, RCX, RDX, R8-R11

Callee-saved (must preserve):
  RBX, RSI, RDI, RBP, R12-R15, RSP

Argument registers (caller-saved):
  RCX (arg1), RDX (arg2), R8 (arg3), R9 (arg4)

Return registers:
  RAX (int), RDX:RAX (128-bit), XMM0-XMM1 (FP)

Shadow space:
  32 bytes reserved by caller (even if no args)
```

### x86-32 cdecl
```
Caller-saved (can be clobbered):
  EAX, ECX, EDX

Callee-saved (must preserve):
  EBX, ESI, EDI, EBP, ESP

Argument registers:
  None (all on stack)

Return registers:
  EAX (int), EDX:EAX (64-bit)
```

---

## Priority Implementation Order

### Phase 1: Foundation (High Priority)
1. x86-64 System V calling convention
2. x86-64 Windows calling convention
3. Flag tracking (CMP, conditional jumps)
4. Basic arithmetic (ADD, SUB, MUL, DIV)
5. Memory operations (MOV, LEA)

### Phase 2: SIMD (Medium Priority)
6. SSE/SSE2 (XMM operations)
7. AVX/AVX2 (YMM operations)
8. Shuffle/blend operations
9. Vector reductions

### Phase 3: Specialized (Lower Priority)
10. AVX-512 (ZMM operations)
11. CET security instructions
12. TLS operations
13. Exception handling

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

