//! Desktop GUI for unlace (iced-based).
//!
//! See `docs/ui-architecture.md` for the layout and message-passing
//! pattern. The GUI shares its source-of-truth `Session` struct with
//! the TUI crate.

pub mod layout;

use unlace_session::Session;

use crate::layout::PaneLayout;

/// Messages dispatched by the iced runtime.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum GuiMessage {
    SelectFunction(u64),
    OpenTab(crate::layout::CenterTab),
    Quit,
}

/// Top-level App state.
pub struct GuiState {
    pub session: Session,
    pub layout: PaneLayout,
}

impl GuiState {
    pub fn new(session: Session) -> Self {
        Self {
            session,
            layout: PaneLayout::default(),
        }
    }

    /// iced's `update(state, msg)` analog.
    pub fn update(&mut self, msg: GuiMessage) -> bool {
        match msg {
            GuiMessage::SelectFunction(ea) => {
                self.session.set_selection(unlace_session::Selection {
                    current_function: Some(ea),
                    current_address: Some(ea),
                });
                true
            }
            GuiMessage::OpenTab(tab) => {
                self.layout.active_tab = tab;
                true
            }
            GuiMessage::Quit => false,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::layout::CenterTab;

    #[test]
    fn test_select_function_updates_selection() {
        let mut state = GuiState::new(Session::new());
        let keep = state.update(GuiMessage::SelectFunction(0x401000));
        assert!(keep);
        assert_eq!(state.session.selection().current_function, Some(0x401000));
    }

    #[test]
    fn test_open_tab_switches_active() {
        let mut state = GuiState::new(Session::new());
        state.update(GuiMessage::OpenTab(CenterTab::Hex));
        assert_eq!(state.layout.active_tab, CenterTab::Hex);
    }

    #[test]
    fn test_quit_returns_false() {
        let mut state = GuiState::new(Session::new());
        assert!(!state.update(GuiMessage::Quit));
    }
}
