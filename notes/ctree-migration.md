# ctree migration: inventory and plan

Goal: one printer. Today the function body prints through a hybrid of the C syntax tree
(`crates/unlace-ctree`, design `docs/architecture/ctree.md`) and the block printer
(`crates/unlace-emit/src/p9_emit/printc.rs`). This note records where each structured block kind
prints today and the order the remaining kinds move into the tree walk.

## The tree was already built for every printed function (before the option was retired)

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

## Proof (2026-11-24, build unlace-ctree1 = main 246fb35c45)

With `option boolreturn off` and `option nestedand off` injected before every `print` command
(`ctree off` vs `ctree on`):

- datatests: 675/675 both ways, identical result lists.
- stage corpus (whole `tests/stages`, 5996 assertions): 5973 pass both ways, identical result
  lists. The 23 failures are the same on both sides; seven are the `BOOLRETURN` assertions the
  injected `boolreturn off` turns off, and the rest fail on unmodified main too (5980/5996).
- `decompile-all` of `/usr/bin/env`, `/usr/bin/cat`, `/usr/bin/sort` (399 functions):
  byte-identical C. A first `sort` run at `--max-fn-seconds 30` differed only because `main`
  and two thunks timed out on one side under load; at 120 s, off and on are identical, and two
  `off` runs are identical to each other.

## Order of work

Done (2026-11-24):

1. #1071: the walk chooses the emitter for every statement kind.
2. #1087: the `ctree` option is retired; every non-flat function prints through the tree
   (proof above).
3. ctree/lists (on main via #1091): a list's elements print from the tree's `Seq` children
   (`emit_list_items`); proof on ctree2 vs bf70f63aff: datatests 675/675 and stage corpus 6007
   passing, identical result lists, `sort`/`indxbib`/`pdfunite` byte-identical.
4. ctree/ehtry (on main via #1091): the itaniumeh `if` try form is a `Try` statement made by
   `ctree_rewrite`.
5. #1097: condition blocks are built as tree statements (marked `CTree::is_condition`), and
   `BlockCondition` and multi-goto blocks are sequences; `emit_block_raw` is reached only for a
   block past the builder's depth bound and in flat printing.
6. #1101: the list-level itaniumeh `try` form is recorded on the list's sequence (`ListTry`).
7. #1105: the enclosing `try`'s own edge comes from the tree (`open_try_pad`), not from
   printer state.
8. #1107: the DEX `try` forms are decided by the rewrite (`JavaTry`, `set_java_list`).

#1097-#1107 were merged edit-only (no build, no measurement, by order of 2026-11-24); each calls
the emitter the block printer called for the same block, and should print the same text.

9. ctree/resttry (edit-only, 2026-11-24): the `itaniumeh` list `try` form of a rest of a list (the
   rest of a switch arm or goto block, `emit_arm_rest`, `emit_block_goto_from` with a skip) is recorded on the tree when it is built into `rewritten`
   (`ctree_rest_tries`, `CTree::set_rest_tries`), one entry per skip, and `list_try_form` reads
   it. Identity by construction: `eh_list_try_match` reads only the function, the output
   language and the block's own list (`is_eh_if`, `eh_pad_start`, `eh_table`, `self.lang()`),
   none of the printer's context or emit state, and the table holds its result on the same slice
   the printer passed. Lists over `MAX_REST_TRIES` (512) and any list with no recorded table
   fall back to the match itself, which gives the same answer. Not yet done: the same for
   `list_java_try` / `list_has_java_try` (the DEX `try` matcher on a rest; it reads
   `java_catches`, printer state, so it needs its own check).

10. ctree/switcharms (edit-only, 2026-11-24): each arm of a `Switch` node gets an `ArmRecord` when the
   tree is rewritten (`ctree_switch_arms`, `CTree::set_switch_arms`), and `emit_block_switch_c`
   reads it through `tree_switch_arm`. Two choices move: the `break` an arm prints on its own
   account (`isexit` and not the last arm; step (1), #1149), and the goto type of a bare-goto arm
   (`case_gototype` when the arm is not a guard and its case has a goto type; step (2), goto
   placement). Both tests read only the block's case, the arm index and the goto plan, which is
   fixed before the tree is rewritten. Not moved, and why:
   - the last arm's `break` when the emitter reports a dangling label (`label_dangling()` is
     emitter output state);
   - the comment block placed before a merged switch's first arm (`emit_comment_block_tree`
     reads the comment sorter);
   - the guard arm's body and the goto statement itself (the printer's goto and block emitters
     write them; the arm is not a tree node yet);
   - label placement (`emit_any_label_statement`): called from about a dozen block emitters in
     the C, Go and Rust printers, and gated by the printer's mode (`ONLY_BRANCH`), so a label
     node would have to reproduce each call site's placement. Not attempted.

11. ctree/javarest (edit-only, 2026-11-24): the DEX `try` test on a rest of a list (`list_java_try`
   with a slice) is recorded per skip on the list sequence when the tree is rewritten
   (`ctree_java_rests`, `CTree::set_java_rests`); the whole-list record (`is_java_list`) is
   unchanged. `list_has_java_try` reads only the function and the Java catch table, which is set
   at the top of `emit_function_document` before the body (and so the tree) is built.

Checked and left as they are (no print-time decision left to move, or not identical by construction):
- break and continue (`emit_goto_statement` and its callers): the goto type of every if-goto and
  goto block the tree holds already comes from the tree (`tree_goto_type`, set by
  `ctree_take_plans`). The fallback `goto_rewrites.gototype` only runs when the tree holds no
  statement for the block (past the depth bound, or no tree), and the `while` form's `break` is a
  fixed flag.
- tail return (`voidtailreturn`): the op is already removed from the one leaf that holds it in the
  tree (`ctree_take_plans`). The print-time check in `emit_basic_block_ops_in` only runs for a leaf
  with no statement list in the tree (past the depth bound, a leaf over `MAX_LEAF_OPS`, or no tree).
  returndup and switchreturn are structuring-phase transforms (`unlace-structure`), not print-time
  decisions, so nothing in the printer moves for them.
- label placement inside a rest (`emit_any_label_statement`): see item 10.

What still matches while printing: the DEX `try` matcher on a rest of a list (`list_has_java_try`
for a slice), and any block the tree holds no statement for (past the depth bound) runs every
matcher itself.

Left as is, and why (no output change, but not identical by construction without a run):
- `Opaque` nodes (ctreebuild.rs): depth bound, zero-component loops/gotos, short if/while, and
  `BlockType::Plain`. Making `Plain` a `Seq` changes what `folded_return` (filters empty
  `Seq` children) and `fold_return_run` (counts children) see; needs a stage-corpus run.
- `switch_plans.ifs.contains_key` in the rewrites (ctreeprint.rs, `boolreturn` matchers): read at
  rewrite time, not print time; replacing them with `switch_of` differs when a later rewrite
  turns a switch-merged node's statement into an empty sequence (`fold_return_run`).

Left as is, on purpose: the per-kind emitters (`emit_block_if`, `emit_block_while_do`, the
switch, loop and goto printers and their Rust/Go variants) still take the statement's origin
block and read their components through the tree (`emit_part`, `emit_block` -> `node_for`).
Changing their signatures to take a `StmtId` would only move the `origin` lookup into each one,
while the block-based entry is still needed for flat printing and for subtrees past the depth
bound. The next real step is building leaf conditions and switch arms as tree expressions
(`ExprKind`) so the `NO_BRANCH`/`ONLY_BRANCH` split stops being a printer mode.
