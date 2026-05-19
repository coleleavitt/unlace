# X86/X86_64 Decompilation Gap Analysis for Unlace

## Executive Summary

This document catalogs x86/x86_64 target-specific features, intrinsics, and builtins that unlace's lifter and output printer must handle for IDA-parity decompilation. Derived from LLVM/Clang source analysis.

---

## 1. CALLING CONVENTIONS

### 1.1 x86-64 (System V AMD64 ABI)

**Registers:**
- **Integer arguments**: RDI, RSI, RDX, RCX, R8, R9 (6 args)
- **Return value**: RAX (int), RDX:RAX (128-bit)
- **Caller-saved**: RAX, RCX, RDX, RSI, RDI, R8-R11
- **Callee-saved**: RBX, RSP, RBP, R12-R15
- **Variadic**: XMM0-XMM7 for floating-point args

**Stack:**
- Arguments beyond 6 passed on stack (right-to-left)
- Return address pushed by CALL
- Caller responsible for stack cleanup

**What unlace needs:**
- Recognize RDI/RSI/RDX/RCX/R8/R9 as parameter registers
- Track RAX as return value
- Preserve RSP/RBP for stack frame analysis
- Emit: `void func(long a1, long a2, long a3, long a4, long a5, long a6)`

---

### 1.2 x86-64 Windows (Microsoft x64)

**Registers:**
- **Integer arguments**: RCX, RDX, R8, R9 (4 args)
- **Return value**: RAX (int), RDX:RAX (128-bit)
- **Caller-saved**: RAX, RCX, RDX, R8-R11
- **Callee-saved**: RBX, RSI, RDI, RBP, R12-R15
- **Floating-point**: XMM0-XMM3 for FP args

**Stack:**
- 32-byte "shadow space" reserved by caller (even if no args)
- Arguments beyond 4 passed on stack
- Callee responsible for stack cleanup (no RET n)

**What unlace needs:**
- Recognize RCX/RDX/R8/R9 as parameter registers
- Account for shadow space in stack frame
- Emit: `void func(long a1, long a2, long a3, long a4)`

---

### 1.3 x86-32 (cdecl - C Declaration)

**Registers:**
- **Integer arguments**: Stack only (left-to-right)
- **Return value**: EAX (int), EDX:EAX (64-bit)
- **Caller-saved**: EAX, ECX, EDX
- **Callee-saved**: EBX, ESI, EDI, EBP, ESP

**Stack:**
- Arguments pushed right-to-left
- Return address pushed by CALL
- Caller responsible for stack cleanup (ADD ESP, n)

**What unlace needs:**
- All args on stack
- Emit: `void func(int a1, int a2, int a3)`

---

### 1.4 x86-32 (__fastcall)

**Registers:**
- **First 2 integer args**: ECX, EDX
- **Remaining args**: Stack (right-to-left)
- **Return value**: EAX (int), EDX:EAX (64-bit)
- **Caller-saved**: EAX, ECX, EDX
- **Callee-saved**: EBX, ESI, EDI, EBP

**Stack:**
- Callee responsible for stack cleanup (RET n)

**What unlace needs:**
- Recognize ECX/EDX as first two parameters
- Emit: `void __fastcall func(int a1, int a2, int a3)`

---

### 1.5 x86-32 (__stdcall)

**Registers:**
- **Integer arguments**: Stack only
- **Return value**: EAX (int), EDX:EAX (64-bit)
- **Caller-saved**: EAX, ECX, EDX
- **Callee-saved**: EBX, ESI, EDI, EBP

**Stack:**
- Arguments pushed right-to-left
- Callee responsible for stack cleanup (RET n)

**What unlace needs:**
- All args on stack
- Emit: `void __stdcall func(int a1, int a2)`

---

### 1.6 x86-32 (__thiscall)

**Registers:**
- **this pointer**: ECX
- **Other args**: Stack (right-to-left)
- **Return value**: EAX
- **Caller-saved**: EAX, ECX, EDX
- **Callee-saved**: EBX, ESI, EDI, EBP

**Stack:**
- Callee responsible for stack cleanup (RET n)

**What unlace needs:**
- Recognize ECX as `this` pointer
- Emit: `void __thiscall ClassName::method(int a1, int a2)`

---

### 1.7 x86-64 __vectorcall (Microsoft)

**Registers:**
- **First 4 integer args**: RCX, RDX, R8, R9
- **First 6 XMM args**: XMM0-XMM5
- **First 4 YMM args**: YMM0-YMM3
- **Remaining args**: Stack

**What unlace needs:**
- Recognize XMM0-XMM5 / YMM0-YMM3 as vector parameters
- Emit: `void __vectorcall func(__m128 v1, __m256 v2, int a1)`

---

### 1.8 x86-64 __fastcall (Microsoft)

**Same as x86-64 Windows (RCX, RDX, R8, R9)**

---

## 2. X86-SPECIFIC ISD OPCODES (LLVM IR Lowering)

These are operations that LLVM lowers specially for x86. Unlace's lifter must recognize these patterns in binary code.

