# Competitive Parity Handoff: Migration, UI, Debugger, Emulator, LLVM IR, and Evidence

## Status

Planning handoff. This document covers product-hardening work that is not
fully shipped today but is required before unlace can credibly compete with
IDA, Binary Ninja, or Ghidra as an analyst-facing tool.

The current source of truth for what works today remains `docs/status.md`.
This handoff is intentionally future-facing.

## Mission

Turn unlace from a strong decompiler engine into a usable reverse-engineering
platform by landing the missing professional surfaces:

1. IDAPython compatibility layer.
2. Mature native scripting API with stable versioning.
3. Working UI comparable enough to IDA/Binja/Ghidra for real analyst feedback.
4. Full debugger integration.
5. Full emulator/rehoster path.
6. Weird platform/debug-format breadth.
7. Stable LLVM IR export.
8. Broad real-binary quality dashboard.

## Current Assets

These are already present and should be reused rather than rebuilt:

- Loader/core image model: `crates/unlace-loader/src/image.rs`.
- Core IR and SSA: `crates/unlace-ir/`.
- Canonical text IR dump: `crates/unlace-output/src/ir_dump.rs`.
- Pipeline entry points: `crates/unlace-cli/src/pipeline.rs`.
- Persistent project format: `crates/unlace-cli/src/project.rs`.
- Plugin foundation: `crates/unlace-plugin/`.
- Python/Lua bridge contracts: `crates/unlace-plugin/src/python_bridge.rs`,
  `crates/unlace-plugin/src/lua_bridge.rs`.
- Lumina-style sharing: `crates/unlace-lumina/` and `unlace lumina`.
- Debug-adjacent parsers: GDB/MI, LLDB bridge, Frida bridge, minidump, rr,
  TTD, DWARF, PDB, EH frame, SFrame, compact unwind.
- Loader breadth: ELF, PE/COFF, Mach-O/fat binaries, dyld shared cache, UEFI,
  firmware blobs, Android formats, Wasm, Java, .NET, Python, Lua, BTF, XCOFF.

## Global Dependency Order

Do the work in this order. Later items depend on the earlier API surfaces.

1. Build a reusable session/project service.
2. Stabilize the native SDK API around that service.
3. Implement IDAPython compatibility on top of the SDK.
4. Add stable LLVM IR export.
5. Add real-binary quality dashboard.
6. Build UI around the same session/project service.
7. Integrate debugger state into the project/session model.
8. Add emulator/rehoster support.
9. Keep platform/debug-format breadth moving continuously.

The session/project service is the keystone. Without it, scripting, UI,
debugger, emulator, and dashboard work will each invent their own state model.

## Workstream 0: Shared Session and SDK Core

### Goal

Extract the stateful API that every frontend uses: CLI, UI, scripts, plugins,
debugger, emulator, and tests.

### Why It Matters

IDA/Binja/Ghidra are platforms because every feature talks to the same
database-like model: binary image, functions, names, comments, types, xrefs,
bytes, segments, decompiler output, and user edits.

Unlace has most of these pieces, but they are distributed across CLI modules,
loader structs, project JSON, and pipeline calls. They need one stable facade.

### Proposed Crates

- `crates/unlace-sdk`
  - Public stable analyst API.
  - No CLI-specific types.
  - SemVer compatibility promise.
- `crates/unlace-project`
  - Move or wrap `crates/unlace-cli/src/project.rs`.
  - Owns `.unlace` schema, migrations, cache metadata, and provenance.
- Optional later: `crates/unlace-session`
  - In-memory analysis database.
  - May live inside `unlace-sdk` initially.

### Core Types

```rust
pub struct Session {
    pub image: BinaryImage,
    pub project: ProjectFile,
    pub functions: FunctionIndex,
    pub analysis_cache: AnalysisCache,
}

pub struct FunctionHandle {
    pub addr: u64,
}

pub struct MemoryMap {
    pub regions: Vec<MemoryRegion>,
}

pub struct MemoryRegion {
    pub name: String,
    pub start: u64,
    pub size: u64,
    pub flags: RegionFlags,
    pub source: RegionSource,
}
```

