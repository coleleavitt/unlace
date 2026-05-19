//! Terminal UI for unlace.
//!
//! Renders disassembly + pseudocode + functions list panes using ratatui
//! over crossterm. Designed for SSH workflows where the user can't bring
//! up a desktop GUI.
//!
//! See `docs/ui-architecture.md` for the full layout + keybinding map.

pub mod app;
pub mod cmd;
pub mod keymap;
pub mod panes;

pub use app::TuiApp;
pub use cmd::Command;
pub use keymap::KeyAction;
