//! Port of `decompiler/cpp/unlace_regiongraph.{cc,hh}` (W7, item
//! `w7-s7-unlace-regiongraph`): the unlace-owned graph substrate for the angr
//! `RegionIdentifier` port (S7).
//!
//! This module is **not** part of upstream Ghidra.  It provides the mutable,
//! deterministic digraph machinery that `unlace_regionid` (the port of
//! angr/analyses/decompiler/region_identifier.py) collapses while identifying
//! single-entry regions.  The decompiler's own `BlockGraph` cannot serve:
//! region identification destructively merges and replaces nodes, and the
//! basic-block graph must never be mutated by an analysis-only pass.
//!
//! # Faithfulness
//!
//! The C++ is already a faithful angr port; this module transcribes it
//! structure-for-structure: iteration order, tie-breakers, and the panic-mode
//! heuristics are all preserved.  The whole point of the C++ file is the global
//! `(addr, ident)` strict weak order ([`UnlaceNodeOrder`]) that replaces Python
//! dict insertion order; that order is transcribed exactly.
//!
//! ## Node handles
//!
//! The C++ uses `UnlaceRegionNode *` both as identity (in pointer sets used for
//! *membership tests only*) and for ordering (via the `UnlaceNodeOrder`
//! comparator on the node's `(addr, ident)`).  Per ADR 0001 raw pointers
//! become arena ids: a [`UnlaceNodeId`] (a `u32` index into a [`UnlaceNodePool`])
//! replaces `UnlaceRegionNode *`.  Pointer identity is id equality; the
//! "membership only" pointer sets use `FxHashSet<UnlaceNodeId>` keyed by raw id
//! (never iterated in an output-affecting way). Every
//! container that the C++ *iterates* is keyed by the ordered [`UnlaceNodeKey`]
//! `(addr, ident)`, exactly matching `UnlaceNodeOrder` (ADR 0002).
//!
//! Integer semantics follow ADR 0003 (`uintb -> u64`, `uint4 -> u32`,
//! `int4 -> i32`); the one place the C++ relies on wrapping — the `_sort_edge`
//! address-sum key, which detects 2^64 carry — is transcribed with [`Wrap`].
//!
//! ## STUB(W7): the region payload
//!
//! `UnlaceRegionNode` in C++ carries a `UnlaceGraphRegion *region` (the collapsed
//! region payload, defined in `unlace_regionid.hh`).  `unlace_regionid` is not yet
//! ported, so [`UnlaceRegionNode::region`] is an opaque [`RegionPayloadId`]
//! placeholder; the graph substrate never dereferences it.

use std::collections::{BTreeMap, BTreeSet};

use crate::fasthash::{FxHashMap, FxHashSet};

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::types::{Wrap, int4, uint4, uintb};

use crate::context::BlockId;

/// Opaque handle to a collapsed region payload (C++ `UnlaceGraphRegion *`).
///
/// STUB(W7): `unlace_regionid`'s `UnlaceGraphRegion` is not yet ported; the graph
/// substrate only stores and copies this handle, never dereferences it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct RegionPayloadId(pub u32);

/// What a [`UnlaceRegionNode`] is (C++ `UnlaceRegionNode::node_kind`).
///
/// Mirrors angr's `TNode = Block | MultiNode | GraphRegion` (+ the dummy end
/// node fabricated by acyclic-region identification).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NodeKind {
    /// Leaf: one basic block (real `FlowBlock` or synthetic test node).
    Block,
    /// Merged single-out -> single-in chain (angr `MultiNode`).
    Multi,
    /// Wrapper for a collapsed `UnlaceGraphRegion`.
    Region,
    /// Dummy end node (angr `Block(-1,-1)`).
    Dummy,
}

/// (unlace) A node handle in the region-identification working graph
/// (C++ `UnlaceRegionNode`).
///
/// One concrete struct with a kind tag instead of a class hierarchy; all
/// instances are owned by a [`UnlaceNodePool`] and live until it is dropped.
#[derive(Debug, Clone)]
pub struct UnlaceRegionNode {
    /// What this node is (C++ `node_kind kind`).
    kind: NodeKind,
    /// Sort address (block start / first chain member / region head)
    /// (C++ `uintb addr`).
    addr: uintb,
    /// Creation index: deterministic tiebreaker for equal addresses
    /// (C++ `uint4 ident`).
    ident: uint4,
    /// `k_block`: the wrapped CFG block (`None` for synthetic test nodes)
    /// (C++ `const FlowBlock *block`).
    block: Option<BlockId>,
    /// `k_multi`: member nodes in execution order (C++ `vector<...> chain`).
    chain: Vec<UnlaceNodeId>,
    /// `k_region`: the collapsed region payload (C++ `UnlaceGraphRegion *region`).
    region: Option<RegionPayloadId>,
    /// `k_block`: does the wrapped block end with `CPUI_BRANCHIND`/`CPUI_CBRANCH`?
    ///
    /// STUB(W7): the C++ `endsWithBranchindOrCbranch` reaches
    /// `FlowBlock::lastOp()->code()` live; the basic-block CFG never mutates
    /// during region identification, so the block-graph adapter
    /// ([`crate::regionid::UnlaceRegionIdentifier::build_from_block_graph`])
    /// precomputes the predicate once per real block and parks it here.  Always
    /// `false` for synthetic test nodes (no block); for `k_multi`/`k_region`
    /// wrappers the predicate consults the last chain member's flag, not this.
    branchy: bool,
}

impl UnlaceRegionNode {
    /// Construct a node (C++ `UnlaceRegionNode(node_kind,uintb,uint4)`).
    pub fn new(kind: NodeKind, addr: uintb, ident: uint4) -> UnlaceRegionNode {
        UnlaceRegionNode {
            kind,
            addr,
            ident,
            block: None,
            chain: Vec::new(),
            region: None,
            branchy: false,
        }
    }

    /// Get the node kind (C++ `getKind`).
    pub fn get_kind(&self) -> NodeKind {
        self.kind
    }
    /// Get the sort address (C++ `getAddr`).
    pub fn get_addr(&self) -> uintb {
        self.addr
    }
    /// Get the creation index (C++ `getIdent`).
    pub fn get_ident(&self) -> uint4 {
        self.ident
    }
    /// `k_block`: wrapped block (may be `None`) (C++ `getBlock`).
    pub fn get_block(&self) -> Option<BlockId> {
        self.block
    }
    /// Set the wrapped block (C++ pool fills `block` after construction).
    pub fn set_block(&mut self, block: BlockId) {
        self.block = Some(block);
    }
    /// `k_block`: does the wrapped block end with `CPUI_BRANCHIND`/`CPUI_CBRANCH`?
    /// (STUB(W7) precomputed predicate, see [`UnlaceRegionNode::branchy`]).
    pub fn ends_with_branchind_or_cbranch(&self) -> bool {
        self.branchy
    }
    /// Record the `endsWithBranchindOrCbranch` predicate for a real block (the
    /// block-graph adapter sets this once per leaf block).
    pub fn set_branchy(&mut self, branchy: bool) {
        self.branchy = branchy;
    }
    /// `k_multi`: members (C++ `getChain`).
    pub fn get_chain(&self) -> &[UnlaceNodeId] {
        &self.chain
    }
    /// Set the member chain (C++ pool fills `chain` after construction).
    pub fn set_chain(&mut self, chain: Vec<UnlaceNodeId>) {
        self.chain = chain;
    }
    /// `k_region`: payload (C++ `getRegion`).
    pub fn get_region(&self) -> Option<RegionPayloadId> {
        self.region
    }
    /// Set the region payload (C++ pool fills `region` after construction).
    pub fn set_region(&mut self, region: RegionPayloadId) {
        self.region = Some(region);
    }
    /// Is this a collapsed region? (C++ `isRegion`).
    pub fn is_region(&self) -> bool {
        self.kind == NodeKind::Region
    }
    /// Is this a merged chain? (C++ `isMulti`).
    pub fn is_multi(&self) -> bool {
        self.kind == NodeKind::Multi
    }
    /// Is this the dummy end node? (C++ `isDummy`).
    pub fn is_dummy(&self) -> bool {
        self.kind == NodeKind::Dummy
    }
}

/// Arena id of a [`UnlaceRegionNode`] (replaces the C++ `UnlaceRegionNode *`).
///
/// Identity is id equality; ordering for *iterated* containers goes through
/// [`UnlaceNodeKey`], never through the raw id.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct UnlaceNodeId(pub u32);

/// (unlace) The global deterministic strict weak order over region nodes
/// (C++ `UnlaceNodeOrder`): compare `(addr, ident)` lexicographically.
///
/// In Rust the comparator lives in the ordered **key** [`UnlaceNodeKey`]; every
/// `BTreeMap`/`BTreeSet`/sort that the C++ keys on `UnlaceNodeOrder` is keyed on
/// this struct so iteration order matches exactly.  `ident` is a unique
/// creation index, so `(addr, ident)` never collides in practice — the same as
/// the C++ `set<UnlaceRegionNode *,UnlaceNodeOrder>`, where two nodes with equal
/// `(addr,ident)` would be indistinguishable.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct UnlaceNodeKey {
    /// C++ `UnlaceNodeOrder` primary key.
    pub addr: uintb,
    /// C++ `UnlaceNodeOrder` tiebreaker.
    pub ident: uint4,
    /// Arena id, never compared (it sits after `(addr,ident)` only as a
    /// total-order safety net; equal `(addr,ident)` never occurs).  Kept last
    /// so it cannot perturb the `UnlaceNodeOrder` semantics.
    pub id: UnlaceNodeId,
}

/// The owning pool for [`UnlaceRegionNode`] handles (C++: the
/// `UnlaceRegionIdentifier`'s node pool).
///
/// The graph and algorithms reference nodes by [`UnlaceNodeId`]; this pool maps
/// id -> node and supplies the `(addr, ident)` an id sorts by.
#[derive(Debug, Clone, Default)]
pub struct UnlaceNodePool {
    nodes: Vec<UnlaceRegionNode>,
}

impl UnlaceNodePool {
    /// An empty pool.
    pub fn new() -> UnlaceNodePool {
        UnlaceNodePool { nodes: Vec::new() }
    }

    /// Allocate a node, returning its id (C++ `new UnlaceRegionNode(...)`).
    pub fn alloc(&mut self, node: UnlaceRegionNode) -> UnlaceNodeId {
        let id = UnlaceNodeId(self.nodes.len() as u32);
        self.nodes.push(node);
        id
    }

    /// Allocate a fresh node from `(kind, addr, ident)`.
    pub fn make(&mut self, kind: NodeKind, addr: uintb, ident: uint4) -> UnlaceNodeId {
        self.alloc(UnlaceRegionNode::new(kind, addr, ident))
    }

    /// Borrow a node.
    pub fn get(&self, id: UnlaceNodeId) -> &UnlaceRegionNode {
        &self.nodes[id.0 as usize]
    }

    /// Borrow a node mutably.
    pub fn get_mut(&mut self, id: UnlaceNodeId) -> &mut UnlaceRegionNode {
        &mut self.nodes[id.0 as usize]
    }

    /// The ordered key for `id` (mirrors `UnlaceNodeOrder` on the node).
    pub fn key(&self, id: UnlaceNodeId) -> UnlaceNodeKey {
        let n = self.get(id);
        UnlaceNodeKey {
            addr: n.addr,
            ident: n.ident,
            id,
        }
    }
}

