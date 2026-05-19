//! CFG / call-graph layout — Sugiyama-style hierarchical layout.
//!
//! Produces (x, y) coordinates for nodes and routed edge polylines.
//! Output is renderer-agnostic: TUI (ASCII box-drawing), iced canvas,
//! SVG, GraphViz dot — all consume the same `LayoutResult`.
//!
//! Reference: references/ida/plugins/xref_graph/all/ (816 fns) — IDA's
//! 9.2+ xref graph layout algorithm.

use std::collections::{BTreeMap, BTreeSet};

/// A node in the input graph.
#[derive(Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct NodeId(pub u64);

/// A directed edge.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct Edge {
    pub from: NodeId,
    pub to: NodeId,
    pub kind: EdgeKind,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum EdgeKind {
    Taken,
    NotTaken,
    Fallthrough,
    Call,
    Return,
    Unconditional,
}

/// A laid-out node position.
#[derive(Copy, Clone, Debug, PartialEq)]
pub struct NodePos {
    pub x: f32,
    pub y: f32,
    pub width: f32,
    pub height: f32,
}

/// Output of the layout pass.
#[derive(Clone, Debug, Default)]
pub struct LayoutResult {
    pub positions: BTreeMap<NodeId, NodePos>,
    pub edges: Vec<Edge>,
    pub layer_count: usize,
}

/// Compute a Sugiyama-style hierarchical layout for the given graph.
///
/// Algorithm (simplified):
/// 1. Assign each node to a layer based on longest path from any source.
/// 2. Within each layer, order nodes by their first-appearance order
///    (no barycenter crossing reduction in this MVP).
/// 3. Position: x = layer_index * x_spacing, y = position-in-layer * y_spacing.
pub fn layout_graph(
    nodes: &BTreeSet<NodeId>,
    edges: &[Edge],
    x_spacing: f32,
    y_spacing: f32,
) -> LayoutResult {
    let layers = assign_layers(nodes, edges);
    let mut by_layer: BTreeMap<usize, Vec<NodeId>> = BTreeMap::new();
    for (n, &layer) in &layers {
        by_layer.entry(layer).or_default().push(n.clone());
    }
    let layer_count = by_layer.keys().max().copied().map(|m| m + 1).unwrap_or(0);
    let mut positions = BTreeMap::new();
    for (&layer, nodes_in_layer) in &by_layer {
        for (idx, node) in nodes_in_layer.iter().enumerate() {
            positions.insert(
                node.clone(),
                NodePos {
                    x: layer as f32 * x_spacing,
                    y: idx as f32 * y_spacing,
                    width: x_spacing * 0.8,
                    height: y_spacing * 0.6,
                },
            );
        }
    }
    LayoutResult {
        positions,
        edges: edges.to_vec(),
        layer_count,
    }
}

/// Assign a layer (longest path from any root) to each node.
fn assign_layers(nodes: &BTreeSet<NodeId>, edges: &[Edge]) -> BTreeMap<NodeId, usize> {
    let mut layer: BTreeMap<NodeId, usize> = nodes.iter().map(|n| (n.clone(), 0)).collect();
    // Relax: for each edge a→b, layer[b] = max(layer[b], layer[a]+1).
    // Iterate until stable.
    for _ in 0..nodes.len() {
        let mut changed = false;
        for e in edges {
            let from_l = layer.get(&e.from).copied().unwrap_or(0);
            let to_l = layer.get(&e.to).copied().unwrap_or(0);
            if to_l < from_l + 1 {
                layer.insert(e.to.clone(), from_l + 1);
                changed = true;
            }
        }
        if !changed {
            break;
        }
    }
    layer
}

