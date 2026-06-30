# UNLACE → 100% IDA/Hex-Rays Parity Plan

**Status as of commit `1953a1d63` (post Wave 26):**
- 2,280 tests passing across 30 crates
- 7 architectures lifted (x86, x86_64, AArch64, ARM A32/T32, MIPS, PowerPC, RISC-V, ARC) at varying depth
- 3 binary formats (ELF, PE/COFF, Mach-O + dyld_shared_cache)
- 75-opcode IR frozen (v1.0); new instruction semantics via reserved `Callother(intrinsic_id, …)` tags
- Full recovery layer wired end-to-end: stack frames → BYREF → structs → TIE → libc idioms → var naming → calling-conv finalization → C output
- Estimated parity vs. **Hex-Rays / IDA Pro** for a binary in our supported set: **25-35%** (generous count)
- Estimated parity vs. **Ghidra decompiler module** for the same: **60-75%**
- Estimated parity vs. **angr / radare2 / RetDec**: **competitive to ahead** in recovery layer; behind on processor count

This document is the long-form roadmap from "mid-tier decompiler" to "production parity with IDA Pro 9.x." It is brutal about scope. **A single engineer working full-time would need 18-24 months to land all of it.** With sustained agent fan-out at the cadence we've been running, 6-12 months is plausible.

---

## TL;DR — phased roadmap

| Phase | Theme | Waves | Months | Impact |
|---|---|---|---|---|
| **A** | Output quality leap | 27-31 | 1-2 | "Looks like IDA" multiplier |
| **B** | Type & symbol fluency | 32-37 | 2-3 | PDB/DWARFv5/FLIRT close most named-binary gap |
| **C** | Architecture breadth | 38-50 | 3-5 | Cover IDA's top-20 processors |
| **D** | Recovery sophistication | 51-58 | 2-3 | Goto-elim, region-structuring, microcode opts |
| **E** | Format breadth + dynamic | 59-65 | 1-2 | Wasm, BPF, ESP32, debugger integration |
| **F** | Ecosystem | 66-70 | 1-2 | Plugin SDK, Lumina-equivalent, BinDiff |

---

## Phase A — Output Quality Leap (Waves 27-31)

**Goal:** Make the C output indistinguishable from Hex-Rays for the 80% of well-behaved functions in our supported architectures. This is pure printer / structurer / idiom work; no new lifting.

### Wave 27 — Goto elimination
Hex-Rays' single most-praised feature. Currently we emit `goto label_N;` for any irreducible CFG fragment.

