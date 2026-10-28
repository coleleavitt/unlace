# Unlace Decompiler Roadmap

## Goal

Turn unlace into a **production-grade decompiler** that *exceeds* IDA Pro/Hex-Rays quality:
- recover more structure than IDA (fewer gotos, better loops)
- recover more types than IDA (deeper inference, not just debug info)
- produce more readable output (cleaner expressions, better naming)
- no "unsupported architecture" for common targets
- measurable, reproducible output quality

IDA/Hex-Rays is the baseline to beat, not the ceiling. The fixture parity metric measures how much *better* unlace resolves structure and types compared to IDA's output on the same binary.

This roadmap assumes the primary users are **reverse engineers, security researchers, and automated analysis pipelines**.

Unlace is a CLI and headless decompiler engine and library. It has no GUI,
TUI, or web UI, and none is planned.
The CLI-first adoption surfaces are scripting, plugins, persistent project state,
debugger/emulator/trace evidence, release artifacts, and corpus-scale
measurement. The preferred product order is CLI first, then SDK, then MCP.
Results go to stdout, files, and typed SDK data for other tools to consume.

## Definition of "Production-Grade"

A production-grade decompiler is:
- deterministic in output (same binary → same C)
- more readable than IDA without manual cleanup
- recovers types IDA misses
- architecture-complete for common targets
- fast enough for large binaries
- extensible via plugins and scripting
- honest about what it doesn't support

## Current Pain Points

### 1. Remaining quality gaps
- Goto and loop quality still needs corpus-scale measurement against the IDA
  dump, not only fixture counts.
- Switch recovery exists, but broad jump-table, sparse-switch, and
  branch-table patterns still need corpus proof.
- Basic IDA-style helper emission exists for byte macros, FS canary reads, and
  many SIMD intrinsics; the remaining work is long-tail producer coverage.
- Expression folding still needs stronger cross-statement temp folding,
  comparison simplification, memory-access simplification, and vector idiom
  lowering.

### 2. Type recovery depth
- PDB TPI lowering is wired; the remaining PDB gap is local-location breadth,
  defrange/IPI edge cases, and real-world corpus confidence.
- DWARF v5 loclists/rnglists and split-DWARF hooks exist; the remaining gap is
  full location-expression breadth and robust sidecar discovery.
- TIL/header/Objective-C parser depth, shifted pointers, tuples,
  variable-sized structs, and enum bitmasks remain incomplete.
- Struct/union inference needs stronger producer-side recovery, nested
  aggregate propagation, bitfield/gap handling, and cross-function type flow.

### 3. Architecture breadth
- x86/x86_64/AArch64 production quality
- ARM32/MIPS/RISC-V/PowerPC and many exotic lifters are beta or fixture-only.
- Fixture coverage is not enough to claim production support.
- Long-tail gaps include SVE/SME/MTE/CSSC, nanoMIPS, MIPS o64, ARM32
  hard-float, AltiVec/VSX depth, and full SIMD/FPU/ABI coverage.

### 4. CLI-first adoption gaps
- Debugger: Linux ptrace (incl. hardware + conditional breakpoints,
  fp-walk stack traces) and a GDB/RSP `gdb_stub` backend landed; the Windows
  DebugAPI backend is a gated scaffold without a live-API body, macOS has no
  backend at all, and watch expressions/coverage overlay remain open.
- Lumina-equivalent APIs and plugin SDK boundaries exist but need stable
  protocol behavior, examples, compatibility tests, and confidence propagation.
- `crates/unlace-mcp` runs unlace in-process over stdio with typed binary,
  function, IR, and xref tools; remaining work is `unlace://` resources,
  project/report tools, read-only policy tests, and MCP-client fixtures.
- Persistent `.unlace` project state exists (`unlace-session` with typed
  user-override facts and an `xtask project-roundtrip` proof); remaining work
  is merge/conflict handling and wiring every producer through it.

### 5. Measurement infrastructure
- Golden fixtures cover 15 functions
- Full IDA corpus comparison is not automated.
- Fixture gates are green but narrow.
- Quality regression detection needs corpus pattern counters, AST/line diffs,
  address-mapped comparisons, and trendable scorecards.

### 6. Adversarial binaries and assisted triage
- Packed and import-reconstructed PE files currently expose real loader gaps:
  nonstandard executable section names, UPX-family remnants, Scylla-style import
  sections, damaged import directories, and unpacked/dumped images need explicit
  detection and support tiers.
