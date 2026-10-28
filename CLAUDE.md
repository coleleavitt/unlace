# CLAUDE.md

Guidance for Claude/Codex-style agents working in this repository.

This file was distilled from the root session dumps, the user-level opencode
session database, repo docs, and current verification. Treat it as the durable
project memory. Do not rely on stale planning artifacts.

Claude Code runtime shards live under `.claude/`:

- `.claude/rules/*.md`: focused always-on rules
- `.claude/commands/*.md`: reusable slash-command prompts
- `.claude/agents/*.md`: custom subagent role prompts
- `.claude/skills/*/SKILL.md`: larger repeatable workflows

Those files are repo-level Claude Code runtime config; this root file remains
the canonical project memory for repo-wide behavior.

## Project Shape

`unlace` is a Rust workspace for a decompiler pipeline:

- loaders: ELF, PE, Mach-O, debug info, symbols, signatures
- lifters: architecture-specific bytes to IR
- IR: pcode-like IR plus SSA
- passes: simplification, propagation, type/stack/calling-convention recovery
- structuring: CFG/HIR recovery into if/loop/switch/try/goto forms
- output: C-like pseudocode printer
- CLI/test harness/fuzz/lumina/plugin tooling

Important paths:

- `crates/unlace-ir`: core IR, SSA, arch ids, types
- `crates/unlace-loader`: binary loaders, DWARF/PDB/signature support
- `crates/unlace-lift*`: lifter facade plus per-arch lifters
- `crates/unlace-passes`: IR and SSA recovery passes
- `crates/unlace-struct`: HIR and control-flow structuring
- `crates/unlace-output`: C printer
- `crates/unlace-cli`: CLI and end-to-end pipeline
- `crates/unlace-test-harness/tests/golden_fixtures.rs`: golden fixture scoring
- `tests/golden/reference_metrics.toml`: current narrow parity metric baselines
- `docs/determinism.md`: deterministic-output rules
- `docs/PARITY_PLAN.md`: broad roadmap, useful but stale in details
- `session-ses_21fc.md`, `session-ses_2175.md`: opencode session exports

## Session Context

The root session dumps are opencode-style exports. They contain a lot of useful
research, but many phase claims are historical. Verify everything against the
current code before acting.

The user-level opencode database has this project recorded as:

- project id: `f324a8ce303e1a9222382634e1c66b30554c8880`
- worktree: `/home/cole/RustProjects/active/unlace`
- `.git/opencode` contains only that hash, not a session transcript
- there are hundreds of related sessions in `/home/cole/.local/share/opencode`

Useful database queries:

```bash
sqlite3 /home/cole/.local/share/opencode/opencode.db \
  "select id,title,parent_id from session where directory like '%/unlace%' order by time_created;"

sqlite3 /home/cole/.local/share/opencode/opencode.db \
  "select session_id, substr(content,1,1200) from parts_fts where content match 'missing OR gaps OR parity' limit 50;"
```

Root exported sessions to know:

- `ses_21fc73baaffe36Xq0EL34ZQOL1`: Phase 9-14 style work, fixture parity, many subagent plans.
- `ses_217527c91ffeeG4YCh5AeKBWRz`: later continuation with large IDA/Hex-Rays research and "what else is missing" context.

High-signal exported opencode sessions to read first:

