# Architecture Audit 2026-06-21

This note records a current architecture/style pass using the local Rust skills:

- `~/.claude/skills/rust-style/SKILL.md`
- `~/.claude/skills/rust-architecture/SKILL.md`
- `~/.claude/skills/rust-zulip-archaeology/SKILL.md`
- `~/.claude/skills/feature-architecture-initializer/SKILL.md`

It is a work-direction audit, not a claim that any backlog item is fixed. Use
current source and commands as proof before changing behavior.

## Evidence Read

- CodeGraph architecture scan over `crates/`.
- Largest Rust files from `rg --files crates -g '*.rs' | xargs wc -l`.
- Focused searches for stubs, placeholders, TODOs, broad helper names, and
  `IrOp::Unimplemented` / `LiftError::Unsupported`.
- Current docs: `CLAUDE.md`, `README.md`, `docs/status.md`,
  `docs/debugger.md`, `docs/emulator.md`, and `docs/idapython-compat.md`.
- Rust Zulip readable text for module paths, crate hierarchy, visit/fold split,
  publication boundary cost, and typed ID discussion.

## Architectural Read

The workspace crate split is already mostly domain-shaped:

- loaders
- architecture lifters
- IR and SSA
- recovery passes
- control-flow structuring
- C output
- CLI/session/product integrations

The next architecture work is therefore not "add more crates because files are
large." Prefer private module extraction inside the owning crate unless there is
independent reuse, release/versioning, dependency-direction enforcement, or a
meaningful compile-time boundary.

The largest files are real pressure points, but each still has a clear owning
domain:

| File | Current pressure | Preferred next shape |
|------|------------------|----------------------|
| `crates/unlace-output/src/c_printer.rs` | About 33k lines. Emission, cleanup, trace, naming, declaration, expression, and statement rendering concerns share one file. | Keep the public C printer API stable. Extract private modules under `unlace-output/src/c_printer/` for stage tracing, cleanup/pruning, declarations, expression rendering/folding, statement rendering, naming/local layout, and tests. |
| `crates/unlace-struct/src/structurer.rs` | About 8.8k lines. Core structuring plus trace/counting, loop/switch/EH recovery helpers, AArch64 folds, and tests are interleaved. | Keep `structure` / `structure_with_arch` behavior stable. Extract trace/count helpers, landing-pad/EH wrapping, loop/switch postprocessing, arch-specific folds, and test support into child modules only when changing those areas. |
| `crates/unlace-cli/src/pipeline.rs` | About 6.3k lines. Function discovery, decode/lift bounds, pass orchestration, debug-info application, FLIRT/symbols, jump tables, output annotations, and tracing share one file. | Keep the CLI-facing pipeline entrypoints stable. Split private modules by pipeline phase: discovery, lift bounds, passes, debug-info, signatures/symbols, jump tables, and output assembly. |
| `crates/unlace-loader/src/{macho,dyld_cache,pe,pdb_types,dwarf}.rs` | Each is large, but format-specific. | Split by file-format subdomain only when touching the behavior: headers, sections, relocations, debug records, cache extraction, sidecar lookup. Do not split out crates just for size. |

## Source-Backed Work Queue

1. C printer module extraction.
   Start with the parts that already have env-gated tracing:
   `UNLACE_CPRINTER_STAGE_TRACE`, `UNLACE_CPRINTER_PRUNE_TRACE`, and
   `UNLACE_CPRINTER_TRACE`. Moving tracing/cleanup into child modules lowers
   risk before touching semantic expression printing.

2. Structurer module extraction.
   Keep the core structuring algorithm measured by focused tests and golden
   fixtures. Extract trace/counting and postprocessing helpers before changing
   `structure` itself.

3. CLI pipeline module extraction.
   Preserve current behavior while isolating pipeline phases. This makes future
   debug-info, lifter, and output changes easier to verify without editing the
   full orchestration file.

4. CLI-first product-surface maturity.
   The crates exist, so avoid backlog wording that says they are absent. Current
   partial/stub surfaces include HIR/IR hooks, Lumina placeholder API
   responses, debugger platform breadth, debugger trace/coverage export,
   emulator opcode/memory-model breadth, stable Unlace SDK contracts
   (`docs/sdk.md`), CLI-first MCP server contracts (`docs/mcp.md`),
   plugin/runtime contracts, and persistent `.unlace` project state.

5. Lifter coverage honesty.
   Production claims remain limited. Several lifter crates intentionally emit
   unsupported or unimplemented operations. Use `cargo xtask lifter-coverage`
   and focused arch tests before broadening support claims.

