//! GUI pane layout — left sidebar + center tabs + right panel + bottom log.
//!
//! Reference layout: research/iced-ecosystem/halloy/src/buffer/ (multi-pane
//! IRC client, the closest existing iced app to an RE tool).

/// Which sidebar tab is showing on the left.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum LeftSidebarTab {
    Functions,
    Strings,
    Imports,
    Exports,
    Bookmarks,
}

/// Which content tab is showing in the center.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum CenterTab {
    Disassembly,
    Pseudocode,
    Hex,
}

/// Which panel is showing on the right.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum RightPanel {
    Xrefs,
    TypeSignature,
    Comments,
}

/// Aggregate pane layout state.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct PaneLayout {
    pub left_tab: LeftSidebarTab,
    pub active_tab: CenterTab,
    pub right_panel: RightPanel,
    pub bottom_log_visible: bool,
    pub left_width_pct: u8,
    pub right_width_pct: u8,
}

impl Default for PaneLayout {
    fn default() -> Self {
        Self {
            left_tab: LeftSidebarTab::Functions,
            active_tab: CenterTab::Pseudocode,
            right_panel: RightPanel::Xrefs,
            bottom_log_visible: true,
            left_width_pct: 25,
            right_width_pct: 25,
        }
    }
}

impl PaneLayout {
    /// Width percentage of the center pane (always >= 25%).
    pub fn center_width_pct(&self) -> u8 {
        100u8
            .saturating_sub(self.left_width_pct)
            .saturating_sub(self.right_width_pct)
            .max(25)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_default_layout() {
        let l = PaneLayout::default();
        assert_eq!(l.left_tab, LeftSidebarTab::Functions);
        assert_eq!(l.active_tab, CenterTab::Pseudocode);
        assert_eq!(l.right_panel, RightPanel::Xrefs);
    }

    #[test]
    fn test_center_width_calculation() {
        let l = PaneLayout::default();
        // Default = 25% + 25% sides, so center = 50%.
        assert_eq!(l.center_width_pct(), 50);
    }

    #[test]
    fn test_center_width_floor() {
        let l = PaneLayout {
            left_width_pct: 50,
            right_width_pct: 40,
            ..PaneLayout::default()
        };
        // 100 - 50 - 40 = 10, but floor is 25.
        assert_eq!(l.center_width_pct(), 25);
    }
}