### Minimum API

- `Session::open(path)`.
- `Session::save_project(path)`.
- `Session::functions()`.
- `Session::function_at(addr)`.
- `Session::decompile(addr)`.
- `Session::ir_dump(addr, phase)`.
- `Session::bytes(addr, size)`.
- `Session::read_u8/u16/u32/u64(addr)`.
- `Session::name_at(addr)`.
- `Session::set_name(addr, name)`.
- `Session::comment_at(addr)`.
- `Session::set_comment(addr, text)`.
- `Session::xrefs_to(addr)`.
- `Session::xrefs_from(addr)`.
- `Session::segments()`.
- `Session::types()`.
- `Session::set_type(addr, type_string)`.

### Definition of Done

- CLI decompile and `ir-dump` can run through `Session`.
- Project renames/comments/type overrides are no longer CLI-only.
- Plugin hooks receive a session view, not only raw `SsaFunction`.
- Unit tests prove project edits survive save/load/reanalysis.
- Public API docs list compatibility promises and unstable areas.

### Hazards

- Do not expose internal mutable SSA/HIR structures as the stable SDK.
- Do not make the UI call CLI functions directly.
- Do not let plugins mutate project state without provenance.

## Workstream 1: IDAPython Compatibility

### Goal

Let common IDA scripts run with minimal changes.

This is a migration bridge, not a perfect IDA clone. The first target is the
common 20 percent of IDAPython used for renaming, xrefs, bytes, functions,
comments, simple type queries, and logging.

### Initial Modules

Create a compatibility package that can be imported by Python:

- `idc`
- `idautils`
- `ida_funcs`
- `ida_bytes`
- `ida_name`
- `ida_kernwin`
- `ida_xref`
- `ida_segment`
- `ida_typeinf` as a thin placeholder
- `idaapi` as a compatibility aggregator

### First API Slice

Implement these first:

```python
idautils.Functions()
idautils.Heads(start=None, end=None)
idautils.XrefsTo(ea)
idautils.XrefsFrom(ea)

idc.get_name(ea)
idc.set_name(ea, name, flags=0)
idc.get_func_name(ea)
idc.get_bytes(ea, size)
idc.get_wide_byte(ea)
idc.get_wide_word(ea)
idc.get_wide_dword(ea)
idc.get_qword(ea)
idc.set_cmt(ea, comment, repeatable=0)
idc.get_cmt(ea, repeatable=0)
idc.here()

ida_funcs.get_func(ea)
ida_funcs.get_func_name(ea)

ida_bytes.get_bytes(ea, size)
ida_bytes.get_byte(ea)
ida_bytes.get_word(ea)
ida_bytes.get_dword(ea)
ida_bytes.get_qword(ea)

ida_name.set_name(ea, name, flags=0)
ida_name.get_name(ea)

ida_kernwin.msg(text)
ida_kernwin.warning(text)
```

### CLI

Add:

```bash
unlace script <binary> --python script.py
unlace script <binary> --ida-compat script.py
```

Optional later:

```bash
unlace repl <binary> --python --ida-compat
```

### Implementation Plan

1. Land `unlace-sdk::Session`.
2. Add a Python module using PyO3 or an embedded CPython bridge.
3. Implement native `unlace` Python module first.
4. Implement IDA compatibility modules as thin wrappers over `unlace`.
5. Add a test harness that runs Python scripts against fixture binaries.
6. Add a corpus of real-world IDA scripts and mark APIs as:
   - supported
   - stubbed
   - unsupported
   - wrong-semantics

### Compatibility Semantics

- Address type: Python `int`.
- Missing address/name: match IDA behavior where practical; document deviations.
- Renames/comments must write through `.unlace` project state.
- Unsupported functions should raise `NotImplementedError`, not silently lie.
- Logging should print through the host UI/CLI log sink.

### Definition of Done

- At least 25 common IDAPython functions are implemented.
- At least 10 real IDA scripts run without source edits, or with a documented
  shim header only.
