# IDA Corpus Analysis

Analysis of 320,222 decompiled C files from IDA Pro 9.3, containing 341,671 functions.

Generated 2026-06-27 from `research/decompiled-references/ida/`.

## Pattern Frequency Summary

### Type System

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `_QWORD/_DWORD/_WORD/_BYTE` casts | 3.7M | ✅ Emitting |
| `__int64/__int32/__int16/__int8` | 3.7M | ✅ Emitting |
| `*(_QWORD *)` pointer casts | 1.4M | ✅ Emitting |
| `*(_DWORD *)` pointer casts | 601k | ✅ Emitting |
| `*(_BYTE *)` pointer casts | 336k | ✅ Emitting |
| `__m128` SIMD types | 484k | 🟡 Partial |
| `_mm_*` intrinsics | 184k | ❌ Not emitting |
| `xmm` register references | 135k | 🟡 Partial |

### Calling Conventions

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `__fastcall` | 443k | ✅ Emitting |
| `__cdecl` | 16k | ✅ Emitting |
| `__thiscall` | 2.8k | 🟡 Partial |
| `__stdcall` | 2.9k | ✅ Emitting |
| `__usercall` | 2.0k | 🟡 Tests exist |
| `__userpurge` | 1.1k | 🟡 Tests exist |
| `__vectorcall` | 18 | ❌ Not implemented |

### Byte Extraction Macros

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `LODWORD` | 84k | 🟡 Infrastructure exists |
| `LOBYTE` | 51k | 🟡 Infrastructure exists |
| `HIDWORD` | 34k | 🟡 Infrastructure exists |
| `LOWORD` | 14k | 🟡 Infrastructure exists |
| `BYTE4` | 11k | 🟡 Infrastructure exists |
| `BYTE1` | 7.3k | 🟡 Infrastructure exists |
| `HIWORD` | 5.1k | 🟡 Infrastructure exists |
| `HIBYTE` | 4.1k | 🟡 Infrastructure exists |
| `BYTE2` | 3.5k | 🟡 Infrastructure exists |
| `BYTE3` | 1.2k | 🟡 Infrastructure exists |
| `WORD1` | 1.5k | 🟡 Infrastructure exists |
| `WORD2` | 964 | 🟡 Infrastructure exists |
| `DWORD1` | 818 | 🟡 Infrastructure exists |

### Control Flow

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `if (` | 2.7M | ✅ Emitting |
| `goto ` | 771k | ⚠️ Reduction target |
| `return ` | 672k | ✅ Emitting |
| `else` | 319k | ✅ Emitting |
| `while (` | 278k | ✅ Emitting |
| `case N:` | 249k | ✅ Emitting |
| `break;` | 203k | ✅ Emitting |
| `do-while` | 123k | ✅ Emitting |
| `else if` | 50k | ✅ Emitting |
| `for (` | 40k | 🟡 Partial recovery |
| `switch (` | 16k | ✅ Emitting |
| `continue;` | 13k | ✅ Emitting |
| `default:` | 13k | ✅ Emitting |

### Intrinsics & Helpers

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `__readfsqword` | 76k | 🟡 Partial |
| `__CFADD` (carry flag add) | 5.0k | ✅ Infrastructure |
| `__PAIR64__` | 3.4k | 🟡 Partial |
| `_byteswap` | 3.1k | ❌ Not emitting |
| `__ROL4__` (rotate left 32) | 662 | 🟡 Partial |
| `__ROL8__` (rotate left 64) | 659 | 🟡 Partial |
| `__ROR4__` (rotate right 32) | 735 | 🟡 Partial |
| `__ROR8__` (rotate right 64) | 668 | 🟡 Partial |
| `__COERCE_DOUBLE` | 575 | ❌ Not emitting |
| `__OFSUB` (overflow sub) | 373 | ✅ Infrastructure |
| `__COERCE_UNSIGNED_INT64` | 335 | ❌ Not emitting |

### Segment / TLS Access

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `__readfsqword` | 76k | 🟡 Recognized, not fully emitted |
| `__readgsdword` | 3.5k | 🟡 Partial |
| `TLS` references | 2.4k | ❌ Not implemented |

