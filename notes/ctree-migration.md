# ctree migration: inventory and plan

Goal: one printer. Today the function body prints through a hybrid of the C syntax tree
(`crates/unlace-ctree`, design `docs/architecture/ctree.md`) and the block printer
(`crates/unlace-emit/src/p9_emit/printc.rs`). This note records where each structured block kind
prints today and the order the remaining kinds move into the tree walk.

## The tree is already built for every printed function

`emit_function_body` (`printc.rs`, `tree_on`) builds the tree when any of `ctree`,
`boolreturn`, `noretfirst`, `nestedand`, `retternary` or `orexit` is on, and not in flat
printing. `boolreturn` and `nestedand` ship on, so with default options the tree is built,
split to `statements`, rewritten, and the body prints from it. `option ctree on` changes nothing
under default options. It only matters when all five rewrite options are off: then `ctree off`
prints through `emit_block_graph` with no tree, and `ctree on` prints the same text through the
tree path.

Consequence for the proof runs: `ctree on` vs `off` must be compared with
`option boolreturn off` and `option nestedand off` injected on both sides, or both sides print
through the tree.

## How the two paths meet

- `emit_ctree_body` (`printc/ctreeprint.rs`) prints the root `Seq`'s children.
- `emit_block(blk)` first asks the tree (`emit_ctree_block` -> `node_for(blk)` ->
  `emit_ctree_stmt`); when the walk does not model the statement, `emit_block_raw(blk)` dispatches
  on `BlockType` to the block printer.
- The block printers take their components through `emit_part(blk, k)` (`CTree::part`), so a
  component comes back through the tree.
- Condition blocks are printed by the block printer under `NO_BRANCH` (statements before the test)
  and `ONLY_BRANCH` (the test): the tree holds them as `Opaque` `pre` statements and
  `ExprKind::Branch` expressions.

## Inventory

| Structured block | Tree node (`ctreebuild.rs`) | Printed by today | Components |
|---|---|---|---|
| `BlockGraph` (root and nested) | `Seq` | tree walk (`emit_ctree_stmt`, `emit_ctree_body`) | children through the tree |
| `BlockCopy` / `BlockBasic` leaf | `Ops` -> `Stmts` at `statements` | tree walk (`emit_block_copy_in`, `emit_basic_block_ops_in`) | - |
| folded-away statement | `Seq([])` | tree walk (prints nothing) | - |
| `BlockList` (`Ls`) | `Seq` | block printer `emit_block_ls` -> `emit_block_list` (eh `try` split, Java `try`, one-element list, `NO_BRANCH` on all but the last, `ONLY_BRANCH` prints the last) | `emit_block(list[k])` |
| `BlockIf` | `If` (`pre` Opaque cond, `Branch` cond, `then`, `els`); if-goto: `then` = `Goto` | block printer `emit_block_if`: Java `try`, itaniumeh `try`/pad, `ite_form` (`iteboolean`/`iteregion` -> `emit_block_if_bool`/`emit_block_if_ite`), `return_form` (`boolreturn`/`retternary` -> `emit_block_if_return`), `and_condition` (`nestedand`/`orexit`), `hoisted_after` (`noretfirst`), pending-brace `else if`, `braceelide`, goto/break/continue via `tree_goto_type` | `emit_part(1)`, `emit_part(2)` |
| `BlockIf` merged into a switch (`switchmerge`) | `SwitchOf` (after `ctree_take_plans`) | block printer `emit_block_switch(switch_of(blk))` | switch arms |
| `BlockWhileDo` | `While` / `For` (init + iterate ops) | block printer `emit_block_while_do` -> `_c` (overflow `while(true)` form, `emit_for_loop`) / `_rust` / `_go` | `emit_part(1)` |
| `BlockDoWhile` | `DoWhile` | block printer `emit_block_do_while` -> `_c` (`guardedloop` top-tested form `emit_block_top_tested_c`) / `_rust` / `_go` | `emit_part(0)` |
| `BlockInfLoop` | `Loop` | block printer `emit_block_inf_loop` -> `_c` / `_rust` / `_go` | `emit_part(0)` |
| `BlockSwitch` | `Switch { parts }` | block printer `emit_block_switch` -> `_c` (`switch_arms` plans, case labels, `break`, goto arms, `emit_arm_rest`) / `emit_block_match_rust` / `_go` | `emit_block(case)` |
| `BlockGoto` | `Seq([body, Goto])` | block printer `emit_block_goto` -> `emit_block_goto_from` (`gotonext` via `tree_goto_type`) | `emit_part(0)` |
| `BlockCondition` | not built (reached only as a condition: `Opaque` `pre`) | block printer `emit_block_condition` | `emit_block` |
| `BlockMultiGoto` and anything else | `Opaque` | block printer fallback loop in `emit_block_raw` | `emit_block` |
| labels | - | `emit_any_label_statement`, names from `assign_label_names` | - |
| `return` from a rewrite | `Return` | `emit_block_if` -> `emit_block_if_return` | - |

Rewrites already on the tree (`ctree_rewrite`): `iteboolean`, `iteregion`, `boolreturn`
(`fold_return_run`, `fold_return_ite`), `retternary`, `noretfirst`, `nestedand`, `orexit`,
and the `switchmerge`/`gotonext` plans (`ctree_take_plans`).

## Order of work

1. The walk dispatches every statement kind: `emit_ctree_stmt` owns the choice of emitter for
   every kind (`If`, `SwitchOf`, `Return`/`Expr` from an `if` rewrite, `While`, `For`,
   `DoWhile`, `Loop`, `Switch`, `Seq` of a list or goto block, `Opaque` condition), calling the
   emitter `emit_block_raw` would call. Only `Opaque` statements (condition and multi-goto blocks)
   and functions printed without a tree reach `emit_block_raw`. Identical output by construction.
2. Proof run on a branch build: datatests and the whole stage corpus with
   `option boolreturn off` + `option nestedand off` injected, `ctree` off vs on (pass sets
   equal), plus real binaries printed both ways and diffed.
3. `ctree` default on (no change under default options; see above).
4. Retire the `ctree` option: the tree is built for every non-flat printed function, the
   no-tree `emit_block_graph` path stays only for flat printing.
5. Later, statement by statement: lists print from the tree's `Seq` children instead of
   `get_list()`, and the print-time matchers left in `emit_block_if` (Java `try`, itaniumeh) move
   into tree rewrites (`docs/architecture/ctree.md` §4).
