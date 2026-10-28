# Unlace SDK Support Matrix

Realizes ROADMAP Phase K.2 ("Generated SDK support matrix for the Rust, Python,
WASM, and MCP surfaces"). Each row is
grounded in current source; see `docs/sdk.md` for the broader SDK rationale and
`docs/mcp.md` for the MCP surface.

## Surfaces

| Surface | Crate / module | Entry types | Stability | Notes |
|---------|----------------|-------------|-----------|-------|
| Rust plugin SDK | `unlace-plugin` | `UnlacePlugin` trait (`name`/`version`/`on_function`/`on_binary`), `PluginFinding`, `PluginRegistry`, `PluginManager` | beta | Object-safe, `Send + Sync`. Worked example: `crates/unlace-plugin/examples/hello_plugin.rs`. |
| WASM plugin sandbox | `unlace-plugin::wasm_sandbox` | `PluginCapability`, `SandboxPolicy`, `SandboxResult`, import validation | experimental | Policy + capability model present; a `wasmtime` runtime host is not yet wired. |
| Python bindings | `unlace-plugin::python_bridge` | `PyBinaryApi` trait, `PyFunction`, `PyDecompileResult`, `PyBinaryInfo` | experimental | Stable concept structs + helpers; a PyO3 `#[pymodule]` (`unlace-python`) is not yet built. |
| MCP server | `unlace-mcp` | rmcp `ServerHandler` over stdio: `binary_info`, `list_functions`, `decompile_function`, `ir_dump_function`, `xrefs_from`, `xrefs_to` | beta | Read-only; runs the `unlace-cli` library in-process and returns typed JSON. See `docs/mcp.md`. |
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
- The MCP tool contract is read-only by default; mutating tools (if added) must
  be opt-in and routed through validated session facts.

## Verification

```bash
cargo test -p unlace-plugin          # Rust plugin SDK + example
cargo test -p unlace-session         # project / fact store round-trip
cargo test -p unlace-debugger --features gdb-stub   # debugger backends
cargo test -p unlace-mcp             # MCP tools + in-process stdio smoke test
cargo run  -p xtask -- sbom          # SBOM generation
```
