# gotolabel — implementation plan

## 1. The change

**`p8_structure/gotolabel.rs` (new).** One carrier census shared by the
three tail-duplication passes:

```rust
pub(crate) fn referenced_goto_targets(graph: &BlockGraph, root: BlockId) -> BTreeSet<BlockId>
pub(crate) fn release_converted_labels(data: &mut Funcdata, converted: &[BlockId])
```

`referenced_goto_targets` walks the structured tree and collects every carrier of
an unstructured edge: a `BlockGoto` target, a `BlockIf` goto target, a
`BlockSwitch` case arm whose `gototype` is `f_goto_goto`, and each
`BlockMultiGoto` `gotoedges` entry. `release_converted_labels` resolves both
sides to **front leaves** before comparing, because that is where the label flag
lives. `gotoreduce.rs`, `taildup.rs` and `crossjumpreverter.rs`
each drop their private copy and call it.

**`substrate/block.rs (BlockGraph::mark_unstructured)`.** A `BlockGoto`'s target
is marked whenever the node is a real goto, without the `goto_prints()` gate:
unlace's `printc.rs (PrintC::emit_block_goto)` emits the trailing goto
unconditionally, so the mark must be at least as wide as the print. The
redundant goto itself is left alone — suppressing a statement is a structuring
decision, not a label fix, and would change functions that have no defect.

## 2. Why no option

A `goto` without its label is invalid C, not a judgement call, and every arm of
the fix is one-directional (it keeps or adds a label, never removes one). The
classified corpus diff is the proof obligation: only functions that carried an
orphan goto may change.

## 3. Tests

* `substrate/block/tests.rs`: the census reports a `f_goto_goto` switch arm and a
  `BlockMultiGoto` edge and ignores a structured case arm; `mark_unstructured`
  labels a goto target that is the next block in flow.
* `tests/cli/emitted-goto-keeps-its-label.json`: `unlace decompile
  decompiler/crates/unlace-analysis/tests/fixtures/datasyms_faillog_x86_64 0x2620
  --addr` must print both `goto label_2701;` and `label_2701:` (before the fix
  the label line is absent).
* No stage test: the shape needs a switch arm *plus* a duplicable call-bearing
  return tail in one function, which no bytechunk in the corpus carries; the
  in-repo fixture probe covers it end to end instead.