- Rename/comment scripts mutate `.unlace` and survive reload.
- `docs/idapython-compat.md` lists supported APIs and deviations.
- CI has Python-script smoke tests.

### Hazards

- Perfect IDAPython compatibility is impossible in the first pass.
- Do not fake support for APIs that depend on UI concepts not implemented yet.
- IDA has many historical quirks; match high-value behavior first.

## Workstream 2: Mature Native Scripting API

### Goal

Offer a cleaner scripting model than IDAPython while keeping IDAPython as the
migration layer.

### Supported Languages

Priority:

1. Python native API.
2. Rust plugin API.
3. WASM sandbox API.
4. Lua quick scripting.

### Native Python Shape

```python
import unlace

db = unlace.open("sample.elf")
for f in db.functions():
    c = db.decompile(f.addr)
    if "strcpy" in c.text:
        db.comment(f.addr, "review strcpy usage")
db.save()
```

### Rust Plugin Shape

Keep `UnlacePlugin`, but extend hooks:

- `on_project_open(&SessionView)`.
- `on_function_discovered(&FunctionInfo)`.
- `on_function_lifted(&FunctionView)`.
- `on_function_decompiled(&DecompileResult)`.
- `on_project_save(&ProjectDelta)`.

### Versioning

- Add `SdkVersion`.
- Add `PluginManifest`.
- Plugins declare:
  - minimum SDK version
  - requested capabilities
  - mutating or read-only mode
  - language/runtime

### Capability Model

- `ReadBinary`
- `ReadFunctions`
- `ReadDecompilation`
- `ReadTypes`
- `ReadXrefs`
- `WriteNames`
- `WriteComments`
- `WriteTypes`
- `WriteFindings`
- `RunDecompiler`
- `RunDebugger`
- `RunEmulator`

### Definition of Done

- `docs/sdk.md` documents stable and unstable APIs.
- Rust, Python, Lua, and WASM examples exist.
- Plugin manifests are validated before loading.
- Mutating plugins record annotation provenance as `Plugin`.
- Host can disable mutation and run plugins read-only.

### Hazards

- Do not stabilize internal pass APIs too early.
- Keep analysis mutation behind explicit transactions.
- Do not give WASM plugins arbitrary filesystem/process access.

## Workstream 3: UI Comparable Enough for Real Feedback

### Goal

Build an analyst UI that can be used on real binaries, even before it matches
IDA/Binja/Ghidra feature-for-feature.

### Non-Goals for First UI

- Do not build a marketing landing page.
- Do not require the UI to implement every decompiler feature before use.
- Do not make UI state separate from `.unlace`.

### Minimum Views

1. Project/file open.
2. Function list.
3. Disassembly view.
4. Decompiler C view.
5. Linear bytes/hex view.
6. Strings view.
7. Imports/exports/symbols view.
8. Xrefs panel.
9. Types panel.
10. Problems/quality findings panel.
11. Rename/comment/type-edit dialogs.
12. IR view for debugging pipeline failures.

### Interaction Requirements

- Click a function -> decompile and show disassembly/C side-by-side.
- Press `n` or context menu -> rename.
- Press `;` or context menu -> comment.
- Jump to address.
- Follow xref.
- Back/forward navigation history.
- Search names/strings/bytes.
- Save project.
- Reload project.
- Show decompiler errors without crashing the whole UI.

### Architecture

Recommended first version:

- Backend: Rust `unlace-sdk::Session`.
- UI process: either Tauri/WebView or egui.
- Long-running decompile jobs run on worker threads.
- UI consumes immutable snapshots plus project edit transactions.

### CLI/UI Split

The UI must not call the CLI as a subprocess for core operations. CLI and UI
should both call `unlace-sdk`.

### Definition of Done

- Open a real ELF, PE, and Mach-O binary.
- Browse functions, decompile, rename, comment, save, reload.
- UI remains responsive during batch decompilation.
- Crashes in one function show an error panel instead of killing the project.
- At least 3 outside users can run it and report issues without help.

### Hazards