- Obfuscation support must cover packer identification, unpacked-image intake,
  import reconstruction evidence, control-flow flattening, opaque predicates,
  string decoding, and VM/protector fingerprints as first-class analysis facts.
- LLM-assisted reverse engineering is a product surface, not a replacement for
  the deterministic pipeline: models may propose packer IDs, names, summaries,
  and triage hypotheses, but unlace must record provenance and verify claims
  against loader, IR, debugger, emulator, or corpus evidence.

## Product Principles

1. **Determinism is non-negotiable** — same input must produce byte-identical output across runs.
2. **Measure before claiming** — every quality claim must have a runnable verification command.
3. **Honest about gaps** — emit `/* unsupported */` rather than silently drop semantics.
4. **Narrow before broad** — fix one architecture deeply before adding ten shallowly.
5. **Debug info first** — maximize quality when PDB/DWARF exists; stripped binaries are hard mode.
6. **Structure over string surgery** — prefer AST/IR transforms over regex on emitted text.
7. **Tests are documentation** — golden fixtures show expected behavior, not just pass/fail.
8. **Substrate is not support** — a crate or parser counts only when it is wired, measured, and documented at the correct support tier.
9. **Corpus evidence beats fixture comfort** — fixture success starts a claim; corpus-scale evidence earns it.
10. **AI proposes, evidence disposes** — LLM/agent analysis may accelerate RE, but deterministic facts, reproducible commands, and provenance decide what unlace trusts.

## Roadmap

---

## Phase A — Output Quality Leap

**Goal:** Produce C output that is *cleaner* than Hex-Rays for well-behaved functions.

### A.1 Goto Elimination
Current (measured 2026-07-01, `xtask goto-count`): 75 gotos on `medium.elf`,
75 on `stripped.elf`, 0 on all other fixtures. Target: <10.
This is the largest single output-quality gap on the board.

- Region-based structuring (Engel/Lerner algorithm)
- Aggressive tail duplication for shared exits
- Loop normalization (do-while → while)
- Continue/break detection
- Label fallthrough collapse

Acceptance:
- `xtask goto-count` reports <10 gotos for `medium.elf`
- No semantic regression in `xtask semantic-report`

### A.2 Switch Recovery
- Compressed jump tables (8/16-bit index)
- Branch-table-of-branches (LLVM dense)
- Binary-search switch (sparse cases)
- Hash-switch on string keys
- Range tests collapsed to `case 1...10:`

Acceptance:
- Switch fixtures pass exact-line golden match
- No false-positive switch detection

### A.3 Expression Optimization
- Bit-field consolidation
- Comparison strengthening (`(x^y)==0` → `x==y`)
- Sign-extension elimination
- De Morgan canonicalization
- Boolean simplification (Espresso-lite)

Acceptance:
- Expression folding unit tests pass
- No precision loss in `xtask type-recovery-report`

### A.4 IDA-isms
- `LOBYTE`/`HIWORD`/`BYTE2` macros
- `__OFADD__`/`__OFSUB__` overflow macros
- `MEMORY[addr]` for unanalyzable globals
- `__usercall`/`__userpurge` annotations
- Volatile MMIO annotations

Acceptance:
- IDA macro emission in golden fixtures
- Style parity score ≥90%

---

## Phase B — Type & Symbol Fluency

**Goal:** Exceed Hex-Rays type recovery on binaries with debug info, and match it on stripped binaries via signatures.

### B.1 FLIRT Signature Matching
- SIG file format parser (v5/v6/v8/v10)
- Pattern-matching engine with CRC
- Function-prologue alignment
- Reference-name resolution
- Ship signatures for glibc, musl, MSVCRT, mingw

Status 2026-07-01: `unlace-flirt` ships x86_64 bundles for glibc 2.34/2.39,
musl 1.2.x, MSVCRT 14.x, mingw-w64, dietlibc, uclibc-ng, golang runtime, and
rust-libcore. Missing: AArch64 bundles (B.1.1, agent bailed — self-implement)
and a measured FLIRT recall number vs IDA on the corpus.

Acceptance:
- Stripped libc binary gets named functions
- FLIRT recall ≥95% vs IDA on test corpus

### B.2 PDB Deep Dive
- TPI stream: LF_STRUCTURE, LF_CLASS, LF_UNION, LF_ENUM
- IPI stream: per-function type usage
- Cross-DLL type unification
- Calling convention metadata
- Inlinee site map

