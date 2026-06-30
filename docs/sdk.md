# Unlace SDK Roadmap

This document defines the CLI-first SDK roadmap for unlace. It is grounded in
the current unlace crates and the locally indexed IDA SDK 9.3 stubs at:

```text
/home/cole/Downloads/Software/IDAPro/idasdk93
```

The IDA SDK tree is a reference map, not a dependency and not source to copy.
Use it to understand extension points, expected concepts, and compatibility
tests. Unlace APIs should stay native to unlace's typed project/session model.

## IDA SDK Reference Snapshot

CodeGraph status for the local IDA SDK 9.3 stubs:

```text
files: 1,076
nodes: 62,551
edges: 97,872
languages: C, C++, Python, shell
```

Important SDK surfaces found by CodeGraph:

| IDA SDK area | Evidence in the indexed SDK | Unlace SDK lesson |
|--------------|-----------------------------|-------------------|
| Plugin lifecycle | `include/loader.hpp::plugin_t`, `plugmod_t`, `PLUGIN_MULTI`, `PLUGIN_HIDE`, `PLUGIN_DBG` | Separate manifest, lifecycle, capabilities, and per-project plugin instance state. |
| Loader modules | `include/loader.hpp::loader_t` with `accept_file`, `load_file`, `save_file`, `move_segm`, `process_archive` | Loader extensions need a typed input stream, format probe, load plan, relocation hooks, and optional export path. |
| Processor modules | `include/idp.hpp`, `module/*`, processor notifications and register/location helpers | Lifter/processor extensions need typed register files, calling conventions, instruction semantics, and support-tier evidence. |
| Debugger modules | `include/idd.hpp::debugger_t`, `register_info_t`, `gdecode_t`, `dbg/*` | Debugger backends need a stable trait, register metadata, event stream, breakpoint/watchpoint model, appcall-like escape hatch, and trace export. |
| Persistence | `include/netnode.hpp::netnode` alt/sup/eaddr storage and adjustment helpers | Unlace should expose a deterministic project fact store instead of raw mutable database nodes. |
| Hooks | `IDB_Hooks`, `IDP_Hooks`, `DBG_Hooks`, `UI_Hooks`, `Hexrays_Hooks` in `plugins/idapython/pywraps/*` | Hooks should be event streams over stable facts and snapshots, with explicit mutation permissions. |
| Decompiler integration | `include/hexrays.hpp`, `Hexrays_Hooks`, decompiler examples such as `plugins/idapython/examples/decompiler/vds6.py` | Decompiler plugins need pseudocode, ctree/HIR views, microcode/IR snapshots, and safe rewrite or annotation channels. |
| Type system | `include/typeinf.hpp`, `print_decls`, `choose_local_tinfo`, enum member visitors, arg/return location helpers | Type APIs need printable/importable type libraries, argument locations, shifted pointers, bitmask enums, and validation. |
| Examples | `plugins/*`, `ldr/*`, `module/*`, `dbg/*`, `verifier/*`, `idalib/examples` | Compatibility should be measured by example ports and public script/plugin fixtures. |

## Current Unlace Substrate

Unlace already has the right starting pieces:

- `crates/unlace-plugin`: plugin trait, dynamic library manager, registry,
  WASM sandbox policy, and sample plugins.
- `crates/unlace-session`: session annotations, project loading, and project
  annotation export.
- `crates/unlace-idapython`: partial IDAPython shim.
- `crates/unlace-lumina`: annotation transport and function-hash lookup.
- `crates/unlace-debugger`: debugger trait plus partial Linux ptrace backend.
- `crates/unlace-emu`: emulator substrate.
- `crates/unlace-output`: expression/ctree-like output nodes and printer.

The SDK gap is not "no crates." The gap is a stable facade, compatibility
policy, event model, provenance, and tests that prove third-party code can rely
on those surfaces.

`docs/mcp.md` builds on this SDK roadmap. `unlace-mcp` should consume the stable
SDK facade instead of reaching into private pipeline modules.

## SDK Principles

