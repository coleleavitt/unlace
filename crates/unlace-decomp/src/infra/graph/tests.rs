use super::*;

#[test]
fn input_range_special_cases() {
    // Normal op: full input range.
    assert_eq!(input_range(OpCode::CPUI_INT_ADD, 2), (0, 2));
    // LOAD/STORE/BRANCH/CALL skip input 0.
    assert_eq!(input_range(OpCode::CPUI_LOAD, 2), (1, 2));
    assert_eq!(input_range(OpCode::CPUI_STORE, 3), (1, 3));
    assert_eq!(input_range(OpCode::CPUI_BRANCH, 1), (1, 1));
    assert_eq!(input_range(OpCode::CPUI_CALL, 1), (1, 1));
    // INDIRECT keeps only input 0.
    assert_eq!(input_range(OpCode::CPUI_INDIRECT, 2), (0, 1));
}

#[test]
fn controlflow_graph_preamble_shape() {
    // An empty block graph still emits the full Renoir preamble; this pins
    // the verbatim header text and the empty-graph edge/vertex framing.
    let graph = BlockGraph::new();
    let mut s = String::new();
    dump_controlflow_graph("myfunc", &graph, &mut s);
    assert!(s.starts_with("*CMD=NewGraphWindow, WindowName=myfunc-controlflow;\n"));
    assert!(s.contains("*CMD=*NEXUS,Name=myfunc-controlflow;\n"));
    assert!(s.contains("EnableAutomaticArrangement=true,\n"));
    assert!(s.contains("Command=AddVertices,\n"));
    assert!(s.contains("Command=AddEdges,\n"));
    // No false node for an empty graph.
    assert!(!s.contains("-1 0 0 -1 0 0\n"));
    // Two *END_COLUMNS (vertex pass + edge pass).
    assert_eq!(s.matches("*END_COLUMNS\n").count(), 2);
}

#[test]
fn dom_graph_no_falsenode_when_empty() {
    // count of dom-less blocks is 0 for an empty graph, so falsenode stays
    // false and the dom preamble omits the synthetic -1 root vertex.
    let graph = BlockGraph::new();
    let mut s = String::new();
    dump_dom_graph("f", &graph, &mut s);
    assert!(s.starts_with("*CMD=NewGraphWindow, WindowName=f-dom;\n"));
    assert!(!s.contains("-1 0 0 -1 0 0\n"));
}

#[test]
fn default_varnode_markup_uses_shortcut() {
    use std::rc::Rc;
    use unlace_base::space::{AddrSpace, addrspace_flags, spacetype};
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    let a = Address::new(ram, 0x1234);
    let markup = default_varnode_markup(&a);
    // Shortcut char of a processor space, then the raw offset rendering.
    assert!(!markup.is_empty());
    assert!(markup.contains("1234"));
}
