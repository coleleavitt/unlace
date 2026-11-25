use super::*;
use crate::block::FlowBlock;

fn leaf(graph: &mut BlockGraph, root: BlockId) -> BlockId {
    let basic = graph.arena.insert(FlowBlock::new());
    graph.new_block_copy(root, basic)
}

fn jump(graph: &mut BlockGraph, root: BlockId, target: BlockId) -> BlockId {
    let source = leaf(graph, root);
    graph.add_edge(source, target);
    graph.new_block_goto(root, source)
}

#[test]
fn only_unbounded_loops_without_nested_cycles_are_refined() {
    for variant in [
        "retry",
        "head-test",
        "latch-test",
        "nested",
        "switch",
        "multi-entry",
        "irreducible",
    ] {
        let mut graph = BlockGraph::new();
        let root = graph.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
        let entry = graph.new_block(root);
        let head = graph.new_block(root);
        let condition = graph.new_block(root);
        let retry = graph.new_block(root);
        let tail = graph.new_block(root);
        let exit = graph.new_block(root);
        graph.add_edge(entry, head);
        graph.add_edge(head, condition);
        graph.add_edge(condition, retry);
        graph.add_edge(condition, tail);
        graph.add_edge(retry, head);
        graph.add_edge(tail, head);
        match variant {
            "head-test" => graph.add_edge(head, exit),
            "latch-test" => graph.add_edge(tail, exit),
            "nested" => graph.add_edge(condition, condition),
            "switch" => graph
                .block_mut(condition)
                .set_flag(block_flags::f_switch_out),
            "multi-entry" => {
                let extra = graph.new_block(root);
                graph.add_edge(entry, extra);
                graph.add_edge(extra, head);
            }
            _ => {}
        }
        graph.set_start_block(root, entry);
        let mut roots = Vec::new();
        graph.structure_loops(root, &mut roots);
        graph.calc_forward_dominator(root, &roots);
        if variant == "irreducible" {
            graph.set_out_edge_flag(condition, 0, crate::block::edge_flags::f_irreducible);
        }
        for (index, id) in [entry, head, condition, retry, tail, exit]
            .into_iter()
            .enumerate()
        {
            graph.block_mut(id).set_index(index as i32);
        }
        refine_latches(&mut graph, root);
        assert_eq!(
            graph.block(retry).is_goto_out(0),
            variant == "retry",
            "{variant}"
        );
        assert!(!graph.block(tail).is_goto_out(0), "{variant}");
    }
}

#[test]
fn continue_requires_the_infinite_loop_head() {
    let mut graph = BlockGraph::new();
    let root = graph.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    let head = leaf(&mut graph, root);
    let middle = leaf(&mut graph, root);
    let restart = jump(&mut graph, root, head);
    let skip = jump(&mut graph, root, middle);
    let body = graph
        .new_block_list(root, &[head, middle, restart, skip])
        .unwrap();
    graph.new_block_inf_loop(root, body);
    recover_continues(&mut graph, root, &BTreeMap::new());
    assert_eq!(
        graph.block(restart).get_goto_type(),
        block_flags::f_continue_goto
    );
    assert_eq!(graph.block(skip).get_goto_type(), block_flags::f_goto_goto);
}

#[test]
fn nested_loop_does_not_continue_the_outer_loop() {
    let mut graph = BlockGraph::new();
    let root = graph.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    let outer_head = leaf(&mut graph, root);
    let inner_head = leaf(&mut graph, root);
    let outer_jump = jump(&mut graph, root, outer_head);
    let inner_jump = jump(&mut graph, root, inner_head);
    let inner_body = graph
        .new_block_list(root, &[inner_head, outer_jump, inner_jump])
        .unwrap();
    let inner = graph.new_block_inf_loop(root, inner_body);
    let outer_body = graph.new_block_list(root, &[outer_head, inner]).unwrap();
    graph.new_block_inf_loop(root, outer_body);
    recover_continues(&mut graph, root, &BTreeMap::new());
    assert_eq!(
        graph.block(outer_jump).get_goto_type(),
        block_flags::f_goto_goto
    );
    assert_eq!(
        graph.block(inner_jump).get_goto_type(),
        block_flags::f_continue_goto
    );
}

#[test]
fn conditional_loop_head_jump_keeps_its_condition_semantics() {
    let mut graph = BlockGraph::new();
    let root = graph.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    let head = leaf(&mut graph, root);
    let restart = jump(&mut graph, root, head);
    let body = graph.new_block_list(root, &[head, restart]).unwrap();
    graph.new_block_do_while(root, body);
    recover_continues(&mut graph, root, &BTreeMap::new());
    assert_eq!(
        graph.block(restart).get_goto_type(),
        block_flags::f_goto_goto
    );
}
