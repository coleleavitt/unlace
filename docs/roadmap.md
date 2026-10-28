# Long-Term Parity Roadmap

This file is the durable *direction* for unlace — what we want the project to
become, independent of any particular implementation slice. Day-to-day work is
tracked in the per-batch handoffs under `docs/handoffs/`, with the operational
backlog in `plan.md`. Status snapshots live in `docs/status.md`.

The four bands below are intentionally coarse. Their order is *priority*, not
the schedule.

This is a CLI-first roadmap. Front-end productization can be planned elsewhere
only if explicitly revived; this file tracks the pieces that make unlace viable as a
decompiler engine, CLI, library, scripting target, debugger/emulator evidence
consumer, and automation component. The preferred product order is CLI, SDK,
MCP, then optional frontends only if explicitly revived.

## Band 1 — output correctness

Everything that makes the C output usable for reverse engineers, before any
breadth is added:

- Frame and stack-variable provenance survives into final C (Batch 17).
- Lvar allocation and naming are explainable from data, not after-the-fact text
  cleanup (Batch 18).
- The CTree/printer covers every supported expression and statement node with
  precedence-aware rendering, no string-surgery rewrites (Batch 19).
- Recursive type recovery for nested structs, arrays, unions, bitfields, and
  function pointers, with DWARF/PDB/FLIRT sources fully wired (Batch 20).
- Switch/loop/EH structuring that handles the common patterns without
  arbitrary gotos (Batch 21).
- IDA-style output helper breadth from semantic producers, not late text
  rewrites: byte/word/dword macros, FS/GS intrinsics, pair/rotate/byteswap
  helpers, SIMD intrinsics, `COERCE_*`, nonstandard calling convention
  annotations, and source-location/provenance comments.
- Corpus-scale output evidence against `research/decompiled-references/ida/`:
  goto/loop/switch/helper/cast/type/xref counters, address-mapped diffs where
  possible, and separate buckets for better/equivalent/worse/not-comparable.

## Band 2 — architecture and loader breadth

Once the production architectures are honest about quality, expand:

- Scorecard-driven architecture support (Batch 22).
- ELF/PE/Mach-O depth — relocations, PLT/GOT, IFUNC, TLS, chained fixups, dyld
  shared cache extraction, Authenticode/CFG/CET, SEH `.pdata`/`.xdata`,
  Android boot/vendor/dex/oat/art (Batch 23).
- Firmware/container formats (Intel HEX, S-record, ESP32, STM32, UEFI, iOS IMG4).
- Managed/VM formats (Wasm/WASI/component, eBPF/BTF, EVM, Java, .NET CIL,
  Python `.pyc`, Lua bytecode).
- Variant and ABI breadth that IDA users actually hit: AArch64 SVE/SME/MTE/CSSC,
  ARM32 hard-float and MVE, nanoMIPS and MIPS o64, PowerPC AltiVec/VSX, RISC-V
  vector/crypto/bitmanip, and per-architecture calling-convention evidence.
- Loader edges that still block real corpora: dyld kernel-cache/fileset and
  subcache coverage, Authenticode SHA-2 verification, Java/Dex/Wasm main-path
  wiring, firmware ROM conventions, and debug-info sidecar discovery.
- Adversarial loader breadth: packer/protector identification, UPX-family and
  Scylla-rebuilt PE evidence, nonstandard executable section selection,
  destroyed/rebuilt imports, TLS callbacks, `.pdata`-discovered functions, and
  dumped-image provenance.
- Hard PE samples such as dumped Go/Qt binaries need one deterministic function
  index: entrypoint-owned executable section fallback, `.pdata` / `.xdata`, TLS
  callbacks, import thunks, Go pclntab/moduledata, and external dump manifests.

## Band 3 — interactive workflow

Decompilation has to be more than a one-shot batch tool, even without a bundled frontend:

- Persistent `.unlace` project format with rename/comment/type metadata
  surviving reanalysis (Batch 24).
- Manual decompiler facts: force/split/map variables, force call type, set
  indirect callee, inline or opaque callee decisions, manual switch patterns,
  custom calling conventions, and injected assertions.
- Unlace SDK boundaries from `docs/sdk.md`: stable Rust facade, Rust plugins,
  WASM sandbox, Python bindings, analyzer objects, typed
  project facts, and validated mutation APIs.