- **t235** Region-based structuring (Engel/Lerner-style algorithm): identify natural regions, fall through, conditional, while/do-while; only emit goto when no region pattern matches.
- **t236** Tail-duplication for shared exits (we have `tail_duplication.rs` but it's not aggressive enough).
- **t237** Loop normalization: convert do-while → while when condition is loop-invariant on entry.
- **t238** Continue / break detection: replace `goto loop_header` with `continue`, `goto loop_exit` with `break`.
- **t239** Label fallthrough collapse: adjacent `goto label_N; label_N:` pairs become straight-line code.
- **t240** Switch-table sparse-case heuristic: dense `if-else if-else` chains → `switch` statement.

**Acceptance:** corpus of 50 binaries shows < 5% of emitted functions contain any `goto`. Currently ~25%.

### Wave 28 — Switch-table pattern library
Beyond simple jump tables, real compilers emit:

- **t241** Compressed jump tables (8-bit / 16-bit table indexing 32-bit base).
- **t242** Branch-table-of-branches (LLVM `-fjumptable-density=high`).
- **t243** Binary-search switch (compiler emits balanced if-tree for sparse cases).
- **t244** Hash-switch on string keys (we have `string_hash_switch.rs` MVP — extend to all known hash families).
- **t245** Computed-goto / `&&label` (GCC extension) recovery.
- **t246** Range tests collapsed into `case 1...10:` extensions where the user's compiler supports it.

### Wave 29 — Microcode-style intermediate optimization
Hex-Rays runs ~30 microcode passes between SSA and C. We're missing many.

- **t247** Bit-field consolidation: `(x & 0xFF00) >> 8 | (y & 0xFF) << 8` → `__byte_swap16(x, y)`.
- **t248** Comparison strengthening: `(x ^ y) == 0` → `x == y`.
- **t249** Sign-extension elimination: `(int)(short)x` where `x` is already `short`.
- **t250** De Morgan canonicalization: `!(a && b)` → `!a || !b` only when it improves readability heuristic.
- **t251** Boolean expression simplification via Espresso-lite or Quine-McCluskey on small input sets.
- **t252** Self-referential expression collapse: `x = x ? x : 0` → no-op.
- **t253** Loop-invariant code motion at HIR level (we have it at SSA — re-run after structuring).
- **t254** Common subexpression elimination at HIR level for emitted-twice expressions.

### Wave 30 — IDA-isms in C output
Hex-Rays uses specific conventions that are easy to mimic:

- **t255** `LOBYTE(x)` / `HIWORD(x)` / `BYTE2(x)` macros for byte-extraction patterns (we have macros declared but don't use them).
- **t256** `__OFADD__` / `__OFSUB__` overflow-flag macros where flag arithmetic appears.
- **t257** `MEMORY[addr]` for unanalyzable global memory accesses.
- **t258** Union-tagged BYREF parameters: emit `union { struct A *a; struct B *b; }` when the same byref is consumed two ways.
- **t259** Volatile annotation on MMIO-pattern accesses (memory-mapped register layouts).
- **t260** `__usercall` / `__userpurge` annotation when calling-convention doesn't match a known ABI.

### Wave 31 — Comments and provenance
- **t261** Auto-comment instruction-level oddities (`// fastpath: x is non-null on entry`).
- **t262** Annotate inferred libc calls with `// memcpy(dst, src, n) — recognized from __memcpy_chk`.
- **t263** Annotate calling-convention drops with `// dropped param a3 (dead in body)`.
- **t264** Source-line provenance comments when DWARF or PDB provides it.
- **t265** Cross-reference comments: `// xref: sub_4012A0+15`.

**Phase A milestone:** unlace output is visually competitive with Hex-Rays on a curated 100-binary test set; double-blind rater can't reliably distinguish on 70%+ of functions.

---

## Phase B — Type & Symbol Fluency (Waves 32-37)

**Goal:** Reach Hex-Rays parity on binaries that have any external metadata (PDB, DWARF, dSYM, .so symbols, FLIRT signatures, Lumina-style annotations).

### Wave 32 — FLIRT signature matching (the killer feature)

FLIRT is what makes IDA recognize libc and stdlib functions instantly even on stripped binaries. It's a sophisticated pattern-matching system.

- **t266** SIG file format parser (FLIRT v5/v6/v8/v10 module map header).
- **t267** Pattern-matching engine: byte-pattern + variable-byte (CRC checked).
- **t268** Function-prologue alignment + length-prefixed match.
- **t269** Reference-name list resolution (FLIRT records calls *out* of the matched function).
- **t270** Signature library: ship `.sig` files for glibc 2.34/2.39, musl 1.2.x, MSVCRT 14.x, mingw, dietlibc, ulibc, golang runtime, Rust libcore.
- **t271** SIG generator from compiled libraries (parse `.a` archive, emit FLIRT pattern).
- **t272** Confidence scoring: when a partial match exists, emit `// likely <name> (FLIRT 87%)`.

**Effort:** 4-6 weeks for engine; ongoing for library curation.

### Wave 33 — PDB type recovery deep-dive
We currently parse PDB symbols (function names, line numbers). The TPI stream (type information) is much richer.

- **t273** TPI stream walker: LF_STRUCTURE, LF_CLASS, LF_UNION, LF_ENUM, LF_FIELDLIST, LF_MEMBER.
- **t274** IPI stream (Item Pool): per-function type usage, BuildInfo, FuncId.
- **t275** Cross-DLL type unification: when two DLLs declare the same struct, dedupe by IPI hash.
- **t276** PE COFF debug type recovery: __cdecl/__stdcall/__fastcall/__thiscall annotation from PDB calling-convention metadata.
- **t277** Constant propagation: PDB constant pool → embed values in printer.
- **t278** Inlinee site map: render `_inlined_<name>(...)` for PGO-inlined call sites.

### Wave 34 — DWARF v5 / split-DWARF / DWP
- **t279** DWARF v5 .debug_loclists, .debug_rnglists.
- **t280** Split-DWARF: read .dwo / .dwp index, follow DW_AT_GNU_dwo_id.
- **t281** DWARF expressions: full DW_OP_* evaluator (we have a tiny subset).
- **t282** DW_TAG_template_type_parameter: surface C++ template arguments in declarations.
- **t283** DWARF macro information (.debug_macro): inline `#define` tokens at use sites.

### Wave 35 — Itanium / MSVC C++ ABI advanced
- **t284** RTTI hierarchy multi-inheritance (vbtable + vtable).
- **t285** Lambda capture pack: `[&x, this](){...}` with capture-by-reference inference.
- **t286** Coroutine frame recovery: `co_await` / `co_yield` via promise-type pattern.
- **t287** `std::function` recovery: small-buffer-optimization unwrapping.
- **t288** `std::variant` / `std::optional` discrimination via tag-byte analysis.

### Wave 36 — Modern Swift / Objective-C
- **t289** Swift 5.7+ generics: parse generic-context-descriptor chains.
- **t290** Swift protocol witness tables: render `protocol P` conformance.
- **t291** Swift async / await: state-machine recovery → `func foo() async`.
- **t292** Objective-C 2.0 protocol-method-list: handle swizzled selectors via `_$s` mangling.
- **t293** Objective-C category method resolution: when categories add to UIKit classes, render in correct namespace.

### Wave 37 — Rust / Go runtime depth
- **t294** Rust `Result<T, E>` / `Option<T>` recovery: detect tagged-union patterns and render as `match` expressions.
- **t295** Rust async state machine: detect `Pin<&mut T>` poll loops, render as `async fn`.
- **t296** Rust trait-object vtable: detect `dyn Trait` fat-pointer, render trait name.
- **t297** Go generics post-1.18: parse `runtime.dictabi`, render `[T any]` parameters.
- **t298** Go iface-to-concrete devirtualization when the type is statically determinable.
- **t299** Go panic-recovery: detect `defer recover()` chains, render in source-style.

**Phase B milestone:** any Windows binary with a PDB renders ≥ 95% of the named structure of Hex-Rays output. Stripped libc-using binaries get FLIRT-named functions at IDA-equivalent recall.

---

## Phase C — Architecture Breadth (Waves 38-50)

**Goal:** Cover IDA's top-20 processors with full lifter, register file, calling conventions, and idiom recognition.

### Wave 38 — AArch64 deep
- **t300** SVE / SVE2 vector ops (128 / 256 / 512 / ... / 2048-bit predicated).
- **t301** SME (Scalable Matrix Extension) — outer-product instructions.
- **t302** AArch64 atomic load-acquire / store-release / LD*X /ST*X chains → C11 atomics rendering.
- **t303** Pointer authentication full key/data variants (we have I-key + XPAC; need D-key, B-key combinations).
- **t304** AArch64 BTI (Branch Target Indicator) flow integrity tracking.
- **t305** TME (Transactional Memory Extension) `tstart` / `tcommit`.

### Wave 39 — x86 deep
- **t306** AVX-512 full instruction set (~700 EVEX-encoded instructions, we ship 3).
- **t307** AMX (Advanced Matrix Extensions) — tile registers + `tdpbssd` etc.
- **t308** Intel APX (Advanced Performance Extensions) post-Granite Rapids.
- **t309** SHA / SHA-NI instructions → recognize as SHA1/SHA256 idiom.
- **t310** AES-NI → recognize AES rounds, surface as `aes_encrypt(...)` intrinsic.
- **t311** Intel CET (Control-Flow Enforcement) `endbr64` flow tracking.
- **t312** TSX `xbegin`/`xend` transaction recovery.
- **t313** PMC instructions (`rdpmc`) annotation.

### Wave 40 — ARM32 deep
- **t314** VFP (Vector Floating Point) v2/v3/v4.
- **t315** NEON Adv-SIMD (32-bit profile) — distinct from AArch64 NEON.
- **t316** Helium / MVE (M-profile Vector Extension) for Cortex-M.
- **t317** TrustZone secure-world transitions (`smc` / `svc` annotation).
- **t318** ARMv7 IT-block deep nesting (we handle simple, not 4-deep).

### Wave 41 — MIPS deep
- **t319** MIPS16e + microMIPS compressed encodings.
- **t320** MSA (MIPS SIMD Architecture) — 128-bit vector ops.
- **t321** MIPS FPU (Coprocessor 1) full single/double precision.
- **t322** MIPS DSP ASE.
- **t323** Loongson-extensions (Chinese MIPS-derivatives).

### Wave 42 — RISC-V depth
- **t324** RV32I / RV32E / RV64I / RV128I full base.
- **t325** M / A / F / D / Q / C / V extensions complete.
- **t326** Vector extension v1.0 (RVV) with all configuration / mask register modes.
- **t327** Bitmanip Zb* extensions.
- **t328** Crypto Zk* extensions (recognize as AES/SHA idioms).
- **t329** Hypervisor extension H.

### Wave 43 — PowerPC depth
- **t330** PowerPC 32 + 64 + LE/BE variants.
- **t331** AltiVec / VMX / VSX vector instructions.
- **t332** Power ISA 3.1 prefixed instructions (8-byte encoding).
- **t333** SPE (Signal Processing Engine).

### Wave 44 — SPARC + SuperH + M68k
- **t334** SPARC v8 / v9 lifter.
- **t335** SuperH SH-2 / SH-3 / SH-4 (Sega Dreamcast, modern automotive ECUs).
- **t336** Motorola 68000 / 68020 / ColdFire.

### Wave 45 — Microcontroller architectures
- **t337** AVR (Atmel — Arduino).
- **t338** PIC16 / PIC18 / PIC24 / dsPIC.
- **t339** STM8.
- **t340** MSP430.

### Wave 46 — Retro architectures (Ghidra has these; collectors care)
- **t341** 6502 / 65C02 / 65816 (NES, Apple II, SNES).
- **t342** Z80 / Z180 (Game Boy, ZX Spectrum, embedded).
- **t343** 8051 / 8052.

### Wave 47 — DSP / specialty
- **t344** Hexagon (Qualcomm DSP, ubiquitous in Android baseband).
- **t345** Xtensa (ESP32 / ESP8266 — huge IoT footprint).
- **t346** TriCore (Infineon automotive).
- **t347** RH850 / V850 (we have V850 stub — extend).
- **t348** Texas Instruments TMS320C6x / C28x.
- **t349** Analog Devices SHARC / Blackfin.

### Wave 48 — Modern niche
- **t350** Wasm 2.0 lifter (linear memory + tables + functions + globals + reference types).
- **t351** eBPF / cBPF lifter (Linux kernel filters, increasingly user-mode tracing).
- **t352** SBPF (Solana BPF — variant for blockchain).
- **t353** EVM (Ethereum Virtual Machine bytecode — Mythril-equivalent).
- **t354** WASI / Component Model unwrapping for Wasm components.

### Wave 49 — GPU shader / parallel
- **t355** AMDGPU (RDNA / GCN ISA).
- **t356** NVIDIA SASS (sm_70 onward).
- **t357** SPIR-V (Vulkan / OpenCL intermediate).
- **t358** Apple AGX (M-series GPU ISA — under-documented, research-grade).

### Wave 50 — Architecture polish
- **t359** Per-architecture calling-convention library completeness audit.
- **t360** Per-architecture register-file unit-test coverage to ≥95%.
- **t361** Cross-architecture switch-table recovery (currently x86_64-biased).
- **t362** Per-architecture FLIRT signature library (Wave 32 extends to all archs).

**Phase C milestone:** every binary IDA can open, unlace can lift. Output quality varies by arch but no "unsupported processor" errors.

---

## Phase D — Recovery Sophistication (Waves 51-58)

**Goal:** Surpass Ghidra on type and structure recovery; close to Hex-Rays on the long tail of "tricky" patterns.

### Wave 51 — Advanced type inference
- **t363** Retypd-style polymorphic type variables (subtype constraints with capability lattice).
- **t364** Pointer-arithmetic-aware struct inference (find struct boundaries via cross-function analysis).
- **t365** Union recovery: when two access paths to the same offset have incompatible types, emit `union { ... }`.
- **t366** Bitfield recovery: detect `(x >> N) & MASK` chains as bitfield reads, generate `struct { unsigned f : 3; }` declarations.
- **t367** Function-pointer-table recovery (vtables are a special case of this).

### Wave 52 — Cross-function analysis
- **t368** Whole-program type unification: same struct used across N functions gets a single canonical name.
- **t369** Whole-program calling-convention finalization: drop dead params using global call-graph.
- **t370** Inlining-aware recovery: when a small function is called once and inlined-by-the-compiler, fold it back at call sites.
- **t371** Function fingerprinting (Ghidra BSim equivalent) for cross-binary similarity.

### Wave 53 — Symbolic execution / SMT-driven recovery
- **t372** Z3 integration for path-sensitive analysis (Trail-of-Bits' Rellic-style).
- **t373** Boolean-expression simplification via Z3 on observed branch conditions.
- **t374** Loop-invariant inference via Daikon-style observation.
- **t375** Counterexample-guided refinement: when type inference produces ambiguous results, ask Z3 for a witness value that distinguishes.
- **t376** Constant-time-violation detector (for crypto code review).

### Wave 54 — Taint / dataflow security passes
- **t377** Taint propagation (Triton / angr-like).
- **t378** Source/sink registry: mark `recv()`, `read()`, `gets()` as sources; mark `system()`, `execve()`, indices as sinks.
- **t379** CWE-pattern detection (CWE-119 buffer overflow, CWE-416 UAF, CWE-787 OOB write).
- **t380** Symbolic memory model for heap-tracking.
- **t381** Inter-procedural slice extraction: "what code influences this variable?"

### Wave 55 — Protocol / format recovery
- **t382** Network packet structure recovery (parse → struct definition).
- **t383** File format header recovery (magic numbers + offset patterns → struct).
- **t384** Protobuf message recovery from generated code patterns.
- **t385** Custom serialization format recovery (Cap'n Proto, FlatBuffers, MsgPack patterns).

### Wave 56 — Compiler-specific recovery
- **t386** GCC `__attribute__((cleanup))` recovery.
- **t387** GCC `__builtin_expect` → `[[likely]]` / `[[unlikely]]` rendering.
- **t388** GCC `__builtin_unreachable` → `__assume(0)` / `unreachable()` semantics.
- **t389** MSVC `__try` / `__except` SEH (we have lowered HIR; need cleaner output).
- **t390** Clang nullability annotations from `_Nullable` / `_Nonnull` attributes.
- **t391** Profile-Guided Optimization layout: detect cold-path outlining and re-inline for readability.

### Wave 57 — Library-detection breadth
- **t392** Boost recognition: `boost::shared_ptr` / `boost::function` / `boost::variant`.
- **t393** Qt: `QObject` vtable, signal/slot tables, MOC-generated metadata.
- **t394** wxWidgets, GTK, MFC class hierarchies.
- **t395** OpenSSL / libsodium / mbedTLS API recognition.
- **t396** SQLite / LMDB embedded DB API recognition.
- **t397** Lua / Python / Ruby embedded interpreter API recognition.

### Wave 58 — Anti-analysis defeating
- **t398** Control-flow flattening defeat (popular obfuscation; Themida, VMProtect, OLLVM).
- **t399** Opaque-predicate elimination via Z3.
- **t400** Junk-code (dead-instruction insertion) removal.
- **t401** Self-modifying-code unwrap (when SMC writes are statically predictable).
- **t402** Packed-binary unpacking heuristics (UPX, ASPack, themida-stub).

**Phase D milestone:** unlace produces measurably better output than Ghidra on the recovery layer; matches Hex-Rays on 90% of typical commercial-software functions.

---

## Phase E — Format & Dynamic (Waves 59-65)

**Goal:** Cover every binary format IDA touches, plus integrate with debuggers.

### Wave 59 — Container formats
- **t403** Wasm (.wasm) — full Component Model + WASI.
- **t404** EVM bytecode + Solidity decompilation tier.
- **t405** SBPF (Solana) + EVM-equivalent for other chains.
- **t406** Java .class / .jar (Procyon-equivalent depth).
- **t407** Android .dex / .vdex / .oat / .art (the full ART runtime stack).
- **t408** .NET CLR PE + IL → C# (ILSpy-equivalent).
- **t409** Python .pyc (bytecode disassembler + decompiler).
- **t410** Lua bytecode disassembler.

### Wave 60 — Embedded / firmware formats
- **t411** Intel HEX / Motorola S-record / TI-TXT firmware loaders.
- **t412** ESP32 image format.
- **t413** STM32 binary blob.
- **t414** UEFI PE32+ firmware modules + DXE/PEI module recovery.
- **t415** Android boot image / vendor partition / dm-verity tree.
- **t416** iOS img4 / im4p / im4m firmware containers.
- **t417** Apple kernel cache (kc.fileset) parsing.

### Wave 61 — Dynamic analysis integration
- **t418** GDB MI protocol client (attach to gdbserver, read live state).
- **t419** LLDB Python API client.
- **t420** WinDbg DML protocol client.
- **t421** Frida bridge (live hook injection, observation feedback into static analysis).
- **t422** QEMU TCG plugin: collect coverage/taint data from QEMU runs, feed back into unlace.

### Wave 62 — Time-travel / record-replay
- **t423** rr (Mozilla record-replay) trace ingestion.
- **t424** Pernosco-style web UI (long-shot).
- **t425** WinDbg TTD trace (.run file) ingestion.

### Wave 63 — Patch diffing (BinDiff equivalent)
- **t426** Function-fingerprint-based binary diff (we partially have this in BSim work).
- **t427** Basic-block-level alignment within matched functions.
- **t428** Semantic diff: render side-by-side C output of pre/post-patch functions.
- **t429** CVE / patch-classification UI: "this binary contains the fix for CVE-2024-XXXX".
- **t430** N-day vuln correlation: given a patch diff, find all binaries containing the unpatched version.

### Wave 64 — Coverage-guided exploration
- **t431** Fuzzer integration (AFL++, libFuzzer, Honggfuzz): import coverage maps, surface uncovered branches.
- **t432** Symbolic-execution coverage extension: identify branches statically-reachable but not coverage-hit.
- **t433** Differential coverage: compare two binaries' coverage on the same input set.

### Wave 65 — Live-debugging-aware decompilation
- **t434** When attached to a live process, prefer concrete values over symbolic types.
- **t435** Stack-trace contextual decompilation: when looking at a crash dump, decompile the active call frames first.
- **t436** Exception-context recovery from minidumps.

**Phase E milestone:** unlace handles every binary format IDA Pro 9 supports, plus modern blockchain formats IDA doesn't.

---

## Phase F — Ecosystem (Waves 66-70)

**Goal:** Make unlace something a research/security team adopts as primary tooling.

### Wave 66 — Plugin SDK
- **t437** Stable Rust API (`unlace-plugin` crate) for third-party extensions.
- **t438** WASM-sandboxed plugin runtime for untrusted plugins.
- **t439** Python binding via PyO3 (most reverse engineers know Python).
- **t440** Lua binding for fast scripting.
- **t441** Plugin registry (cargo-style) with semver enforcement.
- **t442** Sample plugins: Yara-rule scanner, Ghidra-script importer, IDA-script importer.

### Wave 67 — Lumina-equivalent (cloud-shared annotations)
- **t443** Annotation server protocol (signed / authed).
- **t444** Per-function annotation lookup keyed on FLIRT signature + fuzzy-hash.
- **t445** Privacy-respecting client (opt-in per binary, never auto-send).
- **t446** Conflict resolution UI for divergent annotations.
- **t447** "Public DB" of annotations for OSS binaries (curated; high signal-to-noise).

### Wave 68 — editor integration and project workflow
The big honest gap is still analyst workflow, but bundled frontends are no
longer part of this workspace.

- **t448** LSP server: integrate unlace into VS Code / Helix / Neovim as a "disasm + decompile" backend.
- **t449** Graph export (CFG, call-graph) — support graphviz / elk / dagre consumers.
- **t450** Hex view data and cross-reference APIs for external clients.
- **t451** Persistent project file format (.unlace) with all annotations / renames / type definitions.
- **t452** Multi-user collaborative editing protocol (Y.js / Automerge-compatible backend).

### Wave 69 — Performance / scale
- **t455** Lazy lifting: on a 100MB binary, lift only functions the user navigates to.
- **t456** Persistent on-disk SSA cache (rerunning is free after first analysis).
- **t457** Parallel decompilation across functions (we have it across crates; not across functions).
- **t458** Memory-mapped binary access for very large dyld_shared_caches (currently we slurp).
- **t459** Benchmarks: target Hex-Rays-equivalent throughput within 2x.

### Wave 70 — Ecosystem polish
- **t460** Comprehensive man pages.
- **t461** Tutorial book ("Decompilation with unlace").
- **t462** Conference talk track (REcon, OffensiveCon, BlackHat).
- **t463** Public benchmarking suite (something like SPEC for decompilers).
- **t464** Contribution / governance docs.
- **t465** SBOM + reproducible build chain.
- **t466** Signed releases.
- **t467** Fuzzer harness for the whole pipeline (so unlace's own bugs surface continuously).
- **t468** Crash-corpus / known-broken-binary database.

---

## Architecture coverage scorecard

For each architecture, our target is "complete enough that a reverse engineer doesn't need to switch to IDA for that processor." Definition: lifter handles ≥99% of instructions in a corpus of 1000 binaries; calling conventions for all common ABIs; idiom recognition for libc + standard library on that arch; FLIRT signatures for at least one libc.

| Architecture | Current | Target | Gap |
|---|---|---|---|
| x86_64 | 70% | 100% | AVX-512, AMX, APX, full SIMD intrinsic registry |
| x86 (32-bit) | 65% | 100% | x87 deep, MMX, segment-relative addressing |
| AArch64 | 70% | 100% | SVE, SVE2, SME, full PAC variants |
| ARM A32/T32 | 50% | 100% | VFP, NEON-A32, MVE, TrustZone |
| MIPS | 25% | 100% | MIPS16e, microMIPS, MSA, FPU |
| PowerPC | 20% | 100% | AltiVec, VSX, prefixed insns, SPE |
| RISC-V | 30% | 100% | V extension, all Z* extensions, H extension |
| ARC | 10% | 80% | Most ARCv2/v3 ops |
| SPARC | 0% | 80% | All of v8/v9 |
| SuperH | 0% | 80% | SH-2/3/4 |
| M68k | 0% | 80% | 68000/020/ColdFire |
| AVR | 0% | 80% | All of AVR8 |
| PIC | 0% | 70% | PIC16/18 enough for hobbyist FW |
| MSP430 | 0% | 80% | All of MSP430X |
| 8051 | 0% | 70% | Standard MCS-51 |
| Hexagon | 0% | 80% | Qualcomm DSP — important for baseband |
| Xtensa | 0% | 90% | ESP32/ESP8266 huge IoT footprint |
| TriCore | 0% | 70% | Automotive |
| Wasm | 0% | 100% | Modern, fully specified, achievable |
| eBPF | 0% | 90% | Linux kernel + user tracing |
| EVM | 0% | 90% | Blockchain analysis |
| .NET CIL | 0% | 80% | Windows ecosystem |
| Java bytecode | 0% | 80% | Mobile / enterprise |
| Android dex/ART | 0% | 80% | Mobile reverse engineering |
| 6502/Z80 | 0% | 60% | Retro / collector tier |

---

## Format coverage scorecard

| Format | Current | Target | Gap |
|---|---|---|---|
| ELF | 80% | 100% | DT_GNU_HASH edge cases, .dynamic split-DWARF |
| PE/COFF | 75% | 100% | Authenticode validation, SafeSEH, modern CFG / CET |
| Mach-O | 80% | 100% | DSC v6, full slide-info v6, fairplay-encrypted segments |
| dyld_shared_cache | 70% | 100% | Object-file extraction perfect round-trip |
| DWARF v2/v3/v4 | 75% | 100% | Full DW_OP_*, .debug_loc edge cases |
| DWARF v5 | 0% | 100% | All of it |
| Split-DWARF | 0% | 100% | DWP/DWO files |
| PDB | 60% | 100% | Full TPI/IPI walk |
| dSYM | 50% | 100% | Apple-specific DWARF extensions |
| Wasm | 0% | 100% | New target |
| Java .class/.jar | 0% | 100% | New target |
| .NET PE/CLI | 0% | 100% | New target |
| Android dex/oat | 0% | 100% | New target |
| Mach-O kernel cache | 30% | 100% | Modern kc.fileset |
| Linux kernel image (vmlinux) | 30% | 100% | KALLSYMS, BTF integration |
| BTF (eBPF type format) | 0% | 100% | New target |
| Itanium PE | 0% | 60% | Legacy |
| OS/400 program objects | 0% | 0% | Out of scope (IDA doesn't either) |

---

## Big-ticket "research projects" that are not just engineering

These deserve their own teams. Listed for completeness; they're not on the wave timeline because each is years of work.

1. **ML-augmented decompilation** (DIRTY, jTrans, BinaryAI). Train models on (binary, source) pairs to suggest variable names, function purposes, even rough structure. Orthogonal to unlace's core; could be a sibling project.
2. **Formal verification of decompiler output** ("the decompiler emits C that, when compiled, produces the original binary"). Active research at Princeton / CMU.
3. **Bidirectional editing** ("user edits the decompiled C; unlace re-encodes the binary"). The Holy Grail. Maciej Bendkowski's work.
4. **Quantum / homomorphic-encryption binary analysis**. Far-future.

---

## Estimation — what "100%" actually costs

Honest engineer-month estimates (no parallelism speedup credit; each waves' work has cross-dependencies):

| Phase | Engineer-months (solo) | Engineer-months (team of 4) | Calendar months (this team) |
|---|---|---|---|
| A — Output quality | 8 | 3 | 1-2 |
| B — Type/symbol fluency | 16 | 6 | 2-3 |
| C — Architecture breadth | 36 | 12 | 4-6 |
| D — Recovery sophistication | 18 | 7 | 2-3 |
| E — Format & dynamic | 12 | 5 | 2 |
| F — Ecosystem | 24 | 10 | 4-6 |
| **Total** | **114** | **43** | **15-22 months** |

With sustained agent-augmented dispatch (the cadence we've been running, dozens of tests per wave, 4-5 waves per session), **6-12 calendar months is realistic for a single human + agent fleet.**

The honest "you'll never quite reach 100%" caveat: IDA Pro is a moving target. They ship updates every quarter. By the time we reach today's parity, they'll have shipped another year of features. Pragmatic completion criterion: **track within one major version of IDA**.

---

## Practical next steps

If we want to keep moving on this plan, here's the dispatch order I recommend (highest impact-to-effort ratio first):

1. **Wave 27 (goto elimination)** — biggest single output-quality multiplier; affects every function we render
2. **Wave 32 (FLIRT)** — biggest single named-binary recall improvement
3. **Wave 33 (PDB depth)** — Windows binary recall jump
4. **Wave 38 (AArch64 SVE)** — modern Apple Silicon coverage
5. **Wave 50 (architecture polish)** — fills the long tail without new lifters
6. Parallel: **Wave 59 (Wasm)** as a self-contained side project

After those six waves (~1-2 months at our cadence), we'd be at ~50% Hex-Rays parity — a genuine production-tier decompiler for our supported set.

After all 70 waves, we'd be at 95%+ parity. The remaining 5% is research-grade work and IDA's UI tooling.

---

*Last updated: post Wave 26, commit `1953a1d63`. Maintained alongside the parity branch.*
