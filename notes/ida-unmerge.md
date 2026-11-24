# Hex-Rays' un-merging of shared call blocks and ARM merges, next to unlace's (2026-11-24)

Deepens gap 7 of `notes/ida-gaps.md`. Compilers merge identical tails (cross-jumping, tail merging):
two paths that each end in `call f(...)` share one block and the differing arguments meet in a phi,
which a decompiler turns into one merged variable and a `goto`. Hex-Rays undoes this on microcode,
before variable allocation; unlace has a narrower version of the same idea (`returndup calls`) plus
after-structuring copies (`crossjumprevert`).

## 1. Hex-Rays

Both passes are on by default: `HEXOPTIONS = 0x700831FF` in `cfg/hexrays.cfg` includes
`HO_UNMERGE_TAILS = 0x000100` ("Reverse effects of branch tail optimizations: reduce number of gotos by
duplicating code"; the options dialog calls it "Un-merge tail branch optimizations").

**UNMERGE_CALLS** (hexx64 `sub_191D80`, logs `UNMERGE_CALLS (%d -> %d)`; called from `sub_10BB40` and
`sub_166050`). Read from the pseudocode (microcode field offsets, so the reading is an inference, not
a symbol): for a block whose last instruction is a `goto` to block B (opcode 55 with a block operand),
it requires B to have more than one predecessor (`+352 > 1`) and at most one successor (`+376 <= 1`),
B's first instruction not to be a conditional jump (opcodes 42-52 excluded), and B to contain exactly one
call (`sub_133D70 == 1`); for an indirect call or a call whose argument list passes the
`sub_190FF0` test it copies B for this predecessor (the `sub_1376E0` copy, then the block list and
value ranges are rebuilt, `sub_397F00`). It also refuses when the goto's address carries a
code-reference flag set by the user (`get_flags_ex(..) & 0x10000`). The set of blocks already unmerged
is kept in an ordered tree, so each block is split once.

**BREAK_PHI_ARM_MERGES** (`sub_1915E0`, name string in the same function). For a two-way block
(`+376 == 2`) whose two successors are different blocks that both pass `sub_190DC0` and agree on
`sub_190F20` (same value, read as "both define the same register"), where one of them has more than one
predecessor, it collects the multi-predecessor successors whose other predecessors are not this block's
siblings and duplicates them, so a register defined on both arms of an ARM conditional sequence and
joined in a phi becomes two separate definitions. Bounds checks trap with `interr(52719)`.

Re-check: `sqlite3 -readonly ~/SiteResearch/ida-pro/hexx64.sqlite "select text from pseudocode where ea in (0x191D80, 0x1915E0)"`.

## 2. unlace today

| unlace | when | covers |
|---|---|---|
| `returndup calls` (default `on` is the constant-return mode; `calls` adds the call split) | before final structuring | a block of at most 16 ops that ends in one direct CALL and a RETURN, 2-4 predecessors, the call taking an argument from a MULTIEQUAL in the block (`Funcdata::node_split_calls`) |
| `crossjumprevert` (on) | after structuring, on the print tree | a goto to a small non-return tail (up to 12 printed ops and one call) copied into the jumping branch |
| `typemerge` (on) | variable merge | stops `mergeByDatatype` joining unrelated same-type variables |

What Hex-Rays does that these do not:
- a shared call block that does **not** end in a return (the common `-Os`/`-O2` shape: both arms
  `goto` a block `call f(x); <more code>`);
- indirect calls (Hex-Rays includes them; `returndup calls` refuses a computed call);
- the split happens before variable merging on the data-flow graph, so the merged argument variable
  never forms (unlace's `crossjumprevert` copies printed text after the variable exists);
- the ARM two-arm register join (BREAK_PHI_ARM_MERGES).

## 3. Proposal

Extend `returndup calls` rather than add an option (a refinement extends the option it refines):

1. Drop the "ends in RETURN" requirement when the block has a single successor and the call's argument
   (or the call target, for CALLIND) comes from a MULTIEQUAL in the block; keep the op bound (16) and
   the predecessor bound (2-4). Owner: `unlace-bandb` / `Funcdata::node_split_calls` (same machinery).
2. Measure on decbench (GED-perfect and aggregate GED, as DIV-54 did for `returndup`); keep it in the
   `calls` value if any partition regresses.
3. ARM joins: a separate step, only after (1) is measured; find the shape first on ARM32 firmware
   (a two-way block whose arms each define r0 and meet in a phi with other predecessors).