Acceptance:
- Windows PDB binary renders 95%+ of IDA's named structures
- Type precision ≥95%

### B.3 DWARF v5 Complete
- .debug_loclists, .debug_rnglists
- Split-DWARF: .dwo/.dwp index
- Full DW_OP expression evaluator
- Template type parameters
- Macro information

Acceptance:
- Linux debug binary matches IDA type output
- Split-DWARF fixtures pass

### B.4 Language Runtime Depth
- C++ RTTI/vtable multi-inheritance
- Rust Result/Option recovery
- Swift protocol witness tables
- Go interface devirtualization

Acceptance:
- C++/Rust/Swift/Go fixtures pass semantic tests

---

## Phase C — Architecture Breadth

**Goal:** Support IDA's top-20 processors with full lifter and calling conventions.

### C.1 x86 Complete
- AVX-512 full instruction set
- AMX tile registers
- Intel CET flow tracking
- AES-NI/SHA-NI idiom recognition

### C.2 AArch64 Complete
- SVE/SVE2 vector ops
- SME scalable matrix
- Pointer authentication all keys
- MTE memory tagging

### C.3 ARM32 Complete
- VFP v2/v3/v4
- NEON Adv-SIMD
- Helium/MVE for Cortex-M
- IT-block deep nesting

### C.4 RISC-V Complete
- RV32/RV64/RV128 base
- M/A/F/D/Q/C/V extensions
- Bitmanip Zb* extensions
- Crypto Zk* extensions

### C.5 Other Architectures
- MIPS: DSP, MSA, microMIPS
- PowerPC: AltiVec/VMX/VSX
- SPARC, SuperH, M68k
- Xtensa, Hexagon, TriCore

Status 2026-07-01: breadth subsets landed as `Callother`-tagged lifts —
x86 AVX-512 EVEX + AMX, AArch64 MTE/SVE/SME, ARM32 VFP/NEON, RISC-V
Zbb/RVV/Zk crypto, PPC AltiVec, MIPS MSA, m68k 68881 FPU, SuperH SH-4 FPU.
38/39 named archs resolve to a real facade lifter (`xtask arch-scorecard`).
Remaining: real semantics beyond `Callother` for those subsets, per-arch
calling-convention tests, and corpus-scale decode coverage proof.

Acceptance:
- Per-arch calling convention tests pass
- Lifter coverage ≥95% on corpus

---

## Phase D — Recovery Sophistication

**Goal:** Surpass Ghidra on type/structure recovery.

### D.1 Advanced Type Inference
- Retypd-style polymorphic type variables
- Pointer-arithmetic struct inference
- Union recovery for overlapping accesses
- Bitfield recovery
- Function pointer tables

### D.2 Cross-Function Analysis
- Whole-program type unification
- Dead parameter elimination
- Inlining-aware recovery
- Function fingerprinting (BSim-style)

### D.3 Symbolic Execution
- Z3 integration for path sensitivity
- Boolean expression simplification
- Loop invariant inference
- Constant-time violation detection

Status 2026-07-01: unstarted. The only D-phase ticket with zero code.

### D.4 Security Analysis
- Taint propagation
- Source/sink registry
- CWE pattern detection
- Inter-procedural slicing

### D.5 Microcode/SSA Internals
- SSA/IR verifier after each pass (landed 2026-07-01: `unlace-ir/src/verify.rs`
  checks op/type bindings, side maps, block/varnode metadata, lvars, SSA
  dominance of uses, and stack accesses)
- GVN (landed: `unlace-passes/src/gvn.rs`, dominance-safe)
- Maturity-level exposure (MMAT_ZERO → FINAL analog) for scripting/debugging
- Number-origins tracking (where did this constant come from?)

Acceptance:
- Recovery quality metrics exceed Ghidra baseline
- Security analysis fixtures pass
- Verifier runs clean across the corpus in a pass-pipeline debug mode

---

## Phase E — Format & Dynamic

**Goal:** Handle every binary format IDA supports, plus modern targets.

### E.1 Container Formats
- Wasm 2.0 + Component Model
- EVM/Solidity bytecode
- Java .class/.jar
- Android DEX/OAT/ART
- .NET CLR PE + IL
- Python .pyc

### E.2 Embedded/Firmware
- Intel HEX, Motorola S-record
- ESP32, STM32 blobs
- UEFI PE32+ modules
- iOS img4/im4p containers
- Apple kernel cache