- UI before `Session` will cause duplicate state bugs.
- Web UI is acceptable only if local files/project state are handled safely.
- Avoid blocking the UI thread on decompilation.

## Workstream 4: Debugger Integration

### Goal

Let users attach/run/debug binaries and feed live state back into decompilation.

### Existing Pieces

- `gdb_mi.rs`
- `lldb_bridge.rs`
- `frida_bridge.rs`
- `minidump.rs`
- `rr_trace.rs`
- `ttd_trace.rs`
- `windbg_ttd.rs`
- `live_concrete.rs`

These are useful starts, but they are not a full debugger yet.

### Required Model

```rust
pub trait DebugBackend {
    fn launch(&mut self, target: &LaunchConfig) -> Result<()>;
    fn attach(&mut self, pid: u32) -> Result<()>;
    fn detach(&mut self) -> Result<()>;
    fn continue_exec(&mut self) -> Result<DebugStop>;
    fn step_instruction(&mut self) -> Result<DebugStop>;
    fn set_breakpoint(&mut self, addr: u64) -> Result<BreakpointId>;
    fn remove_breakpoint(&mut self, id: BreakpointId) -> Result<()>;
    fn registers(&mut self) -> Result<RegisterSet>;
    fn read_memory(&mut self, addr: u64, size: usize) -> Result<Vec<u8>>;
    fn write_memory(&mut self, addr: u64, bytes: &[u8]) -> Result<()>;
}
```

### Backends

Order:

1. GDB remote / GDB MI for Linux.
2. LLDB for macOS.
3. WinDbg/dbgeng or TTD ingest for Windows.
4. Frida for dynamic instrumentation.
5. Minidump/crashdump as read-only session state.

### UI Features

- Start/attach.
- Breakpoints.
- Continue.
- Step instruction.
- Register view.
- Stack view.
- Memory view.
- Current PC synchronization with disassembly/decompiler.
- Concrete value overlay in C/IR.

### Decompiler Integration

- Populate `ConcreteState`.
- Propagate live register/memory values into comments/annotations.
- Resolve indirect calls/jumps from live state.
- Mark paths observed during execution.
- Allow trace-assisted xref discovery.

### Definition of Done

- Linux GDB backend can launch, break at `main`, step, read registers, read
  memory, and sync PC to UI.
- Concrete register/memory state can annotate one decompiled function.
- Minidump can open as a read-only concrete-state project.
- Debugger failures do not corrupt `.unlace` project state.

### Hazards

- Debugger process control is platform-specific; isolate each backend.
- Never trust target memory sizes from the inferior.
- Keep debugger state separate from static analysis until committed as
  annotations.

## Workstream 5: Emulator and Rehoster

### Goal

Execute lifted code or native snippets in a controlled model for validation,
symbolic assistance, and rehosting.

### Modes

1. Concrete interpreter over Unlace IR.
2. Trace replay from debugger/TTD/rr/minidump data.
3. Native-assisted execution via Unicorn/QEMU or equivalent.
4. Symbolic/concolic later.

### First Emulator Scope

Start with concrete execution for production-tier arch lifted IR:

- x86_64
- x86
- AArch64

Do not begin with all 36 architectures.

### Core Types

```rust
pub struct EmuState {
    pub regs: RegisterFileState,
    pub memory: EmuMemory,
    pub pc: u64,
}

pub trait MemoryProvider {
    fn read(&self, addr: u64, size: usize) -> Result<u64>;
    fn write(&mut self, addr: u64, bytes: &[u8]) -> Result<()>;
}
```

### Required Semantics

- Integer arithmetic.
- Flags.
- Loads/stores.
- Branches/calls/returns.
- Stack operations.
- External call hooks.
- Syscall/library stubs.
- Memory permissions.
- Timeouts/fuel.

### Uses

- Validate lifted semantics against debugger traces.
- Resolve opaque predicates.
- Resolve jump tables.
- Rehost small functions for fuzzing.
- Drive quality dashboard with semantic equivalence checks.

### Definition of Done

