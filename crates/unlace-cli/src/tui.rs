//! TUI interactive disassembly browser (t451).
//!
//! Defines the data model and layout types for a ratatui-based terminal
//! UI. The actual rendering depends on the `ratatui` crate (optional dep);
//! this module provides the widget-agnostic state machine.

/// TUI application state.
#[derive(Debug, Clone)]
pub struct TuiState {
    /// Currently selected function address.
    pub selected_function: Option<u64>,
    /// Currently focused pane.
    pub focus: Pane,
    /// Function list for the sidebar.
    pub functions: Vec<FunctionEntry>,
    /// Current scroll offset in the decompile view.
    pub scroll_offset: usize,
    /// Search query (if active).
    pub search_query: Option<String>,
    /// Whether the app should quit.
    pub should_quit: bool,
}

/// Which pane has focus.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Pane {
    FunctionList,
    DecompileView,
    HexView,
    CfgView,
}

/// A function entry in the sidebar list.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FunctionEntry {
    pub addr: u64,
    pub name: String,
    pub size: u64,
}

/// Key event types the TUI handles.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum KeyAction {
    Quit,
    Up,
    Down,
    Enter,
    Tab,
    Search,
    Escape,
    PageUp,
    PageDown,
}

impl TuiState {
    pub fn new(functions: Vec<FunctionEntry>) -> Self {
        let selected = functions.first().map(|f| f.addr);
        Self {
            selected_function: selected,
            focus: Pane::FunctionList,
            functions,
            scroll_offset: 0,
            search_query: None,
            should_quit: false,
        }
    }

    /// Handle a key action, updating state accordingly.
    pub fn handle_key(&mut self, action: KeyAction) {
        match action {
            KeyAction::Quit => self.should_quit = true,
            KeyAction::Tab => self.cycle_focus(),
            KeyAction::Up => self.move_selection(-1),
            KeyAction::Down => self.move_selection(1),
            KeyAction::Enter => { /* activate current selection */ }
            KeyAction::Escape => { self.search_query = None; }
            KeyAction::PageUp => { self.scroll_offset = self.scroll_offset.saturating_sub(20); }
            KeyAction::PageDown => { self.scroll_offset += 20; }
            KeyAction::Search => { self.search_query = Some(String::new()); }
        }
    }

    fn cycle_focus(&mut self) {
        self.focus = match self.focus {
            Pane::FunctionList => Pane::DecompileView,
            Pane::DecompileView => Pane::HexView,
            Pane::HexView => Pane::CfgView,
            Pane::CfgView => Pane::FunctionList,
        };
    }

    fn move_selection(&mut self, delta: i32) {
        if self.functions.is_empty() { return; }
        let current_idx = self.functions.iter().position(|f| Some(f.addr) == self.selected_function).unwrap_or(0);
        let new_idx = (current_idx as i32 + delta).clamp(0, self.functions.len() as i32 - 1) as usize;
        self.selected_function = Some(self.functions[new_idx].addr);
    }

    /// Filter functions by search query.
    pub fn filtered_functions(&self) -> Vec<&FunctionEntry> {
        match &self.search_query {
            Some(q) if !q.is_empty() => {
                let q_lower = q.to_lowercase();
                self.functions.iter().filter(|f| f.name.to_lowercase().contains(&q_lower)).collect()
            }
            _ => self.functions.iter().collect(),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sample_functions() -> Vec<FunctionEntry> {
        vec![
            FunctionEntry { addr: 0x1000, name: "main".into(), size: 100 },
            FunctionEntry { addr: 0x2000, name: "helper".into(), size: 50 },
            FunctionEntry { addr: 0x3000, name: "crypto_init".into(), size: 200 },
        ]
    }

    #[test]
    fn initial_state() {
        let state = TuiState::new(sample_functions());
        assert_eq!(state.selected_function, Some(0x1000));
        assert_eq!(state.focus, Pane::FunctionList);
        assert!(!state.should_quit);
    }

    #[test]
    fn navigation() {
        let mut state = TuiState::new(sample_functions());
        state.handle_key(KeyAction::Down);
        assert_eq!(state.selected_function, Some(0x2000));
        state.handle_key(KeyAction::Down);
        assert_eq!(state.selected_function, Some(0x3000));
        state.handle_key(KeyAction::Down); // shouldn't go past end
        assert_eq!(state.selected_function, Some(0x3000));
    }

    #[test]
    fn tab_cycles_focus() {
        let mut state = TuiState::new(vec![]);
        assert_eq!(state.focus, Pane::FunctionList);
        state.handle_key(KeyAction::Tab);
        assert_eq!(state.focus, Pane::DecompileView);
        state.handle_key(KeyAction::Tab);
        assert_eq!(state.focus, Pane::HexView);
    }

    #[test]
    fn quit() {
        let mut state = TuiState::new(vec![]);
        state.handle_key(KeyAction::Quit);
        assert!(state.should_quit);
    }

    #[test]
    fn search_filter() {
        let mut state = TuiState::new(sample_functions());
        state.search_query = Some("crypto".into());
        let filtered = state.filtered_functions();
        assert_eq!(filtered.len(), 1);
        assert_eq!(filtered[0].name, "crypto_init");
    }
}
