//! Desktop GUI for unlace (iced-based).
//!
//! Two compilation modes:
//!
//! - default (no `render` feature): the [`GuiState`] state machine
//!   compiles without pulling in iced/wgpu. Everything is testable
//!   in-process; the [`GuiState::update`] method drives a real ELM
//!   message loop.
//! - with `--features render`: the [`app`] module exposes
//!   [`app::run`], which boots iced's `application(...)` runtime with
//!   `view`/`update`/`subscription` and renders the same `GuiState`
//!   through real widgets (`pane_grid`, `text_editor`, `tabs`).
//!
//! Layout reference: research/iced-ecosystem/halloy/src/screen/ —
//! halloy's IRC pane_grid is the closest match to an RE tool.

pub mod layout;

#[cfg(feature = "render")]
pub mod app;

use unlace_session::Session;

use crate::layout::{CenterTab, LeftSidebarTab, PaneLayout, RightPanel};

/// Messages dispatched by the iced runtime.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum GuiMessage {
    SelectFunction(u64),
    OpenTab(CenterTab),
    OpenLeftTab(LeftSidebarTab),
    OpenRightPanel(RightPanel),
    ToggleBottomLog,
    Goto(u64),
    Rename { ea: u64, name: String },
    Quit,
}

/// Top-level App state — owned by iced when `render` is enabled, owned
/// by tests directly otherwise.
pub struct GuiState {
    pub session: Session,
    pub layout: PaneLayout,
    /// Cursor address for the currently focused pane.
    pub cursor: Option<u64>,
    /// Filter applied to the functions list (substring match).
    pub functions_filter: String,
    /// Status bar message.
    pub status: String,
}

impl GuiState {
    pub fn new(session: Session) -> Self {
        Self {
            session,
            layout: PaneLayout::default(),
            cursor: None,
            functions_filter: String::new(),
            status: "Ready".to_string(),
        }
    }

    /// iced's `update(state, msg) -> Task` analog.
    /// Returns `false` if the runtime should exit.
    pub fn update(&mut self, msg: GuiMessage) -> bool {
        match msg {
            GuiMessage::SelectFunction(ea) => {
                self.session.set_selection(unlace_session::Selection {
                    current_function: Some(ea),
                    current_address: Some(ea),
                });
                self.cursor = Some(ea);
                self.status = format!("Selected function @ {:#x}", ea);
                true
            }
            GuiMessage::OpenTab(tab) => {
                self.layout.active_tab = tab;
                self.status = format!("Switched to {:?} tab", tab);
                true
            }
            GuiMessage::OpenLeftTab(tab) => {
                self.layout.left_tab = tab;
                true
            }
            GuiMessage::OpenRightPanel(panel) => {
                self.layout.right_panel = panel;
                true
            }
            GuiMessage::ToggleBottomLog => {
                self.layout.bottom_log_visible = !self.layout.bottom_log_visible;
                true
            }
            GuiMessage::Goto(ea) => {
                self.session.set_selection(unlace_session::Selection {
                    current_function: Some(ea),
                    current_address: Some(ea),
                });
                self.cursor = Some(ea);
                self.status = format!("Jumped to {:#x}", ea);
                true
            }
            GuiMessage::Rename { ea, name } => {
                self.session.rename(unlace_session::Rename {
                    ea,
                    old_name: String::new(),
                    new_name: name.clone(),
                });
                self.status = format!("Renamed {:#x} → {}", ea, name);
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
        assert_eq!(state.cursor, Some(0x401000));
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

    #[test]
    fn test_goto_updates_cursor_and_status() {
        let mut state = GuiState::new(Session::new());
        state.update(GuiMessage::Goto(0xDEAD));
        assert_eq!(state.cursor, Some(0xDEAD));
        assert!(state.status.contains("dead"));
    }

    #[test]
    fn test_rename_records_annotation() {
        let mut state = GuiState::new(Session::new());
        state.update(GuiMessage::Rename {
            ea: 0x100,
            name: "main".into(),
        });
        assert_eq!(state.session.annotations().renames.len(), 1);
    }

    #[test]
    fn test_toggle_bottom_log() {
        let mut state = GuiState::new(Session::new());
        let initial = state.layout.bottom_log_visible;
        state.update(GuiMessage::ToggleBottomLog);
        assert_eq!(state.layout.bottom_log_visible, !initial);
    }
}
