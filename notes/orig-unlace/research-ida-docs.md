# IDA / Hex-Rays documentation sweep against current main

Read-only research. Nothing was built or run. The sweep covered the 2,086-file IDA/Hex-Rays
research tree (`research/ida-hexrays-docs/`): the SDK header `sdk/include/hexrays.hpp` (13,240 lines,
maturity levels, events, microcode and ctree classes), the decompiler sample plugins `sdk/plugins/vds1`..`vds20`,
the 8.x-9.3 release notes and changelogs, and the 9.x feature comparison pages. Nothing was read in full.
Each technique was checked against the archived engine on `origin/master` (read with `git grep`) and against
`origin/main` (`crates/unlace-*`, `phases.toml`). The owner's existing inventory (`notes/archived-master-inventory.md`)
and the `notes/ida-gap/` notes already cover the microcode optimizer, the ctree printer, the loaders and the
plugin SDK model; this table lists only what they do not cover or cover differently.

Status key: **have** (main implements it), **partial**, **missing**. "Original" means `origin/master`.

## Ranked techniques

| # | Technique (IDA doc source) | Original unlace (origin/master) | Main status | Port? | Size |
|---|---|---|---|---|---|
| 1 | Goto-to-goto retarget: a `goto L1` that lands on `L1: goto L2` jumps straight to `L2` (`vds11`, block optimization rule) | `crates/unlace-struct/src/goto_coalesce.rs:39` (`coalesce_goto_chains`), run from `crates/unlace-cli/src/pipeline.rs:6418-6421` | **missing** as a pass. `p8_structure/gotoreduce.rs` is return-tail duplication, a different rewrite; no label-alias pass found by name | Yes. Self-contained pure rewrite. Ship as a checked pass; a default-on flip must move 0/675 datatests | S |
| 2 | Control-flow graph as DOT (IDA graph views; `vds5` shows the ctree as a graph) | `crates/unlace-output/src/cfg_dot.rs:25` (`emit_cfg_dot`), wired at `crates/unlace-cli/src/pipeline.rs:6154` (`EmitFormat::CfgDot`) | **missing**. No DOT or digraph output on main; `unlace-structure/src/p7_regions/regiongraph.rs` is an internal digraph, not an emitter | Yes. Debugging aid for structure work, cheap, no output change to existing paths. The ctree-as-graph variant (`vds5`) has no master counterpart and is out of scope here | S |
| 3 | Pin a register's value at an address, as an assertion, to settle an opaque predicate (`vds18`) | none. `crates/unlace-engine/src/overrides.rs:331` (force goto), `:335` (deadcode delay), `:368` (flow override) cover control flow only | **missing**. Siblings at `crates/unlace-middle/src/p0_knowledge/overrides.rs:312` (force goto), `:321` (deadcode delay), `:389` (flow override), `:436` (stack pin) | Yes, behind a per-run option. Obfuscated dispatch and opaque predicates are where the output is wrong without it. IDA-docs-only: the original does not have it, so it is not an "original unlace" issue | M |
| 4 | Per-constant number format and radix override (`vds4` user number formats) | none for user formats. Char-literal context at `crates/unlace-output/src/c_printer/mod.rs:17046` and option at `:17635` | **partial**. Char escapes at `crates/unlace-emit/src/p9_emit/printc.rs:742`; no per-constant override | Maybe. Readability only. Needs a persistent override key | S |
| 5 | User label names and per-function comments (`vds4`, `vds20`) | none. No label override in `overrides.rs`; assembler labels only | **missing**. Labels are generated at `crates/unlace-emit/src/p9_emit/langrust.rs:569` with no user source | Maybe. In memory it is S; persisting through `unlace-project` makes it M | S-M |
| 6 | Struct-offset-0 rule: a load or store of a struct's first field becomes `PTRSUB` (IDA's struct-offset recovery; not a `vds` item) | **live**: `RuleStructOffset0` is registered at `crates/unlace-engine/src/action.rs:1606` | **stub**: `crates/unlace-bandb/src/p3_dataflow/ruleaction_5.rs:1119` ("STUB-stubbed (W6 + W3-varnode)") | Yes. A regression against the original, found while checking the list above | M |
| 7 | Installable microcode rule and plugin hooks (`vds10`, `vds16`, `vds19`, `vds2`) | `crates/unlace-plugin/src/lib.rs:89` (`UnlacePlugin` trait), `:143` (`on_function`), `:153` (`on_binary`) | **missing** (inventory candidate 4). Internal `UnlaceHooks` slots at `crates/unlace-ctree/src/lib.rs:21` are not a plugin API | Yes for the trait model only. Already tracked in `notes/archived-master-inventory.md`; not re-issued here | M |
| 8 | Argument-name hints for calls (`hexrays.cfg` `ARG_HINTS_MODE`) | none | **missing** | No. Presentation only | S |
| 9 | Copy structure offsets from the decompiler back to the disassembler (9.2 release notes) | none | **missing** | No. Needs an IDB write-back that a CLI does not have | L |
| 10 | Microcode viewer synced with pseudocode (9.2) | `ir-dump` (inventory C7) | **partial**. `raw-pcode` at `crates/unlace-cli/src/lib.rs:72` dumps p-code only | No. GUI feature | n/a |

## Already covered on main (no action)

- Unreachable switch-case pruning (9.2 `OPT_VALRNG_SWITCH_NCASES`): original `crates/unlace-engine/src/jumptable.rs:817` (`JumpValuesRange`); main `phases.toml:1795` (`rangefold`) and `:2831` (`switchextent`).
- User-defined call for a privileged or custom instruction (`vds8`): main renders `int 0x80` as a syscall (`phases.toml:2528`) and has a user-facing `fixup callother` surface (`phases.toml:1215`).
- Go register and stack ABI (9.2): main `phases.toml:7337` (golang cspec selection).
- Inlined callee bodies (SDK `hxe_begin_inlining`): main `crates/unlace-decomp/src/infra/decompile_drive.rs:390`.
- Try/catch and MSVC C++ exception output (9.0): tracked in `notes/ida-msvc-eh.md`.

## Method notes

- The original uses the `unlace-engine` tree (Ghidra-style Action and Rule classes). Main uses the `unlace-middle` / `unlace-structure` / `unlace-emit` split, so names differ. Each row cites the file that implements the behaviour on each side.
- "Missing" means no matching identifier or emitter found by `git grep` on the stated ref. It is not proof of absence.
- Rows 1, 2 and 6 are the ones proposed as issues. Row 3 is the strongest IDA-docs-only candidate and was not issued because the original does not have it.