/// Deterministically iterable node set (C++ `UnlaceNodeSet =
/// set<UnlaceRegionNode *,UnlaceNodeOrder>`): a `BTreeSet` keyed by [`UnlaceNodeKey`].
pub type UnlaceNodeSet = BTreeSet<UnlaceNodeKey>;

/// Adjacency record for one node (C++ `UnlaceRegionGraph::Adjacency`).
#[derive(Debug, Clone, Default)]
struct Adjacency {
    /// In-neighbors in edge insertion order (C++ `preds`).
    preds: Vec<UnlaceNodeId>,
    /// Out-neighbors in edge insertion order (C++ `succs`).
    succs: Vec<UnlaceNodeId>,
}

/// (unlace) A mutable directed graph over [`UnlaceNodeId`] handles
/// (C++ `UnlaceRegionGraph`).
///
/// `networkx.DiGraph` analog: nodes carry insertion-ordered predecessor and
/// successor lists (mirroring networkx adjacency-dict insertion order), edges
/// are deduplicated on insert, self-loops are supported, and whole-graph node
/// iteration is in `UnlaceNodeOrder` (the `BTreeSet` over [`UnlaceNodeKey`]).  The
/// `Clone` impl performs a full structural copy (the node handles themselves
/// are shared via the pool, never owned by the graph).
///
/// The ordered key set gives `UnlaceNodeOrder` iteration without consulting the
/// pool; the adjacency is reached by id through a hash map that is never
/// iterated, so a neighbor read costs one probe instead of two tree searches.
#[derive(Debug, Clone, Default)]
pub struct UnlaceRegionGraph {
    /// All nodes in `UnlaceNodeOrder` (the keys of C++ `NodeMap nodes`).
    order: BTreeSet<UnlaceNodeKey>,
    /// id -> (key, adjacency). Membership and lookup only, never iterated.
    adj: FxHashMap<UnlaceNodeId, (UnlaceNodeKey, Adjacency)>,
}

impl UnlaceRegionGraph {
    /// An empty graph.
    pub fn new() -> UnlaceRegionGraph {
        UnlaceRegionGraph::default()
    }

    /// Is the node in the graph? (C++ `containsNode`).
    pub fn contains_node(&self, n: UnlaceNodeId) -> bool {
        self.adj.contains_key(&n)
    }

    /// Add a node, with its ordered key (C++ `addNode`, idempotent).
    ///
    /// The key must mirror `UnlaceNodeOrder` for `n` (use [`UnlaceNodePool::key`]).
    pub fn add_node_keyed(&mut self, key: UnlaceNodeKey) {
        // Default-construct adjacency if absent (C++ `nodes[n];`).
        self.order.insert(key);
        self.adj
            .entry(key.id)
            .or_insert_with(|| (key, Adjacency::default()));
    }

    /// Add a node by id, consulting the pool for its key (convenience).
    pub fn add_node(&mut self, pool: &UnlaceNodePool, n: UnlaceNodeId) {
        self.add_node_keyed(pool.key(n));
    }

    fn node(&self, n: UnlaceNodeId) -> Option<&Adjacency> {
        self.adj.get(&n).map(|(_, adj)| adj)
    }

    fn node_mut(&mut self, n: UnlaceNodeId) -> Option<&mut Adjacency> {
        self.adj.get_mut(&n).map(|(_, adj)| adj)
    }

    /// Remove node and all incident edges (C++ `removeNode`).
    pub fn remove_node(&mut self, n: UnlaceNodeId) {
        let Some((key, adj)) = self.adj.remove(&n) else {
            return;
        };
        // Strip this node out of every neighbor's adjacency (handles
        // self-loops: the self entry lives in our own lists, erased wholesale).
        for p in adj.preds {
            if p == n {
                continue;
            }
            let ps = &mut self.node_mut(p).unwrap().succs;
            if let Some(pos) = ps.iter().position(|&x| x == n) {
                ps.remove(pos);
            }
        }
        for s in adj.succs {
            if s == n {
                continue;
            }
            let sp = &mut self.node_mut(s).unwrap().preds;
            if let Some(pos) = sp.iter().position(|&x| x == n) {
                sp.remove(pos);
            }
        }
        self.order.remove(&key);
    }

    /// Does edge a->b exist? (C++ `hasEdge`).
    pub fn has_edge(&self, a: UnlaceNodeId, b: UnlaceNodeId) -> bool {
        self.node(a).is_some_and(|adj| adj.succs.contains(&b))
    }

    /// Add edge (idempotent, auto-adds endpoints) (C++ `addEdge`).
    ///
    /// Endpoints are keyed via the pool, exactly as C++ `nodes[a]`/`nodes[b]`
    /// default-construct adjacency on first reference.
    pub fn add_edge(&mut self, pool: &UnlaceNodePool, a: UnlaceNodeId, b: UnlaceNodeId) {
        if self.has_edge(a, b) {
            return;
        }
        self.add_node_keyed(pool.key(a));
        self.add_node_keyed(pool.key(b));
        self.node_mut(a).unwrap().succs.push(b);
        self.node_mut(b).unwrap().preds.push(a);
    }

    /// Remove edge if present (C++ `removeEdge`).
    pub fn remove_edge(&mut self, a: UnlaceNodeId, b: UnlaceNodeId) {
        if let Some(adj) = self.node_mut(a) {
            if let Some(pos) = adj.succs.iter().position(|&x| x == b) {
                adj.succs.remove(pos);
            }
        }
        if let Some(adj) = self.node_mut(b) {
            if let Some(pos) = adj.preds.iter().position(|&x| x == a) {
                adj.preds.remove(pos);
            }
        }
    }

    /// In-degree (C++ `sizeIn`).
    pub fn size_in(&self, n: UnlaceNodeId) -> UnlaceResult<int4> {
        let adj = self.node(n).ok_or_else(|| {
            UnlaceError::lowlevel("unlace regiongraph: sizeIn of node not in graph")
        })?;
        Ok(adj.preds.len() as int4)
    }

    /// Out-degree (C++ `sizeOut`).
    pub fn size_out(&self, n: UnlaceNodeId) -> UnlaceResult<int4> {
        let adj = self.node(n).ok_or_else(|| {
            UnlaceError::lowlevel("unlace regiongraph: sizeOut of node not in graph")
        })?;
        Ok(adj.succs.len() as int4)
    }

    /// In-neighbors in insertion order (C++ `getPreds`).
    pub fn get_preds(&self, n: UnlaceNodeId) -> UnlaceResult<&[UnlaceNodeId]> {
        let adj = self.node(n).ok_or_else(|| {
            UnlaceError::lowlevel("unlace regiongraph: getPreds of node not in graph")
        })?;
        Ok(&adj.preds)
    }

    /// Out-neighbors in insertion order (C++ `getSuccs`).
    pub fn get_succs(&self, n: UnlaceNodeId) -> UnlaceResult<&[UnlaceNodeId]> {
        let adj = self.node(n).ok_or_else(|| {
            UnlaceError::lowlevel("unlace regiongraph: getSuccs of node not in graph")
        })?;
        Ok(&adj.succs)
    }

    /// Out-neighbors in `UnlaceNodeOrder` (C++ `getSortedSuccs`).
    pub fn get_sorted_succs(
        &self,
        pool: &UnlaceNodePool,
        n: UnlaceNodeId,
    ) -> UnlaceResult<Vec<UnlaceNodeId>> {
        let mut res = self.get_succs(n)?.to_vec();
        res.sort_by(|&a, &b| pool.key(a).cmp(&pool.key(b)));
        Ok(res)
    }

    /// Fill reusable scratch with out-neighbors in `UnlaceNodeOrder`.
    fn get_sorted_succs_into(
        &self,
        pool: &UnlaceNodePool,
        n: UnlaceNodeId,
        res: &mut Vec<UnlaceNodeId>,
    ) -> UnlaceResult<()> {
        res.clear();
        res.extend_from_slice(self.get_succs(n)?);
        res.sort_by(|&a, &b| pool.key(a).cmp(&pool.key(b)));
        Ok(())
    }

    /// Snapshot in-edges (C++ `inEdges`).
    pub fn in_edges(
        &self,
        n: UnlaceNodeId,
        res: &mut Vec<(UnlaceNodeId, UnlaceNodeId)>,
    ) -> UnlaceResult<()> {
        for &p in self.get_preds(n)? {
            res.push((p, n));
        }
        Ok(())
    }

    /// Snapshot out-edges (C++ `outEdges`).
    pub fn out_edges(
        &self,
        n: UnlaceNodeId,
        res: &mut Vec<(UnlaceNodeId, UnlaceNodeId)>,
    ) -> UnlaceResult<()> {
        for &s in self.get_succs(n)? {
            res.push((n, s));
        }
        Ok(())
    }

    /// Snapshot all edges (node-major deterministic order) (C++ `allEdges`).
    pub fn all_edges(&self, res: &mut Vec<(UnlaceNodeId, UnlaceNodeId)>) {
        for (key, adj) in self.iter_adj() {
            for &s in adj.succs.iter() {
                res.push((key.id, s));
            }
        }
    }

    /// Snapshot all nodes in `UnlaceNodeOrder` (C++ `getNodes`).
    pub fn get_nodes(&self, res: &mut Vec<UnlaceNodeId>) {
        for key in self.order.iter() {
            res.push(key.id);
        }
    }

    /// Build induced subgraph copy (C++ `induced`).
    pub fn induced(
        &self,
        pool: &UnlaceNodePool,
        keep: &UnlaceNodeSet,
        res: &mut UnlaceRegionGraph,
    ) {
        for key in keep.iter() {
            if !self.contains_node(key.id) {
                continue;
            }
            res.add_node_keyed(*key);
        }
        for key in keep.iter() {
            let Some(adj) = self.node(key.id) else {
                continue;
            };
            for &s in adj.succs.iter() {
                if keep.contains(&pool.key(s)) {
                    res.add_edge(pool, key.id, s);
                }
            }
        }
    }

    /// Build edge-reversed copy, same node set (C++ `buildReversed`).
    pub fn build_reversed(&self, pool: &UnlaceNodePool, res: &mut UnlaceRegionGraph) {
        for key in self.order.iter() {
            res.add_node_keyed(*key);
        }
        for (key, adj) in self.iter_adj() {
            for &s in adj.succs.iter() {
                res.add_edge(pool, s, key.id);
            }
        }
    }

    /// Begin deterministic node iteration (C++ `beginNode`/`endNode`): the
    /// keys are in `UnlaceNodeOrder`.
    pub fn node_keys(&self) -> impl Iterator<Item = &UnlaceNodeKey> {
        self.order.iter()
    }

    /// Iterate nodes with their adjacency in `UnlaceNodeOrder`.
    fn iter_adj(&self) -> impl Iterator<Item = (&UnlaceNodeKey, &Adjacency)> {
        self.order.iter().map(|key| (key, &self.adj[&key.id].1))
    }

    /// Number of nodes (C++ `numNodes`).
    pub fn num_nodes(&self) -> int4 {
        self.order.len() as int4
    }

    /// Number of edges (C++ `numEdges`).
    pub fn num_edges(&self) -> int4 {
        let mut count = 0;
        for (_, adj) in self.adj.values() {
            count += adj.succs.len() as int4;
        }
        count
    }