- Run simple lifted x86_64/AArch64 functions to completion.
- Compare emulator state against real debugger trace for fixtures.
- Timeouts prevent infinite loops.
- Memory reads/writes honor permissions.
- External calls can be stubbed.

### Hazards

- A bad emulator silently creates false confidence.
- Start with small validated semantics, not broad inaccurate coverage.
- Keep symbolic execution out of v1.

## Workstream 6: Platform and Debug-Format Breadth

### Goal

Cover the weird combinations professionals actually see.

### Current Good Coverage

- ELF.
- PE/COFF.
- Mach-O and fat/universal.
- dyld shared cache.
- DWARF/PDB/EH/SEH-related formats.
- Android, firmware, Wasm, Java, .NET, Python, Lua, BTF, XCOFF modules.

### Remaining Breadth Categories

#### Object/Container Formats

- Archives and thin archives end-to-end in CLI.
- XCOFF deeper symbol/debug mapping.
- Wasm object and component model in main decompile path.
- LTO/bitcode objects.
- Fat LTO objects.
- Static libraries as first-class projects.

#### Debug Formats

- Full DWARF v5 split-DWARF `.dwo`/`.dwp`.
- Full DWARF location lists and range lists.
- Full DWARF expression evaluator.
- PDB TPI/IPI complete type graph.
- CodeView line info and local variables.
- BTF type import into decompiler types.
- GSYM.
- SFrame.
- Apple compact unwind.
- Source line mapping in UI.

#### Platform Loaders

- PE delay-load/bound import/resource UI.
- PE CFG/CET/XFG annotations.
- PE Authenticode verification, not just structural parsing.
- Mach-O chained fixups/rebases/binds/lazy binds/export trie edge cases.
- Mach-O subcaches and kernelcache filesets.
- dyld cache per-subcache lookup.
- ELF symbol versioning.
- ELF TLS models.
- ELF IFUNC resolution.
- Core dumps.
- Firmware memory maps with user-defined base addresses.

#### Runtime Metadata

- C++ RTTI/vtables across Itanium/MSVC.
- ObjC categories/protocols/blocks/ARC.
- Swift descriptors/protocol conformances/async.
- Go moduledata/types/itab/generics.
- Rust vtables/panic/async/enums.
- Java/.NET managed metadata deeper integration.

### Definition of Done

- `docs/status.md` has explicit rows for each format and support tier.
- Loader malformed-input tests cover each parser.
- At least one real-world sample per promoted format is in the private or
  redistributable corpus.
- Debug/type metadata visibly improves output, not only parser unit tests.

### Hazards

- Parser existence is not product support.
- Do not promote a format unless the main decompile path uses it.
- Keep malformed input handling panic-free.

## Workstream 7: Stable LLVM IR Export

### Goal

Make Unlace useful as a reusable lifter/decompiler backend even before the UI
is fully mature.

LLVM IR should be an export target, not the internal core IR.

### Export Modes

#### Mode A: Semantic LLVM IR

Faithful binary semantics.

- Explicit CPU state.
- Explicit memory helpers.
- No pretending unknown memory is C locals.
- Best for rehosting, analysis, fuzzing, symbolic tools, and compiler passes.

Example shape:

```llvm
%unlace.cpu.x86_64 = type { i64, i64, i64, i64, i64, i64 }

declare i64 @unlace_load64(i64 %addr)
declare void @unlace_store64(i64 %addr, i64 %value)

define void @sub_401000(ptr %state) !unlace.addr !0 {
entry:
  ; lifted blocks
  ret void
}
```

#### Mode B: Recovered LLVM IR

Higher-level output after recovery.

- Function arguments.
- Locals.
- `alloca` where useful.
- Recovered structs/types.
- Calls to known functions.
- Loops and branches shaped from HIR where possible.

This mode is less exact but easier for downstream compiler tools.

### Stable Contract

Do not promise LLVM C++ API stability. Promise stable textual output and
metadata:

- `.ll` textual IR.
- Versioned metadata schema.
- Deterministic value names.
- JSON sidecar mapping Unlace SSA/HIR nodes to LLVM values.
- Verifier compatibility with a documented LLVM major version.

