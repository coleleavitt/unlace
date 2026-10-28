//! CFG graph view with SVG output (t445).
//!
//! Produces SVG-formatted control-flow graphs suitable for interactive
//! viewing in a web UI or TUI. Implements a simple layered layout
//! algorithm (Sugiyama-style) for block positioning.

use std::fmt::Write;

/// A node in the CFG layout.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LayoutNode {
    pub id: u32,
    pub label: String,
    pub x: i32,
    pub y: i32,
    pub width: u32,
    pub height: u32,
    /// Whether this is a loop header.
    pub is_loop_header: bool,
}

/// An edge in the CFG layout.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LayoutEdge {
    pub from: u32,
    pub to: u32,
    pub label: Option<String>,
    pub is_back_edge: bool,
}

/// A complete CFG layout ready for rendering.
#[derive(Debug, Clone)]
pub struct CfgLayout {
    pub nodes: Vec<LayoutNode>,
    pub edges: Vec<LayoutEdge>,
    pub width: u32,
    pub height: u32,
}

/// Simple layered layout: assign layers by BFS depth, then space horizontally.
pub fn compute_layout(
    nodes: &[(u32, String, bool)], // (id, label, is_loop_header)
    edges: &[(u32, u32, Option<String>, bool)], // (from, to, label, is_back_edge)
) -> CfgLayout {
    let node_width = 120u32;
    let node_height = 40u32;
    let h_spacing = 40u32;
    let v_spacing = 60u32;

    // Assign layers via topological order (simplified BFS from node 0)
    let mut layers: std::collections::BTreeMap<u32, u32> = std::collections::BTreeMap::new();
    if let Some(&(first_id, _, _)) = nodes.first() {
        let mut queue = std::collections::VecDeque::new();
        queue.push_back(first_id);
        layers.insert(first_id, 0);
        while let Some(nid) = queue.pop_front() {
            let current_layer = layers[&nid];
            for &(from, to, _, is_back) in edges {
                if from == nid && !is_back && !layers.contains_key(&to) {
                    layers.insert(to, current_layer + 1);
                    queue.push_back(to);
                }
            }
        }
    }
    // Assign remaining unvisited nodes
    for &(id, _, _) in nodes {
        layers.entry(id).or_insert(0);
    }

    // Position nodes
    let mut layer_counts: std::collections::BTreeMap<u32, u32> = std::collections::BTreeMap::new();
    let mut layout_nodes = Vec::new();
    for &(id, ref label, is_loop) in nodes {
        let layer = layers[&id];
        let col = layer_counts.entry(layer).or_insert(0);
        let x = (*col as i32) * (node_width + h_spacing) as i32;
        let y = (layer as i32) * (node_height + v_spacing) as i32;
        *col += 1;
        layout_nodes.push(LayoutNode {
            id,
            label: label.clone(),
            x,
            y,
            width: node_width,
            height: node_height,
            is_loop_header: is_loop,
        });
    }

    let layout_edges: Vec<LayoutEdge> = edges
        .iter()
        .map(|&(from, to, ref label, is_back)| LayoutEdge {
            from,
            to,
            label: label.clone(),
            is_back_edge: is_back,
        })
        .collect();

    let total_width = layout_nodes
        .iter()
        .map(|n| (n.x as u32) + n.width)
        .max()
        .unwrap_or(0)
        + h_spacing;
    let total_height = layout_nodes
        .iter()
        .map(|n| (n.y as u32) + n.height)
        .max()
        .unwrap_or(0)
        + v_spacing;

    CfgLayout {
        nodes: layout_nodes,
        edges: layout_edges,
        width: total_width,
        height: total_height,
    }
}

/// Render a CFG layout as SVG.
pub fn render_svg(layout: &CfgLayout) -> String {
    let mut svg = String::with_capacity(2048);
    let _ = write!(
        svg,
        "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"{}\" height=\"{}\">\n",
        layout.width, layout.height
    );
    svg.push_str("<defs><marker id=\"arrow\" markerWidth=\"10\" markerHeight=\"7\" refX=\"10\" refY=\"3.5\" orient=\"auto\"><polygon points=\"0 0, 10 3.5, 0 7\" fill=\"#666\"/></marker></defs>\n");

    // Edges first (behind nodes)
    for edge in &layout.edges {
        let from_node = layout.nodes.iter().find(|n| n.id == edge.from);
        let to_node = layout.nodes.iter().find(|n| n.id == edge.to);
        if let (Some(f), Some(t)) = (from_node, to_node) {
            let color = if edge.is_back_edge {
                "#e06060"
            } else {
                "#666666"
            };
            let _ = write!(
                svg,
                "<line x1=\"{}\" y1=\"{}\" x2=\"{}\" y2=\"{}\" stroke=\"{}\" stroke-width=\"1.5\" marker-end=\"url(#arrow)\"/>\n",
                f.x + f.width as i32 / 2,
                f.y + f.height as i32,
                t.x + t.width as i32 / 2,
                t.y,
                color
            );
        }
    }

    // Nodes
    for node in &layout.nodes {
        let fill = if node.is_loop_header {
            "#2060a0"
        } else {
            "#404060"
        };
        let _ = write!(
            svg,
            "<rect x=\"{}\" y=\"{}\" width=\"{}\" height=\"{}\" fill=\"{}\" rx=\"4\"/>\n",
            node.x, node.y, node.width, node.height, fill
        );
        let _ = write!(
            svg,
            "<text x=\"{}\" y=\"{}\" fill=\"white\" font-size=\"11\" text-anchor=\"middle\">{}</text>\n",
            node.x + node.width as i32 / 2,
            node.y + node.height as i32 / 2 + 4,
            node.label
        );
    }

    svg.push_str("</svg>\n");
    svg
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn simple_layout() {
        let nodes = vec![
            (0, "entry".into(), false),
            (1, "body".into(), true),
            (2, "exit".into(), false),
        ];
        let edges = vec![
            (0, 1, Some("T".into()), false),
            (1, 2, None, false),
            (1, 1, None, true),
        ];
        let layout = compute_layout(&nodes, &edges);
        assert_eq!(layout.nodes.len(), 3);
        assert_eq!(layout.edges.len(), 3);
        assert!(layout.width > 0);
        assert!(layout.height > 0);
    }

    #[test]
    fn svg_contains_elements() {
        let nodes = vec![(0, "BB0".into(), false), (1, "BB1".into(), false)];
        let edges = vec![(0, 1, None, false)];
        let layout = compute_layout(&nodes, &edges);
        let svg = render_svg(&layout);
        assert!(svg.contains("<svg"));
        assert!(svg.contains("</svg>"));
        assert!(svg.contains("BB0"));
        assert!(svg.contains("BB1"));
        assert!(svg.contains("<line"));
    }

    #[test]
    fn empty_graph() {
        let layout = compute_layout(&[], &[]);
        assert!(layout.nodes.is_empty());
        let svg = render_svg(&layout);
        assert!(svg.contains("<svg"));
    }

    #[test]
    fn loop_header_colored() {
        let nodes = vec![(0, "loop".into(), true)];
        let layout = compute_layout(&nodes, &[]);
        let svg = render_svg(&layout);
        assert!(svg.contains("#2060a0")); // loop header color
    }
}
