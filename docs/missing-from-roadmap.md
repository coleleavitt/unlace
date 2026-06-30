# Features Missing from ROADMAP.md

> Historical input snapshot. The root `ROADMAP.md`, `docs/roadmap.md`, and
> `docs/status.md` now absorb the CLI-first gaps from this file. Frontend rows here
> are intentionally out of scope for the current roadmap pass, and
> implementation status must be rechecked against current source before copying
> any "zero coverage" claim.

This document lists IDA features that are NOT currently in the unlace roadmap.
Derived from `research/ida-hexrays-docs/GAP_ANALYSIS_FROM_DOCS.md` (55 changelogs + 33 PDFs + 156 tips).

## Tier 1: Critical Missing (Would Block Adoption)

### UI / Workflow (out of scope for current roadmap)

The current roadmap intentionally excludes frontend productization.

| Feature | IDA Version | Impact |
|---------|-------------|--------|
| Disassembly view | core | **CRITICAL** |
| Pseudocode view | core | **CRITICAL** |
| Graph view (CFG) | 4.7+ | **CRITICAL** |
| Hex view | core | High |
| Functions list | 5.6+ | High |
| Names/Imports/Exports windows | core | High |
| Local Types editor | 8.4 | Medium |
| Stack frame view | core | Medium |
| Cross-references tree/graph | 9.2+ | High |
| Microcode viewer (interactive) | 9.2+ | Medium |
| Command palette | 8.0+ | Medium |
| Synced views (disasm ⇄ pseudo ⇄ hex) | core | High |
| Function call hierarchy | 9.2+ | Medium |
| Dark theme | 7.0+ | Low |
| Bookmarks | core | Medium |

**Recommendation:** Keep these rows out of the CLI-first roadmap. Revisit them in
a separate product-surface plan only if frontend work becomes active again.

### Debugger (partial substrate, production breadth missing)

The current source has debugger substrate, including a partial Linux ptrace
backend. The gap is production breadth and integration, not total absence.

| Feature | Impact |
|---------|--------|
| Local Linux debugger (ptrace) | **CRITICAL** |
| Local Windows debugger | **CRITICAL** |
| Local macOS debugger | High |
| Remote debugger server | High |
| GDB stub support | High |
| Breakpoints (sw/hw/conditional) | **CRITICAL** |
| Watch/register view | High |
| Call stack view | High |
| Trace recording | Medium |
| Bochs integration | Low |
| WinDbg integration | Medium |
| iOS/Android debugger | Medium |

**Recommendation:** Keep debugger as a dedicated roadmap phase. MVP now means
productionizing Linux ptrace, then adding Windows/macOS/GDB/RSP coverage.

### Scripting (Partial coverage)

Roadmap mentions "IDAPython compat partial" but doesn't detail:

| Feature | Impact |
|---------|--------|
| Full IDAPython API (`idaapi`, `idc`, `idautils`, `ida_funcs`, `ida_bytes`, `ida_hexrays`) | **CRITICAL** |
| IDC scripting | Low |
| Plugin loading via manifest | Medium |
| Microcode hooks (`hxe_*` events) | **CRITICAL for plugins** |
| Decompiler event callbacks | **CRITICAL for deobfuscators** |
| Custom calling conventions from plugin | Medium |
| REPL with auto-completion | Low |

**Recommendation:** Make IDAPython compat a dedicated phase, not a footnote.

---

## Tier 2: Important Missing (Quality/Feature Gaps)

### Decompiler User Interaction (NOT in roadmap)

| Feature | IDA Tip | Notes |
|---------|---------|-------|
| Force call type | #119/120 | User specifies callee signature |
| Set callee address | #115 | For indirect calls |
| Force variable / Split variable | 9.2+ | Manually control var allocation |
| Map variables | #77 | Merge two vars into one |
| Skippable instructions | #68 | Ignore specific instruction |
| Inlining (inline callee body) | `hxe_inlining_func` | Expand call inline |
| Decompile-as-call | #71 | Treat function as opaque |
| User-injectable microcode | 9.3+ | Add facts at specific points |
| User-deletable microcode | 9.3+ | Remove spurious ops |
| Forbid propagation per-var | 9.3+ | Keep specific assignments |
| Forbid propagation per-stmt | 9.3+ | Keep specific statements |
| Manual switch idiom | #53 | User-defined switch patterns |

**Recommendation:** Add "User Interaction" section to roadmap Phase A or new Phase G.

### Type System (Partially covered)

Roadmap has type recovery but misses:

| Feature | Notes |
|---------|-------|
| Type libraries (`.til` equivalent) | Portable type definitions |
| C/C++ header parser | IDA uses clang LibTooling |
| Objective-C `@interface`/`@protocol` parser | iOS RE |
| `__at(offset)` syntax | Roundtrip C export |
| Tuples (`__tuple`) | Go multi-return |
| Shifted pointers | Pointer+offset as field |
| Variable-sized structures | `struct { int n; char data[]; }` |
| Enum bitmasks | `O_RDONLY | O_CREAT` display |