### E.3 Dynamic Integration
- GDB MI protocol client
- LLDB Python API
- WinDbg DML protocol
- Frida bridge
- QEMU TCG plugin

### E.4 Packers, Protectors, and Obfuscators
- Packer fingerprinting and support tiers for UPX, Scylla-rebuilt dumps,
  MPRESS, ASPack, Themida, VMProtect, Enigma, and common Go/Qt bundle shapes.
- PE loader recovery for nonstandard executable section names, RWX unpacked
  sections, destroyed/rebuilt import tables, TLS callbacks, `.pdata`-discovered
  functions, and dumped images whose entrypoint no longer lives in `.text`.
- Loader normalization for dumped/rebuilt binaries should be explicit: select the
  entrypoint-owning executable section even when it is not named `.text`, record
  whether the file was normalized, and preserve original-vs-recovered section
  provenance for downstream reports.
- Windows x64 function discovery must scale beyond symbol tables: `.pdata` /
  `.xdata`, TLS callbacks, import thunks, Go pclntab/moduledata, and entrypoint
  callgraph seeding should feed one deterministic function-index surface.
- Optional unpacking/reconstruction workflows: external tool handoff, dynamic
  unpack capture through debugger/emulator traces, rebuilt IAT ingestion, and
  provenance labels that distinguish original bytes from recovered bytes.
- Obfuscation-analysis passes for opaque predicates, control-flow flattening,
  string/resource decoding, API hashing, anti-debug probes, and VM-dispatch
  recognition. These feed structured facts and quality counters before any C
  output rewrite is attempted.
- Initial load should emit a structured packer/obfuscator diagnostic handoff:
  JSON plus human-readable Markdown with section/import/TLS/function-index
  evidence, ranked hypotheses, unsupported recovery steps, suggested next
  commands, and an LLM-ready goal prompt. This is the artifact a user can hand to
  Codex or another analyst/agent before attempting unpacking or deobfuscation.

Status 2026-07-01: `unlace identify-packer` CLI + diagnostic handoff
(unsupported steps, suggested commands, LLM-ready prompt), expanded packer
roster (UPX/VMProtect/PEtite/FSG/NsPack/MEW), anti-debug probe detector,
VM-dispatch recognizer, string-decode-stub recognizer (with key recovery),
and API-hash resolver (ROR13/DJB2/CRC32, 39-name roster) all landed as
passes/loader facts. Remaining: unpack/reconstruction workflows, CFG
flattening/opaque-predicate analysis, and packed-PE corpus fixtures.

Acceptance:
- `unlace identify-packer <binary>` reports a ranked classifier result with
  evidence: section names, entropy, import anomalies, TLS/entrypoint facts, and
  known tool signatures.
- Packed/dumped PE fixtures are either decompiled through a documented recovered
  image path or produce an explicit unsupported marker explaining which recovery
  step is missing.
- Loader quality reports include packer/import-reconstruction counters.
- A large dumped PE can be analyzed incrementally: list functions, decompile a
  selected address such as IDA's `main`, stream AST/HIR/quality output, resume
  failed functions, and report progress without requiring a whole-binary pass.
- The initial-load diagnostic can be produced without a provider key; opt-in LLM
  mode consumes that diagnostic and proposes a plan, while the deterministic
  loader still owns the evidence and unsupported markers.

### E.5 Time-Travel Debugging
- rr trace ingestion
- WinDbg TTD traces