- `research/opencode-sessions/markdown/0759-ses_21464521cffePd6tlTkUGgN4E4-map-ida-c-printer-from-hexx64-dump-explore-subagent.md`
- `research/opencode-sessions/markdown/0760-ses_214642926ffeecxhFJkczrnae7-map-ida-expression-simplification-explore-subagent.md`
- `research/opencode-sessions/markdown/0761-ses_2146403c7ffeMUBfQ4ifPdhPKm-map-ida-type-system-internals-explore-subagent.md`
- `research/opencode-sessions/markdown/0762-ses_21463d716ffefB5FtWux9Vm9Vi-map-ida-control-flow-structuring-explore-subagent.md`
- `research/opencode-sessions/markdown/0763-ses_214615bc8ffeugFxrxp02ToG0Y-ida-hexrays-c-output-printer-system-mapping.md`
- `research/opencode-sessions/markdown/0767-ses_2144a1dd4ffeU2nvOqCBt8ZE17-find-decompiler-pass-pipeline-explore-subagent.md`
- `research/opencode-sessions/markdown/0768-ses_21449fbf8ffeZs2pUfLArveGuh-find-struct-reconstruction-system-explore-subagent.md`
- `research/opencode-sessions/markdown/0769-ses_21449d80bffeZog9cPjtjFBa1o-find-lvar-allocation-system-explore-subagent.md`
- `research/opencode-sessions/markdown/0734-ses_214ee017dffegDNZUrncdZwIKX-mine-hexrays-stack-var-recovery-explore-subagent.md`
- `research/opencode-sessions/markdown/0735-ses_214edd985ffeD4oL0abkgjAx6V-mine-ida-stack-frame-detection-explore-subagent.md`
- `research/opencode-sessions/markdown/0736-ses_214edc4deffepi09tRCa7lh1M2-mine-hexrays-microcode-stack-ops-explore-subagent.md`
- `research/opencode-sessions/markdown/0740-ses_214b5cee0ffebd2T6ElRMekRAh-analyze-ida-golden-c-patterns-explore-subagent.md`
- `research/opencode-sessions/markdown/0741-ses_214b5ab9affeTT4ObZpvj4zdA4-compare-unlace-output-vs-ida-golden-explore-subagent.md`
- `research/opencode-sessions/markdown/0743-ses_214b556beffeqSh55AykvjSiD4-analyze-ida-hexrays-specific-algorithms-explore-subagent.md`
- `research/opencode-sessions/markdown/0744-ses_214a92975ffeido6xl50SG8zJE-metis-gap-analysis-for-ida-parity-plan-metis-plan-consultant-subagent.md`
- `research/opencode-sessions/markdown/0745-ses_214a8f8c6ffeDc28Gtoal6gEqR-explore-test-infrastructure-explore-subagent.md`
- `research/opencode-sessions/markdown/0747-ses_214a8ce07ffeY8qEh3seS485Hu-explore-output-ir-emitter-explore-subagent.md`
- `research/opencode-sessions/markdown/0748-ses_214a8b359ffez3vvNpef4dI0tB-explore-golden-files-patterns-explore-subagent.md`

Historical lesson from the sessions: one Task 13 attempt changed fixture source,
fixture binaries, and many goldens, dropping parity badly. Do not change fixtures
or goldens to hide a regression. Only refresh goldens for intentional behavior
changes and verify the resulting output is actually better.

## Current Verified State

Last verified on 2026-06-21 in this checkout with the quality-axis run (then
`scripts/quality_axes.sh`, now `cargo xtask gate`):

- The stylistic score reported `Stylistic Fixture Parity: 83.0%`.
- `cargo run -p xtask -- golden-triage` reports 15 exact-pass rows and 0
  review rows. The older "18 pass / 14 fail" and "0 exact-pass / 15 review"
  notes are historical; do not use them as current evidence.
- `cargo run -p xtask -- semantic-report` reports 34 pass rows, 0 XFAIL, 0
  failed, and 0 unsupported. That is 21 host/source-known executable
  equivalence rows, 4 qemu-user non-host executable rows, and 9 source-known
  shape-only rows.
- `cargo run -p xtask -- type-recovery-report` reports
  `recall=100.0% precision=93.1% raw_precision=92.9%`.
- The formal verification axis still reports Rocq 9.1.0 with 39 theories
  compiled, kernel-checked, and zero admits/axioms; the Rust-vs-extracted-Coq
  oracle matched 200000 vectors.

Current measured debt:

- Source precision excess totals 71 facts: `local_types +32`,
  `array_types +10`, `pointer_types +9`, `field_names +6`,
  `field_types +6`, `local_names +6`, and `return_types +2`.
- Output-local debt stays visible instead of being hidden in source precision:
  98 leaked temp declarations, 184 stack/ABI local carriers, 3 ABI parameter
  carriers, and 35 duplicate DWARF/source local declarations.
- The current missing ledger has 0 recoverable recovery gaps and 57
  source-oracle-only facts.

Stale-plan reconciliation:

- `docs/PARITY_PLAN.md` is a broad roadmap, not a current completion ledger.
- `docs/golden-triage-2026-06-17.md` supersedes older mixed-failure golden
  notes. Do not blanket-refresh goldens merely because an older plan says they
  were failing.
- CExpr completion plan section 4 has landed: `Empty`, `TypeRef`, `FloatNeg`,
  `FloatBinary`, and `PtrDiff` are in the explicit expression AST.
- PDB TPI lowering is wired into the active pipeline. The remaining PDB gap is
  local-location breadth beyond the scoped `S_LOCAL` / `S_REGREL32` /
  defrange/IPI slice, not basic TPI parsing.