### 2.1 Bit Manipulation

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::BSF` | Bit Scan Forward | `BSF r, r/m` | Find first set bit |
| `X86ISD::BSR` | Bit Scan Reverse | `BSR r, r/m` | Find last set bit |
| `X86ISD::BEXTR` | Bit Field Extract | `BEXTR r, r/m, r` | Extract bits [start:len] |
| `X86ISD::BEXTRI` | Bit Field Extract Imm | `BEXTR r, r/m, imm` | Extract bits [start:len] |

**What unlace needs:**
- Recognize BSF/BSR instructions
- Emit: `int __builtin_ctz(x)` / `int __builtin_clz(x)`
- Track ZF flag (set if input is 0)

---

### 2.2 Bit Test & Conditional

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::BT` | Bit Test | `BT r/m, r` | Test bit, set CF |
| `X86ISD::SETCC` | Set on Condition | `SETcc r` | Set byte based on flags |
| `X86ISD::SETCC_CARRY` | Set on Carry | `SETc r` | Set byte to CF or 0 |
| `X86ISD::CMOV` | Conditional Move | `CMOVcc r, r/m` | Move if condition true |

**What unlace needs:**
- Recognize condition codes (JE, JNE, JL, JG, etc.)
- Emit: `x = (flags & CF) ? 1 : 0`
- Track flag dependencies

---

### 2.3 Comparison & Flags

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::CMP` | Integer Compare | `CMP r/m, r` | Set flags |
| `X86ISD::FCMP` | Float Compare | `UCOMISD xmm, xmm` | Set flags |
| `X86ISD::COMI` | Ordered Compare | `COMISD xmm, xmm` | Set flags, signal NaN |
| `X86ISD::UCOMI` | Unordered Compare | `UCOMISD xmm, xmm` | Set flags, no signal |

**What unlace needs:**
- Recognize CMP/COMISD/UCOMISD
- Emit: `if (a < b)` not `if (CMP result)`
- Track NaN behavior for float comparisons

---

### 2.4 Arithmetic with Flags

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::ADD` | Add with flags | `ADD r, r/m` | Set OF, CF, ZF, SF |
| `X86ISD::ADC` | Add with Carry | `ADC r, r/m` | Add + CF |
| `X86ISD::SBB` | Subtract with Borrow | `SBB r, r/m` | Sub - CF |
| `X86ISD::SMUL` | Signed Multiply | `IMUL r, r/m` | Set OF, CF |
| `X86ISD::UMUL` | Unsigned Multiply | `MUL r/m` | Set OF, CF |

**What unlace needs:**
- Recognize flag-setting arithmetic
- Emit: `result = a + b; if (overflow) ...`
- Track carry chains (ADC/SBB for 128-bit ops)

---

### 2.5 Shifts & Rotates

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::VSHL` | Vector Shift Left | `PSLLW/D/Q xmm, xmm` | Shift each element |
| `X86ISD::VSRL` | Vector Shift Right Logical | `PSRLW/D/Q xmm, xmm` | Shift each element |
| `X86ISD::VSRA` | Vector Shift Right Arithmetic | `PSRAW/D/Q xmm, xmm` | Shift each element |
| `X86ISD::VROTLI` | Vector Rotate Left Imm | `VPROLD xmm, xmm, imm` | Rotate each element |
| `X86ISD::VROTRI` | Vector Rotate Right Imm | `VPRORD xmm, xmm, imm` | Rotate each element |

**What unlace needs:**
- Recognize vector shift instructions
- Emit: `v = _mm_slli_epi32(v, 8)` or `v <<= 8` (per-element)

---

### 2.6 SIMD Blending & Selection

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::BLENDI` | Blend Immediate | `PBLENDW xmm, xmm, imm` | Select elements by mask |
| `X86ISD::BLENDV` | Blend Variable | `PBLENDVB xmm, xmm, xmm` | Select elements by sign bits |
| `X86ISD::VSHLDQ` | Shift Left Double Quadword | `PSLLDQ xmm, imm` | Shift left by bytes |
| `X86ISD::VSRLDQ` | Shift Right Double Quadword | `PSRLDQ xmm, imm` | Shift right by bytes |

**What unlace needs:**
- Recognize blend instructions
- Emit: `result = mask ? a : b` (per-element)

---

### 2.7 Floating-Point Special

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::FMAX` | Float Max | `MAXSD xmm, xmm` | Max (ordered) |
| `X86ISD::FMIN` | Float Min | `MINSD xmm, xmm` | Min (ordered) |
| `X86ISD::FMAXC` | Float Max (commutative) | `MAXSD xmm, xmm` | Max (commutative) |
| `X86ISD::FMINC` | Float Min (commutative) | `MINSD xmm, xmm` | Min (commutative) |
| `X86ISD::FRCP` | Float Reciprocal | `RCPSS xmm, xmm` | 1.0 / x (approx) |
| `X86ISD::FRSQRT` | Float Reciprocal Sqrt | `RSQRTSS xmm, xmm` | 1.0 / sqrt(x) (approx) |

**What unlace needs:**
- Recognize FP min/max
- Emit: `result = fmax(a, b)` not `MAXSD`
- Note: RCPSS/RSQRTSS are approximations, not exact

---

### 2.8 String Operations

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::REP_STOS` | Repeat Store | `REP STOSQ` | memset loop |
| `X86ISD::REP_MOVS` | Repeat Move | `REP MOVSQ` | memcpy loop |