**Recommendation:** Expand Phase B type work.

### Microcode/IR Features (NOT in roadmap)

| Feature | Notes |
|---------|-------|
| Maturity levels exposure | MMAT_ZERO → MMAT_FINAL stages |
| Cross-block 3-way compare | 64-bit ops on 32-bit |
| Assertion injection | "At this branch, eax=0" |
| GVN (Global Value Numbering) | 9.3 microcode viewer |
| Number origins tracking | Where did this constant come from? |
| Microcode verifier | Consistency check after each pass |

**Recommendation:** Add microcode internals to Phase D or new Phase.

### Loaders (Gaps not in roadmap)

| Format | Notes |
|--------|-------|
| .NET PE (CLI metadata) | Major market |
| Motorola S-record | Embedded |
| PSP/PS3/PS4/Switch firmware | Gaming RE |
| ROM dumps (Sega/Nintendo) | Gaming hacking |
| md1rom/md1img (Mediatek) | Mobile |

**Recommendation:** Add to Phase E.

### Architecture Gaps (Not in roadmap)

| Arch | Notes |
|------|-------|
| nanoMIPS | 9.0+ |
| MIPS o64 ABI | 9.2+ |
| AArch64 SVE/SME | Apple kernels |
| AArch64 MTE intrinsics | 9.3 |
| AArch64 CSSC | 9.3 |
| Andes NDS32 V3 | 9.3+ |
| Hard-float ABI ARM32 | 8.4+ |

**Recommendation:** Expand Phase C with specific variant coverage.

---

## Tier 3: Nice-to-Have (Professional Polish)

### Output Quality (Partially covered)

| Feature | Notes |
|---------|-------|
| Stock comments (reusable library) | 9.3+ |
| Float constants colorized | 8.4+ |
| Symbolic constants in pseudocode | Tip #149 |
| C++ STL goodname.cfg | Simplify STL noise |
| Print `true`/`false`/`nullptr` | 9.3 C++ mode |
| Cast simplification | 9.3 |

### Obfuscation (NOT in roadmap)

| Feature | Notes |
|---------|-------|
| VM deobfuscator framework | VB2023 paper |
| String deobfuscation | Synacktiv 2023 |
| Anti-debug recognition | Malware analysis |
| UPX/Themida unpacker | Common packers |
| Opaque predicate detection | CFG flattening |

**Recommendation:** Add obfuscation/malware phase or make it Plugin SDK examples.

### Export/Integration (NOT in roadmap)

| Feature | Notes |
|---------|-------|
| HTML export with hyperlinks | Tip #145 |
| Graph print to PDF | Tip #146 |
| BinDiff-style diff | Binary comparison |
| Coverage overlay | Dynamic + static |
| Source-level debugging | DWARF line mapping |
| Type library export | Portable types |

---

## Tier 4: Where Unlace is AHEAD (Not gaps)

These are unlace strengths NOT in IDA:

| Feature | Notes |
|---------|-------|
| eBPF/sBPF lifter | IDA has none |
| EVM (Ethereum) lifter | IDA has none |
| SASS (NVIDIA GPU) lifter | IDA has none |
| AMDGPU lifter | IDA has none |
| Apple AGX (GPU) lifter | IDA has none |
| Lua bytecode lifter | IDA has none |
| WASM lifter | IDA partial |
| Deterministic output | IDA varies |
| Golden fixture regression | IDA manual |
| Quality scoring | IDA none |
| KnownBits solver | IDA partial (9.3) |
| Path-sensitive analysis | IDA none |

---

## Summary: Roadmap Gaps by Priority

### Must Add to Roadmap

1. **Debugger Phase** — productionize ptrace, then Windows/macOS/GDB/RSP
2. **IDAPython Phase** — full compat layer, not partial
3. **User Interaction Phase** — force var/call/type, inject facts
4. **Persistent Project State** — one fact store for scripts, manual facts, Lumina, and traces

### Should Expand in Roadmap

5. **Type System** — TIL, header parser, Obj-C
6. **Microcode Internals** — Maturity levels, GVN, verifier
7. **Architecture Variants** — SVE, MTE, nanoMIPS
8. **Loaders** — .NET, S-record, gaming formats

### Consider Adding

9. **Obfuscation/Malware** — Deobfuscator framework, unpacker
10. **Export/Integration** — BinDiff, coverage, HTML

---

## Verification

```bash
# Check what's in roadmap
grep -E '###|Phase' ROADMAP.md

# Check what's in gap analysis
cat research/ida-hexrays-docs/GAP_ANALYSIS_FROM_DOCS.md | grep -c '❌'
# Result: ~80 missing features
```
