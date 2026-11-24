# IDA 9.5 processor modules (pc, mips, ppc, riscv) vs unlace: emulation, switch idioms, no-return, SP tracing, thunks, padding

Research only, no code changes. Dated 2026-11-24, checked against `origin/main` b50c4b082f.
Area slug: processor-modules. Extends, does not repeat, [processors-loaders.md](processors-loaders.md)
(module inventory, loader gaps, and the x64 unwind-code row, item 8, which this note deepens with
IDA function addresses but does not re-rank). Other ida-gap notes cover Hex-Rays microcode, the ctree
printer, ARM-specific helpers and the Apple/ObjC tier.

## Sources

IDA side: four IDA 9.5 databases of the processor modules themselves, in
`/SiteResearch/ida-pro/sqlite/. Each is a 64-bit ELF build of the module analysed by IDA:

| database | functions | pseudocode | names | strings | xrefs |
|---|---|---|---|---|---|
| x86__pc.sqlite | 1288 | 851 | 48680 | 3979 | 6218 |
| procs__mips.sqlite | 682 | 445 | 26877 | 3303 | 5621 |
| procs__ppc.sqlite | 793 | 529 | 30967 | 4776 | 6762 |
| procs__riscv.sqlite | 514 | 328 | 14017 | 1491 | 2537 |

Method. A processor module's own functions are named sub_XXXX, so each technique was located by
three joins, all read-only: (a) strings and debug messages (for example "Postponed purged byte
analysis", "starting simplex method for stack analysis") joined through xrefs to the containing
function; (b) the kernel-API pointer names the module imports (create_switch_table, set_noret_insn,
reg_finder_emulate_binary_op and so on) joined through their _ptr slots to the code that calls them,
which gives the caller set per technique; (c) the pseudocode of the caller set, summarised by callee
names and literal strings rather than pasted. Function sizes come from the functions table.
Coverage limit: sub_7B800 (66 KB of pseudocode), sub_3A4C0 (43 KB) and sub_74FC0 (17 KB) were read
by their call graphs and grep windows, not line by line.

unlace side: origin/main b50c4b082f, read by git grep and by reading module headers. Nothing was
built or run, per the research-only rule. file:line citations are against that commit.

## What the four modules' IDA databases show

IDA's processor-module analysis is a set of callbacks the kernel calls (switch recognition, emulation,
no-return, stack-pointer deltas, thunks, alignment). Each callback is a small driver over one
recogniser. The databases hold 82 (pc), 62 (mips), 39 (ppc) and 48 (riscv) "jpt_<address>" names, IDA's default
names for jump-table items. The call-site counts used below are the evidence; these databases have no
summary table of recognisers.

## Techniques, in IDA's terms (own words)

### 1. Switch recognition

- Entry point: pc sub_86510 (6 KB). It reads the existing switch record, exits early on a function
  flag (0x200000) and on an analysis setting, runs a 40-byte switch-record fill (sub_260C0), then a
  second stage (sub_84AC0, 3 KB) and the jump-table post-pass (sub_861F0, sub_862C0). It checks
  is_call_insn on the dispatch.
- Validation: pc sub_83680 and sub_846C0 (5 KB and 4 KB) match the dispatch against the pattern
  helper match_jpt, then check the table's entries with check_flat_jump_table (absolute entries, no
  base), then tag the jump's instructions with mark_switch_insns_jpt (the second argument selects
  the pattern variant). sub_83590 and sub_803F0 emit the table's offsets and read its entries.
- Default case: pc sub_812D0 (11 KB) and sub_86FC0 (8 KB) walk backwards from the dispatch to the
  bound comparison (decode_prev_insn), then set the table's fixups and offset references, and choose
  the default reference type. The kernel helper find_defjump_from_table is the shared piece.
- Table size: pc sub_844D0 (1.3 KB) handles a table with no explicit bound by masking its end to the
  index width and entry size, and otherwise calls find_jtable_size. sub_83E20 collects the target
  addresses of the entries.
- Shared and moved tables: the kernel helpers same_value_jpt and set_moved_jpt compare two tables'
  entries and record a moved table. The module imports them, so the check is not local to pc.
- PPC: ppc sub_2F7C0 (1.9 KB) is the entry. It calls check_for_table_jump with a table of eight pattern
  templates (off_91380, width 8), then create_switch_table and set_switch_info. Eight distinct
  helpers call mark_switch_insns_jpt (ppc sub_2FB40, sub_36D00, sub_37680, sub_37D00, sub_38340,
  sub_38980, sub_39040, sub_396C0), so PPC has eight shape variants, not one generic matcher.
- MIPS: mips sub_37EA0 (check_for_table_jump), sub_37760 (find_jtable_size, mark), sub_372A0 (mark),
  sub_33970 (the switch record's create and delete, 10 KB), and sub_53DD0, which asks the register
  finder whether a register was loaded from an array (reg_finder_is_loaded_from_array).
- RISC-V: riscv sub_1CE80 (6 KB) and sub_1D4C0 (6 KB) run check_flat_jump_table and match_jpt;
  sub_1E160 is check_for_table_jump; sub_1CD20 marks the instructions; sub_2F6A0 is the array-load test.

Compiler dependence: the pc, ppc and riscv recognisers choose a pattern template per instruction set,
not per compiler, as far as the callers show. There is no compiler-name branch in the switch code.

### 2. Register-finder emulation

- pc sub_72EC0 (14 KB) is a per-opcode dispatcher. It calls reg_finder_emulate_binary_op,
  reg_finder_emulate_unary_op, reg_finder_emulate_mem_read and reg_finder_calc_op_addr, and it carries
  a value list that grows with qvector_reserve. sub_74240 (8.6 KB) decides whether a stack slot can be
  modified by a register's value (reg_finder_may_modify_stkvar).
- The same helper family appears in mips sub_52480 (10 KB), ppc sub_64700 (11.6 KB) and riscv sub_2DD90
  (14.7 KB). The riscv copy adds reg_finder_emulate_binary_op_shifted, which scales an index by a shift
  amount before it reaches the table.

### 3. Per-instruction emulation: no-return and re-analysis

- pc sub_3A4C0 (43 KB) is the instruction emulator. It sets the comment "Hintable nop" on a hintable nop and "(emulator call)" for an FPU emulation interrupt, marks a call to a no-return function
  (set_noret_insn), recomputes the stack-pointer delta of the function (recalc_spd), and re-analyses
  the callers when a function's return behaviour changes (reanalyze_callers). It also gates the
  change on a problem-list check (is_problem_present).
- pc sub_38080 (9.5 KB) recognises the Go runtime.morestack pair and marks it no-return (set_noret_insn,
  func_does_return). The same job per architecture: mips sub_335C0, ppc sub_45D00, riscv sub_19410 and
  sub_1A4E0.
- The int 3 rule (pc help text, "Analyze int 3 instructions") treats an int 3 after a call to a
  no-return function as the compiler's guard, so flow does not continue past it.

### 4. Stack-pointer tracing (SP deltas)

- pc sub_7B800 (66 KB) is a linear-programming solve over the stack-point candidates of one function. It
  builds a model (its messages: "failed to build simplex model", "failed to extract simplex result"),
  calls the COIN-OR Clp initial primal solve, writes the results back as per-instruction stack points
  (add_func_auto_stkpnt, del_func_stkpnt), sets a function flag and locks the function's range.
  sub_7EAE0 ("verify_sp") re-runs the solve when a function's stack points change and reanalyses the
  function.
- Windows x64: pc sub_6E400 (logs "found RSP adjust by ..."), sub_6F2C0 (unwind codes: PUSH_MACHFRAME,
  SET_FPREG, SAVE_NONVOL, V2_EPILOG), sub_6ED00 (chained RUNTIME_FUNCTION entries) and sub_718D0 /
  sub_71CF0 (build_call_stack, the x64 call-stack builder). This is the unwind-code row of
  processors-loaders.md (item 8), now with the IDA functions.
- ppc sub_3CAD0 and mips sub_30FE0 set the automatic stack-pointer delta of a function (set_func_auto_spd),
  and riscv sub_19A30 does the same; these are per-arch hooks into the same table.

### 5. Purged bytes (callee stack cleanup)

- pc sub_46640 (postponed purged-byte analysis, 352 bytes), sub_467A0 (3 KB, stores the purge with
  set_purged after a demangled name check), sub_37670 (9.8 KB, reads the indirect-call purge record through get_ind_purged).
  The migration path for an older database is sub_46AD0 ("Performing purge-analysis for old database").
- pc sub_6C2A0 prints the spoiled-register list of a frame ("spoiled: %08X"), its prolog and its
  sym_jmps range. It is a diagnostic dump, not an algorithm.

### 6. Thunks

- pc sub_74FC0 (17 KB) decides whether a function is a thunk. It calls calc_thunk_function_target,
  reads the target's type information (sub_37670), and switches on the jump form. The option
  "analysis.aggressively_convert_jumps_to_thunks" (pc strings at 1576296) turns any jump into a
  thunk; the default converts only jumps to existing functions. The guard has_jump_or_flow_xref
  (pc sub_67CE0) keeps a jump with other incoming flow from becoming a thunk.
- PIC base thunk: pc sub_2AF40 recognises the .get_pc_thunk. shape.
- PPC: sub_35BE0 and sub_35DD0 call set_function_name_if_jumpfunc. They name a jump-stub entry from its
  target, after checks on the entry's instruction type and on whether it starts a function.

### 7. Alignment and padding

- Explicit align items: pc sub_8D000 and sub_902E0 call create_align (data alignment in RTTI and
  string regions); ppc sub_36440 (7.4 KB) calls create_align and is_problem_present.
- Segment alignment: pc sub_41640 reads each segment's alignment class (get_segment_alignment).
- Padding forms: the nop variants appear as strings in each module (pc "NOP", "NOPREF", "fnop";
  ppc "pnop", "hnop", "xnop"; mips "vnop", "ssnop"). Padding is recognised as instructions, so it can be
  skipped when finding the last real instruction before a no-return call.

## unlace status

Checked on origin/main b50c4b082f.

| IDA technique | unlace | status | file:line |
|---|---|---|---|
| Switch entry, validation, default case, table size | jump-table recovery: a port of Ghidra's jumptable.cc, with a default block and an unbounded-table end | have | crates/unlace-middle/src/p2_lift/jumptable.rs:1, :6890, :5968, :8100; crates/unlace-lift/src/p2_lift/jumptable.rs |
| Table end for a table with no range check | switchextent, at the next table of the function | have | crates/unlace-analysis/src/listing/switchextent.rs:1; crates/unlace-lift/src/p2_lift/switchextent.rs; fixture switchextent_aarch64 (crates/unlace-analysis/tests/fixtures/README.md:25) |
| Compiler-specific shapes (IDA has pattern templates per instruction set, no compiler branch) | gcc hoisted table base, MSVC __ImageBase base, clang and MSVC two-switch merge, AArch64 compact tables | have, ours-better | crates/unlace-analysis/src/listing/switchtable.rs:58, :63; listing/switchflow.rs:20, :414; listing/a64switch.rs:4 |
| Shared and moved tables | switch sharing a case body | have | crates/unlace-lift/src/p2_lift/switchsharedcase.rs |
| Guard bound and mod bound | switchguardbound, switchmodbound | have | crates/unlace-lift/src/p2_lift/switchguardbound.rs, switchmodbound.rs |
| MIPS switch (table read through a loaded base, bounded by a compare) | generic path; MIPS fixtures switch_maprow_mipsel, switch_nop_case_mipsel, switch_shared_epilogue_mipsel, switch_cutrow_mipsel (README:142) | have (fixture-backed) | crates/unlace-analysis/tests/fixtures/ |
| MIPS $gp recovery | per-function t9 tracking | have | crates/unlace-analysis/src/loader/mips_markers.rs:1 |
| PPC switch (eight shape variants) | generic P2 path only; no PPC switch fixture (PPC appears in the fixtures only in adrnext_ppc32 and the PLT stubs at loader/elf_plt.rs:879) | unproven | crates/unlace-middle/src/p2_lift/jumptable.rs:1 |
| RISC-V switch (flat table, scaled index) | generic path only; no RISC-V switch fixture | unproven | (none) |
| Register finder (per-instruction value tracking) | SSA and value-set refinement in P6; switch fold in listing | have, different mechanism | crates/unlace-bandb-core/src/p6_variables/storereach.rs:278; crates/unlace-analysis/src/listing/switchtable.rs |
| No-return by emulation, callers re-analysed | noreturn fixpoint over the call graph | have | crates/unlace-analysis/src/analyzers/noreturn_propagate/mod.rs; crates/unlace-analysis/src/loader/noreturn.rs:257 |
| Go morestack no-return | gomorestack pass | have | crates/unlace-lift/src/p2_lift/gomorestack.rs:1 |
| Int 3 after a no-return call | int3 is treated as padding and skipped when finding the last real instruction | have | crates/unlace-analysis/src/analyzers/noreturn_propagate/mod.rs:440, :442 |
| Stack-pointer solve over the whole function | spsolve: x86-32 call-site pops only, with a simplex first phase, behind option spsolve | partial | crates/unlace-bandb-base/src/p4_calls/spsolve.rs:1, :53, :113, :858 |
| Stack-pointer verify after a change | none for the whole function | missing | (none) |
| Windows x64 unwind codes seed the SP | unwind extents only, not SP or saved-register slots | partial | processors-loaders.md item 8 |
| Purged bytes (callee pops) | calleepurge solves at flow time once every pop is settled; no postponed store | have, ours-different | crates/unlace-bandb-base/src/p4_calls/calleepurge.rs:94 |
| PIC get_pc_thunk | picbase | have | crates/unlace-analysis/src/listing/picbase.rs:101, :517 |
| Aggressive jump-to-thunk conversion | thunkentry promotes a jump target only when three rules hold; no option | missing | crates/unlace-analysis/src/listing/thunkentry.rs:1 (rules 1-3, lines 13-30) |
| PPC64 ELFv1 jump-function naming | ELFv1 descriptors and entry naming | have | crates/unlace-analysis/src/loader/elfv1.rs:1; crates/unlace-analysis/src/analyzers/entry/mod.rs:147 |
| Explicit alignment items for padding | padding is classified for AIF gaps; no listing align item | partial | crates/unlace-analysis/src/analyzers/aif/aifnoppad.rs:1; aifbracket.rs:238; listing has no equivalent (lumina/calcrel.rs:153 mentions align items only there) |

## Ranked table

Ranked by corpus reach, then evidence, then size. Only rows that are missing, unproven or partial
are ranked; the others are in the status table above.

| # | technique | what IDA does | IDA function/address | unlace status (file:line) | impact | size |
|---|---|---|---|---|---|---|
| 1 | PPC switch shape recognition | Eight pattern variants of the jump-table shape, each tagging its instructions after a shared table match | ppc sub_2F7C0 (entry, check_for_table_jump with templates off_91380 width 8); mark callers sub_2FB40, sub_36D00, sub_37680, sub_37D00, sub_38340, sub_38980, sub_39040, sub_396C0 | unproven: generic P2 path (crates/unlace-middle/src/p2_lift/jumptable.rs:1); no PPC switch fixture | high for PPC binaries (Xbox 360, GameCube and Wii, AIX, PS3) | S (fixture and test); M if the generic path misses |
| 2 | Aggressive jump-to-thunk conversion | Any jump can be a thunk when the option is on; default is existing functions only; guarded by has_jump_or_flow_xref | pc sub_74FC0 (calc_thunk_function_target); pc sub_67CE0 (has_jump_or_flow_xref); option name string at ea 1576296 | missing (crates/unlace-analysis/src/listing/thunkentry.rs:13-30 rules 1-3; no option) | medium: jmp-only stubs into code that is not a function | S (gated option, phases.toml row, spec note) |
| 3 | RISC-V switch recognition | Flat-table check on the instruction pattern, plus a scaled-index emulation step | riscv sub_1CE80, sub_1D4C0 (check_flat_jump_table, match_jpt); sub_1E160 (check_for_table_jump); sub_2DD90 (reg_finder_emulate_binary_op_shifted) | unproven: generic path only, no RISC-V switch fixture | medium: RISC-V firmware and embedded code | S-M |
| 4 | Whole-function stack-pointer solve with verification | Linear program over every stack-point candidate of one function; the solution is written back as per-instruction stack points; a verify step re-runs it when they change | pc sub_7B800 (66 KB; Clp calls; messages "starting simplex method for stack analysis"); pc sub_7EAE0 (verify_sp) | partial: crates/unlace-bandb-base/src/p4_calls/spsolve.rs:1-76 (x86-32 call-site pops only, option spsolve at :113); no whole-function table; no verify step | high for x86-32 irregular stacks, medium elsewhere | L |
| 5 | Explicit alignment items for padding | Creates align items for inter-function and data padding; reads the segment alignment class; tags padding forms | pc sub_8D000, sub_902E0 (create_align); pc sub_41640 (get_segment_alignment); ppc sub_36440 (create_align) | partial: padding classified for AIF gaps and no-return skip (crates/unlace-analysis/src/analyzers/aif/aifnoppad.rs:1; aifbracket.rs:238; noreturn_propagate/mod.rs:440) but no listing align item | low to medium: listing readability and data xrefs in padding | S |
| 6 | Windows x64 unwind codes seed the SP | Interprets SAVE_NONVOL, SET_FPREG, PUSH_MACHFRAME and chained RUNTIME_FUNCTION entries to fix the stack pointer | pc sub_6E400, sub_6F2C0, sub_6ED00, sub_718D0 | partial (processors-loaders.md item 8; no new issue) | medium on x64 frames with irregular prologues | M |

Top five for issues: rows 1 to 5. Row 1 is unproven rather than missing, and row 4 and row 5 are
partial. Only row 2 is strictly missing. The table is ranked so the issues reflect corpus reach,
not the status label.

Rows with status "have" and not repeated above: MIPS switch (fixtures), register finder, no-return
emulation, morestack, int 3 guard, purged bytes, PIC thunk, PPC64 ELFv1 naming, compiler-specific shapes.

## Not gaps (checked)

- Default-case and table-size logic: unlace has the default block and the table end at the next table.
- Compiler-specific switch shapes: unlace is ahead of IDA here. IDA's recognisers are per instruction
  set; unlace's listing has gcc, MSVC, clang and AArch64 compact shapes.
- Purged bytes: unlace solves callee pops at flow time (calleepurge, every_pop_settled). The IDA
  postponed store is an artefact of its database format, not an algorithm unlace lacks.
- Interpret int 20h as VxDcall (pc sub_A3200) and the VxD descriptor block are tracked in
  processors-loaders.md as missing and low priority; not repeated here.

## Limits

- Nothing was built or run. Statuses come from reading the code and the fixture README on origin/main.
- PPC and RISC-V are "unproven", not "missing": the generic jump-table path may already cover them. The
  first step for those rows is a fixture, not a new recogniser.
- sub_7B800, sub_3A4C0 and sub_74FC0 were read by callee and string summaries; a line-by-line reading
  would sharpen row 4 and row 2.