**What unlace needs:**
- Recognize REP STOS/MOVS
- Emit: `memset(dst, val, count)` / `memcpy(dst, src, count)`
- Track RDI (dst), RSI (src), RCX (count), RAX (value)

---

### 2.9 Call & Return

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::CALL` | Direct Call | `CALL rel32` | Function call |
| `X86ISD::NT_CALL` | Non-Temporal Call | `CALL r/m` | Indirect call |
| `X86ISD::IMP_CALL` | Implicit Call | (internal) | Call with implicit args |
| `X86ISD::RET_GLUE` | Return with Glue | `RET` | Return with flag chain |
| `X86ISD::IRET` | Interrupt Return | `IRET` | Return from interrupt |
| `X86ISD::TC_RETURN` | Tail Call Return | `JMP` | Tail call (no RET) |

**What unlace needs:**
- Recognize CALL/RET/JMP patterns
- Emit: `result = func(args)` / `return value`
- Track tail calls (JMP instead of CALL)

---

### 2.10 Exception Handling

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::EH_RETURN` | Exception Handler Return | (internal) | Return from exception handler |
| `X86ISD::EH_SJLJ_SETJMP` | setjmp | `MOV [rsp], rax` | Save exception context |
| `X86ISD::EH_SJLJ_LONGJMP` | longjmp | `JMP` | Restore exception context |

**What unlace needs:**
- Recognize setjmp/longjmp patterns
- Emit: `if (setjmp(buf) == 0) { ... } else { ... }`

---

### 2.11 TLS (Thread-Local Storage)

| Opcode | Semantics | Binary Pattern | Output |
|--------|-----------|----------------|--------|
| `X86ISD::TLSADDR` | TLS Address | `LEA RAX, [RIP + offset]` | Get TLS variable address |
| `X86ISD::TLSBASEADDR` | TLS Base Address | `MOV RAX, [FS:0]` | Get TLS base |
| `X86ISD::TLSCALL` | TLS Call | `CALL __tls_get_addr` | Resolve TLS address |

**What unlace needs:**
- Recognize TLS patterns
- Emit: `__thread int x;` / `&x` (TLS address)

---

## 3. X86 SIMD INTRINSICS

### 3.1 SSE (Streaming SIMD Extensions)

**Registers**: XMM0-XMM15 (128-bit vectors)

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Arithmetic** | Add, Sub, Mul, Div | `_mm_add_ps` | `ADDPS xmm, xmm` | `v1 + v2` |
| **Comparison** | EQ, LT, LE, GT, GE, NE | `_mm_cmp_ps` | `CMPPS xmm, xmm, imm` | `v1 < v2` (per-element) |
| **Min/Max** | Min, Max | `_mm_min_ps` | `MINPS xmm, xmm` | `min(v1, v2)` |
| **Shuffle** | Shuffle, Unpack | `_mm_shuffle_ps` | `SHUFPS xmm, xmm, imm` | Rearrange elements |
| **Conversion** | Float↔Int | `_mm_cvtps_epi32` | `CVTPS2DQ xmm, xmm` | Cast elements |
| **Reciprocal** | RCP, RSQRT | `_mm_rcp_ps` | `RCPPS xmm, xmm` | 1/x (approx) |
| **Sqrt** | Square Root | `_mm_sqrt_ps` | `SQRTPS xmm, xmm` | sqrt(x) |

**What unlace needs:**
- Recognize XMM register operations
- Emit: `__m128 v = _mm_add_ps(a, b)` or `v = a + b` (SIMD)
- Track element width (32-bit floats for SSE)

---

### 3.2 SSE2 (SSE + 64-bit)

**Registers**: XMM0-XMM15 (128-bit vectors)

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Double Precision** | Add, Sub, Mul, Div | `_mm_add_pd` | `ADDPD xmm, xmm` | `v1 + v2` (64-bit FP) |
| **Integer** | Add, Sub, Mul | `_mm_add_epi32` | `PADDD xmm, xmm` | `v1 + v2` (32-bit int) |
| **Shift** | SHL, SRL, SRA | `_mm_slli_epi32` | `PSLLD xmm, imm` | `v << 8` (per-element) |
| **Unpack** | Unpack, Interleave | `_mm_unpacklo_epi32` | `PUNPCKLDQ xmm, xmm` | Interleave low elements |
| **Pack** | Pack with saturation | `_mm_packs_epi32` | `PACKSSDW xmm, xmm` | Pack 32→16 with sat |