    /// Remove all nodes and edges (C++ `clear`).
    pub fn clear(&mut self) {
        self.order.clear();
        self.adj.clear();
    }
}

//
// DFS utilities
//

/// (unlace) Find back edges via iterative DFS (port of angr `dfs_back_edges`).
///
/// Children are visited in `UnlaceNodeOrder`.  Each `(source,target)` pair where
/// `target` is on the current DFS stack-path is reported, in discovery order.
/// Appends to `res`.
pub fn unlace_dfs_back_edges(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    start: UnlaceNodeId,
    res: &mut Vec<(UnlaceNodeId, UnlaceNodeId)>,
) -> UnlaceResult<()> {
    if !g.contains_node(start) {
        return Ok(());
    }
    // Membership only, never iterated (C++ `visited` and `finished`, each a
    // `set<const UnlaceRegionNode *>`): one probe answers both, as every finished
    // node was visited first.
    const VISITED: u8 = 1;
    const FINISHED: u8 = 2;
    let mut state: FxHashMap<UnlaceNodeId, u8> = FxHashMap::default();
    struct Frame {
        node: UnlaceNodeId,
        children: Vec<UnlaceNodeId>,
        cursor: int4,
    }
    let mut stack: Vec<Frame> = Vec::new();
    // Child lists of popped frames, reused by later pushes.
    let mut spare: Vec<Vec<UnlaceNodeId>> = Vec::new();
    stack.push(Frame {
        node: start,
        children: g.get_sorted_succs(pool, start)?,
        cursor: 0,
    });
    state.insert(start, VISITED);
    while !stack.is_empty() {
        // C++ takes `frame = stack.back()` by reference, then may push (which
        // invalidates it); we re-borrow per branch to mirror that safely. A
        // node is marked visited as it is pushed, the C++ marking it once on top.
        let node = stack.last().unwrap().node;
        let (cursor, children_len) = {
            let frame = stack.last().unwrap();
            (frame.cursor, frame.children.len() as int4)
        };
        if cursor < children_len {
            let child = stack.last().unwrap().children[cursor as usize];
            stack.last_mut().unwrap().cursor += 1;
            match state.get(&child) {
                Some(&VISITED) => res.push((node, child)), // Back edge
                Some(_) => {}
                None => {
                    // NOTE: push invalidates the C++ `frame`; nothing below uses it.
                    let mut children = spare.pop().unwrap_or_default();
                    g.get_sorted_succs_into(pool, child, &mut children)?;
                    state.insert(child, VISITED);
                    stack.push(Frame {
                        node: child,
                        children,
                        cursor: 0,
                    });
                }
            }
        } else {
            state.insert(node, FINISHED);
            if let Some(frame) = stack.pop() {
                spare.push(frame.children);
            }
        }
    }
    Ok(())
}

/// (unlace) Deterministic DFS post-order from a source node (port of
/// `GraphUtils.dfs_postorder_nodes_deterministic`).
///
/// Explicit `(node, preVisit)` stack; successors are pushed in ascending
/// `UnlaceNodeOrder` so the largest-addressed successor is explored first (matches
/// angr exactly).  Appends to `res`.
pub fn unlace_dfs_postorder_deterministic(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    source: UnlaceNodeId,
    res: &mut Vec<UnlaceNodeId>,
) -> UnlaceResult<()> {
    let mut visited: FxHashSet<UnlaceNodeId> = FxHashSet::default(); // Membership only
    let mut stack: Vec<(UnlaceNodeId, bool)> = Vec::new(); // (node, isPreVisit)
    let mut successors = Vec::new();
    stack.push((source, true));
    while let Some(entry) = stack.pop() {
        if entry.1 && !visited.contains(&entry.0) {
            visited.insert(entry.0);
            stack.push((entry.0, false));
            g.get_sorted_succs_into(pool, entry.0, &mut successors)?;
            // Pushed in ascending order so the LARGEST successor pops first.
            for &successor in &successors {
                if !visited.contains(&successor) {
                    stack.push((successor, true));
                }
            }
        } else if !entry.1 {
            res.push(entry.0);
        }
    }
    Ok(())
}

//
// Quasi-topological sort
//

/// BFS shortest path length between two nodes; -1 if unreachable
/// (C++ `unlaceShortestPathLength`).
fn unlace_shortest_path_length(
    g: &UnlaceRegionGraph,
    a: UnlaceNodeId,
    b: UnlaceNodeId,
) -> UnlaceResult<int4> {
    if a == b {
        return Ok(0);
    }
    let mut dist: BTreeMap<UnlaceNodeId, int4> = BTreeMap::new(); // Membership/lookup only
    let mut queue: Vec<UnlaceNodeId> = Vec::new();
    dist.insert(a, 0);
    queue.push(a);
    let mut pos = 0;
    while pos < queue.len() {
        let cur = queue[pos];
        pos += 1;
        let d = dist[&cur];
        let succs: Vec<UnlaceNodeId> = g.get_succs(cur)?.to_vec();
        for s in succs {
            if dist.contains_key(&s) {
                continue;
            }
            if s == b {
                return Ok(d + 1);
            }
            dist.insert(s, d + 1);
            queue.push(s);
        }
    }
    Ok(-1)
}

/// Edge sort key: `src.addr + dst.addr` (port of `GraphUtils._sort_edge` /
/// the C++ `UnlaceEdgeSum`).
///
/// Python's sum is arbitrary precision; compare `(carry, low64)`
/// lexicographically so address sums straddling 2^64 still order exactly as in
/// angr.  Returns `Ordering` for `a` vs `b`.
fn unlace_edge_sum_cmp(
    pool: &UnlaceNodePool,
    a: (UnlaceNodeId, UnlaceNodeId),
    b: (UnlaceNodeId, UnlaceNodeId),
) -> std::cmp::Ordering {
    let a0 = pool.get(a.0).get_addr();
    let a1 = pool.get(a.1).get_addr();
    let b0 = pool.get(b.0).get_addr();
    let b1 = pool.get(b.1).get_addr();
    let suma = a0.wadd(a1);
    let carrya = suma < a0;
    let sumb = b0.wadd(b1);
    let carryb = sumb < b0;
    // If the carries differ, carryb decides the order (true => a < b).
    if carrya != carryb {
        return if carryb {
            std::cmp::Ordering::Less
        } else {
            std::cmp::Ordering::Greater
        };
    }
    suma.cmp(&sumb)
}