6. Type/output debt.
   Keep quality-axis debt visible: source precision excess, leaked temporaries,
   stack/ABI carriers, duplicate local declarations, and source-oracle-only
   facts are still real work even when golden triage is green.

7. Corpus-scale evidence.
   The IDA dump under `research/decompiled-references/ida/` is already large
   enough to stop treating fixture success as broad parity. Add scorecards for
   gotos, loops, switches, helper macros, SIMD intrinsics, calling conventions,
   xrefs, local-variable output, and type/source provenance. Where addresses
   survive, compare function output in address-mapped buckets:
   better-than-IDA, equivalent, worse, and not comparable.

8. Manual analysis fact model.
   Force/split/map variable, force call type, manual switch, custom calling
   convention, skippable instruction, injected assertion, and forbid-propagation
   operations should be typed facts in the project/session model. They should
   not be one-off printer toggles or CLI flags.

9. Unlace SDK roadmap.
   Treat the local IDA SDK 9.3 CodeGraph at
   `/home/cole/Downloads/Software/IDAPro/idasdk93` as a compatibility reference
   for plugin lifecycle, loader modules, processor modules, debugger modules,
   netnode-style persistence, IDB/IDP/DBG/UI/Hex-Rays hooks, and type APIs.
   The Unlace SDK should expose native typed project facts, read-only analysis
   snapshots, validated mutation APIs, plugin runtimes, and compatibility
   wrappers over one stable facade. Do not copy proprietary SDK implementation
   details or expose private SSA/HIR internals as the stable API.

10. MCP roadmap.
   Treat the local Rust MCP SDK/rmcp checkout at
   `/home/cole/RustProjects/forks/rust-sdk` as the verified reference for
   transport, `ServerHandler`, `#[tool]`, `#[tool_router]`, resources,
   prompts, and streamable HTTP. If the rmcp checkout is moved or mirrored to
   `/home/cole/RustProjects/active/rust-sdk`, use that active checkout as the
   reference. `crates/unlace-mcp` is a separate integration crate; since
   2026-10-28 it runs the `unlace-cli` library in-process over stdio with
   read-only, typed tool schemas. Move it onto the stable SDK facade once that
   exists. Do not route frontend work through MCP.

11. Deferred frontends.
    The user preference is CLI-first. Frontend productization should stay
    deferred unless explicitly revived. Keep roadmap energy on CLI, SDK, MCP,
    persistence, debugger breadth, and corpus evidence. (IDAPython
    compatibility was dropped on 2026-10-28.)

12. `unlace-ir/src/types.rs`.
   This is the only catchall-looking filename found in the broad scan, but it
   has narrow module docs around composite type wrappers layered on
   `PrimitiveType`. Leave it alone unless actively consolidating type APIs with
   `tinfo` or adding a clearer child module.

## Rust Skill Implications

- Parent modules should own vocabulary and invariants; child modules should own
  focused roles such as `decode`, `recover`, `fold`, `visit`, `emit`, `trace`,
  or `validate`.
- Prefer newtypes/enums/associated types for phase, dialect, semantic ID, and
  support-tier boundaries. Avoid raw strings, booleans, or integer flags for
  these roles.
- Use executable truth: validators, deterministic lints, exhaustive matches,
  fixture gates, coverage reports, and quality ledgers should define behavior;
  docs explain evidence and intent.
- Split visit-like and fold-like capabilities when powers differ. Local Zulip
  history on type-system visiting/folding supports the rule that foldable data
  is visitable, but not all visitable data should be mutable/foldable.
- Treat crate/public API boundaries as expensive. Local Zulip history on Chalk
  crate hierarchy and publishing supports named conceptual boundaries, but not
  crate proliferation without reuse, dependency, release, or compile-time value.
- Typed IDs are preferred for compiler-shaped semantic identities. Local Zulip
  discussion around solver IDs supports transparent wrapper IDs and explicit
  upcasts from narrow identities into broader ones.

## Runtime Guidance

When starting architecture or feature work, answer these questions before
editing code:

1. Which owning crate and parent module owns the vocabulary?
2. Is this a new public API boundary, or should it be a private child module?
3. Which invariant can be enforced by a type, smart constructor, validator,
   exhaustive match, lint, or test?
4. Which focused command proves the change before full workspace gates?
5. Which docs/status ledgers need updating if support claims change?

Historical plans and session exports remain useful leads. They are not evidence
that a gap still exists or that a claimed fix is current.