**What unlace needs:**
- Recognize double-precision FP operations
- Emit: `__m128d v = _mm_add_pd(a, b)` or `v = a + b` (SIMD)
- Track integer SIMD operations separately from FP

---

### 3.3 SSE3 / SSSE3 (Supplemental SSE3)

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Horizontal** | Horizontal Add/Sub | `_mm_hadd_ps` | `HADDPS xmm, xmm` | Horizontal sum |
| **Shuffle** | Shuffle Bytes | `_mm_shuffle_epi8` | `PSHUFB xmm, xmm` | Byte shuffle |
| **Abs** | Absolute Value | `_mm_abs_epi32` | `PABSD xmm, xmm` | abs(x) |
| **Sign** | Sign Extend | `_mm_sign_epi32` | `PSIGND xmm, xmm` | Sign-extend |

**What unlace needs:**
- Recognize horizontal operations
- Emit: `result = a[0] + a[1] + a[2] + a[3]` (for HADDPS)

---

### 3.4 SSE4.1 / SSE4.2

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Blend** | Blend with Mask | `_mm_blend_epi16` | `PBLENDW xmm, xmm, imm` | Select elements |
| **Insert/Extract** | Insert/Extract Element | `_mm_insert_epi32` | `PINSRD xmm, r/m, imm` | Insert element |
| **Dot Product** | Dot Product | `_mm_dp_ps` | `DPPS xmm, xmm, imm` | Dot product |
| **String Compare** | String Compare | `_mm_cmpistrm` | `PCMPISTRM xmm, xmm, imm` | Compare strings |

**What unlace needs:**
- Recognize blend/insert/extract
- Emit: `v[i] = value` / `result = v[i]`
- Track dot product as sum of products

---

### 3.5 AVX (Advanced Vector Extensions)

**Registers**: YMM0-YMM15 (256-bit vectors)

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Arithmetic** | Add, Sub, Mul, Div | `_mm256_add_ps` | `VADDPS ymm, ymm, ymm` | `v1 + v2` (256-bit) |
| **Blend** | Blend with Mask | `_mm256_blend_ps` | `VBLENDPS ymm, ymm, ymm, imm` | Select elements |
| **Permute** | Permute Elements | `_mm256_permute_ps` | `VPERMILPS ymm, ymm, imm` | Rearrange elements |
| **Extract** | Extract 128-bit | `_mm256_extractf128_ps` | `VEXTRACTF128 xmm, ymm, imm` | Extract half |

**What unlace needs:**
- Recognize YMM register operations
- Emit: `__m256 v = _mm256_add_ps(a, b)` or `v = a + b` (256-bit SIMD)
- Track 256-bit vector width

---

### 3.6 AVX2 (AVX + Integer)

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Integer** | Add, Sub, Mul | `_mm256_add_epi32` | `VPADDD ymm, ymm, ymm` | `v1 + v2` (256-bit int) |
| **Shift** | SHL, SRL, SRA | `_mm256_slli_epi32` | `VPSLLD ymm, ymm, imm` | `v << 8` (per-element) |
| **Gather** | Gather Load | `_mm256_i32gather_epi32` | `VPGATHERDD ymm, [base+idx*scale], mask` | Load scattered |
| **Permute** | Permute 128-bit | `_mm256_permute2x128_si256` | `VPERM2I128 ymm, ymm, ymm, imm` | Rearrange 128-bit lanes |

**What unlace needs:**
- Recognize integer SIMD operations on 256-bit vectors
- Emit: `__m256i v = _mm256_add_epi32(a, b)`
- Track gather operations as loop-like patterns

---

### 3.7 AVX-512 (512-bit vectors)

**Registers**: ZMM0-ZMM31 (512-bit vectors), K0-K7 (mask registers)

| Family | Operations | Example Intrinsic | Binary Pattern | Output |
|--------|-----------|-------------------|-----------------|--------|
| **Arithmetic** | Add, Sub, Mul, Div | `_mm512_add_ps` | `VADDPS zmm, zmm, zmm` | `v1 + v2` (512-bit) |
| **Masked** | Masked Operations | `_mm512_mask_add_ps` | `VADDPS zmm{k1}, zmm, zmm` | `v1 + v2` (masked) |
| **Compress/Expand** | Compress/Expand | `_mm512_mask_compress_epi32` | `VPCOMPRESSD zmm{k1}, zmm` | Compress elements |
| **Permute** | Permute Elements | `_mm512_permutexvar_epi32` | `VPERMUTEXVARI zmm, zmm, zmm` | Rearrange elements |

**What unlace needs:**
- Recognize ZMM register operations
- Emit: `__m512 v = _mm512_add_ps(a, b)` or `v = a + b` (512-bit SIMD)
- Track mask registers (K0-K7) for conditional operations
- Emit: `if (mask & (1 << i)) result[i] = ...`

---

## 4. X86 BUILTINS (Clang/GCC)

