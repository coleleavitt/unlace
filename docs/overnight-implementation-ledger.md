# Overnight Implementation Ledger

Autonomous multi-agent implementation run against `ROADMAP.md`. Each entry is a
landed, gate-verified change. The roadmap phases are the ledger; this file is the
running record of what actually shipped, with the verification command and the
commit.

Baseline at start: checkpoint `350056d561` (in-flight refactor: TUI/GUI removed,
c_printer/structurer/pipeline split into module trees, roadmap docs). Fixed 10
`DwarfInfo { languages }` test-compile breakages to make the workspace test
build green before any new work.

Operating rules for this run:

- One change at a time merged behind gates; revert on any regression.
- Prefer additive, independent, verifiable tickets that complete or advance a
  phase. Do not tune metrics or edit fixtures/goldens to pass.
- Preserve determinism (BTreeMap/BTreeSet) in `unlace-ir/passes/struct/output`.
- Every landed item lists the exact verification command run.

## Landed

| # | Phase | Ticket | Verification | Commit |
|---|-------|--------|--------------|--------|
| 1 | F.4 | `unlace-mcp` read-only stdio MCP server (rmcp 1.8): `binary_info`, `list_functions`, `decompile_function`; live JSON-RPC stdio smoke test passes | `cargo build -p unlace-mcp`; `cargo test -p unlace-mcp`; stdio `initialize`+`tools/list`+`tools/call` smoke | `e2f4fc2867` |

## In progress / queue (from parallel phase audits)

Low-risk, independent, verifiable first:

- A.1.6 `xtask goto-count` command (measure goto/label totals per fixture)
- J.1 `xtask unified-parity` (run all corpus/quality reports → one artifact)
- C.5 PPC: fix `0x44000002` (`sc`) Unimplemented in `ppc64_features.elf`
- C facade: register implemented-but-unwired lifters (sparc, wasm, …)
- E.4.1 `unlace identify-packer` CLI over existing `packer_detect`
- B.6.1 demangle corpus round-trip test
- D.2 `dead_param_elim` inter-procedural pass
- B.3.1 more `DW_OP_*` forms in `dwarf_expr`
- J.3 loader scorecard xtask
- A.4.7 `COERCE_*` emission (output crate — higher golden risk, gated)

Higher-risk / larger (worktree-isolated agents, gated merge):

- C.2 AArch64 SVE/SME/MTE op lifting
- C.4 RISC-V V + bitmanip
- D.3 symbolic execution (Z3)
- G.1 Windows/macOS debugger backends
- H.2 `ida_hexrays.decompile` real ctree
- I.* user-interaction override fact store
