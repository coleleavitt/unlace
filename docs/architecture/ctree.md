# A C syntax tree between structuring and printing (ctree)

Status (2026-11-23): section 9 steps 2-4 landed: `crates/unlace-ctree` holds the types, `CMaturity`
and the builder at `built`; `option ctree on` (default off) prints the body through the tree
(`printc/ctreeprint.rs`: graph sequences, leaves, and through `CTree::part` the arms of an
`if` and the bodies of loops and goto blocks). Loops, switches and goto blocks are tree nodes, and the tree reaches `statements`: each leaf holds
its ops, and the leaf printer prints from that list. The first rewrites, `iteboolean` and
`iteregion`, run on the tree (`PrintC::ctree_rewrite`, level `rewritten`); they live in the emit
crate for now because their tests read printer state (output language, stack views). The first
new rewrite, `option boolreturn` (backlog #9, the `return c` part, and a list's trailing run of
constant-return `if`s folded into one `return a && b`), runs in the same pass, and so
does `option noretfirst` (backlog #8: the arm that never falls through first, the other after)
and `option nestedand` (backlog #10, the under-fold part: nested ifs without else as one `&&`)
and `option retternary` (backlog #9, the rest: `return c ? A : B`, `return !c || x`) and
`option orexit` (backlog #10, equal exits: `if (a) goto L; if (b) goto L;` as one `||`).
The print plans `switchmerge` (which `if`s print as a switch), `gotonext` (goto types, dropped
jumps) and `voidtailreturn` (the elided `RETURN`) now live in the tree when it is built
(`ctree_take_plans`); the switch arm plans and the suppressed labels are still printer state.
Spec: `docs/spec/09-emission.md`, "Printing through the C syntax tree".

Today the printer walks the structured block graph and the p-code ops directly and writes text as it
goes. Every C-level cleanup (a diamond printed as a ternary, an if-chain printed as a switch, a goto
printed as `break`, a trailing `return;` left out) is either a mark set on the IR in P8 and matched
again at print time, or a per-function plan the printer computes before it starts. This document
proposes the second idea Hex-Rays has that this engine lacks (`docs/architecture/decompiler-ir-landscape.md`):
a separate C syntax tree, built from the final structured graph, rewritten as a tree, then printed.

## 1. What Hex-Rays does

Sources: [hexrays.hpp reference](https://cpp.docs.hex-rays.com/hexrays_8hpp.html),
[`cexpr_t`](https://cpp.docs.hex-rays.com/structcexpr__t.html),
[`ctree_visitor_t`](https://cpp.docs.hex-rays.com/structctree__visitor__t.html),
[IDAPython `ida_hexrays`](https://python.docs.hex-rays.com/ida_hexrays/index.html),
[decompiler primer](https://hex-rays.com/blog/hex-rays-decompiler-primer),
[Elastic's internals write-up](https://www.elastic.co/security-labs/introduction-to-hexrays-decompilation-internals).

- After microcode reaches `MMAT_LVARS` (local variables allocated), the structurer turns the
  microcode graph into a *ctree*: an abstract syntax tree of C. The function is a `cfunc_t` whose
  `body` is the root statement, with its local variables (`lvars`) and the tree's maturity.
- Every node is a `citem_t` (an `op` of type `ctype_t`, the address `ea` it came from, a label
  number). It is either a statement, `cinsn_t` (`cit_block`, `cit_expr`, `cit_if`, `cit_for`,
  `cit_while`, `cit_do`, `cit_switch`, `cit_break`, `cit_continue`, `cit_return`, `cit_goto`,
  `cit_asm`), or an expression, `cexpr_t` (`cot_asg`, `cot_add`, `cot_call`, `cot_var`,
  `cot_num`, `cot_obj`, `cot_ptr`, `cot_memptr`, `cot_tern`, `cot_land`, `cot_lor`,
  `cot_lnot`, `cot_cast`, ...) with up to three operands `x`, `y`, `z` and a C type.
- The tree has its own maturity, `ctree_maturity_t`, which only rises: `CMAT_BUILT` (just
  generated), `CMAT_TRANS1` (first wave of transformations), `CMAT_NICE` (expressions cleaned up),
  `CMAT_TRANS2`, `CMAT_CPA` (pointer arithmetic corrected), `CMAT_TRANS3`, `CMAT_CASTED` (casts
  added), `CMAT_FINAL` (ready to print; embedded statements are no longer allowed).
- The cleanups between those levels are tree rewrites, and plugins add their own: a
  `ctree_visitor_t` walks the tree (pre-order, optionally with parents or post-order) and may edit the
  node it is visiting, and the `hxe_maturity` event fires at each level so a plugin can rewrite the
  tree at a known stage.
- The Hex-Rays x64 plugin itself (IDA 9.5 `hexx64`) carries the level names `CMAT_ZERO` …
  `CMAT_FINAL` as strings, debug commands to raise and lower the ctree maturity, and a batch
  option `-cdump` that "print[s] ctree transformation rule names": the cleanups are named rules.
- Pseudocode is the printed final tree. Each printed token keeps the address of the item it came from,
  which is how the UI maps text back to the binary.

## 2. How this engine prints today

The decompile root ends with the block tree in `Funcdata::sblocks` (§0.10 level `structured`, then
`casts`, then `complete`). Printing runs after it, on an immutable `&Funcdata`:

- `PrintC::doc_function` → `emit_function_body` (`crates/unlace-emit/src/p9_emit/printc.rs`) computes
  per-function print plans, then walks the block tree from `sblocks.root`.
- `emit_block` dispatches on `BlockType` (Ghidra's virtual `FlowBlock::emit`): `emit_block_copy`
  / `emit_block_basic` (a leaf: label line, then `emit_basic_block_ops`), `emit_block_ls`,
  `emit_block_graph`, `emit_block_if`, `emit_block_while_do` (and `emit_for_loop`),
  `emit_block_do_while`, `emit_block_inf_loop`, `emit_block_switch`, `emit_block_goto`,
  `emit_block_condition` (`&&`/`||` of two condition blocks).
- C statements are produced in `emit_basic_block_ops`: it walks a basic block's ops, drops the ones
  that do not print (suppressed statements, branches under `NO_BRANCH`, ops whose output is implied,
  the elided void tail return, Java filters), and prints each remaining op as one statement through
  `emit_statement` → `emit_expression_ir` → `op_push_ir`, Ghidra's reverse-Polish expression
  printer, which inlines implied varnodes into the expression.
- An `if` header is two walks of its condition block: once with `NO_BRANCH` (the statements before
  the test, printed above the `if`), once with `ONLY_BRANCH` (just the `CBRANCH`, printed inside
  the parentheses). `else if` comes from a lazy "pending brace" in the emitter that is cancelled when
  the else arm's condition block printed nothing.
- C-level decisions taken at print time, each behind its own option:

| Decision | Where it is decided | How the printer applies it |
|---|---|---|
| `iteregion` (diamond → `v = c ? a : b;`), `iteboolean` (`v = a && b;`) | P8 `unlace_iteregion`, `unlace_iteboolean` mark the `CBRANCH` | `emit_block_if` re-matches the diamond: `emit_block_if_ite`, `emit_block_if_bool` |
| `switchmerge` (an if-chain on one value → `switch`) | `unlace_switchmerge::switch_plans`, computed in `emit_function_body` | `emit_block` swaps the `If` for `emit_block_switch` |
| `gotonext` (goto → `break`/`continue`/nothing) | `unlace_gotonext::goto_rewrites`, same place | `emit_goto_statement` and the label filter |
| `voidtailreturn` (no trailing `return;`) | `elidable_void_tail_return`, same place | `emit_basic_block_ops` skips the op |
| `braceelide`, `else if` | `if_body_elides`, the pending brace | in `emit_block_if` |
| for loops | `BlockKind::WhileDo`'s `initialize_op`/`iterate_op` (P8) | `emit_for_loop` |
| `itaniumeh`, `javatry` (`try`/`catch`) | shape matchers called from `emit_block_if` | `emit_eh_try`, `emit_java_try` |
| label names | `assign_label_names` | `block_label_name` |

So the printer is also a rewriter: it holds plans (`switch_plans`, `goto_rewrites`,
`void_tail_return`, `label_names`, `java_new`) and re-matches P8's marks. Each new C-level cleanup
adds another plan or another early return in `emit_block_if`, and each has to reproduce the
pending-brace and comment handling by hand (`emit_block_if_bool` and `emit_block_if_ite` copy it).

## 3. The proposed tree

A per-function arena built from the final structured graph, owned by the printer for one
`doc_function` call. Nodes are indices into two `Vec`s; there is no pointer graph.

```rust
pub struct CTree {
    stmts: Vec<Stmt>,
    exprs: Vec<Expr>,
    root: StmtId,
    maturity: CMaturity,
}

pub struct Stmt {
    kind: StmtKind,
    /// The structured block it was built from: markup, comments, labels and the
    /// fallback printer all key on it.
    origin: Option<BlockId>,
}

pub enum StmtKind {
    /// A `BlockList` or `BlockGraph`: statements in order.
    Seq(Vec<StmtId>),
    /// A basic-block leaf whose statements the printer still selects from the ops.
    Ops { leaf: BlockId },
    /// One statement: an op printed by the existing expression printer, or a
    /// built expression (an assignment, a call).
    Expr(ExprId),
    /// `pre` holds the statements printed above the test (Ghidra's NO_BRANCH walk).
    If { pre: Option<StmtId>, cond: ExprId, then: StmtId, els: Option<StmtId> },
    While { pre: Option<StmtId>, cond: ExprId, body: StmtId },
    DoWhile { body: StmtId, cond: ExprId },
    For { init: OpId, cond: ExprId, step: OpId, body: StmtId },
    Loop { body: StmtId },
    Switch { block: BlockId, cases: Vec<Case> },
    Goto { target: BlockId, kind: GotoKind }, // goto, break, continue
    Return(Option<ExprId>),
    /// Anything the builder does not model yet: printed by `emit_block(origin)`.
    Opaque,
}

pub enum ExprKind {
    /// An op-rooted expression, printed by `op_push_ir` exactly as today.
    Op(OpId),
    /// The branch test of a condition block (a `CBRANCH`, or a `BlockCondition`
    /// chain), printed by the ONLY_BRANCH walk exactly as today.
    Branch(BlockId),
    Not(ExprId),
    And(ExprId, ExprId),
    Or(ExprId, ExprId),
    Ternary(ExprId, ExprId, ExprId),
    Assign { dest: VarnodeId, value: ExprId },
    Const { value: u64, size: u32 },
}
```

- **Expressions stay where they are.** Ghidra's expression printer (reverse Polish over ops, implied
  varnodes, the cast and language planes, 17k lines of `printc.rs`) is the most Ghidra-faithful part
  of the output and the part the datatests pin hardest. The tree does not re-express it: an
  expression leaf names its root op (`Op`) or condition block (`Branch`), and the printer prints it
  with the code it uses today. Only the few expression shapes the statement rewrites create (`!`,
  `&&`, `||`, `?:`, an assignment of one, a constant) are tree nodes. A real `cexpr_t`-style
  expression tree, with casts and `CMAT_CASTED`-like levels, is a later and separate decision.
- **Built from** `fd.sblocks_ref()` from the root, one node per structured block: `Ls`/`Graph` →
  `Seq`, `Copy`/`Basic` → `Ops`, `If` → `If` (condition block → `pre` + `Branch`; an
  if-goto → `If` whose `then` is a `Goto`), `WhileDo` → `While` or `For`, `DoWhile`, `InfLoop`
  → `Loop`, `Goto` → `Seq` + `Goto`, `Switch` → `Switch`; `MultiGoto` and everything not yet
  modelled → `Opaque`. HighVariables are already merged and named when printing starts (§0.10
  `merged`); the tree refers to varnodes and ops, and variable names keep coming from the printer.
- **What stays in PrintC**: all text. Tokens, spacing, braces and `braceelide`, the `else if`
  collapse, comments (`commsorter` stays keyed by the leaf's basic block), markup and statement
  provenance (keyed by the origin op/block), output-language forms, declarations, casts. The printer
  becomes a walk over `StmtKind` that calls the same emit routines it calls now.
- **Not used for flat printing** (`flat`: the unstructured dump of basic blocks with gotos), which
  keeps walking `bblocks`.

## 4. What moves into the tree

**Existing print-time decisions** become rewrites from one tree to another, each keeping its option
name, default and log line:

- `iteregion` / `iteboolean`: `If { then: v = a, els: v = b }` → `Expr(Assign(v, Ternary(c, a, b)))`
  or `Assign(v, c)` / `Assign(v, Not(c))`. The P8 mark can stay as the switch that enables the
  rewrite; the re-match in `emit_block_if` and the two copied if-printers go away.
- `switchmerge`: the if-chain → `Switch`; `gotonext`: `Goto.kind` and the dropped labels;
  `voidtailreturn`: drop the final `Return`; label naming: a pass over `Goto` targets.
- Later: the `try` shapes (`itaniumeh`, `javatry`) as a `Try` node, and Go's suppressed labels.

**Stays in P8** (block-graph structuring, which changes control flow and feeds back into analysis):
`condfold`, `condstmts` (its re-analysis feedback is a structuring decision), `looprotate`,
`guardedloop`, `crossjump*`, `taildup`, `dedupitetail`, `gotosink`, `outline`.

**The backlog issues:**

- **#8, no-return arm first**: `if (c) { A } else { B; noreturn(); }` → `if (!c) { B; noreturn(); } A`.
  On the tree the precondition is direct (the arm's last statement never falls through: a `Return`,
  a `Goto`, or a call to a no-return function) and the rewrite is a node swap plus `Not`. The current
  prototype is a tie-break inside the structurer; the tree version also covers return arms. It needs
  `Not(Branch)` to print the way the structurer's own flip does (§8).
- **#9, `return c`**: `If { then: Return(1), els: Return(0) }` → `Return(c)` (`Return(Not(c))` for
  `0`/`1`), `c ? A : B` for other cheap pure values, then `c ? x : 1` → `!c || x`. This needs leaves
  split into statements (level `statements`, §5), since it inspects what an arm prints.
- **#10, `&&`/`||` chains**: the under-fold sub-bucket is a tree rewrite: `If { c1, If { c2, X } }`
  with no `pre` on the inner `if` and no `else` on either → `If { And(c1, c2), X }`, and
  `if (a) S; if (b) S;` with equal arms that do not fall through → `if (a || b) S;`. Calls folded into
  conditions and split float compares are expression or dataflow problems; they stay out of the tree.

## 5. Maturity

The function-level levels of §0.10 (`crates/unlace-middle/src/substrate/maturity.rs`) end at
`complete`, and the tree is only built after it: the builder asserts
`debug_assert_settled!(fd, BlockStructure)` and `debug_assert_settled!(fd, Casts)`. The tree then has its own
level, `CMaturity`, which only rises. Unlike the function's level it never drops back: printing
never restarts analysis, and a new print builds a new tree.

| Level | Reached when | Hex-Rays analogue |
|---|---|---|
| `built` | the tree mirrors the block tree, one node per block | `CMAT_BUILT` |
| `statements` | each leaf is split into the statements it prints (`Ops` → `Seq` of `Expr`/`Return`) | `CMAT_TRANS1` |
| `rewritten` | the structural rewrites ran (`iteregion`, `iteboolean`, `switchmerge`, `gotonext`, #8, #9, #10) | `CMAT_TRANS2`/`CMAT_TRANS3` |
| `final` | the tail of the function and labels are settled (`voidtailreturn`, label names) | `CMAT_FINAL` |

A rewrite states the level it needs the same way the actions do (`debug_assert!(tree.maturity() >= ...)`).
`phase status` in the console can print the tree's level next to the function's.

## 6. Introducing it with no output change

1. A named option `ctree` (`off|on`, default `off`, P9) selects the printer path. Off is today's
   code, untouched.
2. `built` only: the builder mirrors the block tree, and the tree printer handles `Seq`, `Ops` and
   plain `If` itself (calling the same routines `emit_block_if` calls) and prints everything else,
   including every `If` with a special form (`try`, `iteregion`, `iteboolean`, a switch plan), as
   `Opaque` through `emit_block(origin)`. Each later PR moves one node kind from `Opaque` into the tree.
3. The proof, before any default changes: the datatest corpus and the stage corpus with
   `--option ctree on` against their baselines (0 moved assertions), and a real-binary run (DecBench
   slice, coreutils) printed with `ctree off` and `on` and diffed byte for byte, including the
   markup and token-provenance outputs.
4. Then each existing decision in section 4 moves into a rewrite, one per PR, proven the same way,
   still with `ctree off` as the default.
5. When the whole tree path is byte-identical, `ctree` turns on by default (speed budget measured),
   the block path is deleted, and the `ctree` option is retired. It is a migration switch, not a
   judgement call, so it does not stay in the catalog. New rewrites (#8, #9, #10) ship behind their
   own options and are built on the tree only.

## 7. Where it lives

A new crate, `crates/unlace-ctree`, between the structure band and the emit band:

```
unlace-middle ─┬─ unlace-structure ─┐
               ├─ unlace-bandb...   ├─ unlace-ctree ── unlace-emit ── unlace-decomp
               └────────────────────┘
```

- `unlace-ctree` owns the types, the builder, `CMaturity` and the rewrites, and depends on
  `unlace-middle` (blocks, ops, maturity) and `unlace-structure` (the `iteregion`/`iteboolean`
  matchers and the `switchmerge`/`gotonext` plans the rewrites take over). It never depends on
  `unlace-emit`.
- `unlace-emit` depends on it; the tree printer is a `printc/` submodule (like
  `printc/cpoolprint.rs`), since it calls PrintC's private emit routines.
- Some rewrites need to know what a leaf prints (`ops_print_nothing`, `is_suppressed_statement`, the
  implied-varnode filter). Those predicates move down into `unlace-ctree` when the `statements` level
  is built, as one function both paths call, so they cannot drift apart. Ones that read printer state
  (`oslog_hidden`, the Java filters) become inputs to the builder.
- The crate boundary enforces the layering, so `scripts/check_layers.py` needs no new band; the
  `unlace-decomp` facade reaches the crate through `unlace-emit`'s re-exports.

## 8. Risks

- **Ghidra-faithful printing.** The datatests pin Ghidra's exact text: the pending-brace `else if`
  rule, comment placement, label lines, the `NO_BRANCH`/`ONLY_BRANCH` split of a condition block.
  The `pre` field keeps that split explicit rather than re-deriving it, and nothing leaves `Opaque`
  without the byte-identical proof in section 6.
- **Negation.** Ghidra prints a flipped branch by flipping the comparison (`a >= b`), not as
  `!(a < b)`. `Not(Branch)` must print through the same flip, or #8 and #10 change unrelated text.
- **Option surface.** Every existing option keeps its name, values, default and log line when its
  mechanism moves into the tree; the catalog and `docs/options.md` only gain `ctree` for the
  migration. A rewrite that is a judgement call (`iteregion`, #8) stays an option; the tree is not one.
- **Speed.** The tree is one arena per printed function, O(blocks + statements), next to the
  reverse-Polish printing that dominates P9. It is measured against the speed budget before `ctree`
  becomes the default.
- **Two printers during the migration.** Until the block path is deleted, a printer fix has to land
  in the shared emit routines, not in one walk. Keeping the tree printer a thin dispatcher over those
  routines is what keeps the two paths from drifting.

## 9. Order of work

1. This document.
2. `unlace-ctree`: the types, `CMaturity` and the builder at `built` (no callers).
3. The `ctree` option (`phases.toml` row and dispatch, default `off`).
4. The tree printer for `Seq`, `Ops` and plain `If`, `Opaque` for the rest, selected by `ctree on`.
5. The corpus proof (section 6.3), then node kinds out of `Opaque` one at a time, then `statements`,
   then the rewrites of section 4.