### Annotations & Comments

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `// ` comments | 4.6M | ✅ Emitting |
| `BYREF` annotation | 303k | ✅ Emitting |
| `__noreturn` | 13k | ✅ Emitting |
| `// weak` | 9.5k | 🟡 Partial |
| `@<reg>` location | 3.6k | 🟡 Partial |
| `__hidden` | 749 | ❌ Not implemented |

### C++ Patterns

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `::` scope | 165k | ✅ Emitting |
| `operator` | 118k | 🟡 Partial demangle |
| `std::` | 95k | ✅ Emitting |
| `__cxa_*` | 31k | ✅ Recognized |
| `new(` | 25k | ✅ Emitting |
| `typeinfo` | 14k | 🟡 Partial |
| `vtable` | 9.2k | 🟡 Partial |
| `this->` | 569 | 🟡 Partial |

### Exception Handling

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `__cxa_throw` | 12k | ✅ Recognized |
| `__cxa_allocate_exception` | 12k | ✅ Recognized |
| `_Unwind_*` | 9.7k | ✅ Recognized |

### Variable Naming

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `v[0-9]+` locals | 15.7M | ✅ Emitting |
| `a[0-9]+` args | 3.7M | ✅ Emitting |
| `result` return | 498k | ✅ Emitting |

### String Operations

| Pattern | Count | Unlace Status |
|---------|-------|---------------|
| `strlen` | 39k | ✅ Recognized |
| `memcpy` | 31k | ✅ Recognized |
| `memmove` | 24k | ✅ Recognized |
| `memset` | 18k | ✅ Recognized |
| `strcmp` | 15k | ✅ Recognized |

---

## Priority Gap List

### Must Fix (High Frequency, Missing)

1. **Byte extraction macro emission** (200k+ occurrences)
   - `CExpr::Macro` infrastructure exists
   - Need to wire producers to emit `LODWORD`/`LOBYTE`/`HIDWORD`/etc

2. **For-loop recovery** (40k IDA `for` loops)
   - IDA emits 40k `for` vs 278k `while`
   - Many `while` with init+step should become `for`

3. **`__readfsqword` emission** (76k occurrences)
   - Stack canary pattern: `__readfsqword(0x28u)`
   - Currently renders as raw segment access

4. **SIMD intrinsics** (184k `_mm_*` calls)
   - IDA emits Intel intrinsic names
   - Unlace emits raw CALLOTHER or unparsed

5. **`_byteswap_*`** (3.1k occurrences)
   - Need to recognize bswap idiom

### Should Fix (Medium Frequency)

6. **`__PAIR64__`/`__PAIR32__`** (3.4k occurrences)
   - 64-bit value from two 32-bit parts

7. **Rotate intrinsics** (`__ROL*__`/`__ROR*__`) (2.7k total)
   - Infrastructure exists in `idiom_recognition.rs`
   - Need to emit as macro calls

8. **`__usercall`/`__userpurge`** (3k occurrences)
   - Tests exist, not fully wired

9. **`COERCE_*` macros** (900+ occurrences)
   - Type punning helpers

10. **`__vectorcall`** (18 occurrences)
    - Windows SIMD calling convention

### Lower Priority

11. `__hidden` parameter annotation
12. `// weak` symbol comments
13. `thread_local` TLS marking
14. Full vtable reconstruction

---

## Goto Comparison

| Metric | IDA | Target |
|--------|-----|--------|
| Total gotos | 771k | - |
| Functions | 341k | - |
| Gotos/function avg | 2.26 | <1.0 |

IDA averages 2.26 gotos per function across this corpus. Unlace should match or beat this.

---

## Verification Commands

```bash
# Count patterns in IDA corpus
cd research/decompiled-references/ida
rg -c 'LOBYTE' --type c | awk -F: '{sum+=$2} END {print sum}'

# Check unlace emission
rg 'CExpr::Macro' crates/unlace-output --type rust

# Compare output
unlace decompile fixture.elf | grep -c 'LOBYTE'
```
