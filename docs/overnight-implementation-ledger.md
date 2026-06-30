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
| 2 | A.1 | `xtask goto-count` — decompiles control-flow fixtures, counts emitted gotos/labels vs the <10 target (medium=75) | `cargo test -p xtask`; `cargo run -p xtask -- goto-count` | `76bf00e6d3` |
| 3 | J.1 | `xtask unified-parity` — one command runs all parity/quality reports + aggregated pass/fail | `cargo build -p xtask`; `cargo clippy -p xtask -- -D warnings` | `82f0a41a21` |
| 4 | C.5 | PowerPC `sc` (syscall) opcode `0x44000002` lifted to tagged `Callother` (was Unimplemented) | `cargo test -p unlace-lift-ppc` (41 pass) | `d6fbdf09ac` |
| 5 | E.4.1 | `unlace identify-packer` — section-signature + entropy + entrypoint/TLS evidence, ranked hypotheses, md/json | `cargo test -p unlace-cli --lib identify_packer`; clippy | `c67b74a31f` |
| 6 | B.6.1 | demangle corpus round-trip test (Rust/Swift/C++ Itanium + foreign-scheme rejection) | `cargo test -p unlace-loader --test demangle_corpus` (4 pass) | `0a1ba14592` |
| 7 | C.4 | RISC-V Zbb `andn`/`orn`/`xnor` + `sext.b`/`sext.h`/`zext.h` lifting | `cargo test -p unlace-lift-riscv` (78 pass) | `f9e6822f78` |
| 8 | D.2 | `dead_param_elim` inter-procedural analysis (conservative, BTreeMap, determinism-clean) | `cargo test -p unlace-passes dead_param_elim` (5 pass); `lint-determinism` OK | `eac41e31e7` |

### Multi-agent run notes

- Worktree implementation agents auto-commit to their `worktree-agent-*` branch;
  I cherry-pick / ff-merge into master after verifying each in its worktree.
- ~20-30% of agents bail in the first few tool calls (MCP, FLIRT did) — re-handle
  those tickets directly. Some agents leak edits into the MAIN checkout instead of
  their worktree; reconcile (salvage if green, revert if broken) after each batch.
  The RISC-V C.4 work was salvaged this way (complete, 78 tests green).
- Outstanding to redo: B.1.1 AArch64 FLIRT bundled sigs (agent bailed).

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
