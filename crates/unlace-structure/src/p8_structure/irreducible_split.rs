//! (unlace, from original unlace `node_split` / `irreducible.rs`) Controlled node splitting of
//! irreducible loops, option `irreduciblesplit on|off` (default-OFF).
//!
//! A strongly connected region with more than one entry block is irreducible: no natural loop
//! header dominates it, so the structurer can only print it with a `goto`. Such a region is made
//! reducible by duplicating an entry block for one external predecessor. The duplicate keeps the
//! entry's out-edges and takes that one in-edge, so the region loses one entry per split.
//!
//! Regions are searched recursively. A region with one entry is reducible: its back edges (the
//! edges into that entry) are set aside and the strongly connected regions left inside it are
//! searched in turn, so a multi-entry loop nested in a reducible outer loop is found.
//!
//! The duplication is the existing [`Funcdata::node_split_through`] primitive for an entry with one
//! out-edge, or [`Funcdata::node_split_through_cbranch`] for an entry ending in a two-way
//! conditional branch (both primitives are also driven by other passes). Each inherits its safety
//! checks: no call, no tied output, and no output read outside the two blocks except through a
//! successor's MULTIEQUALs or a merge it inserts. An entry that fails a check is left alone and the
//! next candidate is tried. Each split is logged as an `irreduciblesplit:` warning, and the pass
//! runs at most [`MAX_IRREDUCIBLE_SPLITS`] times per function.
//!
//! Gated by `option irreduciblesplit on|off` (`IrreducibleSplit`, shipped off): the copy grows the
//! code, so it is a judgement call; when off the pass returns at once and output is unchanged.

use std::collections::{BTreeMap, BTreeSet};

use unlace_base::types::int4;

use crate::action::{Action, ActionBase, ActionContext, ActionGroupList, ApplyResult};
use crate::context::BlockId;
use crate::funcdata::Funcdata;

/// Most entry-block duplications the pass performs per function.
pub const MAX_IRREDUCIBLE_SPLITS: int4 = 16;

/// Deepest nesting of single-entry regions the search descends through.
const MAX_REGION_DEPTH: usize = 32;

crate::unlace_flag!(
    /// The `irreduciblesplit on|off` ArchOption (controlled node splitting of irreducible loops).
    IrreducibleSplit,
    "irreduciblesplit",
    "Controlled node splitting of irreducible loops",
    unset: false,
    shipped: false
);

/// Split entry blocks of irreducible loop regions (`option irreduciblesplit`).
pub struct ActionIrreducibleSplit {
    base: ActionBase,
}

impl ActionIrreducibleSplit {
    /// Construct in group `g`.
    pub fn boxed(g: impl Into<String>) -> Box<dyn Action> {
        Box::new(ActionIrreducibleSplit {
            base: ActionBase::new(0, "irreduciblesplit", g),
        })
    }
}

