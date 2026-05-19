//! TUI app state — the source-of-truth for the rendering loop.

use unlace_session::Session;

use crate::cmd::Command;
use crate::panes::Pane;

/// Top-level TUI state.
pub struct TuiApp {
    pub session: Session,
    pub focused_pane: Pane,
    pub status_message: String,
    pub command_palette_open: bool,
    pub command_palette_input: String,
    pub quit_requested: bool,
}

impl TuiApp {
    pub fn new(session: Session) -> Self {
        Self {
            session,
            focused_pane: Pane::FunctionsList,
            status_message: "Press : for command palette, q to quit".to_string(),
            command_palette_open: false,
            command_palette_input: String::new(),
            quit_requested: false,
        }
    }

    /// Cycle to the next focused pane (Tab key).
    pub fn focus_next(&mut self) {
        self.focused_pane = match self.focused_pane {
            Pane::FunctionsList => Pane::Disassembly,
            Pane::Disassembly => Pane::Pseudocode,
            Pane::Pseudocode => Pane::FunctionsList,
        };
    }

    /// Run one command. Returns true if the app should keep running.
    pub fn execute(&mut self, cmd: Command) -> bool {
        match cmd {
            Command::Quit => {
                self.quit_requested = true;
                false
            }
            Command::FocusNext => {
                self.focus_next();
                true
            }
            Command::OpenPalette => {
                self.command_palette_open = true;
                self.command_palette_input.clear();
                true
            }
            Command::ClosePalette => {
                self.command_palette_open = false;
                true
            }
            Command::Goto(ea) => {
                self.session.set_selection(unlace_session::Selection {
                    current_function: Some(ea),
                    current_address: Some(ea),
                });
                self.status_message = format!("Jumped to {:#x}", ea);
                true
            }
            Command::Rename { ea, name } => {
                let old_name = String::new();
                self.session.rename(unlace_session::Rename {
                    ea,
                    old_name,
                    new_name: name.clone(),
                });
                self.status_message = format!("Renamed {:#x} → {}", ea, name);
                true
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_focus_next_cycles_through_panes() {
        let mut app = TuiApp::new(Session::new());
        assert_eq!(app.focused_pane, Pane::FunctionsList);
        app.focus_next();
        assert_eq!(app.focused_pane, Pane::Disassembly);
        app.focus_next();
        assert_eq!(app.focused_pane, Pane::Pseudocode);
        app.focus_next();
        assert_eq!(app.focused_pane, Pane::FunctionsList);
    }

    #[test]
    fn test_quit_command_stops_loop() {
        let mut app = TuiApp::new(Session::new());
        let keep_running = app.execute(Command::Quit);
        assert!(!keep_running);
        assert!(app.quit_requested);
    }

    #[test]
    fn test_goto_updates_selection_and_status() {
        let mut app = TuiApp::new(Session::new());
        app.execute(Command::Goto(0x401234));
        assert_eq!(app.session.selection().current_address, Some(0x401234));
        assert!(app.status_message.contains("401234"));
    }

    #[test]
    fn test_rename_records_annotation() {
        let mut app = TuiApp::new(Session::new());
        app.execute(Command::Rename {
            ea: 0x100,
            name: "main".to_string(),
        });
        assert_eq!(app.session.annotations().renames.len(), 1);
    }

    #[test]
    fn test_palette_open_close() {
        let mut app = TuiApp::new(Session::new());
        assert!(!app.command_palette_open);
        app.execute(Command::OpenPalette);
        assert!(app.command_palette_open);
        app.execute(Command::ClosePalette);
        assert!(!app.command_palette_open);
    }
}
