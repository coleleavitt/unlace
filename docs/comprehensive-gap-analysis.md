# Comprehensive Gap Analysis

> Historical generated snapshot. Use this as research input, not current
> implementation status. The refreshed CLI-first roadmap lives in `ROADMAP.md`,
> `docs/roadmap.md`, and `docs/status.md`; those files correct stale claims such
> as "debugger zero" and keep frontend work out of the current roadmap pass.

Deep analysis comparing IDA Pro 9.3 features vs unlace, based on:
- 320k decompiled functions from IDA corpus
- 55 IDA changelogs + 33 PDFs + 156 Igor's Tips
- Codebase inspection of unlace

Generated 2026-06-27.

---

## Summary Table

| Category | IDA Features | Unlace Has | Gap |
|----------|--------------|------------|-----|
| UI/Workflow | 20+ windows | CLI | Out of scope for current roadmap |
| Debugger | Full local+remote | Partial Linux ptrace substrate | **CRITICAL breadth gap** |
| IDAPython | Complete API | Partial stubs | **CRITICAL** |
| Type System | Complete | 80% | Medium |
| Decompiler Core | Complete | 85% | Medium |
| User Interaction | Full control | Minimal | High |
| Architectures | 50+ | 35+ | Medium |
| Loaders | 30+ | 15+ | Medium |
| Advanced Analysis | Partial | Partial | Low |

---

## What Unlace Actually Has (Verified)

### ✅ Complete or Near-Complete

| Feature | Evidence |
|---------|----------|
| Type casts (`_QWORD`, `__int64`) | Emitting in output |
| Calling conventions (`__fastcall`, `__cdecl`, `__stdcall`) | In c_printer |
| Control flow (`if`, `while`, `switch`, `for`, `do-while`) | All emitting |
| Compound assignments (`+=`, `*=`, `&=`, `++`) | CExpr support |
| Variable naming (`v1`, `a1`, `result`) | Working |
| Byte extraction macros (`LOBYTE`, `HIDWORD`) | Infrastructure exists |
| Overflow intrinsics (`__CFADD`, `__OFSUB`) | In condition_simplify |
| Rotate intrinsics (`__ROL`, `__ROR`) | In idiom_recognition |
| TLS intrinsics (`__readfsqword`) | Recognized |
| C++ EH (`__cxa_*`, `_Unwind_*`) | cxx_eh.rs pass |
| Bitfield recovery | bitfield_recovery.rs |
| Windows types (`HANDLE`, `DWORD`) | In tinfo.rs |
| Objective-C (`objc_msgSend`) | objc_dispatch.rs |
| Volatile/restrict | In c_printer |
| Path-sensitive analysis | path_sensitive.rs |
| Opaque predicate detection | opaque_pred.rs |
| Packer detection | packer_detect.rs |
| SIMD types (`__m128`) | Partial in quality.rs |
| Bookmarks | In session/project |
| Source line mapping | In dwarf.rs |

### 🟡 Partial Implementation

| Feature | Status | Gap |
|---------|--------|-----|
| SIMD intrinsics (`_mm_*`) | Types exist, intrinsics not emitted | High |
| `__usercall`/`__userpurge` | Tests exist, not fully wired | Medium |
| vtable reconstruction | Partial in cpp_class.rs | Medium |
| For-loop recovery | Exists but limited | Medium |
| `COERCE_*` macros | Not emitting | Low |
| `__PAIR64__` | Partial | Low |
| BinDiff/patch diff | Zero | Low |
| Undo/redo | Basic in lumina | Low |

### ❌ Actually Missing

| Feature | Impact | Notes |
|---------|--------|-------|
| **UI windows** | Out of scope here | Frontend work intentionally excluded from current roadmap |
| **Debugger breadth** | Critical | Linux ptrace substrate exists; production breadth missing |
| **IDAPython full API** | Critical | Only stubs |
| **Microcode viewer** | High | No interactive IR view |
| **Xref tree/graph** | High | No visual xrefs |
| **Coverage overlay** | Medium | No runtime integration |
| **User microcode injection** | Medium | Can't add assertions |
| **Force variable/split** | Medium | Can't manually control |
| **Database save/load** | Medium | No .idb equivalent |
| **Synced views** | Medium | No disasm ⇄ pseudo sync |

---

## IDA Corpus Pattern Analysis

From 320k functions, pattern frequency vs unlace status:

### Fully Covered (✅)

| Pattern | IDA Count | Notes |
|---------|-----------|-------|
| Type casts | 3.7M | Emitting |
| `__int64` | 3.4M | Emitting |
| `__fastcall` | 443k | Emitting |
| `while` loops | 278k | Emitting |
| `break` | 203k | Emitting |
| `++` | 198k | Emitting |
| `const char *` | 135k | Emitting |
| `+=` | 134k | Emitting |
| `do-while` | 123k | Emitting |
| `void **` | 126k | Emitting |
| `char **` | 88k | Emitting |
| `LOBYTE(x) =` | 50k | Infrastructure |
| `memcpy` | 31k | Recognized |
| `strlen` | 39k | Recognized |
| `__cxa_throw` | 12k | Recognized |
| `volatile` | 11k | Emitting |

### Partially Covered (🟡)