1. Stable APIs expose unlace concepts, not private pipeline internals.
2. Plugins receive snapshots or typed builders, not mutable SSA/HIR internals.
3. Every mutation records provenance: user, script, plugin, Lumina, debugger,
   imported debug info, or recovered analysis.
4. Determinism is part of the ABI: plugin order, fact merges, diagnostics, and
   generated output must remain stable.
5. Capability boundaries are explicit. Read-only plugins are the default;
   mutation, filesystem, network, process, and debugger access are opt-in.
6. IDA compatibility lives on top of the SDK. `idaapi`, `idc`, `idautils`, and
   `ida_hexrays` should be wrappers over stable unlace APIs, not separate state.
7. Reference the IDA SDK for coverage and vocabulary, but do not copy its
   implementation or freeze unlace into IDA's architecture.

## Target SDK Layers

### 1. Core Project SDK

Stable Rust crate facade, eventually `unlace-sdk`, over:

- project open/save/reload
- binary identity and SHA checks
- addresses, ranges, segments, functions, symbols, xrefs, imports, exports
- comments, renames, bookmarks, patches, type overlays, and manual facts
- deterministic fact merge and conflict reporting
- provenance for every user/plugin/imported fact

The existing `unlace-session` project model is the seed, but the SDK should hide
storage layout and expose typed fact operations.

### 2. Analysis Read SDK

Read-only access for scripts and plugins:

- function summaries
- IR/SSA snapshots by phase
- HIR/ctree-like decompiler tree
- pseudocode lines and token spans
- diagnostics and unsupported-semantic markers
- quality counters for a function or project
- type and calling-convention facts

This is the default safe surface for automation. It should be cheap to run in
batch mode and safe to expose to Python/WASM.

### 3. Analysis Mutation SDK

Validated mutation channels:

- force variable type
- split or map variables
- force call signature or indirect callee
- mark callee opaque or request inline expansion
- define manual switch patterns
- inject assertions/facts at addresses or HIR/IR sites
- forbid propagation for a fact, variable, or statement
- attach plugin findings without changing recovered truth

These operations should become typed project facts. They should not be printer
flags or ad hoc per-command state.

### 4. Decompiler SDK

The Hex-Rays-compatible surface sits here:

- `decompile(function)` returns a stable decompilation object
- pseudocode line access with address/token spans
- ctree/HIR visitor APIs
- microcode/IR phase snapshots with explicit maturity names
- hook points before/after analysis, before/after structuring, before/after
  print
- safe rewrite APIs for narrow, validated transformations
- compatibility wrappers for `ida_hexrays.decompile`, `cfunc_t`, `citem_t`,
  `cexpr_t`, `Hexrays_Hooks`, and `hxe_*`-style events

IDA compatibility should be measured by running SDK examples and public
IDAPython decompiler scripts.

### 5. Loader and Processor SDK

Reference shapes: `loader_t`, `processor_t`, and `module/*` in the IDA SDK.

Unlace-native goals:

- loader probe/load/export traits
- archive/member handling
- segment, relocation, symbol, debug-info, and metadata builders
- lifter extension traits with typed register files
- calling-convention and ABI description APIs
- per-architecture support-tier scorecards
- fixture and corpus requirements before a loader or lifter is promoted

### 6. Debugger and Trace SDK

Reference shapes: `debugger_t`, `register_info_t`, `dbg/*`, and IDA's remote
debugger stubs.

Unlace-native goals:

- stable debugger backend trait
- register class/metadata descriptors
- software, hardware, read-watch, and write-watch breakpoints
- stop/event stream
- memory/register/thread/process APIs
- trace and coverage export into project facts
- emulator-vs-real-debugger comparison hooks
- appcall-like optional operation with explicit unsupported errors

### 7. Plugin Runtime SDK

Runtimes:

- Rust dynamic plugins through `crates/unlace-plugin`
- WASM sandboxed plugins with capability policy
- Python bindings over the same SDK facade
- IDAPython compatibility wrappers over the Python SDK
- future Lua or other scripting only if it shares the same fact model