### 4.1 System & Control

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_readeflags_u32` | Read EFLAGS | `PUSHFD; POP EAX` | `uint32_t flags = __builtin_ia32_readeflags_u32()` |
| `__builtin_ia32_writeeflags_u32` | Write EFLAGS | `PUSH EAX; POPFD` | `__builtin_ia32_writeeflags_u32(flags)` |
| `__builtin_ia32_readeflags_u64` | Read RFLAGS | `PUSHFQ; POP RAX` | `uint64_t flags = __builtin_ia32_readeflags_u64()` |
| `__builtin_ia32_writeeflags_u64` | Write RFLAGS | `PUSH RAX; POPFQ` | `__builtin_ia32_writeeflags_u64(flags)` |

**What unlace needs:**
- Recognize PUSHFD/POPFD patterns
- Emit: `flags = __builtin_ia32_readeflags_u32()`

---

### 4.2 Timing & Performance

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_rdtsc` | Read Time Stamp Counter | `RDTSC` | `uint64_t tsc = __builtin_ia32_rdtsc()` |
| `__builtin_ia32_rdtscp` | RDTSC + Processor ID | `RDTSCP` | `uint64_t tsc = __builtin_ia32_rdtscp(&aux)` |
| `__builtin_ia32_rdpmc` | Read Performance Counter | `RDPMC` | `uint64_t pmc = __builtin_ia32_rdpmc(counter)` |
| `__builtin_ia32_rdpid` | Read Processor ID | `RDPID` | `uint32_t pid = __builtin_ia32_rdpid()` |

**What unlace needs:**
- Recognize RDTSC/RDTSCP/RDPMC/RDPID
- Emit: `tsc = __builtin_ia32_rdtsc()`

---

### 4.3 Memory Barriers & Fencing

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_sfence` | Store Fence | `SFENCE` | `__builtin_ia32_sfence()` |
| `__builtin_ia32_lfence` | Load Fence | `LFENCE` | `__builtin_ia32_lfence()` |
| `__builtin_ia32_mfence` | Memory Fence | `MFENCE` | `__builtin_ia32_mfence()` |

**What unlace needs:**
- Recognize fence instructions
- Emit: `__builtin_ia32_mfence()` or `std::atomic_thread_fence()`

---

### 4.4 Bit Manipulation

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_bsfd32` | Bit Scan Forward 32 | `BSF EAX, r/m` | `int pos = __builtin_ia32_bsfd32(x)` |
| `__builtin_ia32_bsrd32` | Bit Scan Reverse 32 | `BSR EAX, r/m` | `int pos = __builtin_ia32_bsrd32(x)` |
| `__builtin_ia32_bsfd64` | Bit Scan Forward 64 | `BSF RAX, r/m` | `int pos = __builtin_ia32_bsfd64(x)` |
| `__builtin_ia32_bsrd64` | Bit Scan Reverse 64 | `BSR RAX, r/m` | `int pos = __builtin_ia32_bsrd64(x)` |

**What unlace needs:**
- Recognize BSF/BSR instructions
- Emit: `__builtin_ctz(x)` / `__builtin_clz(x)` (GCC builtins)

---

### 4.5 Atomic Operations

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_atomic_bts` | Atomic Bit Test & Set | `BTS [mem], r` | `old_bit = __builtin_ia32_atomic_bts(ptr, bit)` |
| `__builtin_ia32_atomic_btc` | Atomic Bit Test & Clear | `BTC [mem], r` | `old_bit = __builtin_ia32_atomic_btc(ptr, bit)` |
| `__builtin_ia32_atomic_btr` | Atomic Bit Test & Reset | `BTR [mem], r` | `old_bit = __builtin_ia32_atomic_btr(ptr, bit)` |
| `__builtin_ia32_atomic_add_cc` | Atomic Add with Carry | `ADD [mem], r` | `carry = __builtin_ia32_atomic_add_cc(ptr, val, &result)` |

**What unlace needs:**
- Recognize atomic bit operations
- Emit: `old = __sync_fetch_and_or(ptr, 1 << bit)` (GCC atomics)

---

### 4.6 Control Flow Security (CET)

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_incsspd` | Increment Shadow Stack (32-bit) | `INCSSPD EAX` | `__builtin_ia32_incsspd(count)` |
| `__builtin_ia32_incsspq` | Increment Shadow Stack (64-bit) | `INCSSPQ RAX` | `__builtin_ia32_incsspq(count)` |
| `__builtin_ia32_rdsspd` | Read Shadow Stack Pointer (32-bit) | `RDSSPD EAX` | `uint32_t ssp = __builtin_ia32_rdsspd()` |
| `__builtin_ia32_rdsspq` | Read Shadow Stack Pointer (64-bit) | `RDSSPQ RAX` | `uint64_t ssp = __builtin_ia32_rdsspq()` |
| `__builtin_ia32_saveprevssp` | Save Previous SSP | `SAVEPREVSSP` | `__builtin_ia32_saveprevssp()` |
| `__builtin_ia32_rstorssp` | Restore SSP | `RSTORSSP [mem]` | `__builtin_ia32_rstorssp(ssp)` |
| `__builtin_ia32_wrssd` | Write to Shadow Stack (32-bit) | `WRSSD [mem], EAX` | `__builtin_ia32_wrssd(ptr, val)` |
| `__builtin_ia32_wrssq` | Write to Shadow Stack (64-bit) | `WRSSQ [mem], RAX` | `__builtin_ia32_wrssq(ptr, val)` |
| `__builtin_ia32_setssbsy` | Set SSB Busy | `SETSSBSY` | `__builtin_ia32_setssbsy()` |
| `__builtin_ia32_clrssbsy` | Clear SSB Busy | `CLRSSBSY [mem]` | `__builtin_ia32_clrssbsy(ptr)` |