- DWARF v5 loclists/rnglists, DWO references, split-DWARF merging hooks, and
  many DW_OP forms exist. The remaining gap is full location-expression
  breadth and robust real-world sidecar discovery.
- dyld cache plan/assemble/extract is implemented for standalone Mach-O
  reassembly. The remaining gap is broad real-world cache coverage,
  kernel-cache/fileset handling, and subcache edge cases.
- `unlace-session`, `unlace-emu`, `unlace-debugger`, `unlace-lumina`, and
  `unlace-mcp` crates exist. Treat platform UX as integration/API
  maturity work, not absence of crates. The IDAPython compatibility layer
  was removed on 2026-10-28; do not reintroduce IDA-shaped scripting APIs.
  `unlace-mcp` runs the `unlace-cli` library in-process (no `UNLACE_BIN`).
- Production architecture claims remain limited to x86, x86_64, and AArch64.
  Several other lifters are beta/fixture breadth and may intentionally emit
  `IrOp::Unimplemented` / `LiftError::Unsupported`.

### Debugging instrumentation (`tracing` targets; see `docs/diagnostics.md`)

Traces are `tracing` events on stderr selected with `RUST_LOG` or `--log`
(`EnvFilter` syntax); every function runs in a `function{name, addr}` span.
No `UNLACE_*` environment variables remain; settings and limits are TOML
config (`unlace.example.toml`, `unlace config show`).

- `unlace::cprinter::stage` — per post-emission cleanup stage:
  changed flag + line-count delta (pins which transform dropped a statement).
