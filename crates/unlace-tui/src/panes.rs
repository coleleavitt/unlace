//! TUI pane identifiers and per-pane render state.

/// Which pane is currently focused.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum Pane {
    FunctionsList,
    Disassembly,
    Pseudocode,
}

impl Pane {
    pub fn label(self) -> &'static str {
        match self {
            Self::FunctionsList => "Functions",
            Self::Disassembly => "Disassembly",
            Self::Pseudocode => "Pseudocode",
        }
    }
}

/// Render state for a scrollable pane.
#[derive(Clone, Debug, Default)]
pub struct PaneScroll {
    pub offset: usize,
    pub cursor: usize,
}

impl PaneScroll {
    pub fn down(&mut self, max: usize) {
        if self.cursor + 1 < max {
            self.cursor += 1;
        }
    }

    pub fn up(&mut self) {
        if self.cursor > 0 {
            self.cursor -= 1;
        }
    }

    pub fn page_down(&mut self, page: usize, max: usize) {
        self.cursor = (self.cursor + page).min(max.saturating_sub(1));
    }

    pub fn page_up(&mut self, page: usize) {
        self.cursor = self.cursor.saturating_sub(page);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_pane_labels() {
        assert_eq!(Pane::FunctionsList.label(), "Functions");
        assert_eq!(Pane::Disassembly.label(), "Disassembly");
        assert_eq!(Pane::Pseudocode.label(), "Pseudocode");
    }

    #[test]
    fn test_pane_scroll_navigation() {
        let mut s = PaneScroll::default();
        s.down(10);
        s.down(10);
        s.down(10);
        assert_eq!(s.cursor, 3);
        s.up();
        assert_eq!(s.cursor, 2);
        s.up();
        s.up();
        s.up();
        assert_eq!(s.cursor, 0); // saturating
    }

    #[test]
    fn test_pane_scroll_page_clamps_to_max() {
        let mut s = PaneScroll::default();
        s.page_down(100, 10);
        assert_eq!(s.cursor, 9);
        s.page_up(100);
        assert_eq!(s.cursor, 0);
    }
}