/// Render a LayoutResult to GraphViz dot format.
pub fn to_dot(result: &LayoutResult, graph_name: &str) -> String {
    let mut out = String::new();
    out.push_str(&format!("digraph {} {{\n", graph_name));
    out.push_str("  rankdir=TB;\n");
    out.push_str("  node [shape=box];\n");
    for node in result.positions.keys() {
        out.push_str(&format!("  \"{:#x}\";\n", node.0));
    }
    for edge in &result.edges {
        let label = match edge.kind {
            EdgeKind::Taken => "T",
            EdgeKind::NotTaken => "F",
            EdgeKind::Fallthrough => "",
            EdgeKind::Call => "call",
            EdgeKind::Return => "ret",
            EdgeKind::Unconditional => "",
        };
        let attrs = if label.is_empty() {
            String::new()
        } else {
            format!(" [label=\"{label}\"]")
        };
        out.push_str(&format!(
            "  \"{:#x}\" -> \"{:#x}\"{attrs};\n",
            edge.from.0, edge.to.0
        ));
    }
    out.push_str("}\n");
    out
}

/// Render a LayoutResult to an SVG document.
pub fn to_svg(result: &LayoutResult) -> String {
    let mut out = String::new();
    let (mut max_x, mut max_y) = (0.0f32, 0.0f32);
    for pos in result.positions.values() {
        max_x = max_x.max(pos.x + pos.width);
        max_y = max_y.max(pos.y + pos.height);
    }
    let view_w = (max_x + 40.0).max(200.0);
    let view_h = (max_y + 40.0).max(200.0);

    out.push_str(&format!(
        r#"<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {view_w} {view_h}" width="{view_w}" height="{view_h}">
"#
    ));
    // Edges first (so nodes draw on top).
    for edge in &result.edges {
        let (Some(from_pos), Some(to_pos)) = (
            result.positions.get(&edge.from),
            result.positions.get(&edge.to),
        ) else {
            continue;
        };
        let x1 = from_pos.x + from_pos.width / 2.0;
        let y1 = from_pos.y + from_pos.height;
        let x2 = to_pos.x + to_pos.width / 2.0;
        let y2 = to_pos.y;
        let color = match edge.kind {
            EdgeKind::Taken => "green",
            EdgeKind::NotTaken => "red",
            _ => "black",
        };
        out.push_str(&format!(
            r#"  <line x1="{x1}" y1="{y1}" x2="{x2}" y2="{y2}" stroke="{color}" stroke-width="1"/>
"#
        ));
    }
    for (node, pos) in &result.positions {
        out.push_str(&format!(
            r#"  <rect x="{x}" y="{y}" width="{w}" height="{h}" fill="white" stroke="black"/>
  <text x="{tx}" y="{ty}" text-anchor="middle" font-family="monospace" font-size="10">{:#x}</text>
"#,
            node.0,
            x = pos.x,
            y = pos.y,
            w = pos.width,
            h = pos.height,
            tx = pos.x + pos.width / 2.0,
            ty = pos.y + pos.height / 2.0 + 3.0,
        ));
    }
    out.push_str("</svg>\n");
    out
}

/// Render to ASCII box-drawing for the TUI.
///
/// Each node becomes a `[0xNNNN]` label; edges are shown as a textual
/// adjacency list under the nodes. Not pretty but readable in any
/// terminal.
pub fn to_ascii(result: &LayoutResult) -> String {
    let mut out = String::new();
    let mut by_layer: BTreeMap<usize, Vec<&NodeId>> = BTreeMap::new();
    for (node, pos) in &result.positions {
        // Determine layer by y / spacing — approximate.
        let layer = (pos.x / pos.width.max(1.0)) as usize;
        by_layer.entry(layer).or_default().push(node);
    }
    for (layer, nodes) in &by_layer {
        out.push_str(&format!("Layer {layer}: "));
        for n in nodes {
            out.push_str(&format!("[{:#x}] ", n.0));
        }
        out.push('\n');
    }
    out.push_str("\nEdges:\n");
    for e in &result.edges {
        let arrow = match e.kind {
            EdgeKind::Taken => "─T→",
            EdgeKind::NotTaken => "─F→",
            EdgeKind::Call => "─call→",
            EdgeKind::Return => "─ret→",
            _ => "→",
        };
        out.push_str(&format!(
            "  {:#x} {arrow} {:#x}\n",
            e.from.0, e.to.0
        ));
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn linear_graph() -> (BTreeSet<NodeId>, Vec<Edge>) {
        let nodes: BTreeSet<NodeId> =
            [0x100u64, 0x200, 0x300].into_iter().map(NodeId).collect();
        let edges = vec![
            Edge {
                from: NodeId(0x100),
                to: NodeId(0x200),
                kind: EdgeKind::Fallthrough,
            },
            Edge {
                from: NodeId(0x200),
                to: NodeId(0x300),
                kind: EdgeKind::Fallthrough,
            },
        ];
        (nodes, edges)
    }

    fn diamond_graph() -> (BTreeSet<NodeId>, Vec<Edge>) {
        let nodes: BTreeSet<NodeId> = [0x100u64, 0x200, 0x300, 0x400]
            .into_iter()
            .map(NodeId)
            .collect();
        let edges = vec![
            Edge {
                from: NodeId(0x100),
                to: NodeId(0x200),
                kind: EdgeKind::Taken,
            },
            Edge {
                from: NodeId(0x100),
                to: NodeId(0x300),
                kind: EdgeKind::NotTaken,
            },
            Edge {
                from: NodeId(0x200),
                to: NodeId(0x400),
                kind: EdgeKind::Fallthrough,
            },
            Edge {
                from: NodeId(0x300),
                to: NodeId(0x400),
                kind: EdgeKind::Fallthrough,
            },
        ];
        (nodes, edges)
    }

    #[test]
    fn test_layout_linear_assigns_layers_0_1_2() {
        let (nodes, edges) = linear_graph();
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        assert_eq!(result.layer_count, 3);
        // First node should be at x=0, last node at x=200.
        assert_eq!(result.positions[&NodeId(0x100)].x, 0.0);
        assert_eq!(result.positions[&NodeId(0x300)].x, 200.0);
    }

    #[test]
    fn test_layout_diamond_has_3_layers() {
        let (nodes, edges) = diamond_graph();
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        assert_eq!(result.layer_count, 3); // entry, branches, join
    }

    #[test]
    fn test_to_dot_emits_valid_digraph() {
        let (nodes, edges) = diamond_graph();
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        let dot = to_dot(&result, "test");
        assert!(dot.starts_with("digraph test {"));
        assert!(dot.contains("0x100"));
        assert!(dot.contains("0x100\" -> \"0x200"));
        assert!(dot.contains("[label=\"T\"]"));
        assert!(dot.trim_end().ends_with("}"));
    }

    #[test]
    fn test_to_svg_includes_nodes_and_edges() {
        let (nodes, edges) = linear_graph();
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        let svg = to_svg(&result);
        assert!(svg.contains("<svg"));
        assert!(svg.contains("<rect"));
        assert!(svg.contains("<line"));
        assert!(svg.contains("0x100"));
    }

    #[test]
    fn test_to_ascii_renders_layers_and_edges() {
        let (nodes, edges) = diamond_graph();
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        let ascii = to_ascii(&result);
        assert!(ascii.contains("Layer"));
        assert!(ascii.contains("Edges:"));
        assert!(ascii.contains("0x100"));
        assert!(ascii.contains("─T→") || ascii.contains("→"));
    }

    #[test]
    fn test_assign_layers_empty_graph() {
        let nodes: BTreeSet<NodeId> = BTreeSet::new();
        let edges = vec![];
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        assert_eq!(result.layer_count, 0);
        assert!(result.positions.is_empty());
    }

    #[test]
    fn test_assign_layers_self_loop_stable() {
        // A→A self-loop: should not infinite-loop.
        let nodes: BTreeSet<NodeId> = [NodeId(0x100)].into_iter().collect();
        let edges = vec![Edge {
            from: NodeId(0x100),
            to: NodeId(0x100),
            kind: EdgeKind::Taken,
        }];
        let result = layout_graph(&nodes, &edges, 100.0, 50.0);
        // The node has been pushed up — exact layer doesn't matter as long
        // as we terminated.
        assert_eq!(result.positions.len(), 1);
    }
}