Required host behavior:

- manifest with name, version, minimum SDK version, capabilities, extension
  points, and compatibility policy
- deterministic plugin ordering
- read-only mode
- provenance for all emitted findings or mutations
- stable diagnostics for skipped or unsupported plugin APIs

## Roadmap

### SDK.1 Core Facade

- Create a documented `unlace-sdk` facade or equivalent public module boundary.
- Re-export only stable project, address, function, type, diagnostic, and fact
  concepts.
- Keep private SSA/HIR internals behind snapshot types.
- Add a version constant and compatibility policy.

Acceptance:

- CLI project open/save and annotation export can be driven through the SDK.
- `cargo test -p unlace-session` and focused SDK tests pass.

### SDK.2 Read-Only Automation

- Expose function, symbol, byte, segment, xref, type, and pseudocode readers.
- Back IDAPython read APIs with this layer.
- Add fixture scripts that only read state.

Acceptance:

- At least 25 high-use read-only IDAPython APIs are SDK-backed.
- Script fixtures run without direct access to private session internals.

### SDK.3 Decompiler Objects and Hooks

- Add stable decompilation object, pseudocode line, token span, ctree/HIR
  visitor, and phase snapshot APIs.
- Add hook registration for analysis/structuring/printing events.
- Back `idaapi.decompile` and `ida_hexrays.decompile` with this layer.

Acceptance:

- A `vds6.py`-style script can inspect pseudocode lines through the compatibility
  layer.
- Hook order is deterministic and covered by tests.

### SDK.4 Mutating Facts

- Model manual analysis actions as typed facts.
- Add validation and conflict reporting.
- Persist facts through `.unlace` project save/load.

Acceptance:

- Force type, rename, comment, manual switch, and injected assertion survive
  save/reload and change decompiler output only through validated paths.

### SDK.5 Plugin Runtime Hardening

- Stabilize Rust plugin ABI and manifest.
- Wire WASM capability policy to real plugin execution.
- Expose Python plugin bindings over the SDK facade.
- Add sample plugins: YARA/finding emitter, IDA-script importer,
  Ghidra-script importer, custom naming, and decompiler hook sample.

Acceptance:

- Sample Rust, WASM, and Python plugins run in read-only mode.
- Mutating plugins record provenance and can be denied by policy.

### SDK.6 Loader, Processor, Debugger Extensions

- Define loader and lifter extension traits only after core fact/project APIs are
  stable.
- Define debugger backend extension API after the trace/fact model is stable.
- Require corpus and fixture evidence before extension support claims move.

Acceptance:

- A sample loader, sample analysis plugin, and sample debugger/trace importer
  can run without touching private pipeline modules.

### SDK.7 Compatibility Scoreboard

- Build an SDK coverage matrix from the IDA SDK reference areas.
- Track IDAPython examples, Hex-Rays examples, loader samples, debugger samples,
  and plugin samples separately.
- Track MCP examples separately: stdio startup, tool listing, tool calls,
  resources, prompts, read-only policy, and optional streamable HTTP.
- Keep unsupported APIs visible with reasons.

Acceptance:

- A generated report says which SDK and IDAPython surfaces are supported,
  partial, unsupported, or intentionally different.

## CodeGraph Workflow

Before SDK work that claims IDA parity, query the local IDA SDK CodeGraph:

```text
projectPath=/home/cole/Downloads/Software/IDAPro/idasdk93
```

High-value query terms:

- `plugin_t plugmod_t loader_t processor_t debugger_t`
- `IDB_Hooks IDP_Hooks DBG_Hooks UI_Hooks Hexrays_Hooks`
- `netnode typeinf tinfo_t print_decls choose_local_tinfo`
- `ida_hexrays cfunc_t citem_t cexpr_t hxe_ microcode`
- `plugins/idapython/examples/decompiler`
- `ldr module dbg verifier idalib examples`

When the IDA SDK and current unlace source disagree, the IDA SDK is a reference
for compatibility expectations, while current unlace source and tests decide
what is actually shipped.