/// (unlace) Quasi-topological sort of all nodes (port of
/// `GraphUtils.quasi_topological_sort_nodes`, the `nodes=None`/`loop_heads=None`
/// form RegionIdentifier uses).
///
/// Collapse non-trivial SCCs to placeholders, topologically sort the
/// condensation, and expand each SCC recursively after picking its loop head
/// (`_append_scc`), including the panic mode that aggressively strips back edges
/// from huge dense SCCs.  Appends the ordered nodes to `res`.
pub fn unlace_quasi_topo_sort(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    res: &mut Vec<UnlaceNodeId>,
) -> UnlaceResult<()> {
    let num_nodes = g.num_nodes();
    if num_nodes == 0 {
        return Ok(());
    }
    if num_nodes == 1 {
        res.push(g.node_keys().next().unwrap().id);
        return Ok(());
    }
    let num_nodes = num_nodes as usize;

    // --- Find non-trivial strongly connected components (iterative Tarjan) ---
    // Node indices in deterministic (addr,ident) order.
    let mut node_list: Vec<UnlaceNodeId> = Vec::new();
    g.get_nodes(&mut node_list);
    let mut node_index: BTreeMap<UnlaceNodeId, int4> = BTreeMap::new(); // Lookup only
    for (i, &n) in node_list.iter().enumerate() {
        node_index.insert(n, i as int4);
    }

    let mut tarjan_index: Vec<int4> = vec![-1; num_nodes];
    let mut tarjan_low: Vec<int4> = vec![0; num_nodes];
    let mut on_stack: Vec<bool> = vec![false; num_nodes];
    let mut scc_of: Vec<int4> = vec![-1; num_nodes]; // SCC id per node (incl. trivial)
    let mut scc_members: Vec<Vec<int4>> = Vec::new();
    {
        let mut counter: int4 = 0;
        let mut scc_stack: Vec<int4> = Vec::new();
        struct TFrame {
            node: int4,
            child: int4,
        }
        for root in 0..num_nodes as int4 {
            if tarjan_index[root as usize] != -1 {
                continue;
            }
            let mut stack: Vec<TFrame> = Vec::new();
            stack.push(TFrame {
                node: root,
                child: 0,
            });
            tarjan_index[root as usize] = counter;
            tarjan_low[root as usize] = counter;
            counter += 1;
            scc_stack.push(root);
            on_stack[root as usize] = true;
            while !stack.is_empty() {
                let fr_node = stack.last().unwrap().node;
                let fr_child = stack.last().unwrap().child;
                let succs: &[UnlaceNodeId] = g.get_succs(node_list[fr_node as usize])?;
                if (fr_child as usize) < succs.len() {
                    let w = node_index[&succs[fr_child as usize]];
                    stack.last_mut().unwrap().child += 1;
                    if tarjan_index[w as usize] == -1 {
                        tarjan_index[w as usize] = counter;
                        tarjan_low[w as usize] = counter;
                        counter += 1;
                        scc_stack.push(w);
                        on_stack[w as usize] = true;
                        stack.push(TFrame { node: w, child: 0 });
                    } else if on_stack[w as usize]
                        && tarjan_index[w as usize] < tarjan_low[fr_node as usize]
                    {
                        tarjan_low[fr_node as usize] = tarjan_index[w as usize];
                    }
                } else {
                    let v = fr_node;
                    stack.pop();
                    if let Some(parent_frame) = stack.last() {
                        let parent = parent_frame.node;
                        if tarjan_low[v as usize] < tarjan_low[parent as usize] {
                            tarjan_low[parent as usize] = tarjan_low[v as usize];
                        }
                    }
                    if tarjan_low[v as usize] == tarjan_index[v as usize] {
                        scc_members.push(Vec::new());
                        let new_scc = (scc_members.len() - 1) as int4;
                        loop {
                            let w = scc_stack.pop().unwrap();
                            on_stack[w as usize] = false;
                            scc_members.last_mut().unwrap().push(w);
                            scc_of[w as usize] = new_scc;
                            if w == v {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    let _ = &scc_of; // mirrors C++ (computed; consulted only structurally above)

    // Keep only SCCs with more than one node; sort by (size, min addr) like angr.
    let mut big_sccs: Vec<int4> = Vec::new();
    for (i, mem) in scc_members.iter().enumerate() {
        if mem.len() > 1 {
            big_sccs.push(i as int4);
        }
    }
    let mut scc_min_addr: Vec<uintb> = vec![0; scc_members.len()];
    let mut scc_min_ident: Vec<uint4> = vec![0; scc_members.len()];
    for &bs in big_sccs.iter() {
        let mem = &scc_members[bs as usize];
        let mut mn = pool.get(node_list[mem[0] as usize]).get_addr();
        let mut mi = pool.get(node_list[mem[0] as usize]).get_ident();
        for &m in mem.iter().skip(1) {
            let a = pool.get(node_list[m as usize]).get_addr();
            let id = pool.get(node_list[m as usize]).get_ident();
            if a < mn || (a == mn && id < mi) {
                mn = a;
                mi = id;
            }
        }
        scc_min_addr[bs as usize] = mn;
        scc_min_ident[bs as usize] = mi;
    }
    // Stable sort of big_sccs by (size, minaddr, minident) — insertion sort
    // (small), transcribing the C++ exactly.
    for i in 1..big_sccs.len() {
        let key = big_sccs[i];
        let mut j = i as int4 - 1;
        while j >= 0 {
            let other = big_sccs[j as usize];
            let greater: bool =
                if scc_members[other as usize].len() != scc_members[key as usize].len() {
                    scc_members[other as usize].len() > scc_members[key as usize].len()
                } else if scc_min_addr[other as usize] != scc_min_addr[key as usize] {
                    scc_min_addr[other as usize] > scc_min_addr[key as usize]
                } else {
                    scc_min_ident[other as usize] > scc_min_ident[key as usize]
                };
            if !greater {
                break;
            }
            big_sccs[(j + 1) as usize] = other;
            j -= 1;
        }
        big_sccs[(j + 1) as usize] = key;
    }
    // comp_index: node index -> position in big_sccs (or -1).
    let mut comp_index: Vec<int4> = vec![-1; num_nodes];
    for (i, &bs) in big_sccs.iter().enumerate() {
        let mem = &scc_members[bs as usize];
        for &m in mem.iter() {
            comp_index[m as usize] = i as int4;
        }
    }

    // --- Build the collapsed (condensation-like) graph over integer ids ---
    // Real node i keeps id i; placeholder for big_sccs[k] gets id num_nodes+k;
    // the virtual multi-head root gets id num_nodes+num_place.
    let num_place = big_sccs.len();
    let total_ids = num_nodes + num_place + 1;
    let root_id = (num_nodes + num_place) as int4;
    let mut id_present: Vec<bool> = vec![false; total_ids];
    let mut id_succs: Vec<Vec<int4>> = vec![Vec::new(); total_ids];
    let mut id_in_degree: Vec<int4> = vec![0; total_ids];
    let mut id_succ_set: Vec<BTreeSet<int4>> = vec![BTreeSet::new(); total_ids]; // Dedup helper

    let mut edges: Vec<(UnlaceNodeId, UnlaceNodeId)> = Vec::new();
    g.all_edges(&mut edges);
    edges.sort_by(|&a, &b| unlace_edge_sum_cmp(pool, a, b));
    for (efirst, esecond) in edges {
        let src_idx = node_index[&efirst];
        let dst_idx = node_index[&esecond];
        let src = if comp_index[src_idx as usize] >= 0 {
            (num_nodes as int4) + comp_index[src_idx as usize]
        } else {
            src_idx
        };
        let dst = if comp_index[dst_idx as usize] >= 0 {
            (num_nodes as int4) + comp_index[dst_idx as usize]
        } else {
            dst_idx
        };
        if src == dst {
            // Same placeholder, or a real self-loop.
            id_present[src as usize] = true;
            continue;
        }
        id_present[src as usize] = true;
        id_present[dst as usize] = true;
        if !id_succ_set[src as usize].contains(&dst) {
            id_succ_set[src as usize].insert(dst);
            id_succs[src as usize].push(dst);
            id_in_degree[dst as usize] += 1;
        }
    }
    // Add loners: nodes with no in or out edges at all.
    for i in 0..num_nodes {
        if g.size_out(node_list[i])? == 0 && g.size_in(node_list[i])? == 0 {
            id_present[i] = true;
        }
    }

    // Sort key for ids in the collapsed graph: root first, then
    // (addr, isPlaceholder, ident).  (angr compares node.addr only;
    // placeholders carry the SCC's min addr.)  Returns true if a < b.
    let id_less = |a: int4, b: int4| -> bool {
        if a == root_id || b == root_id {
            return a == root_id && b != root_id;
        }
        let addr_a = if a >= num_nodes as int4 {
            scc_min_addr[big_sccs[(a - num_nodes as int4) as usize] as usize]
        } else {
            pool.get(node_list[a as usize]).get_addr()
        };
        let addr_b = if b >= num_nodes as int4 {
            scc_min_addr[big_sccs[(b - num_nodes as int4) as usize] as usize]
        } else {
            pool.get(node_list[b as usize]).get_addr()
        };
        if addr_a != addr_b {
            return addr_a < addr_b;
        }
        let place_a = a >= num_nodes as int4;
        let place_b = b >= num_nodes as int4;
        if place_a != place_b {
            return place_b; // Real node before placeholder on addr tie
        }
        if place_a {
            return scc_min_ident[big_sccs[(a - num_nodes as int4) as usize] as usize]
                < scc_min_ident[big_sccs[(b - num_nodes as int4) as usize] as usize];
        }
        pool.get(node_list[a as usize]).get_ident() < pool.get(node_list[b as usize]).get_ident()
    };

    // Heads of the collapsed graph.
    let mut heads: Vec<int4> = Vec::new();
    for i in 0..(total_ids - 1) {
        if id_present[i] && id_in_degree[i] == 0 {
            heads.push(i as int4);
        }
    }
    let head: int4;
    if heads.len() > 1 {
        head = root_id;
        id_present[root_id as usize] = true;
        for &h in heads.iter() {
            id_succs[root_id as usize].push(h);
        }
    } else if heads.len() == 1 {
        head = heads[0];
    } else {
        return Err(UnlaceError::lowlevel(
            "unlace regiongraph: collapsed graph has no head",
        ));
    }

    // Deterministic DFS postorder over the collapsed integer graph.
    let mut postorder: Vec<int4> = Vec::new();
    {
        let mut visited: Vec<bool> = vec![false; total_ids];
        let mut stack: Vec<(int4, bool)> = Vec::new();
        stack.push((head, true));
        while let Some(entry) = stack.pop() {
            if entry.1 && !visited[entry.0 as usize] {
                visited[entry.0 as usize] = true;
                stack.push((entry.0, false));
                let mut succs: Vec<int4> = id_succs[entry.0 as usize].clone();
                // Sort ascending by id_less (insertion sort, degrees are small).
                for i in 1..succs.len() {
                    let key = succs[i];
                    let mut j = i as int4 - 1;
                    while j >= 0 && id_less(key, succs[j as usize]) {
                        succs[(j + 1) as usize] = succs[j as usize];
                        j -= 1;
                    }
                    succs[(j + 1) as usize] = key;
                }
                for &s in succs.iter() {
                    if !visited[s as usize] {
                        stack.push((s, true));
                    }
                }
            } else if !entry.1 {
                postorder.push(entry.0);
            }
        }
    }

    // Walk in REVERSE postorder, expanding placeholders recursively.
    for i in (0..postorder.len()).rev() {
        let id = postorder[i];
        if id == root_id {
            continue;
        }
        if id >= num_nodes as int4 {
            let mem = &scc_members[big_sccs[(id - num_nodes as int4) as usize] as usize];
            let mut scc: UnlaceNodeSet = UnlaceNodeSet::new();
            for &m in mem.iter() {
                scc.insert(pool.key(node_list[m as usize]));
            }
            unlace_append_scc(pool, g, res, &scc)?;
        } else {
            res.push(node_list[id as usize]);
        }
    }
    Ok(())
}

/// Expand one SCC into the ordered list (port of `GraphUtils._append_scc`).
///
/// `loop_head_candidates` is always `None` at RegionIdentifier's call sites, so
/// that parameter is dropped.
fn unlace_append_scc(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    ordered: &mut Vec<UnlaceNodeId>,
    scc: &UnlaceNodeSet,
) -> UnlaceResult<()> {
    let mut loop_head: Option<UnlaceNodeId> = None;

    // Find the first node (scanning ordered backwards) with successors in the
    // SCC.
    for i in (0..ordered.len()).rev() {
        let parent = ordered[i];
        // SCC members that are successors of parent.
        let mut scc_succs: Vec<UnlaceNodeId> = Vec::new();
        {
            let mut seen: UnlaceNodeSet = UnlaceNodeSet::new();
            let succs: Vec<UnlaceNodeId> = g.get_succs(parent)?.to_vec();
            for s in succs {
                let sk = pool.key(s);
                if scc.contains(&sk) && !seen.contains(&sk) {
                    seen.insert(sk);
                    scc_succs.push(s);
                }
            }
        }
        if scc_succs.len() == 1 {
            loop_head = Some(scc_succs[0]);
            break;
        }
        if scc_succs.len() > 1 {
            // Pick the successor with the lowest total pairwise distance; on a
            // distance tie the LAST one (in addr order) wins, matching angr's
            // dict-inversion {v: k} semantics.
            scc_succs.sort_by(|&a, &b| pool.key(a).cmp(&pool.key(b)));
            // Overwrites on collision = last wins (C++ map<int4,...>).
            let mut dist_to_node: BTreeMap<int4, UnlaceNodeId> = BTreeMap::new();
            for &j in scc_succs.iter() {
                let mut total: int4 = 0;
                for &k in scc_succs.iter() {
                    if k == j {
                        continue;
                    }
                    let d = unlace_shortest_path_length(g, j, k)?;
                    if d < 0 {
                        return Err(UnlaceError::lowlevel(
                            "unlace regiongraph: SCC members not mutually reachable",
                        ));
                    }
                    total += d;
                }
                dist_to_node.insert(total, j);
            }
            // Minimum total distance (C++ `*distToNode.begin()`).
            loop_head = Some(*dist_to_node.values().next().unwrap());
            break;
        }
    }

    let loop_head = match loop_head {
        Some(lh) => lh,
        // Minimum (addr,ident) member (C++ `*scc.begin()`).
        None => scc.iter().next().unwrap().id,
    };

    let mut subgraph = UnlaceRegionGraph::new();
    g.induced(pool, scc, &mut subgraph);
    {
        let mut head_in: Vec<(UnlaceNodeId, UnlaceNodeId)> = Vec::new();
        subgraph.in_edges(loop_head, &mut head_in)?;
        for (a, b) in head_in {
            subgraph.remove_edge(a, b);
        }
    }

    // Panic mode: huge dense SCCs converge too slowly one-node-at-a-time.
    const PANIC_THRESHOLD: int4 = 3000;
    if subgraph.num_nodes() > PANIC_THRESHOLD
        && (subgraph.num_edges() as f64) > (subgraph.num_nodes() as f64) * 1.4
    {
        let mut back_edges: Vec<(UnlaceNodeId, UnlaceNodeId)> = Vec::new();
        unlace_dfs_back_edges(pool, &subgraph, loop_head, &mut back_edges)?;
        back_edges.sort_by(|&a, &b| unlace_edge_sum_cmp(pool, a, b));
        for (a, b) in back_edges {
            subgraph.remove_edge(a, b);
            if (subgraph.num_edges() as f64) <= (subgraph.num_nodes() as f64) * 1.4 {
                break;
            }
        }
    }

    unlace_quasi_topo_sort(pool, &subgraph, ordered)?; // Appends to ordered
    Ok(())
}

//
// subgraph_between_nodes
//

/// The checks shared by [`unlace_subgraph_between_nodes`] and
/// [`unlace_slice_visits`]: `source` and every frontier node are in `g`.
fn check_slice_ends(
    g: &UnlaceRegionGraph,
    source: UnlaceNodeId,
    frontier: &UnlaceNodeSet,
) -> UnlaceResult<()> {
    if !g.contains_node(source) {
        return Err(UnlaceError::lowlevel(
            "unlace regiongraph: slice source not in graph",
        ));
    }
    for fk in frontier.iter() {
        if !g.contains_node(fk.id) {
            return Err(UnlaceError::lowlevel(
                "unlace regiongraph: slice frontier node not in graph",
            ));
        }
    }
    Ok(())
}

/// The nodes that still reach `frontier` once the edges into `source` are cut:
/// one reverse BFS from the frontier set (replaces angr's per-successor
/// `networkx.has_path` probes; equivalent since the cut graph is not mutated).
fn reaching_frontier(
    g: &UnlaceRegionGraph,
    source: UnlaceNodeId,
    frontier: &UnlaceNodeSet,
) -> UnlaceResult<FxHashSet<UnlaceNodeId>> {
    let mut can_reach: FxHashSet<UnlaceNodeId> = FxHashSet::default(); // Membership only
    let mut queue: Vec<UnlaceNodeId> = Vec::new();
    for fk in frontier.iter() {
        if can_reach.insert(fk.id) {
            queue.push(fk.id);
        }
    }
    let mut pos = 0;
    while pos < queue.len() {
        let cur = queue[pos];
        pos += 1;
        if cur == source {
            continue;
        }
        for &p in g.get_preds(cur)? {
            if can_reach.insert(p) {
                queue.push(p);
            }
        }
    }
    Ok(can_reach)
}

/// (unlace) Slice of `g` from `source` up to (optionally including) `frontier`
/// (port of `subgraph_between_nodes`).
///
/// Cut edges into `source`, BFS forward keeping only paths that can still reach
/// the frontier, then iteratively prune dangling nodes. The cut is read off
/// `g` rather than made on a copy of it (angr copies the graph), so one slice
/// costs the nodes it walks, not the whole graph.
/// Returns `Err` if `source` or a frontier node is not in the graph (angr
/// raises `KeyError`).
pub fn unlace_subgraph_between_nodes(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    source: UnlaceNodeId,
    frontier: &UnlaceNodeSet,
    include_frontier: bool,
    res: &mut UnlaceRegionGraph,
) -> UnlaceResult<()> {
    check_slice_ends(g, source, frontier)?;
    let can_reach = reaching_frontier(g, source, frontier)?;

    // Forward FIFO BFS from source, adding edges to the slice.
    {
        let mut queue: Vec<UnlaceNodeId> = Vec::new();
        let mut traversed: FxHashSet<UnlaceNodeId> = FxHashSet::default(); // Membership only
        queue.push(source);
        let mut pos = 0;
        while pos < queue.len() {
            let node = queue[pos];
            pos += 1;
            if !traversed.insert(node) {
                continue;
            }
            for &succ in g.get_succs(node)? {
                if succ == source || res.has_edge(node, succ) {
                    continue;
                }
                res.add_edge(pool, node, succ);
                if traversed.contains(&succ) {
                    continue;
                }
                if frontier.contains(&pool.key(succ)) {
                    continue;
                }
                if can_reach.contains(&succ) {
                    queue.push(succ);
                }
            }
        }
    }

    // Iteratively prune dangling interior nodes.
    loop {
        let mut to_remove: Vec<UnlaceNodeId> = Vec::new();
        for (key, adj) in res.iter_adj() {
            let n = key.id;
            if n == source {
                continue;
            }
            if frontier.contains(key) {
                continue;
            }
            if adj.succs.is_empty() || adj.preds.is_empty() {
                to_remove.push(n);
            }
        }
        if to_remove.is_empty() {
            break;
        }
        for n in to_remove {
            res.remove_node(n);
        }
    }

    if !include_frontier {
        for fk in frontier.iter() {
            if res.contains_node(fk.id) {
                res.remove_node(fk.id);
            }
        }
    }
    Ok(())
}

/// (unlace) Whether the forward walk of [`unlace_subgraph_between_nodes`] from
/// `source` visits a node `hit` accepts, stopping at the first.
///
/// Every node that walk visits stays in the slice: `source` aside, it is
/// entered over an edge from a visited node, and it reaches the frontier, so
/// one of its successors is a frontier node or is visited too, and pruning
/// only removes nodes with no successors or no predecessors in the slice.
/// A `true` answer therefore says the slice, frontier included, holds such a
/// node, without building it. A `false` one says nothing about the frontier
/// nodes.
pub fn unlace_slice_visits(
    g: &UnlaceRegionGraph,
    pool: &UnlaceNodePool,
    source: UnlaceNodeId,
    frontier: &UnlaceNodeSet,
    mut hit: impl FnMut(UnlaceNodeId) -> bool,
) -> UnlaceResult<bool> {
    check_slice_ends(g, source, frontier)?;
    let can_reach = reaching_frontier(g, source, frontier)?;
    let mut queue: Vec<UnlaceNodeId> = vec![source];
    let mut traversed: FxHashSet<UnlaceNodeId> = FxHashSet::default(); // Membership only
    let mut pos = 0;
    while pos < queue.len() {
        let node = queue[pos];
        pos += 1;
        if !traversed.insert(node) {
            continue;
        }
        if hit(node) {
            return Ok(true);
        }
        for &succ in g.get_succs(node)? {
            if succ == source || traversed.contains(&succ) || frontier.contains(&pool.key(succ)) {
                continue;
            }
            if can_reach.contains(&succ) {
                queue.push(succ);
            }
        }
    }
    Ok(false)
}

//
// Dominators
//

/// (unlace) Immediate dominators of all nodes reachable from `start`
/// (`networkx.immediate_dominators` analog, Cooper-Harvey-Kennedy over a
/// deterministic reverse post-order).
///
/// Unreachable nodes are absent from `idom`; `idom[start] == start`.
pub fn unlace_immediate_dominators(
    pool: &UnlaceNodePool,
    g: &UnlaceRegionGraph,
    start: UnlaceNodeId,
    idom: &mut BTreeMap<UnlaceNodeId, UnlaceNodeId>,
) -> UnlaceResult<()> {
    // Cooper-Harvey-Kennedy over deterministic reverse postorder.
    let mut postorder: Vec<UnlaceNodeId> = Vec::new();
    unlace_dfs_postorder_deterministic(pool, g, start, &mut postorder)?;
    // Reachable nodes only: node ids come from an append-only pool, so indexing
    // scratch by raw id would scale with all historical nodes, not this graph.
    let mut po_index: FxHashMap<UnlaceNodeId, usize> =
        FxHashMap::with_capacity_and_hasher(postorder.len(), Default::default());
    for (i, &n) in postorder.iter().enumerate() {
        po_index.insert(n, i);
    }

    idom.insert(start, start);
    // Dense parent state follows the reachable postorder. Seed it from the
    // caller's map to preserve the existing behavior for pre-populated maps.
    let mut idom_by_index: Vec<Option<UnlaceNodeId>> = postorder
        .iter()
        .map(|node| idom.get(node).copied())
        .collect();
    let mut changed = true;
    while changed {
        changed = false;
        for i in (0..postorder.len()).rev() {
            // Reverse postorder
            let b = postorder[i];
            if b == start {
                continue;
            }
            let mut new_idom: Option<usize> = None;
            for &pred in g.get_preds(b)? {
                let Some(&pred_index) = po_index.get(&pred) else {
                    continue; // Unreachable predecessor
                };
                if idom_by_index[pred_index].is_none() {
                    continue; // Not yet processed
                }
                if new_idom.is_none() {
                    new_idom = Some(pred_index);
                    continue;
                }
                // intersect(pred, new_idom)
                let mut f1 = pred_index;
                let mut f2 = new_idom.unwrap();
                while f1 != f2 {
                    while f1 < f2 {
                        let parent = idom_by_index[f1]
                            .expect("processed dominator node must have an immediate dominator");
                        f1 = *po_index
                            .get(&parent)
                            .expect("immediate dominator must be in the reachable postorder");
                    }
                    while f2 < f1 {
                        let parent = idom_by_index[f2]
                            .expect("processed dominator node must have an immediate dominator");
                        f2 = *po_index
                            .get(&parent)
                            .expect("immediate dominator must be in the reachable postorder");
                    }
                }
                new_idom = Some(f1);
            }
            if let Some(ni_index) = new_idom {
                let ni = postorder[ni_index];
                let prev = idom_by_index[i];
                if prev != Some(ni) {
                    idom_by_index[i] = Some(ni);
                    idom.insert(b, ni);
                    changed = true;
                }
            }
        }
    }
    Ok(())
}

/// (unlace) Does `dominator` dominate `node` under the idom map?
/// (port of `utils.graph.dominates`).
pub fn unlace_dominates(
    idom: &BTreeMap<UnlaceNodeId, UnlaceNodeId>,
    dominator: UnlaceNodeId,
    node: UnlaceNodeId,
) -> bool {
    let mut n: Option<UnlaceNodeId> = Some(node);
    while let Some(cur) = n {
        if cur == dominator {
            return true;
        }
        n = match idom.get(&cur) {
            Some(&d) if d != cur => Some(d),
            _ => None,
        };
    }
    false
}

//
// UnlaceIncrementalDominators
//

/// (unlace) Incrementally maintained (post-)dominators with dominance frontiers
/// (port of `angr.utils.doms.IncrementalDominators`).
///
/// Holds a borrowed graph by argument (the C++ keeps a live `const
/// UnlaceRegionGraph *`); the graph must only ever change by replacing a set of
/// nodes with a single new node ([`graph_updated`](Self::graph_updated)),
/// exactly as in angr.  Dominance frontiers are computed lazily on first
/// [`df`](Self::df) use and patched incrementally afterwards.
///
/// Because Rust forbids storing a borrow alongside the borrowed-as-argument
/// methods cleanly, the underlying graph and pool are passed to every method
/// that needs them (`init_*`, `graph_updated`, `verify`), exactly the data the
/// C++ reaches through its `graph` member.
pub struct UnlaceIncrementalDominators {
    /// Tree root (entry node; end node when post) (C++ `start`).
    start: UnlaceNodeId,
    /// True if computing post-dominators (C++ `post`).
    post: bool,
    /// node -> immediate (post-)dominator (C++ `doms`).
    doms: BTreeMap<UnlaceNodeId, UnlaceNodeId>,
    /// Has the dominance-frontier map been initialized? (C++ `dfsValid`).
    dfs_valid: bool,
    /// node -> dominance frontier (C++ `dfs`).
    dfs: BTreeMap<UnlaceNodeId, UnlaceNodeSet>,
    /// Has the inverted dominator tree been built? (C++ `invertedValid`).
    inverted_valid: bool,
    /// dominator -> dominatees (C++ `invertedDomTree`).
    inverted_dom_tree: BTreeMap<UnlaceNodeId, Vec<UnlaceNodeId>>,
}

impl UnlaceIncrementalDominators {
    /// Build over `graph` rooted at `start` (C++ constructor).
    pub fn new(
        pool: &UnlaceNodePool,
        graph: &UnlaceRegionGraph,
        start: UnlaceNodeId,
        is_post: bool,
    ) -> UnlaceResult<UnlaceIncrementalDominators> {
        let mut me = UnlaceIncrementalDominators {
            start,
            post: is_post,
            doms: BTreeMap::new(),
            dfs_valid: false,
            dfs: BTreeMap::new(),
            inverted_valid: false,
            inverted_dom_tree: BTreeMap::new(),
        };
        let doms = me.compute_doms(pool, graph)?;
        me.doms = doms;
        Ok(me)
    }

    /// Compute doms from scratch (C++ `initDoms`).
    fn compute_doms(
        &self,
        pool: &UnlaceNodePool,
        graph: &UnlaceRegionGraph,
    ) -> UnlaceResult<BTreeMap<UnlaceNodeId, UnlaceNodeId>> {
        let mut res: BTreeMap<UnlaceNodeId, UnlaceNodeId> = BTreeMap::new();
        if self.post {
            let mut rev = UnlaceRegionGraph::new();
            graph.build_reversed(pool, &mut rev);
            unlace_immediate_dominators(pool, &rev, self.start, &mut res)?;
        } else {
            unlace_immediate_dominators(pool, graph, self.start, &mut res)?;
        }
        res.insert(self.start, self.start);
        Ok(res)
    }

    /// Compute frontiers from scratch (C++ `initDfs`).
    ///
    /// Port of `IncrementalDominators.init_dfs`: walk every node with >= 2
    /// direction-predecessors, climbing the dom chain.
    fn compute_dfs(
        &self,
        pool: &UnlaceNodePool,
        graph: &UnlaceRegionGraph,
    ) -> UnlaceResult<BTreeMap<UnlaceNodeId, UnlaceNodeSet>> {
        let mut res: BTreeMap<UnlaceNodeId, UnlaceNodeSet> = BTreeMap::new();
        // Iterate doms in UnlaceNodeOrder (C++ map iteration is pointer order
        // there, but the output is order-insensitive: every (u,v) pair that
        // qualifies inserts u into res[v]; the set contents are identical
        // regardless of visit order).  We iterate by UnlaceNodeOrder for
        // determinism.
        let dom_keys: Vec<UnlaceNodeId> = self.doms_in_order(pool);
        for u in dom_keys {
            if !graph.contains_node(u) {
                continue;
            }
            let preds: Vec<UnlaceNodeId> = if self.post {
                graph.get_succs(u)?.to_vec()
            } else {
                graph.get_preds(u)?.to_vec()
            };
            if preds.len() < 2 {
                continue;
            }
            let du = self.doms[&u];
            for v0 in preds {
                if !self.doms.contains_key(&v0) {
                    continue;
                }
                let mut v = v0;
                while v != du {
                    res.entry(v).or_default().insert(pool.key(u));
                    match self.doms.get(&v) {
                        Some(&nx) => v = nx,
                        None => {
                            return Err(UnlaceError::lowlevel(
                                "unlace regiongraph: broken dom chain in initDfs",
                            ));
                        }
                    }
                }
            }
        }
        Ok(res)
    }

    /// `doms` keys in `UnlaceNodeOrder` (the C++ `doms` is a `map<...,
    /// UnlaceNodeOrder>` over node pointers; here `doms` is keyed by raw id so we
    /// re-sort by the pool key for deterministic iteration).
    fn doms_in_order(&self, pool: &UnlaceNodePool) -> Vec<UnlaceNodeId> {
        let mut v: Vec<UnlaceNodeId> = self.doms.keys().copied().collect();
        v.sort_by(|&a, &b| pool.key(a).cmp(&pool.key(b)));
        v
    }

    /// Build the inverted tree if not yet built (C++ `updateInvertedDomtree`).
    fn update_inverted_domtree(&mut self, pool: &UnlaceNodePool) {
        if self.inverted_valid {
            return;
        }
        self.inverted_valid = true;
        // C++ iterates `doms` (pointer order) appending `first` to
        // invertedDomTree[second].  The per-dominator list order is
        // observable downstream (graphUpdated dominatee re-pointing), so
        // iterate in UnlaceNodeOrder for a deterministic build.
        for u in self.doms_in_order(pool) {
            let d = self.doms[&u];
            self.inverted_dom_tree.entry(d).or_default().push(u);
        }
    }

    /// Immediate dominator (`None` if absent) (C++ `idom`).
    pub fn idom(&self, n: UnlaceNodeId) -> Option<UnlaceNodeId> {
        self.doms.get(&n).copied()
    }

    /// Dominance frontier (empty set if absent) (C++ `df`).
    pub fn df(
        &mut self,
        pool: &UnlaceNodePool,
        graph: &UnlaceRegionGraph,
        n: UnlaceNodeId,
    ) -> UnlaceResult<UnlaceNodeSet> {
        if !self.dfs_valid {
            self.dfs_valid = true;
            self.dfs = self.compute_dfs(pool, graph)?;
        }
        Ok(self.dfs.get(&n).cloned().unwrap_or_default())
    }

    /// Does `dominator` (post-)dominate `n`? (C++ `dominates`).
    pub fn dominates(&self, dominator: UnlaceNodeId, n: UnlaceNodeId) -> bool {
        let mut cur: Option<UnlaceNodeId> = Some(n);
        while let Some(c) = cur {
            if c == dominator {
                return true;
            }
            cur = match self.idom(c) {
                Some(d) if c != d => Some(d),
                _ => None,
            };
        }
        false
    }

    /// Patch after nodes were replaced by `new_node` (C++ `graphUpdated`).
    pub fn graph_updated(
        &mut self,
        pool: &UnlaceNodePool,
        new_node: UnlaceNodeId,
        replaced_nodes: &UnlaceNodeSet,
        replaced_head: UnlaceNodeId,
    ) -> UnlaceResult<()> {
        self.update_inverted_domtree(pool);

        // Climb out of the replaced set to find the new node's dominator.
        let mut new_dom = *self.doms.get(&replaced_head).ok_or_else(|| {
            UnlaceError::lowlevel("unlace regiongraph: replaced head has no dominator")
        })?;
        while replaced_nodes.contains(&pool.key(new_dom)) && new_dom != self.start {
            new_dom = *self.doms.get(&new_dom).ok_or_else(|| {
                UnlaceError::lowlevel("unlace regiongraph: broken dom chain in graphUpdated")
            })?;
        }
        if replaced_nodes.contains(&pool.key(self.start)) {
            self.start = new_node;
        }
        if replaced_nodes.contains(&pool.key(new_dom)) {
            new_dom = new_node;
        }

        // Re-point all dominatees of replaced nodes at the new node.
        let mut new_node_doms: Vec<UnlaceNodeId> = Vec::new();
        for ri in replaced_nodes.iter() {
            if let Some(dtees) = self.inverted_dom_tree.get(&ri.id) {
                let dtees = dtees.clone();
                for d in dtees {
                    self.doms.insert(d, new_node);
                    new_node_doms.push(d);
                }
            }
        }
        self.doms.insert(new_node, new_dom);

        if self.dfs_valid {
            if let Some(hi) = self.dfs.get(&replaced_head).cloned() {
                self.dfs.insert(new_node, hi);
            }
            for ri in replaced_nodes.iter() {
                let rn = ri.id;
                self.dfs.remove(&rn);
                let rk = pool.key(rn);
                let nk = pool.key(new_node);
                for fset in self.dfs.values_mut() {
                    if fset.remove(&rk) {
                        fset.insert(nk);
                    }
                }
            }
        }

        // Keep the inverted dom tree up to date.
        self.inverted_dom_tree
            .entry(new_dom)
            .or_default()
            .push(new_node);
        self.inverted_dom_tree.insert(new_node, new_node_doms);
        for ri in replaced_nodes.iter() {
            let rn = ri.id;
            if let Some(&d) = self.doms.get(&rn) {
                self.doms.remove(&rn);
                let lst = self.inverted_dom_tree.get_mut(&d).unwrap();
                let mut found = false;
                if let Some(pos) = lst.iter().position(|&x| x == rn) {
                    lst.remove(pos);
                    found = true;
                }
                if !found {
                    return Err(UnlaceError::lowlevel(
                        "unlace regiongraph: inverted dom tree inconsistent",
                    ));
                }
            }
            self.inverted_dom_tree.remove(&rn);
        }
        Ok(())
    }

    /// Recompute from scratch and compare (port of `_debug_check` / C++
    /// `verify`).
    pub fn verify(&self, pool: &UnlaceNodePool, graph: &UnlaceRegionGraph) -> UnlaceResult<()> {
        let true_doms = self.compute_doms(pool, graph)?;
        if true_doms.len() != self.doms.len() {
            return Err(UnlaceError::lowlevel(
                "unlace regiongraph: incremental dominators diverged (size)",
            ));
        }
        for (k, v) in true_doms.iter() {
            match self.doms.get(k) {
                Some(dv) if dv == v => {}
                _ => {
                    return Err(UnlaceError::lowlevel(
                        "unlace regiongraph: incremental dominators diverged",
                    ));
                }
            }
        }
        if self.dfs_valid {
            let true_dfs = self.compute_dfs(pool, graph)?;
            if true_dfs.len() != self.dfs.len() {
                return Err(UnlaceError::lowlevel(
                    "unlace regiongraph: incremental frontiers diverged (size)",
                ));
            }
            for (k, v) in true_dfs.iter() {
                match self.dfs.get(k) {
                    Some(dv) if dv == v => {}
                    _ => {
                        return Err(UnlaceError::lowlevel(
                            "unlace regiongraph: incremental frontiers diverged",
                        ));
                    }
                }
            }
        }
        Ok(())
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Helper: a pool plus a name->id table for building test graphs by addr.
    struct Builder {
        pool: UnlaceNodePool,
        next_ident: uint4,
    }

    impl Builder {
        fn new() -> Builder {
            Builder {
                pool: UnlaceNodePool::new(),
                next_ident: 0,
            }
        }

        /// Allocate a synthetic block node at `addr` (ident auto-increments,
        /// matching the deterministic creation-index tiebreaker).
        fn node(&mut self, addr: uintb) -> UnlaceNodeId {
            let id = self.next_ident;
            self.next_ident += 1;
            self.pool.make(NodeKind::Block, addr, id)
        }

        fn graph(
            &self,
            edges: &[(UnlaceNodeId, UnlaceNodeId)],
            extra: &[UnlaceNodeId],
        ) -> UnlaceRegionGraph {
            let mut g = UnlaceRegionGraph::new();
            for &n in extra {
                g.add_node(&self.pool, n);
            }
            for &(a, b) in edges {
                g.add_edge(&self.pool, a, b);
            }
            g
        }

        fn set(&self, ids: &[UnlaceNodeId]) -> UnlaceNodeSet {
            let mut s = UnlaceNodeSet::new();
            for &i in ids {
                s.insert(self.pool.key(i));
            }
            s
        }
    }

    /// Reachability after removing one node. This deliberately does not use
    /// dominator code or traversal order, so it can serve as a small oracle.
    fn reachable_without(
        graph: &UnlaceRegionGraph,
        start: UnlaceNodeId,
        removed: Option<UnlaceNodeId>,
    ) -> BTreeSet<UnlaceNodeId> {
        if removed == Some(start) {
            return BTreeSet::new();
        }
        let mut reachable = BTreeSet::new();
        let mut pending = vec![start];
        while let Some(node) = pending.pop() {
            if removed == Some(node) || !reachable.insert(node) {
                continue;
            }
            pending.extend_from_slice(graph.get_succs(node).unwrap());
        }
        reachable
    }

    /// Compute immediate dominators by the definition: a node dominates a
    /// reachable target iff deleting it makes that target unreachable.
    fn idom_by_removal(
        graph: &UnlaceRegionGraph,
        start: UnlaceNodeId,
    ) -> BTreeMap<UnlaceNodeId, UnlaceNodeId> {
        let reachable = reachable_without(graph, start, None);
        let mut dominators = BTreeMap::<UnlaceNodeId, BTreeSet<UnlaceNodeId>>::new();
        for &node in &reachable {
            let mut node_dominators = BTreeSet::new();
            for &candidate in &reachable {
                if candidate == node
                    || !reachable_without(graph, start, Some(candidate)).contains(&node)
                {
                    node_dominators.insert(candidate);
                }
            }
            dominators.insert(node, node_dominators);
        }

        let mut result = BTreeMap::new();
        for &node in &reachable {
            if node == start {
                result.insert(start, start);
                continue;
            }
            let strict_dominators: BTreeSet<UnlaceNodeId> = dominators[&node]
                .iter()
                .copied()
                .filter(|&candidate| candidate != node)
                .collect();
            let immediate = strict_dominators
                .iter()
                .copied()
                .find(|candidate| dominators[candidate] == strict_dominators)
                .expect("every reachable non-entry node has an immediate dominator");
            result.insert(node, immediate);
        }
        result
    }

    #[test]
    fn node_order_addr_then_ident() {
        let mut b = Builder::new();
        let n0 = b.node(0x100); // ident 0
        let n1 = b.node(0x100); // ident 1, same addr
        let n2 = b.node(0x080); // lower addr
        let g = b.graph(&[], &[n0, n1, n2]);
        let mut nodes = Vec::new();
        g.get_nodes(&mut nodes);
        // (addr, ident) order: 0x080/2, 0x100/0, 0x100/1.
        assert_eq!(nodes, vec![n2, n0, n1]);
    }

    #[test]
    fn edge_dedup_and_self_loop() {
        let mut b = Builder::new();
        let a = b.node(0x10);
        let c = b.node(0x20);
        let mut g = b.graph(&[(a, c), (a, c)], &[]); // duplicate
        assert_eq!(g.num_edges(), 1);
        g.add_edge(&b.pool, a, a); // self-loop
        assert!(g.has_edge(a, a));
        assert_eq!(g.size_out(a).unwrap(), 2);
        assert_eq!(g.size_in(a).unwrap(), 1);
        g.remove_node(a);
        assert!(!g.contains_node(a));
        // c's preds list no longer references a.
        assert_eq!(g.size_in(c).unwrap(), 0);
    }

    #[test]
    fn sorted_succs_determinism() {
        let mut b = Builder::new();
        let s = b.node(0x00);
        let hi = b.node(0x300);
        let lo = b.node(0x100);
        let mid = b.node(0x200);
        // Insert edges out of insertion order; getSuccs preserves insertion,
        // getSortedSuccs imposes UnlaceNodeOrder.
        let g = b.graph(&[(s, hi), (s, lo), (s, mid)], &[]);
        assert_eq!(g.get_succs(s).unwrap(), &[hi, lo, mid]);
        assert_eq!(g.get_sorted_succs(&b.pool, s).unwrap(), vec![lo, mid, hi]);
    }

    #[test]
    fn back_edges_simple_loop() {
        // a -> b -> c -> b  (back edge c->b); plus c -> d
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let g = b.graph(&[(a, bb), (bb, c), (c, bb), (c, d)], &[]);
        let mut be = Vec::new();
        unlace_dfs_back_edges(&b.pool, &g, a, &mut be).unwrap();
        assert_eq!(be, vec![(c, bb)]);
    }

    #[test]
    fn back_edges_self_loop() {
        let mut b = Builder::new();
        let a = b.node(0x10);
        let c = b.node(0x20);
        let g = b.graph(&[(a, c), (c, c)], &[]);
        let mut be = Vec::new();
        unlace_dfs_back_edges(&b.pool, &g, a, &mut be).unwrap();
        assert_eq!(be, vec![(c, c)]);
    }

    #[test]
    fn postorder_deterministic_diamond() {
        // a -> b, a -> c, b -> d, c -> d
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d)], &[]);
        let mut po = Vec::new();
        unlace_dfs_postorder_deterministic(&b.pool, &g, a, &mut po).unwrap();
        // Successors pushed ascending => largest (c@0x30) explored first.
        // c -> d (d finishes), c finishes, then b (d already visited) finishes,
        // then a.  Postorder: d, c, b, a.
        assert_eq!(po, vec![d, c, bb, a]);
        // a must be last (root finishes last); d first (sink).
        assert_eq!(*po.last().unwrap(), a);
    }

    #[test]
    fn topo_sort_acyclic_is_reverse_postorder() {
        // Linear chain a -> b -> c: quasi-topo == topological order.
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let g = b.graph(&[(a, bb), (bb, c)], &[]);
        let mut order = Vec::new();
        unlace_quasi_topo_sort(&b.pool, &g, &mut order).unwrap();
        assert_eq!(order, vec![a, bb, c]);
    }

    #[test]
    fn topo_sort_single_and_empty() {
        let mut b = Builder::new();
        let a = b.node(0x10);
        let g = b.graph(&[], &[a]);
        let mut order = Vec::new();
        unlace_quasi_topo_sort(&b.pool, &g, &mut order).unwrap();
        assert_eq!(order, vec![a]);

        let g2 = UnlaceRegionGraph::new();
        let mut order2 = Vec::new();
        unlace_quasi_topo_sort(&b.pool, &g2, &mut order2).unwrap();
        assert!(order2.is_empty());
    }

    #[test]
    fn topo_sort_with_scc() {
        // a -> b -> c -> b (SCC {b,c}); c -> d.  Expansion: a, then SCC head b,
        // then the rest of the SCC, then d.
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let g = b.graph(&[(a, bb), (bb, c), (c, bb), (c, d)], &[]);
        let mut order = Vec::new();
        unlace_quasi_topo_sort(&b.pool, &g, &mut order).unwrap();
        // a precedes the SCC; the SCC ({b,c}) precedes d; head of SCC is b
        // (single successor of a inside the SCC).  d last.
        assert_eq!(order.len(), 4);
        assert_eq!(order[0], a);
        let pos_b = order.iter().position(|&x| x == bb).unwrap();
        let pos_c = order.iter().position(|&x| x == c).unwrap();
        let pos_d = order.iter().position(|&x| x == d).unwrap();
        assert!(pos_b < pos_c, "loop head b before c");
        assert!(pos_c < pos_d, "scc before d");
    }

    #[test]
    fn immediate_dominators_diamond() {
        // a -> b, a -> c, b -> d, c -> d.  idom(d) == a.
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d)], &[]);
        let mut idom = BTreeMap::new();
        unlace_immediate_dominators(&b.pool, &g, a, &mut idom).unwrap();
        assert_eq!(idom[&a], a);
        assert_eq!(idom[&bb], a);
        assert_eq!(idom[&c], a);
        assert_eq!(idom[&d], a);
        assert!(unlace_dominates(&idom, a, d));
        assert!(!unlace_dominates(&idom, bb, d));
    }

    #[test]
    fn immediate_dominators_chain() {
        // a -> b -> c -> d (idom is the predecessor each step).
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let g = b.graph(&[(a, bb), (bb, c), (c, d)], &[]);
        let mut idom = BTreeMap::new();
        unlace_immediate_dominators(&b.pool, &g, a, &mut idom).unwrap();
        assert_eq!(idom[&bb], a);
        assert_eq!(idom[&c], bb);
        assert_eq!(idom[&d], c);
    }

    #[test]
    fn immediate_dominators_match_removal_oracle_on_loops_and_unreachable_preds() {
        let mut b = Builder::new();
        let start = b.node(0x10);
        let loop_head = b.node(0x20);
        let loop_body = b.node(0x30);
        let irreducible_a = b.node(0x40);
        let irreducible_b = b.node(0x50);
        let irreducible_join = b.node(0x60);
        let exit = b.node(0x70);
        let unreachable_a = b.node(0x80);
        let unreachable_b = b.node(0x90);
        let unrelated = b.node(0xa0);
        let edges = [
            (start, loop_head),
            (loop_head, loop_body),
            (loop_body, loop_head),
            (loop_body, exit),
            (start, irreducible_a),
            (start, irreducible_b),
            (irreducible_a, irreducible_join),
            (irreducible_b, irreducible_join),
            (irreducible_join, irreducible_a),
            (irreducible_join, irreducible_b),
            (irreducible_join, irreducible_join),
            (irreducible_join, exit),
            (unreachable_a, unreachable_b),
            (unreachable_b, unreachable_a),
            (unreachable_a, exit),
        ];
        let nodes = [
            start,
            loop_head,
            loop_body,
            irreducible_a,
            irreducible_b,
            irreducible_join,
            exit,
        ];
        let graph = b.graph(&edges, &nodes);
        let mut reversed_edges = edges.to_vec();
        reversed_edges.reverse();
        let permuted_graph = b.graph(&reversed_edges, &nodes);
        let expected = idom_by_removal(&graph, start);

        let mut actual = BTreeMap::new();
        actual.insert(unrelated, unrelated);
        unlace_immediate_dominators(&b.pool, &graph, start, &mut actual).unwrap();
        for (&node, &parent) in &expected {
            assert_eq!(actual.get(&node), Some(&parent), "node {node:?}");
        }
        assert_eq!(actual.get(&unrelated), Some(&unrelated));
        assert!(!actual.contains_key(&unreachable_a));
        assert!(!actual.contains_key(&unreachable_b));

        let mut permuted = BTreeMap::new();
        permuted.insert(unrelated, unrelated);
        unlace_immediate_dominators(&b.pool, &permuted_graph, start, &mut permuted).unwrap();
        assert_eq!(
            permuted, actual,
            "edge insertion order must not change dominators"
        );
    }

    #[test]
    fn generated_graph_dominators_match_removal_oracle_in_both_edge_orders() {
        let mut random = 0x3a96_fda7_104d_b82cu64;
        for sample in 0..64 {
            let mut b = Builder::new();
            for n in 0..32 {
                b.node(0x1000 + n);
            }
            let nodes: Vec<_> = (0..2 + sample % 6)
                .map(|n| b.node((n % 3) * 0x10))
                .collect();
            let mut edges = Vec::new();
            for &from in &nodes {
                for &to in &nodes {
                    random = random.wrapping_mul(6364136223846793005).wrapping_add(1);
                    if random >> 62 == 0 {
                        edges.push((from, to));
                    }
                }
            }
            let graph = b.graph(&edges, &nodes);
            let expected = idom_by_removal(&graph, nodes[0]);
            let mut actual = BTreeMap::new();
            unlace_immediate_dominators(&b.pool, &graph, nodes[0], &mut actual).unwrap();
            assert_eq!(actual, expected, "generated graph {sample}");
            edges.reverse();
            let reversed = b.graph(&edges, &nodes);
            let mut actual = BTreeMap::new();
            unlace_immediate_dominators(&b.pool, &reversed, nodes[0], &mut actual).unwrap();
            assert_eq!(actual, expected, "reversed edge order in graph {sample}");
        }
    }

    #[test]
    fn subgraph_between_nodes_basic() {
        // a -> b -> c -> e ; a -> d -> e ; b -> f (dead-ends, pruned).
        // source=a, frontier={e}, includeFrontier=true.
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let e = b.node(0x50);
        let f = b.node(0x60); // dead-end off b
        let g = b.graph(&[(a, bb), (bb, c), (c, e), (a, d), (d, e), (bb, f)], &[]);
        let frontier = b.set(&[e]);
        let mut res = UnlaceRegionGraph::new();
        unlace_subgraph_between_nodes(&b.pool, &g, a, &frontier, true, &mut res).unwrap();
        // f can't reach e -> pruned; e kept (includeFrontier).
        assert!(!res.contains_node(f));
        assert!(res.contains_node(e));
        assert!(res.contains_node(a));
        assert!(res.contains_node(bb));
        assert!(res.contains_node(c));
        assert!(res.contains_node(d));

        // Now exclude the frontier.
        let mut res2 = UnlaceRegionGraph::new();
        unlace_subgraph_between_nodes(&b.pool, &g, a, &frontier, false, &mut res2).unwrap();
        assert!(!res2.contains_node(e));
    }

    /// angr's `subgraph_between_nodes` as first ported: cut the edges into
    /// `source` on a copy of the graph, then walk the copy.
    fn slice_on_a_copy(
        pool: &UnlaceNodePool,
        g: &UnlaceRegionGraph,
        source: UnlaceNodeId,
        frontier: &UnlaceNodeSet,
        include_frontier: bool,
    ) -> UnlaceRegionGraph {
        let mut graph = g.clone();
        let mut src_in = Vec::new();
        graph.in_edges(source, &mut src_in).unwrap();
        for (a, b) in src_in {
            graph.remove_edge(a, b);
        }
        let mut can_reach = BTreeSet::new();
        let mut queue: Vec<UnlaceNodeId> = frontier.iter().map(|k| k.id).collect();
        can_reach.extend(queue.iter().copied());
        let mut pos = 0;
        while pos < queue.len() {
            let cur = queue[pos];
            pos += 1;
            for p in graph.get_preds(cur).unwrap().to_vec() {
                if can_reach.insert(p) {
                    queue.push(p);
                }
            }
        }
        let mut res = UnlaceRegionGraph::new();
        let mut queue = vec![source];
        let mut traversed = BTreeSet::new();
        let mut pos = 0;
        while pos < queue.len() {
            let node = queue[pos];
            pos += 1;
            if !traversed.insert(node) {
                continue;
            }
            for succ in graph.get_succs(node).unwrap().to_vec() {
                if res.has_edge(node, succ) {
                    continue;
                }
                res.add_edge(pool, node, succ);
                if !traversed.contains(&succ)
                    && !frontier.contains(&pool.key(succ))
                    && can_reach.contains(&succ)
                {
                    queue.push(succ);
                }
            }
        }
        loop {
            let dangling: Vec<UnlaceNodeId> = res
                .iter_adj()
                .filter(|(k, adj)| {
                    k.id != source
                        && !frontier.contains(k)
                        && (adj.succs.is_empty() || adj.preds.is_empty())
                })
                .map(|(k, _)| k.id)
                .collect();
            if dangling.is_empty() {
                break;
            }
            for n in dangling {
                res.remove_node(n);
            }
        }
        if !include_frontier {
            for fk in frontier.iter() {
                res.remove_node(fk.id);
            }
        }
        res
    }

    #[test]
    fn a_slice_matches_the_slice_of_a_copy_and_holds_every_node_its_walk_visits() {
        let mut random = 0x9c1d_44e2_0b7f_35a1u64;
        let mut next = |n: u64| {
            random = random
                .wrapping_mul(6364136223846793005)
                .wrapping_add(1442695040888963407);
            (random >> 33) % n
        };
        let mut visited_any = 0;
        for sample in 0..300 {
            let mut b = Builder::new();
            let nodes: Vec<_> = (0..3 + sample % 9)
                .map(|n| b.node(0x10 * (n % 5)))
                .collect();
            let mut edges = Vec::new();
            for &from in &nodes {
                for &to in &nodes {
                    if next(4) == 0 {
                        edges.push((from, to));
                    }
                }
            }
            let g = b.graph(&edges, &nodes);
            for &source in &nodes {
                let picked: Vec<_> = nodes.iter().copied().filter(|_| next(3) == 0).collect();
                let frontier = b.set(&picked);
                for include in [true, false] {
                    let mut res = UnlaceRegionGraph::new();
                    unlace_subgraph_between_nodes(
                        &b.pool, &g, source, &frontier, include, &mut res,
                    )
                    .unwrap();
                    let copy = slice_on_a_copy(&b.pool, &g, source, &frontier, include);
                    assert_eq!(format!("{res:?}"), format!("{copy:?}"), "graph {sample}");
                }
                let mut res = UnlaceRegionGraph::new();
                unlace_subgraph_between_nodes(&b.pool, &g, source, &frontier, true, &mut res)
                    .unwrap();
                let mut visited = Vec::new();
                let hit = unlace_slice_visits(&g, &b.pool, source, &frontier, |n| {
                    visited.push(n);
                    false
                });
                assert!(!hit.unwrap());
                for n in visited.iter().filter(|&&n| n != source) {
                    assert!(
                        res.contains_node(*n),
                        "graph {sample}: visited {n:?} is not in the slice"
                    );
                    visited_any += 1;
                }
                let target = visited.last().copied();
                let stops =
                    unlace_slice_visits(&g, &b.pool, source, &frontier, |n| Some(n) == target);
                assert_eq!(stops.unwrap(), target.is_some());
            }
        }
        assert!(visited_any > 500, "{visited_any}");
    }

    #[test]
    fn subgraph_between_nodes_errors() {
        let mut b = Builder::new();
        let a = b.node(0x10);
        let c = b.node(0x20);
        let orphan = b.node(0x99);
        let g = b.graph(&[(a, c)], &[]);
        let empty = UnlaceNodeSet::new();
        // source not in graph.
        assert!(
            unlace_subgraph_between_nodes(
                &b.pool,
                &g,
                orphan,
                &empty,
                true,
                &mut UnlaceRegionGraph::new()
            )
            .is_err()
        );
        // frontier node not in graph.
        let bad_front = b.set(&[orphan]);
        assert!(
            unlace_subgraph_between_nodes(
                &b.pool,
                &g,
                a,
                &bad_front,
                true,
                &mut UnlaceRegionGraph::new()
            )
            .is_err()
        );
        assert!(unlace_slice_visits(&g, &b.pool, orphan, &empty, |_| true).is_err());
        assert!(unlace_slice_visits(&g, &b.pool, a, &bad_front, |_| true).is_err());
    }

    #[test]
    fn incremental_dominators_match_scratch() {
        // a -> b, a -> c, b -> d, c -> d, d -> e.
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let e = b.node(0x50);
        let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d), (d, e)], &[]);
        let dom = UnlaceIncrementalDominators::new(&b.pool, &g, a, false).unwrap();
        assert_eq!(dom.idom(a), Some(a));
        assert_eq!(dom.idom(d), Some(a));
        assert_eq!(dom.idom(e), Some(d));
        dom.verify(&b.pool, &g).unwrap();
        // dominates climbs the idom chain.
        assert!(dom.dominates(a, e));
        assert!(dom.dominates(d, e));
        assert!(!dom.dominates(bb, e));
    }

    #[test]
    fn incremental_dominators_frontier() {
        // Classic diamond: df(b) and df(c) are both {d}.
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let g = b.graph(&[(a, bb), (a, c), (bb, d), (c, d)], &[]);
        let mut dom = UnlaceIncrementalDominators::new(&b.pool, &g, a, false).unwrap();
        let dfb = dom.df(&b.pool, &g, bb).unwrap();
        let dfc = dom.df(&b.pool, &g, c).unwrap();
        assert_eq!(dfb, b.set(&[d]));
        assert_eq!(dfc, b.set(&[d]));
        dom.verify(&b.pool, &g).unwrap();
    }

    #[test]
    fn incremental_dominators_patch_after_merge() {
        // Collapse a proper single-entry/single-exit region (a sequential
        // sub-chain) into one node and patch the dominators, then verify
        // against a from-scratch computation on the updated graph.  This is the
        // contract `graph_updated` is built on (angr only ever collapses a real
        // region; the dominatees of the replaced nodes re-point to the new
        // node, and nothing outside the region changes dominator).
        //   before: a -> b -> c -> d -> e
        //   merge {b,c} -> m, replaced_head = b (the region entry)
        //   after:  a -> m -> d -> e
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let d = b.node(0x40);
        let e = b.node(0x50);
        let g = b.graph(&[(a, bb), (bb, c), (c, d), (d, e)], &[]);
        let mut dom = UnlaceIncrementalDominators::new(&b.pool, &g, a, false).unwrap();
        // Touch frontiers so patching exercises the dfs path too.
        let _ = dom.df(&b.pool, &g, bb).unwrap();

        // Allocate the merged node and build the updated graph.
        let m = b.node(0x20); // same addr as the replaced head b
        let g2 = b.graph(&[(a, m), (m, d), (d, e)], &[]);

        let replaced = b.set(&[bb, c]);
        dom.graph_updated(&b.pool, m, &replaced, bb).unwrap();

        // After the patch the incremental dominators must equal a from-scratch
        // computation over the updated graph: a -> m -> d -> e.
        assert_eq!(dom.idom(a), Some(a));
        assert_eq!(dom.idom(m), Some(a));
        assert_eq!(dom.idom(d), Some(m));
        assert_eq!(dom.idom(e), Some(d));
        assert_eq!(dom.idom(bb), None); // b folded into m
        assert_eq!(dom.idom(c), None); // c folded into m
        dom.verify(&b.pool, &g2).unwrap();
    }

    #[test]
    fn post_dominators_reversed() {
        // a -> b -> c, computing post-dominators rooted at c (the sink).
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let g = b.graph(&[(a, bb), (bb, c)], &[]);
        let dom = UnlaceIncrementalDominators::new(&b.pool, &g, c, true).unwrap();
        // Post-dominator tree over reversed edges: c pdom of b, b pdom of a.
        assert_eq!(dom.idom(c), Some(c));
        assert_eq!(dom.idom(bb), Some(c));
        assert_eq!(dom.idom(a), Some(bb));
        dom.verify(&b.pool, &g).unwrap();
    }

    #[test]
    fn induced_and_reversed_copies() {
        let mut b = Builder::new();
        let a = b.node(0x10);
        let bb = b.node(0x20);
        let c = b.node(0x30);
        let g = b.graph(&[(a, bb), (bb, c), (a, c)], &[]);

        // Induced on {a, b}: only edge a -> b survives.
        let keep = b.set(&[a, bb]);
        let mut ind = UnlaceRegionGraph::new();
        g.induced(&b.pool, &keep, &mut ind);
        assert_eq!(ind.num_nodes(), 2);
        assert!(ind.has_edge(a, bb));
        assert!(!ind.has_edge(a, c));

        // Reversed: every edge flips, node set preserved.
        let mut rev = UnlaceRegionGraph::new();
        g.build_reversed(&b.pool, &mut rev);
        assert!(rev.has_edge(bb, a));
        assert!(rev.has_edge(c, bb));
        assert!(rev.has_edge(c, a));
        assert_eq!(rev.num_nodes(), 3);
    }
}