| Pattern | IDA Count | Gap |
|---------|-----------|-----|
| SIMD `_mm_*` | 184k | Not emitting intrinsic names |
| `LODWORD` | 84k | Infrastructure, not wired |
| `__readfsqword` | 76k | Recognized, not emitting clean |
| `LOBYTE` | 51k | Infrastructure exists |
| `for` loops | 40k | Limited recovery |
| `&=` / `\|=` | 73k | May work |
| `vtable` | 9k | Partial |
| `__PAIR64__` | 3.4k | Partial |

### Not Covered (❌)

| Pattern | IDA Count | Notes |
|---------|-----------|-------|
| `goto` reduction | 771k | IDA averages 2.26/func |
| `__asm` blocks | 2.5k | Not emitting |
| `__debugbreak` | 1.4k | Not emitting |
| `__ptr32`/`__ptr64` | 1.2k | Not emitting |
| `COERCE_DOUBLE` | 575 | Not emitting |
| `SHIDWORD`/`SLODWORD` | 3k | Not emitting |

---

## Feature-by-Feature Comparison

### 1. UI Windows (out of scope for this roadmap pass)

IDA has: Disassembly, Pseudocode, Graph, Hex, Functions, Names, Imports, Exports, Strings, Structures, Enums, Local Types, Stack Frame, Xrefs, Output, Notepad, Microcode, Call Hierarchy, Bookmarks, Command Palette

Unlace has: CLI output. Frontend work is intentionally excluded from the current
roadmap pass.

**Gap: intentionally not ranked here**

### 2. Debugger (partial substrate, major breadth gap)

IDA has: Local Windows/Linux/macOS, Remote, GDB stub, Bochs, WinDbg, iOS/Android, Breakpoints, Watch, Stack, Registers, Trace, Snapshot

Unlace has: `unlace-debugger` plus a partial Linux ptrace backend. Missing
production breadth includes Windows Debug API, macOS Mach, GDB/RSP remote,
hardware/watch breakpoints, trace/coverage export, robust unwinding, and
analysis integration.

**Gap: CRITICAL breadth and integration gap**

### 3. Scripting (20%/100%)

IDA has: IDAPython (idaapi, idc, idautils, ida_*, ida_hexrays), IDC, Plugin manifest, Microcode hooks, Event callbacks, REPL

Unlace has: PyO3 bindings scaffold, no IDAPython compat layer

**Gap: CRITICAL**

### 4. User Interaction (10%/100%)

IDA has: Force type, Split variable, Map variables, Skippable insn, Inject microcode, Delete microcode, Forbid propagation, Manual switch, Force call type, Inline callee

Unlace has: Basic rename via annotations

**Gap: HIGH**

### 5. Decompiler Core (85%/100%)

IDA has: Maturity levels, Cross-block compare, Assertion injection, GVN, Number origins, Outlined function recognition, Cast simplification

Unlace has: Most core algorithms, missing interactive microcode control

**Gap: MEDIUM**

### 6. Type System (80%/100%)

IDA has: TIL libraries, Header parser, Objective-C parser, Tuples, Shifted pointers, Variable-sized structs, Enum bitmasks, `__at(offset)`

Unlace has: DWARF/PDB parsing, TInfo representation, missing portable TIL

**Gap: MEDIUM**

### 7. Architectures (70%/100%)

IDA has: ~50 processors with full support

Unlace has: 35+ lifters, 3 production (x86/x86_64/AArch64), missing nanoMIPS, full SVE/SME, MTE

Unlace AHEAD: eBPF, EVM, SASS, AMDGPU, AGX, Lua, WASM

**Gap: MEDIUM (but unlace leads in modern/exotic)**

### 8. Loaders (60%/100%)

IDA has: ELF, PE, MachO, .NET, Java, DEX, Motorola S-record, ROM dumps, firmware

Unlace has: ELF, PE, MachO, dyld cache, DEX stub

Missing: .NET (critical), S-record, ROM formats

**Gap: MEDIUM**

### 9. Advanced Analysis (50%/50%)

IDA has: Partial symbolic, some taint, no real deobfuscator framework

Unlace has: Path-sensitive, opaque predicate, packer detect

**Gap: LOW (roughly equal)**

---

## Priority Action Items

### Immediate (Block adoption)

1. **IDAPython API layer** — xrefs, `idaapi.decompile`, `ida_funcs`, and basic `ida_hexrays`
2. **Debugger breadth** — finish Linux ptrace, then add Windows/macOS/GDB/RSP coverage
3. **Persistent project state** — shared fact store for scripts, manual facts, Lumina, and traces

### Near-term (Quality)

4. **Byte macro emission** — Wire `LOBYTE`/`HIDWORD` producers
5. **SIMD intrinsic names** — Emit `_mm_*` instead of CALLOTHER
6. **For-loop recovery** — Detect init+step patterns
7. **Goto reduction** — Target <2.0/function average

### Medium-term (Completeness)

8. **.NET loader** — Major market gap
9. **User microcode control** — Inject/delete assertions
10. **Database save/load** — Project persistence

---

## Verification Commands

```bash
# Check unlace feature presence
rg 'LOBYTE|HIDWORD' crates/unlace-output --type rust
rg 'objc_msgSend' crates/unlace-passes --type rust
rg 'path_sensitive' crates/unlace-passes --type rust

# Check IDA corpus patterns
cd research/decompiled-references/ida
rg -c 'LOBYTE' --type c | awk -F: '{sum+=$2} END {print sum}'
rg -c '_mm_' --type c | awk -F: '{sum+=$2} END {print sum}'
```