**What unlace needs:**
- Recognize CET instructions (rare in user code, common in kernel/runtime)
- Emit: `__builtin_ia32_incsspq(count)` (shadow stack operations)

---

### 4.7 Memory Access Intrinsics

| Builtin | Semantics | Binary Pattern | Output |
|---------|-----------|-----------------|--------|
| `__builtin_ia32_readfsqword` | Read FS:[offset] | `MOV RAX, [FS:offset]` | `uint64_t val = __builtin_ia32_readfsqword(offset)` |
| `__builtin_ia32_readgsqword` | Read GS:[offset] | `MOV RAX, [GS:offset]` | `uint64_t val = __builtin_ia32_readgsqword(offset)` |
| `__builtin_ia32_writefsqword` | Write FS:[offset] | `MOV [FS:offset], RAX` | `__builtin_ia32_writefsqword(offset, val)` |
| `__builtin_ia32_writegsqword` | Write GS:[offset] | `MOV [GS:offset], RAX` | `__builtin_ia32_writegsqword(offset, val)` |

**What unlace needs:**
- Recognize FS/GS segment overrides
- Emit: `val = __builtin_ia32_readfsqword(offset)` or `*(uint64_t*)((char*)__builtin_ia32_readfsbase() + offset)`

---

## 5. LLVM INTRINSICS (Generic)

These are LLVM IR intrinsics that appear in compiled code. Unlace must recognize their lowered forms.

### 5.1 Memory Intrinsics

| Intrinsic | Semantics | Lowered Pattern | Output |
|-----------|-----------|-----------------|--------|
| `llvm.memcpy` | Memory Copy | `REP MOVSQ` | `memcpy(dst, src, count)` |
| `llvm.memmove` | Memory Move | `REP MOVSQ` (with direction check) | `memmove(dst, src, count)` |
| `llvm.memset` | Memory Set | `REP STOSQ` | `memset(dst, val, count)` |
| `llvm.memcpy.inline` | Inline Memory Copy | `MOV` loop | `memcpy(dst, src, count)` (inline) |

**What unlace needs:**
- Recognize REP MOVSQ/STOSQ patterns
- Emit: `memcpy(dst, src, count)` / `memset(dst, val, count)`

---

### 5.2 Atomic Intrinsics

| Intrinsic | Semantics | Lowered Pattern | Output |
|-----------|-----------|-----------------|--------|
| `llvm.atomic.load` | Atomic Load | `MOV` (with LOCK prefix if needed) | `val = __atomic_load_n(ptr, order)` |
| `llvm.atomic.store` | Atomic Store | `MOV` (with LOCK prefix if needed) | `__atomic_store_n(ptr, val, order)` |
| `llvm.atomic.cmpxchg` | Compare & Exchange | `LOCK CMPXCHG` | `success = __atomic_compare_exchange_n(ptr, &expected, desired, ...)` |
| `llvm.atomic.rmw` | Read-Modify-Write | `LOCK ADD/SUB/AND/OR/XOR` | `old = __atomic_fetch_add(ptr, val, order)` |

**What unlace needs:**
- Recognize LOCK prefixed instructions
- Emit: `__atomic_fetch_add(ptr, val, __ATOMIC_SEQ_CST)`

---

### 5.3 Math Intrinsics

| Intrinsic | Semantics | Lowered Pattern | Output |
|-----------|-----------|-----------------|--------|
| `llvm.sqrt` | Square Root | `SQRTSD xmm, xmm` | `result = sqrt(x)` |
| `llvm.sin` | Sine | `FSIN` (x87) or libm call | `result = sin(x)` |
| `llvm.cos` | Cosine | `FCOS` (x87) or libm call | `result = cos(x)` |
| `llvm.exp` | Exponential | libm call | `result = exp(x)` |
| `llvm.log` | Natural Log | libm call | `result = log(x)` |
| `llvm.pow` | Power | libm call | `result = pow(x, y)` |
| `llvm.fabs` | Absolute Value | `ANDPD xmm, [mask]` | `result = fabs(x)` |

**What unlace needs:**
- Recognize math function calls
- Emit: `result = sqrt(x)` / `result = sin(x)` / etc.

---

### 5.4 Bit Manipulation Intrinsics