### CLI

```bash
unlace ir-dump sample.elf --function main --format unlace
unlace ir-dump sample.elf --function main --format llvm-semantic
unlace ir-dump sample.elf --function main --format llvm-recovered
```

Or:

```bash
unlace export-llvm sample.elf --function main --mode semantic -o main.ll
unlace export-llvm sample.elf --all --mode semantic --out-dir llvm/
```

### Metadata

Use named metadata:

- `!unlace.version`
- `!unlace.binary`
- `!unlace.function.addr`
- `!unlace.block.addr`
- `!unlace.original_reg`
- `!unlace.ssa_value`
- `!unlace.source_section`
- `!unlace.call_target`

### Implementation Plan

1. Add `crates/unlace-llvm-export`.
2. Start with semantic mode for integer-only straight-line functions.
3. Emit valid `.ll` text without linking LLVM libraries.
4. Add optional verifier tests using `llvm-as` / `opt -verify` when installed.
5. Add control flow.
6. Add memory helpers.
7. Add calls/external symbols.
8. Add recovered-mode prototype from HIR/CExpr.
9. Add JSON sidecar.

### Definition of Done

- `loops.elf` and `branches.elf` functions export verifier-clean LLVM IR.
- Export is deterministic.
- Metadata maps each LLVM basic block to original address.
- Semantic mode can round-trip through `llvm-as`.
- Docs explain exact vs recovered mode.

### Hazards

- LLVM poison/undef semantics can make lifted binary code wrong. Avoid
  `nsw`, `nuw`, poison-producing assumptions, and aggressive UB unless proven.
- Recovered mode must not be sold as exact semantics.
- Avoid taking a hard dependency on LLVM C++ libraries for v1.

## Workstream 8: Real-Binary Quality Dashboard

### Goal

Prove depth on real binaries with measurable, repeatable evidence.

The current narrow parity score is useful as a regression watchdog. It is not
enough for product credibility.

### Corpus Tiers

1. Public redistributable fixtures.
2. Locally built source-known programs.
3. Open-source package corpus.
4. Private real-world corpus.
5. Malware/adversarial corpus, if legally handled.

### Metrics

#### Loader Metrics

- Parsed successfully.
- Symbols recovered.
- Debug info imported.
- Relocations imported.
- Runtime metadata imported.
- Malformed-input behavior.

#### Lifter Metrics

- Function lift success rate.
- Unsupported instruction count.
- Unknown call/branch count.
- Flag/condition placeholder count.
- Arch-specific unimplemented op count.

#### Decompiler Metrics

- Functions decompiled.
- Empty bodies.
- Bad returns.
- Bad tokens.
- Impossible lvalues.
- Placeholder variables.
- Unknown types.
- Goto density.
- Structured loop count.
- Switch recovery count.
- Unresolved indirect calls/jumps.

#### C Validity Metrics

- `gcc -fsyntax-only` or `clang -fsyntax-only` pass/fail.
- Warning counts.
- Helper macro dependency counts.

#### Semantic Metrics

- Source-known output diff.
- Emulator/debugger trace agreement.
- Known return values for small fixtures.
- Call target resolution accuracy.

#### Performance Metrics

- Load time.
- Function discovery time.
- Lift time.
- Pass time.
- Structuring time.
- Print time.
- Peak RSS.
- Cache hit rate.

### Dashboard Outputs

- Markdown summary.
- JSON machine-readable report.
- CSV for trend graphs.
- Optional static HTML.

### CLI

```bash
unlace corpus run corpus.toml --out reports/latest
unlace corpus compare reports/base reports/latest
unlace corpus summarize reports/latest --format md
```

### Corpus Manifest

```toml
[[binary]]
name = "coreutils-ls"
path = "corpus/coreutils/ls"
license = "GPL-3.0"
redistributable = false
arch = "x86_64"
format = "elf"
expect_debug = true

[[binary]]
name = "loops"
path = "fixtures/loops.elf"
redistributable = true
source_known = true
```

