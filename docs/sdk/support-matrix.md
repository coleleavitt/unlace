# Unlace SDK Support Matrix

Realizes ROADMAP Phase K.2 ("Generated SDK support matrix for Rust, Python,
WASM, IDAPython-compatible, and IDA-SDK-inspired surfaces"). Each row is
grounded in current source; see `docs/sdk.md` for the broader SDK rationale and
`docs/mcp.md` for the MCP surface.

## Surfaces

| Surface | Crate / module | Entry types | Stability | Notes |
|---------|----------------|-------------|-----------|-------|
| Rust plugin SDK | `unlace-plugin` | `UnlacePlugin` trait (`name`/`version`/`on_function`/`on_binary`), `PluginFinding`, `PluginRegistry`, `PluginManager` | beta | Object-safe, `Send + Sync`. Worked example: `crates/unlace-plugin/examples/hello_plugin.rs`. |
| WASM plugin sandbox | `unlace-plugin::wasm_sandbox` | `PluginCapability`, `SandboxPolicy`, `SandboxResult`, import validation | experimental | Policy + capability model present; a `wasmtime` runtime host is not yet wired. |
| Python bindings | `unlace-plugin::python_bridge` | `PyBinaryApi` trait, `PyFunction`, `PyDecompileResult`, `PyBinaryInfo` | experimental | Stable concept structs + helpers; a PyO3 `#[pymodule]` (`unlace-python`) is not yet built. |
| IDAPython compatibility | `unlace-idapython` | `idaapi`, `idc`, `idautils`, `ida_funcs`, `ida_bytes`, `ida_name`, `ida_segment`, `ida_typeinf`, `ida_xref`, `ida_hexrays` | partial | Core read APIs over `unlace_session::Session`. `ida_hexrays.decompile` and `ida_xref` are still stubs/partial. |
| MCP server | `unlace-mcp` | rmcp `ServerHandler` over stdio: `binary_info`, `list_functions`, `decompile_function` | beta | Read-only; wraps the `unlace` CLI. See `docs/mcp.md`. |
| Project / fact store | `unlace-session` | `Session`, `ProjectFile`, `Annotations` (renames/comments/types/bookmarks/patches + user override facts) | beta | Deterministic `.unlace` round-trip; force-var-type / force-call override facts (Phase I.1/I.2). |
| Debugger backends | `unlace-debugger` | `Debugger` trait; `LinuxPtraceDebugger` (feature `linux-ptrace`), `GdbStubDebugger` (feature `gdb-stub`), `NullDebugger` | beta | Linux ptrace + GDB-RSP remote; Windows/macOS not yet. |
| SBOM | `unlace-sbom` | `Sbom`, `generate_sbom`, `to_json` | stable | CycloneDX 1.4 from `Cargo.lock`; `cargo xtask sbom`. |

## Stability legend

- **stable** — API shape settled; changes follow SemVer.
- **beta** — usable and tested; minor breaking changes possible before 1.0.
- **experimental** — scaffolding present; expect breaking changes.
- **partial** — some members real, others stubbed; check the module.

## Compatibility policy

- The plugin ABI (`UnlacePlugin`, `PluginFinding`) and the `.unlace` project
  format are the surfaces most likely to be depended on; treat additions as
  backward-compatible and gate removals behind a version bump.
- IDAPython shims aim for source-compatibility with the upstream module names;
  unimplemented members return honest stubs rather than fabricated data, so
  scripts fail loudly rather than silently.
- The MCP tool contract is read-only by default; mutating tools (if added) must
  be opt-in and routed through validated session facts.

## Verification

```bash
cargo test -p unlace-plugin          # Rust plugin SDK + example
cargo test -p unlace-idapython       # IDAPython shims
cargo test -p unlace-session         # project / fact store round-trip
cargo test -p unlace-debugger --features gdb-stub   # debugger backends
cargo build -p unlace-mcp            # MCP server
cargo run  -p xtask -- sbom          # SBOM generation
```