impl Action for ActionIrreducibleSplit {
    fn base(&self) -> &ActionBase {
        &self.base
    }
    fn base_mut(&mut self) -> &mut ActionBase {
        &mut self.base
    }
    fn clone_filtered(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Action>> {
        if !grouplist.contains(self.get_group()) {
            return None;
        }
        Some(Box::new(ActionIrreducibleSplit {
            base: self.base.clone(),
        }))
    }
    fn apply(&mut self, data: &mut Funcdata, _ctx: &mut ActionContext) -> ApplyResult {
        if !data.get_arch().unlace_options.get::<IrreducibleSplit>().0 {
            return 0;
        }
        let changes = irreducible_split_apply(data, MAX_IRREDUCIBLE_SPLITS);
        if changes > 0 {
            let name = data.get_name().to_string();
            data.warning_header(&format!(
                "irreduciblesplit: split {changes} irreducible entry block(s) in {name}"
            ));
        }
        self.base_mut().count += changes;
        0
    }
}

/// Strongly connected regions of the given blocks that contain a cycle (more than one block), each
/// sorted by block id. Edges in `ignored` are treated as absent. Tarjan's algorithm, iterative so a
/// long chain cannot overflow the stack.
fn cyclic_regions(
    data: &Funcdata,
    nodes: &[BlockId],
    ignored: &BTreeSet<(BlockId, BlockId)>,
) -> Vec<Vec<BlockId>> {
    let index_of: BTreeMap<BlockId, usize> =
        nodes.iter().enumerate().map(|(i, &b)| (b, i)).collect();
    let graph = data.bblocks_ref();
    let succs: Vec<Vec<usize>> = nodes
        .iter()
        .map(|&b| {
            let blk = graph.block(b);
            (0..blk.size_out())
                .map(|i| blk.get_out(i))
                .filter(|t| !ignored.contains(&(b, *t)))
                .filter_map(|t| index_of.get(&t).copied())
                .collect()
        })
        .collect();
    let n = nodes.len();
    let unseen = usize::MAX;
    let mut index = vec![unseen; n];
    let mut low = vec![0usize; n];
    let mut on_stack = vec![false; n];
    let mut stack: Vec<usize> = Vec::new();
    let mut counter = 0usize;
    let mut regions: Vec<Vec<BlockId>> = Vec::new();
    for start in 0..n {
        if index[start] != unseen {
            continue;
        }
        let mut work: Vec<(usize, usize)> = vec![(start, 0)];
        index[start] = counter;
        low[start] = counter;
        counter += 1;
        stack.push(start);
        on_stack[start] = true;
        while let Some(&(v, ei)) = work.last() {
            if ei < succs[v].len() {
                if let Some(top) = work.last_mut() {
                    top.1 += 1;
                }
                let w = succs[v][ei];
                if index[w] == unseen {
                    index[w] = counter;
                    low[w] = counter;
                    counter += 1;
                    stack.push(w);
                    on_stack[w] = true;
                    work.push((w, 0));
                } else if on_stack[w] {
                    low[v] = low[v].min(index[w]);
                }
                continue;
            }
            work.pop();
            if low[v] == index[v] {
                let mut comp: Vec<BlockId> = Vec::new();
                while let Some(w) = stack.pop() {
                    on_stack[w] = false;
                    comp.push(nodes[w]);
                    if w == v {
                        break;
                    }
                }
                if comp.len() > 1 {
                    comp.sort_unstable();
                    regions.push(comp);
                }
            }
            if let Some(&(parent, _)) = work.last() {
                low[parent] = low[parent].min(low[v]);
            }
        }
    }
    regions.sort_unstable();
    regions
}

/// Look for one split in the strongly connected regions of `nodes`, with the edges in `ignored` set
/// aside. A multi-entry region is split when one of its entries can be. A single-entry region is
/// reducible, so its back edges are set aside and the regions inside it are searched in turn. Returns
/// true when a split was made.
fn split_one_region(
    data: &mut Funcdata,
    nodes: &[BlockId],
    ignored: &BTreeSet<(BlockId, BlockId)>,
    depth: usize,
) -> bool {
    let regions = cyclic_regions(data, nodes, ignored);
    for region in &regions {
        let members: BTreeSet<BlockId> = region.iter().copied().collect();
        let (entries, back) = {
            let graph = data.bblocks_ref();
            let entries: Vec<BlockId> = region
                .iter()
                .copied()
                .filter(|&b| {
                    let blk = graph.block(b);
                    blk.size_in() == 0
                        || (0..blk.size_in()).any(|i| !members.contains(&blk.get_in(i)))
                })
                .collect();
            let mut back: BTreeSet<(BlockId, BlockId)> = BTreeSet::new();
            if let [header] = entries.as_slice() {
                for &u in region {
                    let blk = graph.block(u);
                    if (0..blk.size_out()).any(|i| blk.get_out(i) == *header) {
                        back.insert((u, *header));
                    }
                }
            }
            (entries, back)
        };
        if entries.len() >= 2 {
            if split_at_entries(data, &members, &entries) {
                return true;
            }
        } else if entries.len() == 1 && depth < MAX_REGION_DEPTH {
            let mut inner = ignored.clone();
            inner.extend(back);
            if split_one_region(data, region, &inner, depth + 1) {
                return true;
            }
        }
    }
    false
}

/// Try to duplicate one entry of a multi-entry region for one of its external in-edges. Returns true
/// on the first split that the primitive accepts.
fn split_at_entries(data: &mut Funcdata, members: &BTreeSet<BlockId>, entries: &[BlockId]) -> bool {
    for &e in entries {
        let (size_in, size_out, outside) = {
            let blk = data.bblocks_ref().block(e);
            let outside = (0..blk.size_in()).find(|&i| !members.contains(&blk.get_in(i)));
            (blk.size_in(), blk.size_out(), outside)
        };
        let Some(inedge) = outside else { continue };
        if size_in < 2 {
            continue;
        }
        let split = match size_out {
            1 => data.node_split_through(e, inedge, false),
            2 => data.node_split_through_cbranch(e, inedge),
            _ => continue,
        };
        if split.is_ok() {
            return true;
        }
    }
    false
}

/// Duplicate entry blocks of irreducible regions until none is left or `max_splits` splits were
/// made. Returns the number of splits performed.
pub fn irreducible_split_apply(data: &mut Funcdata, max_splits: int4) -> int4 {
    let root = data.bblocks_root_pub();
    let mut done: int4 = 0;
    while done < max_splits {
        let nodes: Vec<BlockId> = data.bblocks_ref().block(root).get_list().to_vec();
        if !split_one_region(data, &nodes, &BTreeSet::new(), 0) {
            break;
        }
        done += 1;
    }
    done
}
