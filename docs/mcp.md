# Unlace MCP Roadmap

This document defines the roadmap for a CLI-first `unlace-mcp` integration.
It is grounded in the local Rust MCP SDK checkout:

```text
/home/cole/RustProjects/forks/rust-sdk
```

If the rmcp checkout is later moved or mirrored to
`/home/cole/RustProjects/active/rust-sdk`, use that active checkout as the
reference. The verified local checkout during this roadmap pass is the `forks`
path above.

CodeGraph status for that reference checkout:

```text
files: 193
nodes: 5,302
edges: 12,845
primary crates: rmcp, rmcp-macros
```

The reference crate is `rmcp`, the official Rust SDK for Model Context
Protocol. The useful shapes for unlace are:

- `ServerHandler` for the MCP service implementation.
- `#[tool]`, `#[tool_router]`, and `#[tool_handler]` for typed tool routing.
- `ServiceExt::serve` and `serve_server` for running a service over a
  transport.
- `transport::stdio` for CLI/agent subprocess use.
- `StreamableHttpService` for optional local HTTP serving later.
- `Tool`, `CallToolResult`, resources, prompts, logging, completions, tasks,
  and OAuth support for richer agent workflows.

The MCP server should expose unlace's stable SDK and CLI capabilities. It
should not expose private SSA/HIR internals or become a hidden frontend/backend
surface.

## Product Position

`unlace-mcp` is the preferred CLI-first integration surface after the CLI.

It should let agents and external tools ask unlace to:

- open a binary or `.unlace` project
- list functions, symbols, imports, exports, strings, segments, and xrefs
- decompile a function
- explain diagnostics and unsupported semantics
- return pseudocode with stable address/token spans
- read type, calling-convention, stack-frame, and debug-info facts
- run quality, lifter-coverage, IDA-corpus, and parity reports
- apply validated manual facts when mutation is explicitly allowed
- save and export project annotations
- serve read-only resources for project state and generated reports

The default mode must be read-only. Mutating tools require an explicit
capability flag and must record provenance.

## Target Crate Shape

Proposed crate:

```text
crates/unlace-mcp/
  src/lib.rs          # service, capability policy, shared state
  src/tools.rs        # MCP tool definitions
  src/resources.rs    # project/report/pseudocode resources
  src/prompts.rs      # analyst prompts over stable project state
  src/server.rs       # stdio and optional streamable HTTP runners
  src/policy.rs       # read-only/mutation/filesystem/network limits
```

This crate should depend on the public Unlace SDK facade from `docs/sdk.md`, not
on private pipeline modules. If a tool needs data that is not available through
the SDK, add the SDK capability first.

## Tool Groups

### Project Tools

- `open_project(path)`
- `open_binary(path, arch?)`
- `project_summary()`
- `save_project(path?)`
- `export_annotations(format)`

### Navigation Tools

- `list_functions(filter?)`
- `get_function(address_or_name)`
- `list_symbols(filter?)`
- `list_segments()`
- `list_xrefs(address_or_name)`
- `list_strings(filter?)`

### Decompiler Tools

- `decompile_function(address_or_name, style?)`
- `get_pseudocode(address_or_name)`
- `get_hir_summary(address_or_name)`
- `get_ir_snapshot(address_or_name, phase)`
- `explain_unsupported(address_or_name)`

### Type and Fact Tools

- `get_type(address_or_name)`
- `list_local_types(filter?)`
- `get_calling_convention(address_or_name)`
- `get_stack_frame(address_or_name)`
- `list_manual_facts(address_or_name?)`

### Analysis Report Tools

- `run_quality_report(scope?)`
- `run_lifter_coverage(scope?)`
- `run_type_recovery_report(scope?)`
- `run_ida_corpus_scoreboard(scope?)`
- `compare_to_reference(address_or_name?)`

### Mutating Tools

These are disabled by default:

- `rename(address_or_name, new_name)`
- `set_comment(address, text)`
- `force_type(address_or_name, type)`
- `force_call_signature(address_or_name, signature)`
- `define_manual_switch(address, pattern)`
- `inject_assertion(address, fact)`
- `forbid_propagation(address_or_name, fact_id)`

Every mutating tool must validate inputs, record provenance as `McpClient`, and
round-trip through `.unlace` project save/load.

## Resources

MCP resources should be stable URIs, not arbitrary file reads:

- `unlace://project/summary`
- `unlace://project/functions`
- `unlace://project/symbols`
- `unlace://project/types`
- `unlace://function/{address}/pseudocode`
- `unlace://function/{address}/diagnostics`
- `unlace://reports/quality`
- `unlace://reports/lifter-coverage`
- `unlace://reports/ida-corpus`

Large responses should be paginated or returned as resource links from tool
calls.

## Prompts

Prompts should help agents use the existing CLI and SDK evidence:

- `triage_function(address)`
- `summarize_binary()`
- `explain_decompilation_gap(address)`
- `plan_manual_facts(address)`
- `compare_output_to_ida(address)`
- `prepare_bug_report(address)`

Prompts must cite project facts and commands they depend on. They should not
invent analysis results.

## Transports

Required first:

- stdio transport through `rmcp::transport::stdio`
- JSON-RPC/MCP-compatible error reporting
- read-only default policy

Optional later:

- streamable HTTP through `StreamableHttpService`
- OAuth only for remote or shared deployments
- unix socket or TCP only for local automation when stdio is insufficient

## Roadmap

### MCP.1 Read-Only Stdio Server

- Create `crates/unlace-mcp`.
- Implement `ServerHandler` over a stable SDK-backed service.
- Serve over stdio.
- Expose project, navigation, pseudocode, xref, type, and report tools.
- Use typed schemas for every tool input.

Acceptance:

- An MCP client can start `unlace-mcp` over stdio, list tools, open a fixture,
  list functions, and decompile one function.
- Read-only mode cannot mutate project state.

### MCP.2 Resource and Prompt Surface

- Add stable `unlace://` resources.
- Add analyst prompts grounded in current project facts.
- Add pagination/resource-link behavior for large outputs.

Acceptance:

- A client can fetch pseudocode, diagnostics, and quality reports as resources.
- Prompts return only evidence-backed guidance.

### MCP.3 Mutating Fact Tools

- Gate mutation behind explicit policy.
- Route mutations through SDK validated fact APIs.
- Record provenance and round-trip through `.unlace`.

Acceptance:

- Rename/comment/force-type tools survive save/reload.
- Mutating tools are rejected in read-only mode with stable errors.

### MCP.4 Report and Corpus Automation

- Expose quality-axis, lifter-coverage, type-recovery, and IDA-corpus reports.
- Return report artifacts as resources.
- Keep long-running commands cancellable and progress-reportable.

Acceptance:

- A client can trigger and retrieve a parity report without invoking a frontend.

### MCP.5 Optional HTTP/OAuth Deployment

- Add streamable HTTP only after stdio is stable.
- Add OAuth only for remote/shared deployments.
- Keep local CLI usage simple.

Acceptance:

- HTTP mode has the same tools, policies, and determinism as stdio mode.

## Deferred Frontends

MCP does not reintroduce frontend product work. Those product surfaces are
deferred.
The priority order is:

1. CLI
2. SDK
3. MCP stdio server
4. Optional local MCP HTTP
5. Frontend integrations only if they become explicitly desired later