### Definition of Done

- At least 100 binaries in local corpus.
- At least 20 redistributable fixtures.
- Report tracks trends over time.
- CI runs a small public corpus.
- Private corpus can run locally without committing binaries.
- Regression thresholds fail builds.

### Hazards

- Do not optimize for one corpus by hiding errors.
- Keep source-known and unknown-binary metrics separate.
- Record compiler, optimization level, debug info, strip state, and platform.

## Release Criteria for Competitive Alpha

Unlace can be shown to outside reverse engineers as a serious alpha when all
of the following are true:

- UI opens ELF, PE, and Mach-O projects.
- Users can browse functions, decompile, rename, comment, save, and reload.
- IDAPython compatibility supports the first 25 APIs and runs real scripts.
- Native Python API is documented and versioned.
- LLVM semantic IR export works for production-tier fixture functions.
- GDB backend can launch/attach/read registers/read memory/step on Linux.
- Quality dashboard has public and private corpus modes.
- `.unlace` project state is the shared source for CLI, UI, scripts, plugins.
- `docs/status.md` accurately says what is shipped and what is not.

## Release Criteria for Competitive Beta

Beta requires:

- UI is stable enough for multi-hour analyst sessions.
- IDAPython compatibility supports at least 75 high-use APIs.
- Plugin SDK has SemVer policy and examples.
- Debugger supports Linux and at least one of macOS/Windows.
- Emulator validates small lifted functions against debugger traces.
- LLVM export handles memory, calls, branches, and metadata robustly.
- Real-binary dashboard shows sustained improvement across multiple corpora.
- Loader/debug/type metadata visibly improves final output on real binaries.

## Immediate Next Slice

Start here:

1. Create `unlace-sdk::Session` around loader, project, function discovery,
   decompilation, bytes, names, comments, xrefs, and type overrides.
2. Move `.unlace` project code out of CLI or wrap it behind the SDK.
3. Add `unlace script --ida-compat` with stubs for the first IDAPython APIs.
4. Implement the IDAPython functions that only need existing session state:
   functions, names, bytes, comments, xrefs.
5. Add script smoke tests.
6. Add `docs/idapython-compat.md`.

This gives the fastest credibility win: old scripts start to run, project
edits persist, and the same SDK foundation supports UI and LLVM export work.

## Verification Matrix

Each workstream needs its own tests:

| Workstream | Required verification |
|---|---|
| Session/SDK | Rust unit tests + CLI smoke through SDK |
| IDAPython | Python script smoke tests against fixtures |
| Native scripting | Rust/Python/Lua/WASM sample plugins |
| UI | Manual smoke checklist + screenshot tests where practical |
| Debugger | GDB launch/attach/step/read-memory integration test |
| Emulator | Fixture execution + debugger trace comparison |
| Platform breadth | Parser tests + main-pipeline fixture tests |
| LLVM IR | `llvm-as` / `opt -verify` optional tests |
| Dashboard | Corpus manifest tests + report diff tests |

## Documentation Updates Required

- `docs/status.md`: add explicit scripting/UI/debugger/emulator/LLVM rows.
- `docs/roadmap.md`: reference this handoff under Band 3 and Band 4.
- `docs/sdk.md`: stable native SDK.
- `docs/idapython-compat.md`: supported IDAPython APIs.
- `docs/ui.md`: UI architecture and user workflows.
- `docs/debugger.md`: backend support matrix.
- `docs/emulator.md`: semantics coverage.
- `docs/llvm-export.md`: modes, metadata, verifier policy.
- `docs/corpus-dashboard.md`: metrics and corpus manifest.

## Anti-Overclaim Rules

- "Parser exists" is not support.
- "Bridge type exists" is not scripting support.
- "GDB/MI parser exists" is not debugger support.
- "Lifter crate exists" is not architecture support.
- "LLVM-like IR exists" is not LLVM IR export.
- "Fixture parity is 100%" is not product parity.

Every public claim must point to either `docs/status.md`, a command, or a
corpus report.