| Intrinsic | Semantics | Lowered Pattern | Output |
|-----------|-----------|-----------------|--------|
| `llvm.cttz` | Count Trailing Zeros | `BSF r, r/m` | `count = __builtin_ctz(x)` |
| `llvm.ctlz` | Count Leading Zeros | `BSR r, r/m` | `count = __builtin_clz(x)` |
| `llvm.ctpop` | Count Population (Popcount) | `POPCNT r, r/m` | `count = __builtin_popcount(x)` |
| `llvm.bitreverse` | Bit Reverse | (loop or PEXT/PDEP) | `result = __builtin_bitreverse(x)` |

**What unlace needs:**
- Recognize BSF/BSR/POPCNT
- Emit: `__builtin_ctz(x)` / `__builtin_clz(x)` / `__builtin_popcount(x)`

---

### 5.5 Vector Intrinsics

| Intrinsic | Semantics | Lowered Pattern | Output |
|-----------|-----------|-----------------|--------|
| `llvm.vector.reduce.add` | Vector Reduce Add | `HADDPS` or loop | `result = v[0] + v[1] + ...` |
| `llvm.vector.reduce.mul` | Vector Reduce Mul | loop | `result = v[0] * v[1] * ...` |
| `llvm.vector.reduce.and` | Vector Reduce AND | `PAND` or loop | `result = v[0] & v[1] & ...` |
| `llvm.vector.reduce.or` | Vector Reduce OR | `POR` or loop | `result = v[0] \| v[1] \| ...` |
| `llvm.vector.reduce.xor` | Vector Reduce XOR | `PXOR` or loop | `result = v[0] ^ v[1] ^ ...` |

**What unlace needs:**
- Recognize horizontal reduction patterns
- Emit: `result = a[0] + a[1] + a[2] + a[3]`

---

## 6. REGISTER FILE & CALLING CONVENTION SUMMARY

### 6.1 x86-64 Registers

| Register | Purpose | Caller-Saved | Notes |
|----------|---------|--------------|-------|
| RAX | Return value (int) | Yes | Also used for multiply/divide |
| RBX | General purpose | No | Callee-saved |
| RCX | Arg 4 (sysv64) / Arg 1 (win64) | Yes | Also loop counter |
| RDX | Arg 3 (sysv64) / Arg 2 (win64) | Yes | Also used for multiply/divide |
| RSI | Arg 2 (sysv64) | Yes | Source index |
| RDI | Arg 1 (sysv64) | Yes | Destination index |
| RBP | Base pointer | No | Frame pointer (often) |
| RSP | Stack pointer | No | Stack pointer |
| R8 | Arg 5 (sysv64) / Arg 3 (win64) | Yes | General purpose |
| R9 | Arg 6 (sysv64) / Arg 4 (win64) | Yes | General purpose |
| R10 | General purpose | Yes | Temporary |
| R11 | General purpose | Yes | Temporary |
| R12-R15 | General purpose | No | Callee-saved |

### 6.2 x86-32 Registers

| Register | Purpose | Caller-Saved | Notes |
|----------|---------|--------------|-------|
| EAX | Return value (int) | Yes | Also used for multiply/divide |
| EBX | General purpose | No | Callee-saved |
| ECX | Arg 1 (__fastcall) | Yes | Also loop counter |
| EDX | Arg 2 (__fastcall) | Yes | Also used for multiply/divide |
| ESI | General purpose | No | Callee-saved (often) |
| EDI | General purpose | No | Callee-saved (often) |
| EBP | Base pointer | No | Frame pointer (often) |
| ESP | Stack pointer | No | Stack pointer |

### 6.3 XMM/YMM/ZMM Registers

| Register | Purpose | Caller-Saved | Notes |
|----------|---------|--------------|-------|
| XMM0-XMM7 | FP args / return (sysv64) | Yes | 128-bit vectors |
| XMM0-XMM3 | FP args / return (win64) | Yes | 128-bit vectors |
| XMM8-XMM15 | General purpose | Yes | 128-bit vectors |
| YMM0-YMM15 | 256-bit vectors | Yes | Upper 128 bits not preserved |
| ZMM0-ZMM31 | 512-bit vectors | Yes | Upper 256 bits not preserved |
| K0-K7 | Mask registers | Yes | 64-bit masks (AVX-512) |

---

## 7. GAPS & RECOMMENDATIONS FOR UNLACE

### 7.1 Lifter Gaps

1. **Calling Convention Detection**: Unlace must infer calling convention from:
   - Register usage patterns (RDI/RSI/RDX/RCX/R8/R9 vs RCX/RDX/R8/R9)
   - Stack frame layout
   - Function prologue/epilogue
   - Binary metadata (DWARF, PDB)

2. **SIMD Intrinsic Recognition**: Unlace must map:
   - XMM/YMM/ZMM operations → `_mm_*` intrinsics
   - Mask operations (K0-K7) → conditional SIMD
   - Gather/scatter → loop-like patterns

3. **Flag Dependency Tracking**: Unlace must preserve:
   - CMP/TEST results → condition codes
   - Arithmetic flag-setting → overflow/carry chains
   - ADC/SBB chains → 128-bit operations