- `unlace::cprinter::prune` — per-segment dead-assignment decisions
  (pass #, cond_family, used_later, keep/remove) + per-decl prune decisions.
- `unlace::cprinter` — all printer traces, incl. fold decisions `multi-def-merge`,
  `returned-branch-merge-keep`, `commented-keep`, `line-comment-keep`.
- `unlace::lift_bounds` — function lift extent: begin/no-fallthrough/stop
  with known_size + all_padding flags (pins early-stop truncation).
- Example: `unlace --log unlace::cprinter::prune=debug decompile --function main fixtures/medium.elf`;
  `[function{name=main}]=debug` enables every area inside one function's span.

Other durable facts:

- A root `README.md` exists (commit `8ddb9369b`).
- `unlace quality <binary>` exists for honest output measurement.
- Sandboxed `cargo test --workspace` can also fail in `unlace_lumina`
  (a test binds a local TCP socket). Rerun outside the sandbox when needed.
- `docs/PARITY_PLAN.md` status numbers are historical; treat as intent.
- `crates/unlace-output/src/COVERAGE.md` audits emitter support, not producer.

There is no real "100% parity" number anymore. The honest current state is:
the quality-axis gate is green, exact-line golden triage is clean on this
checkout, and meaningful type/output debt remains visible in the ledgers. This
is not full IDA/Hex-Rays parity. Rerun the full workspace gates before claiming
a source-changing batch is green.

## Product Scope and Feature Gates

The supported scope is x86 (16/32/64), ARM32/Thumb and AArch64 (incl.
arm64e), with ELF, PE/COFF+PDB, Mach-O (+dyld cache and Apple metadata) and
DWARF. `unlace_ir::arch_support::product_tier` is the source of truth.

- Other lifters are experimental: optional deps of `unlace-lift` behind
  `arch-*` features (`all-arches` enables all), forwarded by `unlace-cli`.
  A default build reports `LifterUnavailable::NotEnabled` for them.
- Loader formats outside the supported scope sit behind `format-*` features of
  `unlace-loader` (`all-formats`).
- Modules no production code reaches are compiled only with a per-crate
  `unwired` feature. `cargo xtask status` lists tiers, gated/unwired modules,
  undeclared source files and lifter placeholder counts, and fails when an
  ungated module is unreferenced.
- `cargo xtask` (the alias enables `all-arches`) and the reports it runs
  build `unlace` with `--features all-arches`; experimental-arch tests run
  only with their feature (`cargo nextest run -p unlace-test-harness
  --features all-arches`).

## Standard Commands

The dev/test profile builds workspace crates at `opt-level = 1` with
incremental compilation: the decompiler runs ~5x faster than at opt-level 0
and a rebuild after editing one pass takes ~5 s. Do not export
`CARGO_INCREMENTAL=0` (it overrides the profile; the same rebuild takes ~70 s)
and do not wrap rustc with sccache.

```bash
cargo check --workspace
cargo nextest run --workspace     # all tests, one process each, in parallel
cargo test --workspace --doc      # doctests (nextest does not run them)
cargo nextest run -p unlace-test-harness --features all-arches --test golden_fixtures
cargo xtask gate                  # every quality gate from one build
cargo xtask gate --quick          # golden triage + stylistic score only
cargo xtask lint-determinism
cargo clippy --workspace -- -D warnings
cargo fmt --all -- --check
```

`cargo xtask gate` builds `unlace` once, decompiles every golden fixture once
in-process and in parallel, and derives the golden triage ledger, the
stylistic score, and the fidelity/quality counters from that run. The
semantic and type-recovery reports and the Rocq axes (skipped without
`coqc`/`dune`) run concurrently. It prints one table, writes outputs and logs
to `target/gate/`, and exits non-zero when any check fails. The golden tests
run the decompiler in-process too, so they need no prior `cargo build`.
Refresh goldens with `UPDATE_GOLDEN=1 cargo nextest run -p unlace-test-harness
--features all-arches --test golden_fixtures` only for reviewed, intentional
output changes.

Coverage and benchmarking tools are installed locally as of 2026-06-21:
`cargo-llvm-cov 0.6.18`, `grcov 0.10.5`, `llvm-cov`, `cargo-nextest 0.9.132`,
and `cargo-codspeed 4.7.0`.

```bash
# Coverage: LCOV for upload tools, or HTML for local inspection.
RUSTC_WRAPPER= cargo llvm-cov --workspace --all-features --lcov --output-path target/llvm-cov/lcov.info
RUSTC_WRAPPER= cargo llvm-cov --workspace --all-features --html --output-dir target/llvm-cov/html

# Criterion benches already wired through unlace-cli.
RUSTC_WRAPPER= cargo bench -p unlace-cli --bench decompile_medium
RUSTC_WRAPPER= cargo bench -p unlace-cli --bench spec_suite
RUSTC_WRAPPER= cargo bench -p unlace-cli --bench hexrays_throughput

# CodSpeed runner path for CI or local simulation/walltime runs.
cargo codspeed build -p unlace-cli --bench decompile_medium --bench spec_suite --bench hexrays_throughput
cargo codspeed run -p unlace-cli
```

Formal-verification gate (Rocq 9.1 machine-checked decompiler cores; see
`docs/formal-verification.md` and `rocq-tests/`):

```bash
bash scripts/verify_proofs.sh                                   # build + coqchk: zero admits/axioms
RUSTC_WRAPPER= cargo test -p unlace-ir --test coq_conformance   # pin the Rust↔Coq mirror
```

If a command fails because of the sandbox, do not work around it by changing the
test. Rerun with appropriate approval/escalation.

## Engineering Rules

- Use `rg` first for searches.
- Keep changes narrow and grounded in the existing pipeline.
- Use `BTreeMap`, `BTreeSet`, or deterministic ordered collections in output-affecting crates.
- Do not add `HashMap` or `HashSet` in `unlace-ir`, `unlace-passes`, `unlace-struct`, or `unlace-output` unless the line has a justified `// determinism:allow`.
- Do not edit `structurer.rs` core casually. The prior plans preferred post-processing passes unless core structuring is the actual bug.
- Do not tune metrics or reference values to make a score pass.
- Do not modify fixture binaries or fixture source unless the task explicitly is fixture generation.
- Verify with focused crate tests first, then the relevant golden test, then workspace tests when the blast radius warrants it.

## Rust Architecture and Style Skills

When a task touches Rust code, module layout, crate boundaries, public API
shape, or repo Claude setup, load the relevant global Claude skills first:

- `~/.claude/skills/rust-style/SKILL.md`: idiomatic Rust API and type-system
  style.
- `~/.claude/skills/rust-architecture/SKILL.md`: module/crate boundaries and
  rustc/stdlib-shaped layouts.
- `~/.claude/skills/rust-zulip-archaeology/SKILL.md`: mining local Rust Zulip
  transcripts for compiler-team rationale.
- `~/.claude/skills/feature-architecture-initializer/SKILL.md`: refreshing
  `CLAUDE.md`, `AGENTS.md`, `.claude/`, local memory, or an
  architecture-first feature plan.

Durable Rust rules from those skills:

- Prefer domain-shaped module trees over flat file piles. A parent module owns
  vocabulary and invariants; child modules own focused roles such as `fold`,
  `visit`, `relate`, `decode`, `search`, `emit`, or `validate`.
- Avoid `utils.rs`, `helpers.rs`, and broad root-level catchalls. If a helper
  only makes sense under one concept, put it below that concept's module.
- Split crates only for independent reuse/versioning, dependency-direction
  enforcement, or meaningful compile-time isolation. Otherwise use modules
  first.
- Model semantic IDs and phase/dialect boundaries with newtypes, enums, marker
  types, or associated types instead of raw primitives, strings, or boolean
  flags. Use explicit upcasts when a narrow ID can become a broader one.
- Prefer executable truth over prose-only rules: validators, lints, exhaustive
  `match` arms, tests, and quality reports are the source of truth; docs explain
  intent and evidence.
- Use traits with associated types when there are real multiple
  implementations or protocol families; split capabilities such as visit vs
  fold when they require different powers.
- Prefer enums over stringly-typed states, smart constructors for invariants,
  sealed traits for crate-controlled extension points, and by-value `self` for
  small `Copy` inherent receivers unless an existing trait/API requires a
  borrow.
- For architecture/style questions that are unclear, mine the readable Zulip
  corpus first:
  `~/VulnerabilityResearch/zulip/_readable_text/streams/t-compiler.txt`,
  `~/VulnerabilityResearch/zulip/_readable_text/streams/t-types.txt`, and
  `~/VulnerabilityResearch/zulip/_readable_text/index.tsv`. Quote or summarize
  the stream, topic, and speaker when chat history is used as evidence, and
  verify old rationale against current source before changing code.

## Current Architecture Audit (2026-06-21)

See `docs/architecture-audit-2026-06-21.md` for the current source-backed
architecture/style audit. The important result is that the workspace crate split
is already domain-shaped; the next cleanup is private module extraction inside
owning crates, not new crates for file size alone.

Current architecture queue:

1. Split `crates/unlace-output/src/c_printer.rs` internally around trace,
   cleanup/pruning, declarations, expression rendering/folding, statement
   rendering, naming/local layout, and tests while preserving the public printer
   API.
2. Split `crates/unlace-struct/src/structurer.rs` internally around trace/count
   helpers, landing-pad/EH wrapping, loop/switch postprocessing, arch-specific
   folds, and test support before touching the core structuring algorithm.
3. Split `crates/unlace-cli/src/pipeline.rs` internally around discovery, lift
   bounds, pass orchestration, debug-info, signatures/symbols, jump tables, and
   output assembly while preserving CLI behavior.
4. Treat loader file size as format-domain pressure. Split Mach-O, dyld cache,
   PE/PDB, and DWARF files by subdomain only when changing those behaviors.
5. Product surfaces exist but remain maturity work: `unlace-mcp` tool
   breadth, Lumina placeholder responses, debugger platform
   breadth, emulator breadth, and lifter coverage honesty all still need
   focused work. Unlace is CLI/headless only; there is no UI frontend.

### Measure, don't assume (decompiler-behavior changes)

Decompiler behavior is emergent across many passes; static reading of one function
routinely produces a *wrong* mental model (the `t61` design doc is a graveyard of
~17 plausible-but-disproven hypotheses). Before changing producer/printer behavior,
**instrument and measure** — do not act on an assumption about what the IR/SSA/names
look like.

- Reach for the existing traces first (`docs/diagnostics.md` lists every target):
  `unlace::register_coalesce`, `unlace::var_naming`, `unlace::calling`,
  `unlace::cfg_build`, `unlace::struct::split`, `unlace::cprinter::{stage,prune}`,
  `unlace::lift_bounds`, `unlace::pass::ir` (per-pass IR diff), narrowed with
  `--function <f>` or the `[function{name=<f>}]` span filter, plus `unlace ir-dump --function <f> <bin>` and
  `passes.diagnostics.maturity_dump`. Add a temporary `tracing::debug!` probe
  when no existing trace answers the question, measure, then act. Keep a
  permanent `unlace::<area>` event when the signal is reusable; revert one-off
  probes. Never add an environment variable.
- When stuck or behavior is surprising, add MORE tracing — confirm the actual
  version→name map, lattice classes, partition webs, exit codes — rather than
  reasoning forward from the C output (which lies about SSA structure).
- Validate the real gate after every behavioral edit: `xtask semantic-report`
  (exit-code parity), the focused crate tests, then whole-corpus byte-diff if output
  could move. A config A/B (`--config` with one key changed, e.g.
  `passes.disabled = ["sccp"]`) on a single binary is the cheapest way to
  isolate a change's effect without a rebuild.
- **Revert on any regression.** A measured no-win that returns to the clean baseline
  (and a documented finding) beats a speculative edit that drops the gate. Never
  land output that compiles-but-runs-wrong to make something "look" fixed.

## What Is Still Missing

High-confidence backlog after reading the root docs, session dumps, and IDA
research sessions. This ignores stale Sisyphus task state.

1. Determinism policy maintenance.
   Keep `cargo xtask lint-determinism` green. Fix or justify any new
   `HashMap`/`HashSet` uses in output-affecting crates with
   `// determinism:allow` and a concrete reason.

2. Clippy and warning hygiene.
   Keep `RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings` clean.
   Treat any warning regression as a real gate failure unless the user
   explicitly asks for exploratory code.

3. Honest parity measurement.
   The current fixture score counts a small set of features. Add metrics for switch, break/continue, loops, ternary, short-circuit, struct field access, array access, casts, compound assignments, function signatures, string/symbol resolution, comments, stack annotations, BYREF, SIMD, call quality, and type quality before claiming broader parity.

4. Full-corpus parity gate.
   The x86_64 golden corpus has 150 IDA reference files, but the fixture metric gate only checks 14 internal fixture outputs. Add a corpus-level report that compares actual output against IDA-style pattern counts and, where address mapping exists, AST/line diffs.

5. Lifters and call resolution.
   Older gap sessions found missing branches, unresolved calls, `CALLOTHER` placeholders, raw address calls, exception edges, SIMD gaps, and architecture-specific semantics. Verify current code before fixing, but do not assume printer work can compensate for incomplete lifting.

6. Cross-statement expression recovery.
   Sessions repeatedly call out missing folding across statement boundaries: multi-use temps, constant/comparison simplification, memory access simplification, byte extraction macros, flag simplification, and SSE/vector idiom lowering.

7. Switch and jump-table recovery.
   There is switch-related code and `learnings.md` documents Task 36. Historical gap sessions still show switch gaps on the broader corpus. Confirm `recover_switches` and switch structuring are wired in the current pipeline before changing behavior; use targeted tests because prior broad attempts regressed output.

8. Struct field and array recovery.
   IDA's struct recovery relies on offset pattern matching plus best-fit TInfo member lookup. Unlace has emitter support and some type infrastructure, but real parity needs consistent producer-side recovery, nested structs, arrays, unions, bitfields, padding/gaps, and type propagation across calls.

9. Stack frame and local-variable recovery.
   Preserve RSP/RBP-relative offsets before copy/constant propagation, collect all stack references, validate frame bounds, resolve overlaps, mark BYREF/address-taken variables, then allocate/names locals. Raw `*(_QWORD *)(base + off)` output usually means this pipeline failed upstream.

10. LVAR allocation and coalescing.
   IDA allocates lvars from SSA, builds an interference graph, coalesces non-overlapping live ranges, lays out the stack frame, then names args/locals/result. Unlace still needs stronger live-range-aware temp merging and fewer leaked SSA temporaries.

11. Function signatures and calling conventions.
   Current code has infrastructure, but remaining gaps include multi-argument detection, varargs, struct-by-value, return type inference, `__usercall`/`__userpurge`, nonstandard ABI annotations, and interprocedural propagation.

12. Type system depth.
   Needed for IDA-like output: recursive TInfo-like types, function pointers, arrays, structs/unions/enums, qualifiers, calling convention metadata, argument locations, serialization/deserialization, type validation, and imported PDB/DWARF/TIL-equivalent metadata.

13. FLIRT/signature/runtime recognition.
   IDA-like output depends heavily on library/runtime names and prototypes. Needed: libc/stdlib signatures, compiler runtime recognition (`__stack_chk_fail`, `__cxa_*`, CRT entrypoints), string/memory idiom recognition, and confidence-scored naming for stripped binaries.

14. C++ and language-runtime quality.
   C++ exception structuring, try/catch recovery, RTTI/vtable dispatch simplification, virtual call rendering, demangling, Rust/Go/Swift/ObjC runtime structures, and class/trait/object metadata remain broad parity gaps.

15. Control-flow structuring.
   IDA uses dominators, loop detection/classification, if/else recovery, break/continue recovery, goto minimization, switch recovery, short-circuiting, and irreducible-CFG fallback. Unlace has many passes, but broad-corpus sessions still flag loop/break/goto gaps.
   Note (2026-05-27, commit 65482f216): `label_cleanup::remove_same_scope_backedges` now correctly preserves backward gotos that target an outer-scope label (irreducible-loop back-edges from inside an `If`/`While`/`Switch`/`Try*` body). Previously it inherited the visible-label set into nested bodies and incorrectly dropped the cross-scope back-edge; each nested scope now starts with a fresh visible set. This unblocks the goto-driven irreducible fallback emitted by the structurer when `split_irreducible_entries` is conservative. The medium/stripped `main` XFAIL still observes `cc failed` because `__stack_chk_fail()` is rendered as a value assignment and a stack-canary scalar (`v_72`) is referenced without a declaration — those are downstream codegen bugs, separate from the label-cleanup fix.

16. C printer as an AST printer, not string surgery.
   IDA's printer is ctree/opcode-dispatch based. For parity, add semantic expression nodes/helpers for casts, member/array/deref, calls, IDA macros (`LOBYTE`, `HIDWORD`, `COERCE_*`), and operator precedence/width rules. Avoid late textual rewrites.

17. Tests for missing IDA patterns.
   Add fixtures/metrics for patterns found in `tests/golden/x86_64`: `__fastcall`, `a1`/`v1`/`result` naming, stack comments, BYREF, register comments, `_QWORD` casts, function pointers, SIMD types, `__readfsqword`, `LOBYTE`/`HIDWORD`, labels/gotos, and pointer chains.

18. Lifter breadth and wiring.
   The workspace contains many lifter crates. Verify current facade wiring and
   opcode coverage before assuming an architecture is complete; several lifters
   are breadth scaffolds and may intentionally emit `IrOp::Unimplemented`.

19. Architecture semantics.
   Historical notes identify incomplete delay slots, flags, condition-register decoding, HI/LO behavior, vector extensions, and arch-specific calling conventions.

20. Release/docs/tooling.
   Root `README.md` exists. Release signing, musl build support, and some
   docs/tooling polish may still need work. Large ignored artifacts exist in
   the root, including core dumps and old worktrees; do not delete them unless
   explicitly asked.

## IDA/Hex-Rays Research From Sessions

Useful durable findings from the opencode session dumps:

- Hex-Rays high-level pipeline was mapped as:
  `MMAT_ZERO -> GENERATED -> PREOPTIMIZED -> LOCOPT -> CALLS -> GLBOPT1 -> GLBOPT2 -> GLBOPT3 -> LVARS -> FINAL`.
- Main pipeline orchestrator: `sub_14B8B0`. It sets maturity via `sub_330F20`, dispatches registered passes via `sub_33E140`, runs pre/call/global/lvar stages, then builds ctree via `sub_1CE9E0`.
- Expression optimization sessions identify preoptimization (`sub_1382E0`), combiner/peephole (`sub_B36D0`/`sub_B5190`/`sub_B5460`), local DCE (`sub_A7590`), global DCE (`sub_149220`), propagation (`sub_17D8C0`), global propagation (`sub_181F80`), push conversion (`sub_A6520`), and 64-bit demotion (`sub_B04B0`).
- IDA printer pipeline: prepare names, prepare labels, emit signature, emit declarations, emit body.
- IDA C printer/export map:
  - `sub_3DD430`: printer entry wrapper.
  - `sub_3DBC50`: main ctree printer.
  - `sub_268570`: statement dispatcher.
  - `sub_2662B0`: main expression printer/visitor for `cot_*` opcodes.
  - `sub_3AE9C0`: control-flow statement printer.
  - `sub_1B6B20`: block/statement printer.
  - `sub_1B04A0`: case/switch label printer.
  - `sub_3A94A0`: expression dispatcher.
  - `sub_2696A0`: high-level expression printer.
  - `sub_267FE0`: low-level expression printer.
  - `sub_32BAA0`: type keyword printer.
  - `sub_315E10`: expression type printer.
  - `sub_38A790`: type/declaration parser and validator.
  - `sub_1AF8F0`: syntax element printer.
  - `sub_6B870`: printf-like formatter.
  - `sub_6D170`: block type name mapper.
- IDA expression/type map:
  - `sub_40FBC0`: primary expression/type inference dispatcher in some sessions, with large opcode switch.
  - `sub_A2BF0`: opcode validator/builder.
  - `sub_1D6310`: expression printer wrapper.
  - `sub_1D6450`: binary operator printer.
  - `sub_1D6840`: cast/conversion printer.
  - `sub_3F7E20`: operator dispatcher.
  - `sub_1D6910`: binary expression builder.
  - `sub_B5190`: final expression output handler.
  - `sub_3F7500`: opcode property/precedence getter.
- Type system sessions:
  - Core type/TInfo logic often lives in IDA kernel imports, not only the hexx64 plugin.
  - Important IDA kernel functions: `print_tinfo`, `print_type`, `format_c_number`, `apply_tinfo`, `guess_tinfo`, `create_tinfo`, `deserialize_tinfo`, `serialize_tinfo`, `verify_tinfo`, `find_tinfo_udt_member`, `udt_type_data_t__get_best_fit_member`, `get_struct_operand`, `calc_tinfo_gaps`.
  - Type printing chooses `_BYTE`/`_WORD`/`_DWORD`/`_QWORD`, `__int64`, pointers, function pointers, and calling conventions such as `__fastcall`, `__cdecl`, `__stdcall`, `__thiscall`, `__usercall`, and `__userpurge`.
  - Struct reconstruction flow: detect offset access via `get_struct_operand`/`is_stroff`, match fields with `udt_type_data_t__get_best_fit_member`, apply/update with `find_tinfo_udt_member`/`set_tinfo_property4`, compute gaps with `calc_tinfo_gaps`, then propagate across call boundaries.
- LVAR pipeline:
  - `sub_1F8DC0`: initial lvar allocation.
  - `sub_21B2A0`: interference graph and merge/coalesce orchestrator.
  - `sub_215AC0`: interference/liverange/type compatibility comparison.
  - `sub_216E00`: remap references after merging.
  - `sub_21F320`: stack frame layout.
  - `sub_2112D0`: variable naming.
- Stack variable sessions:
  - IDA separates frame detection from variable creation. First track SP deltas/prologue/epilogue and compute frame size, then annotate operands and create frame members.
  - Relevant functions: `add_auto_stkpnt`, `get_spd`, `set_frame_size`, `insn_create_stkvar`, `op_stkvar`, `calc_stkvar_struc_offset`, `define_stkvar`, `build_stkvar_name`, `sub_13B0F0` (`resolve_stkvar_addresses`), `sub_1CF000` (frame init), `sub_3EEC80` (offset calculation), `sub_1CD380` (stack var classification), `sub_91620` (prologue/epilogue tracking).
  - Hex-Rays microcode models stack memory with typed operands such as `mop_S`, `mop_l`, `mop_d`, `mop_r`, `mop_v`, stack offsets (`stkoff_t`), and lvar locators. In Unlace terms, preserve `SpaceId::Stack` and RSP/RBP+const patterns before fixed-point propagation erases them.
- IDA variable naming pattern: args first (`a1`, `a2`, ...), locals (`v1`, `v2`, ...), variadic args (`va1`, `va2`, ...), `result` for return values, and special names such as `this`, `exception`, `src`, `n`, or `tinfo_property` when usage supports them.
- Operator precedence table was recovered with lower numbers meaning tighter binding in the IDA internal table.
- Parenthesization rules matter. Same-precedence comparisons and non-associative right children need special handling.
- `LOBYTE`/`HIDWORD` style macros should be semantic expression nodes/helpers, not late string hacks.
- Good output needs width premeasurement and consistent line-breaking, not just local expression printing.
- Golden pattern sessions found common IDA output patterns: `__fastcall`, `_QWORD`/`_DWORD`/`_BYTE`, `__int64`, `aN` parameters, `vN` locals, pointer casts, array indexing, casts, function pointers, short-circuit ops, compound assignments, increment/decrement, stack offset comments, BYREF, SIMD types, `__readfsqword`, `LOBYTE`/`HIDWORD`, labels, and gotos.
- Do not overfit old percentages. Gap sessions disagree because they were run at different points in the project. Use their pattern lists and root causes, then verify current behavior with commands.

## Before Doing New Work

1. Check `git status --short`.
2. Re-verify the failing gate relevant to the task.
3. Read the surrounding crate and existing tests.
4. Make the smallest code change that fixes the actual behavior.
5. Add or update focused tests.
6. Run the focused test, then golden parity if output changed.
7. Do not use stale session claims as proof. Use commands and current code.