Status 2026-07-01 (E.1/E.2/E.3/E.5): loader-side substrate files exist for
nearly every listed format — DEX/OAT/ART/VDEX, .NET CLR, Java class, Python
pyc, Wasm component, EVM/Solidity, Lua bytecode, Intel HEX, ESP32/STM32
blobs, UEFI modules, img4, Apple kernelcache, GDB MI, LLDB/Frida bridges,
rr traces, WinDbg TTD, minidump, XCOFF. Per principle 8 ("substrate is not
support") none of these count until they appear as measured rows in
`xtask loader-scorecard` with explicit support tiers. Motorola S-record has
no parser yet.

Acceptance:
- Format loaders pass corpus tests
- Debugger integration fixtures pass
- Every E-phase format has a loader-scorecard row with an honest support tier

---

## Phase F — Ecosystem

**Goal:** Make unlace adoptable as primary tooling.

### F.1 Unlace SDK
- Stable SDK facade for project/session facts, analysis reads, decompiler
  objects, diagnostics, and validated mutations
- Rust plugin API through `unlace-plugin`
- WASM-sandboxed runtime with explicit capabilities
- Python bindings over the same SDK
- Plugin loading via manifest, hot-reload during development, and a versioned
  plugin registry
- Loader, processor/lifter, debugger, and trace extension traits after the core
  fact model is stable
- SDK compatibility matrix grounded in `docs/sdk.md` and the local IDA SDK 9.3
  CodeGraph at `/home/cole/Downloads/Software/IDAPro/idasdk93`

### F.2 Lumina-Equivalent
- Annotation server protocol
- Per-function lookup by signature
- Privacy-respecting client
- Public DB for OSS binaries

### F.3 Scripting and Automation Surface

Automation runs on unlace's own surfaces:

- HIR/IR visitor hooks for deobfuscators
- scriptable batch decompilation with stable JSON/SARIF outputs

### F.4 MCP Server

Status 2026-10-28: `crates/unlace-mcp` serves six read-only tools over stdio
(`binary_info`, `list_functions`, `decompile_function`, `ir_dump_function`,
`xrefs_from`, `xrefs_to`) by running the `unlace-cli` library in-process and
returning typed JSON. Remaining: `unlace://` resources, project/type/diagnostic
and report tools, read-only policy tests, and pagination for large artifacts.

`unlace-mcp` is the preferred agent/automation surface after the CLI and SDK.
It should follow `docs/mcp.md` and use the local Rust MCP SDK reference at
`/home/cole/RustProjects/forks/rust-sdk` today. If the rmcp checkout is moved
or mirrored to `/home/cole/RustProjects/active/rust-sdk`, that active checkout
should become the reference path.

- crate target: `crates/unlace-mcp`
- built on `rmcp`/`rmcp-macros`
- stdio transport first for CLI/agent subprocess use
- optional streamable HTTP later
- read-only default policy
- tools for project open, function navigation, xrefs, decompile, pseudocode,
  types, diagnostics, quality reports, lifter coverage, and IDA-corpus reports
- resources under stable `unlace://` URIs for project summaries, pseudocode,
  diagnostics, and report artifacts
- mutating tools only when explicitly enabled, routed through SDK validated
  facts with provenance

Acceptance:
- MCP client can launch `unlace-mcp` over stdio, list tools, open a fixture,
  list functions, and decompile one function.
- Read-only mode cannot mutate project state.
- Report tools return resource links or paginated output for large artifacts.

### F.5 IDA/Hex-Rays Reference Dump Workflow

The IDA/Hex-Rays corpus is not just historical evidence; it is an active
comparison lane for hard binaries.

- Support two dump modes: `idat`/`idat64` headless batch scripts for isolated
  long-running jobs, and idalib Python scripts for resumable per-function dumps.
- Keep `decompile_many()` for fast all-or-nothing combined output, but use the
  per-function idalib loop when a database is huge or likely to hang because it
  writes partial results safely.
- Normalize outputs into one corpus shape: per-function `.c`, address/name
  manifest, failed-function list, log, and source database metadata.
- Record direct comparison facts in unlace reports: IDA function count, functions
  dumped, decompile failures, skipped functions, and representative entry/main
  addresses.

Acceptance:
- A saved `.i64` can be dumped to a resumable per-function C corpus with one
  command and a manifest.
- The same corpus can be used by IDA reference comparison, codegraph indexing,
  and unlace quality/roadmap evidence.
- Timeouts preserve partial output and a restart resumes without overwriting
  existing files.

### F.6 AI-Assisted Reverse Engineering

LLM/agent assistance is an opt-in analysis lane over the SDK/MCP surfaces, not a
hidden dependency in the decompiler core.

- Provider configuration is read from user environment/configuration at runtime;
  secrets are never committed, serialized into `.unlace`, or printed in reports.
- First-class tasks: packer/protector identification, function naming proposals,
  string/API-hash triage, malware capability summaries, diff explanations, and
  hypothesis generation for failed decompilations.
- Every model result carries provenance: prompt inputs, model/provider label,
  confidence, source addresses, and the deterministic evidence that supports or
  rejects the suggestion.
- LLM output is advisory until a deterministic verifier accepts it. Names,
  comments, and annotations enter the project fact store as proposed facts, not
  silently trusted recovered facts.
- The standard LLM handoff is a structured diagnostic bundle, not ad-hoc chat:
  goals, known facts, evidence tables, safe/unsafe actions, reproduction
  commands, and explicit “do not execute sample” constraints when appropriate.

Acceptance:
- An `unlace ai identify-packer` or equivalent MCP tool can analyze a PE sample
  and return evidence-backed hypotheses without mutating the project.
- The same sample analyzed with AI disabled still produces deterministic loader
  and quality reports.
- Reports redact provider secrets and are reproducible from saved evidence.

### F.7 Performance
- Lazy lifting (on-demand)
- Persistent SSA cache
- Parallel function decompilation
- Memory-mapped large binaries
- Progress reporting and resumable output for huge binaries: per-function status,
  failures, retries, elapsed time, rate, and AST/HIR/quality streaming.

### F.8 Release Engineering
- Signed releases
- SBOM publishing
- Reproducible builds
- Fuzzer harness
- Benchmark suite

### F.9 Headless Product Surface

Unlace ships as a CLI and a Rust library. Interactive views (graph, hex,
pseudocode panes, minimaps) are out of scope. External tools consume unlace
through CLI output, the SDK, and data exports such as GraphViz dot.

Acceptance:
- Unlace SDK documented with examples
- `unlace-mcp` roadmap and stdio tool contract documented
- CI produces signed artifacts

### F.10 Export & Interop (new 2026-07-01)

Absorbed from `docs/missing-from-roadmap.md` Tier 3 — previously absent here:

- HTML pseudocode export with hyperlinked xrefs
- BinDiff-style binary diffing (pair functions across two binaries)
- Type-library export (portable `.til`-equivalent)
- Coverage overlay export (dynamic hits annotated onto decompiler output;
  pairs with G.4)

Acceptance:
- `unlace export html <binary>` produces navigable output for a fixture
- A diff of two fixture builds buckets functions into same/changed/new

---

## Phase G — Debugger

**Goal:** Enable live debugging alongside static analysis.

### G.1 Local Debugger
- Linux x86_64/ARM64 via ptrace
- Windows x86/x64 via Debug API
- macOS Intel/ARM64 via mach task ports

### G.2 Remote Debugger
- GDB MI protocol client
- Remote debug server (IDA-compatible protocol)
- GDB stub client for embedded targets

### G.3 Debugger Features
- Software/hardware breakpoints
- Conditional breakpoints with expression eval
- Watch expressions
- Register dump with type-aware formatting
- Call stack with unwind info
- Memory dump with type overlay

### G.4 Advanced
- Bochs emulator integration (malware safe-analysis)
- rr trace ingestion (time-travel debugging)
- Coverage overlay (run + show hit blocks)

Status 2026-07-01: Linux ptrace backend has sw/hw breakpoints (DR0–DR3),
conditional-breakpoint expression eval, and fp-walk stack traces; `gdb_stub`
TCP RSP backend landed (mem/bp/cont/step/regs/stack, amd64 g-packet).
Missing entirely: macOS mach-ports backend (zero code), live Windows
DebugAPI body (scaffold only, ops gated), watch expressions, Bochs
integration, rr/TTD ingestion beyond loader-side trace parsing, and the
coverage overlay.

Acceptance:
- Can debug local Linux x86_64 binary with breakpoints
- Remote debug works with IDA remote stub
- Coverage data is exported and can annotate decompiler output

---

## Phase H — Dropped

IDAPython compatibility was removed on 2026-10-28. Unlace is its own
examiner: automation goes through the Rust library, the CLI, and the MCP
server (F.4), not through a re-implementation of IDA's scripting API. The
letter stays unused so existing phase references remain stable. Generic
plugin manifest, hot-reload, and registry work now lives under F.1.

---

## Phase I — User-Guided Analysis

**Goal:** Let users guide decompilation with typed `.unlace` project facts set
from the CLI, SDK, or scripts.

### I.1 Variable Control
- Force variable type
- Split variable (one storage → multiple vars)
- Map variables (multiple vars → one)
- Rename with propagation

### I.2 Call Control
- Force call type (specify signature)
- Set callee address (for indirect calls)
- Inline callee body
- Treat function as opaque call

### I.3 Microcode Control
- Inject assertion ("at this point, eax=0")
- Delete microcode instruction
- Forbid propagation per-variable
- Forbid propagation per-statement
- Skippable instructions (ignore specific insn)

### I.4 Pattern Control
- Manual switch idiom definition
- User-defined calling conventions
- Custom type mappings

Status 2026-07-01: I.1/I.2 (force var type/call) and I.3 (microcode
assert/delete/forbid-propagation) exist as typed `.unlace` session facts with
round-trip tests. I.4 pattern control (manual switch idiom, user calling
conventions, custom type mappings) has zero code. Remaining for I.1–I.3:
end-to-end proof that a stored fact changes decompiler output.

Acceptance:
- Can force variable type and see output change
- Can inject assertion and see propagation effect
- Can define custom switch pattern

---

## Phase J — Corpus Evidence & Parity Automation

**Goal:** Make the IDA dump and other reference corpora executable roadmap
truth, not one-off research notes.

### J.1 IDA Corpus Scoreboard
- Pattern counters for gotos, loops, switches, helper macros, casts,
  calling conventions, intrinsics, vtables, EH, stack locals, and xrefs
- Per-function output quality buckets with stable identifiers
- Trend reports checked into `target/` artifacts, not hand-maintained prose
- Support for the indexed `research/decompiled-references/ida/` corpus

### J.2 Address-Mapped Output Comparison
- Align unlace functions to IDA reference functions when addresses survive
- AST/line-shape diffs for comparable functions
- Separate "better than IDA", "equivalent", "worse", and "not comparable"
  buckets
- Diff filters for harmless naming/style differences

### J.3 Whole-Pipeline Quality Gates
- Corpus smoke gate for every production architecture
- Architecture scorecards with decode, lift, ABI, HIR, and final-C rows
- Loader scorecards for ELF, PE, Mach-O, dyld cache, firmware, and managed
  formats
- Explicit "fixture-only" and "beta" blockers before support-tier promotion

Status 2026-07-01: `xtask unified-parity` (single-command aggregate),
`xtask address-diff` (J.2, better/equiv/worse buckets over the 150-file
corpus), `xtask loader-scorecard`, `xtask arch-scorecard`, and
`xtask goto-count` all exist. Remaining: IDA-pattern counters at 320k-function
corpus scale wired into the gate, trend artifacts, and support-tier promotion
blockers driven by scorecard rows.

Acceptance:
- A single command emits a CLI-first parity report for the IDA corpus
- Roadmap claims link to generated evidence, not stale session notes
- `docs/status.md` can be refreshed from the same counters

---

## Phase K — Platform Interop & Release Maturity

**Goal:** Make unlace dependable as a library, CLI, and automation component.

### K.1 Stable Project State
- Persistent `.unlace` project format
- Rename/comment/type/annotation round-trip
- Manual overrides, script edits, Lumina facts, and debugger trace facts share
  one typed fact store
- Deterministic merge/conflict handling for imported annotations

### K.2 Library and Plugin Contracts
- Stable Rust SDK for loaders, lifters, passes, output, debugger/trace import,
  and project facts
- WASM plugin sandbox for untrusted plugins
- Python bindings over stable concepts, not private implementation details
- Versioned compatibility policy for plugins and scripts
- Generated SDK support matrix for the Rust, Python, WASM, and MCP surfaces

### K.3 Release and Supply Chain
- Reproducible release artifacts
- Signed binaries
- SBOM publishing
- Public performance benchmarks
- Crash/fuzz corpus minimization and publication policy

Acceptance:
- A released binary can load, analyze, save, reload, and script a project
  without losing facts
- Plugins have compatibility tests across at least two releases
- Release artifacts are signed and reproducible

---

## Timeline Estimate

| Phase | Duration | Cumulative |
|-------|----------|------------|
| A — Output Quality | 1-2 months | 2 months |
| B — Type/Symbol | 2-3 months | 5 months |
| C — Architecture | 3-5 months | 10 months |
| D — Recovery | 2-3 months | 13 months |
| E — Format/Dynamic | 1-2 months | 15 months |
| F — Ecosystem | 1-2 months | 17 months |
| G — Debugger | 2-3 months | 20 months |
| I — User-Guided Analysis | 1-2 months | 22 months |
| J — Corpus Evidence | 1-2 months | 24 months |
| K — Platform/Release | 1-2 months | 26 months |
| Packers/Obfuscation | 2-4 months | integrate with E/F/J |
| AI-assisted RE | 1-2 months | integrate after SDK/MCP |
| MCP — CLI Agent Surface | 1 month | integrate after SDK core |

With sustained agent-assisted development, the critical CLI-first adoption path is
shorter than the full parity path: CLI, SDK, MCP, xrefs, persistent
project state, basic debugger breadth, and corpus evidence should land before
long-tail architecture or release polish.
There is no UI track.

---

## Current Metrics (2026-07-01)

These metrics measure actual decompilation quality, not similarity to IDA.

| Metric | Current | Target | What It Proves |
|--------|---------|--------|----------------|
| Semantic Pass | 34/34 | 50+ | Decompiled C is *correct* (compiles, runs, same behavior) |
| Type Recall | 100% | 100% | No missed facts from debug info |
| Type Precision | 93% | 98%+ | Emitted types are accurate, not garbage |
| Golden Exact-Pass | 15 | 50+ | No unintended output regressions |
| Stylistic Score | 83% | 95%+ | Structural features present (loops, switches, etc.) |
| Production Archs | 3 | 20+ | x86/x86_64/AArch64 fully supported |
| Registered Lifters | 38/39 | 39/39 | Facade resolves a real lifter (breadth, not production) |
| Gotos on `medium.elf` | 75 | <10 | Structuring quality (`xtask goto-count`) |

**Note on the 83% stylistic score:** This measures "structural feature presence" — whether the output has loops, conditionals, proper declarations, etc. It does NOT measure "similarity to IDA." A function with 0 gotos and clean variable names scores high; a function with raw stack offsets and gotos scores low. IDA is not part of this measurement.

### Where Unlace Already Exceeds IDA

- **Deterministic output** — IDA varies between runs; unlace is byte-identical
- **Better type inference** — recovers types IDA misses on some optimized code
- **Cleaner expression folding** — fewer redundant casts and temporaries
- **Measurable everything** — every quality claim has a `cargo xtask` command

---

## IDA Corpus Analysis (320k functions indexed)

Pattern frequency from `research/decompiled-references/ida/` — what IDA actually emits:

| Pattern | IDA Count | Unlace Status |
|---------|-----------|---------------|
| `_QWORD/_DWORD/_WORD/_BYTE` casts | 3.7M | ✅ Emitting |
| `__int64` type | 3.4M | ✅ Emitting |
| `__fastcall` convention | 443k | ✅ Emitting |
| `while` loops | 278k | ✅ Emitting |
| `break` statements | 203k | ✅ Emitting |
| `do-while` loops | 123k | ✅ Emitting |
| `LOBYTE/HIBYTE/HIDWORD` macros | 111k | 🟡 Partial (basic printer paths exist; producer coverage still needs corpus proof) |
| `__readfsqword/__readgsqword` | 76k | 🟡 Partial (`__readfsqword(0x28u)` path exists; broader TLS variants need coverage) |
| `goto LABEL_*` | 771k | ⚠️ Active reduction target |
| `for` loops | 40k | 🟡 Partial (`for` recovery exists) |
| `switch` statements | 16k | ✅ Emitting |
| `continue` statements | 13k | ✅ Emitting |
| `vtable/vfptr` references | 9k | 🟡 Partial |
| `ternary` expressions | 8k | ✅ Emitting (`CExpr::Ternary`) |
| `__PAIR/__ROL/__ROR` intrinsics | 7k | 🟡 Partial |
| `__usercall` conventions | 2k | 🟡 Tests exist, not fully wired |
| `COERCE_*` macros | 828 | ❌ Not emitting |

### Key Gaps to Close

1. **Goto reduction** — IDA emits 771k gotos across 320k functions (2.4/function average). Unlace needs to match or beat this.

2. **Helper macro producer coverage** — `LOBYTE`/`HIBYTE`/`HIDWORD` appear
   111k times. Basic output support exists; the gap is recognizing every
   producer idiom and proving it on the 320k-function corpus.

3. **FS/GS segment intrinsic breadth** — `__readfsqword(0x28u)` (stack
   canary) appears 76k times. The common path exists; the gap is broader TLS,
   GS, width, and target-ABI coverage.

4. **For-loop recovery** — IDA emits 40k `for` loops vs 278k `while` loops. Many `while` loops with init+step should become `for`.

5. **Rotate/pair/coerce intrinsics** — `__PAIR64`, `__ROL4__`, `__ROR8__`,
   `_byteswap*`, and `COERCE_*` are needed for 64-bit ops on 32-bit, rotate
   idioms, endian helpers, and float/int reinterpretation.

## Verification Commands

```bash
# Full quality axis report (`--quick`: golden triage + stylistic score)
cargo xtask gate

# Individual metrics
cargo run -p xtask -- golden-triage
cargo run -p xtask -- semantic-report
cargo run -p xtask -- type-recovery-report
```