4. **String Operation Lowering**: Unlace must recognize:
   - REP MOVSQ → `memcpy()`
   - REP STOSQ → `memset()`
   - REP SCASQ → `memchr()` / loop

5. **Atomic Operation Recognition**: Unlace must map:
   - LOCK ADD/SUB/AND/OR/XOR → `__atomic_fetch_*`
   - LOCK CMPXCHG → `__atomic_compare_exchange_n`

### 7.2 Output Printer Gaps

1. **Calling Convention Annotations**: Emit:
   - `__fastcall` / `__stdcall` / `__thiscall` for x86-32
   - `__vectorcall` for vector parameters
   - `__usercall` for non-standard conventions

2. **SIMD Type Rendering**: Emit:
   - `__m128` / `__m256` / `__m512` types
   - `__m128i` / `__m256i` / `__m512i` for integer SIMD
   - `__m128d` / `__m256d` / `__m512d` for double SIMD

3. **Intrinsic Function Calls**: Emit:
   - `_mm_add_ps()` / `_mm256_add_epi32()` / etc.
   - `__builtin_ia32_*` for x86-specific builtins
   - `__builtin_ctz()` / `__builtin_clz()` for bit ops

4. **Memory Access Annotations**: Emit:
   - `__builtin_ia32_readfsqword()` for FS/GS access
   - Stack offset comments for local variables
   - BYREF annotations for address-taken variables

5. **Atomic Operation Rendering**: Emit:
   - `__atomic_fetch_add()` / `__atomic_compare_exchange_n()`
   - Memory ordering annotations (`__ATOMIC_SEQ_CST`, etc.)

---

## 8. PRIORITY RANKING FOR UNLACE

### High Priority (Common in Real Binaries)

1. **Calling Conventions** (x86-64 sysv64, win64; x86-32 cdecl, __fastcall)
2. **SSE/SSE2 SIMD** (XMM operations, common in modern code)
3. **Flag-Setting Arithmetic** (CMP, ADD with flags, ADC/SBB chains)
4. **String Operations** (REP MOVSQ, REP STOSQ)
5. **Atomic Operations** (LOCK prefixed instructions)

### Medium Priority (Specialized but Important)

6. **AVX/AVX2 SIMD** (YMM operations, common in vectorized code)
7. **Bit Manipulation** (BSF, BSR, POPCNT, BEXTR)
8. **Floating-Point Special** (FMAX, FMIN, FRCP, FRSQRT)
9. **Blend/Shuffle Operations** (PBLENDW, SHUFPS, etc.)
10. **CET Security** (INCSSPQ, RDSSPQ, etc. - kernel/runtime)

### Lower Priority (Rare or Specialized)

11. **AVX-512 SIMD** (ZMM operations, rare in user code)
12. **Gather/Scatter** (VPGATHERDD, etc. - specialized)
13. **TLS Operations** (TLSADDR, TLSCALL - runtime)
14. **Exception Handling** (EH_SJLJ_SETJMP, etc. - C++ specific)

---

## 9. TESTING STRATEGY

### 9.1 Calling Convention Tests

```c
// x86-64 sysv64
long func_sysv64(long a1, long a2, long a3, long a4, long a5, long a6) {
    return a1 + a2 + a3 + a4 + a5 + a6;
}

// x86-64 win64
long func_win64(long a1, long a2, long a3, long a4) {
    return a1 + a2 + a3 + a4;
}

// x86-32 __fastcall
long __fastcall func_fastcall(long a1, long a2, long a3) {
    return a1 + a2 + a3;
}
```

### 9.2 SIMD Tests

```c
#include <immintrin.h>

__m128 test_sse(__m128 a, __m128 b) {
    return _mm_add_ps(a, b);
}

__m256i test_avx2(__m256i a, __m256i b) {
    return _mm256_add_epi32(a, b);
}

__m512 test_avx512(__m512 a, __m512 b) {
    return _mm512_add_ps(a, b);
}
```

### 9.3 Atomic Tests

```c
#include <stdatomic.h>

void test_atomic(int *ptr) {
    __atomic_fetch_add(ptr, 1, __ATOMIC_SEQ_CST);
}

void test_cmpxchg(int *ptr, int expected, int desired) {
    __atomic_compare_exchange_n(ptr, &expected, desired, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
}
```

---

## 10. REFERENCES

- LLVM X86 Target: `/home/cole/CLionProjects/forks/llvm-project/llvm/lib/Target/X86/`
- Clang Builtins: `/home/cole/CLionProjects/forks/llvm-project/clang/lib/CodeGen/CGBuiltin.cpp`
- LLVM Intrinsics: `/home/cole/CLionProjects/forks/llvm-project/llvm/include/llvm/IR/Intrinsics*.td`
- System V AMD64 ABI: https://refspecs.linuxbase.org/elf/x86_64-abi-0.99.pdf
- Microsoft x64 Calling Convention: https://docs.microsoft.com/en-us/cpp/build/x64-calling-convention
- Intel Intrinsics Guide: https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html