- `unlace-mcp` from `docs/mcp.md`: stdio MCP server running the pipeline
  in-process, read-only by default. Binary info, function listing,
  decompilation, IR dumps, and xrefs exist as typed tools; resources, prompts,
  types, diagnostics, quality reports, and corpus reports remain.
- IDA/Hex-Rays reference-dump workflows are an adoption/evidence surface: use
  `idat` for isolated headless jobs, idalib for resumable per-function dumps,
  and normalize both into manifest-backed corpora for codegraph and comparison.
- Opt-in Lumina-style shared annotations.
- Lumina, plugins, scripts, debugger traces, and manual overrides all write
  into one deterministic typed fact store.
- Frontend/editor productization is deferred. Do not route roadmap priority
  there while CLI, SDK, MCP, persistence, and corpus evidence are still
  incomplete.

## Band 4 — production hardening

The work that makes large-scale or adversarial use possible:

- Lazy lifting + persistent SSA/HIR/type cache (Batch 25).
- Parallel decompilation with deterministic collection order.
- Memory-mapped binary access for huge binaries / dyld shared caches.
- Huge-binary analysis must be resumable and observable: function-index caching,
  progress logs, per-function failures/retries, and streaming AST/HIR/quality
  artifacts instead of whole-binary all-or-nothing decompilation.
- Debugger and emulator breadth: Linux ptrace productionization, Windows Debug
  API, macOS Mach, GDB/RSP remote debugging, software/hardware/watch
  breakpoints, rr/TTD trace ingestion, coverage export, and emulator-vs-real
  trace comparison.
- Emulator and symbolic/security depth: opcode dispatch beyond the current
  starter set, syscall models, taint/source/sink registries, path constraints,
  vulnerability pattern validation, and malware/obfuscation plugin examples.
- Packer and obfuscator support as a measured product lane: classifier evidence,
  unpack/rebuild handoff, import-reconstruction facts, string/API-hash decoding,
  opaque predicate and control-flow flattening recovery, and clear unsupported
  markers when a protector remains out of scope.
- Initial load should be able to stop at a diagnostic handoff: a deterministic
  JSON/Markdown bundle with packer evidence, function-index state, missing
  recovery steps, safe next commands, and an optional LLM-ready goal prompt for
  unpacking/deobfuscation planning.
- Opt-in LLM-assisted reverse engineering over the SDK/MCP layer: model-backed
  packer identification, naming/comment proposals, malware capability summaries,
  and failed-analysis triage. The deterministic pipeline remains authoritative;
  AI output is stored as proposed facts with provenance and never requires
  committing provider secrets.
- Whole-pipeline fuzz harness with crash corpus and minimised repros.
- Panic-free loader/decompiler paths for attacker-controlled inputs.
- Reproducible release artifacts, SBOM, signed binaries, public benchmarks.
- Stable release contracts for SDK, Python bindings, serialized project state,
  and generated reports.
- SDK compatibility scoreboard grounded in the local IDA SDK 9.3 CodeGraph,
  sample plugins, loader samples, and debugger/trace fixtures.
- MCP compatibility smoke tests grounded in the local Rust MCP SDK/rmcp
  reference, covering tool listing, tool calls, resources, prompts, stdio, and
  optional streamable HTTP. The verified reference checkout is currently
  `/home/cole/RustProjects/forks/rust-sdk`; use
  `/home/cole/RustProjects/active/rust-sdk` if that active checkout is created
  or restored.

## How this file relates to the others

- `plan.md` — the *active backlog*. Specific tasks, ordered for the current
  push. When a band-level goal here lands, an entry in `plan.md` flips status.
- `docs/handoffs/` — per-batch handoffs. The execution-ready breakdown.
- `docs/status.md` — the present-tense matrix. What is shipped today.
- `docs/sdk.md` — the SDK roadmap and IDA SDK 9.3 reference map.
- `docs/mcp.md` — the CLI-first MCP roadmap and rmcp reference map.
- `research/opencode-sessions/` — historical session transcripts. Kept for
  context, not for status. Anything in there about percentages or completion is
  not current.

If two documents disagree on what is "done", prefer `docs/status.md` — it's the
only one that gets refreshed against verification commands.
