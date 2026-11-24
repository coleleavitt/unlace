//! Tests moved out of `block` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::block::*;
use crate::context::BlockId;
use crate::op::PcodeOp;
use slotmap::SlotMap;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::address::RangeList;
use unlace_base::error::UnlaceError;
use unlace_base::error::UnlaceResult;
use unlace_base::marshal::ATTRIB_INDEX;
use unlace_base::marshal::ATTRIB_TYPE;
use unlace_base::marshal::AttributeId;
use unlace_base::marshal::Decoder;
use unlace_base::marshal::ELEM_TARGET;
use unlace_base::marshal::ElementId;
use unlace_base::marshal::Encoder;
use unlace_base::marshal::PackedDecode;
use unlace_base::marshal::PackedEncode;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_base::types::uint4;
use unlace_num::opcodes::OpCode;
use unlace_num::opcodes::get_opname;

fn case_order(block: BlockId, gototype: uint4) -> CaseOrder {
    CaseOrder {
        block,
        basicblock: None,
        label: 0,
        depth: 0,
        chain: -1,
        outindex: 0,
        gototype,
        isexit: false,
        isdefault: false,
    }
}

/// A switch arm whose edge stayed unstructured prints its own `goto`, so its
/// target still needs a label.
#[test]
fn switch_case_goto_is_a_label_reference() {
    use crate::gotolabel::referenced_goto_targets;
    let mut g = BlockGraph::new();
    let root = g.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    g.root = Some(root);
    let target = g.new_block(root);
    let structured = g.new_block(root);
    let sw = g.arena.insert(FlowBlock::new_kind(BlockKind::Switch {
        caseblocks: vec![
            case_order(target, block_flags::f_goto_goto),
            case_order(structured, 0),
        ],
        jt_index: 0,
    }));
    g.add_block(root, sw);

    let refs = referenced_goto_targets(&g, root);
    assert!(
        refs.contains(&target),
        "an unstructured case arm references its target"
    );
    assert!(
        !refs.contains(&structured),
        "a structured case arm prints its body, not a goto"
    );
}

/// A `BlockMultiGoto`'s virtual edges are label references too.
#[test]
fn multigoto_edge_is_a_label_reference() {
    use crate::gotolabel::referenced_goto_targets;
    let mut g = BlockGraph::new();
    let root = g.arena.insert(FlowBlock::new_kind(BlockKind::Graph));
    g.root = Some(root);
    let target = g.new_block(root);
    let mg = g.arena.insert(FlowBlock::new_kind(BlockKind::MultiGoto {
        gotoedges: vec![target],
        defaultswitch: false,
    }));
    g.add_block(root, mg);

    assert!(referenced_goto_targets(&g, root).contains(&target));
}
