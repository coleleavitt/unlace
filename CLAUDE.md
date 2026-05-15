# CLAUDE.md

Guidance for Claude/Codex-style agents working in this repository.

This file was distilled from the root session dumps, the user-level opencode
session database, repo docs, and current verification. Treat it as the durable
project memory. Do not rely on stale planning artifacts.

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

Last verified on 2026-05-14 (after the Batch 0/1/2/5 session — see
`plan.md` "Session Log" for commit SHAs):

- `RUSTC_WRAPPER= bash scripts/score_parity.sh` reports `Aggregate Parity: 100.0%`.
- Golden fixture test passes: 29 tests, all fixture scores at 100% on the current narrow metric.
- `RUSTC_WRAPPER= cargo test --workspace` passes outside the sandbox — 3059 tests passing, 0 failed.
- `cargo xtask lint-determinism` now **passes** (was: 26 `HashMap`/`HashSet` violations — fixed in commit `9226a74d7`).
- `cargo clippy -p {unlace-ir,unlace-passes,unlace-struct,unlace-output,unlace-cli} --no-deps -- -D warnings` is **clean**. `unlace-loader` still has ~36 clippy errors (open backlog item) — so the full-workspace `cargo clippy --workspace -- -D warnings` still fails, but only in `unlace-loader` and transitive lifter deps.
- `cargo build --workspace` is **0 errors, 0 warnings** except 4 dead-code warnings still in `unlace-passes` (was: 127 warnings — lifter dead-code wired in commit `8299056d7`).
- A root `README.md` now exists (commit `8ddb9369b`).
- `unlace quality <binary>` subcommand exists for honest output measurement (commits `137b743f7`, `84c38e68d`). 33 feature counters, md/json output.
- Sandboxed `cargo test --workspace` can fail in `unlace_lumina` because a test binds a local TCP socket. Rerun outside the sandbox when needed.
- `docs/PARITY_PLAN.md` is useful as a long-range roadmap, but its status numbers are historical and conflict with current verification. Treat it as intent, not ground truth.
- `crates/unlace-output/src/COVERAGE.md` audits C emitter support for IDA `cot_*` forms. It does not prove that lifters/passes currently produce all those forms.

The current 100% parity score is real for the measured fixture counters. It is
not full IDA/Hex-Rays parity.

## Standard Commands

Prefer disabling `sccache` in this environment:

```bash
RUSTC_WRAPPER= cargo check --workspace
RUSTC_WRAPPER= cargo test --workspace
RUSTC_WRAPPER= cargo test -p unlace-test-harness --test golden_fixtures -- --nocapture
RUSTC_WRAPPER= bash scripts/score_parity.sh
cargo xtask lint-determinism
RUSTC_WRAPPER= cargo clippy --workspace -- -D warnings
cargo fmt --all -- --check
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

## What Is Still Missing

High-confidence backlog after reading the root docs, session dumps, and IDA
research sessions. This ignores stale Sisyphus task state.

1. Determinism cleanup.
   `cargo xtask lint-determinism` currently fails. Fix or justify the remaining `HashMap`/`HashSet` uses in output-affecting crates.

2. Clippy and warning hygiene.
   `-D warnings` fails in `unlace-ir/src/ssa.rs` and the workspace emits many warnings. This contradicts `CONTRIBUTING.md`.

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

16. C printer as an AST printer, not string surgery.
   IDA's printer is ctree/opcode-dispatch based. For parity, add semantic expression nodes/helpers for casts, member/array/deref, calls, IDA macros (`LOBYTE`, `HIDWORD`, `COERCE_*`), and operator precedence/width rules. Avoid late textual rewrites.

17. Tests for missing IDA patterns.
   Add fixtures/metrics for patterns found in `tests/golden/x86_64`: `__fastcall`, `a1`/`v1`/`result` naming, stack comments, BYREF, register comments, `_QWORD` casts, function pointers, SIMD types, `__readfsqword`, `LOBYTE`/`HIDWORD`, labels/gotos, and pointer chains.

18. Lifter breadth and wiring.
   The workspace contains many lifter crates. The facade currently wires only a subset and falls back to `StubLifter` for the rest. Some lifters intentionally emit `IrOp::Unimplemented` for many opcodes. Also note duplicate workspace member entries in `Cargo.toml` for some lifter crates.

19. Architecture semantics.
   Historical notes identify incomplete delay slots, flags, condition-register decoding, HI/LO behavior, vector extensions, and arch-specific calling conventions.

20. Release/docs/tooling.
   Root `README.md` is absent. `xtask scaffold` is not implemented. Release signing and musl build support are not fully mature. Large ignored artifacts exist in the root, including core dumps and old worktrees; do not delete them unless explicitly asked.

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
