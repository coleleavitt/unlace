//! Keybinding map.
//!
//! Mirrors IDA's canonical keys where they make sense — see
//! `research/ida-hexrays-docs/pdfs/igor-tip-of-the-week-S01.pdf` tip #01
//! for the IDA cheat sheet this is modeled on.

use crate::cmd::Command;

/// Result of dispatching a key.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum KeyAction {
    /// Run a command.
    Run(Command),
    /// Append this character to the command-palette input.
    AppendInput(char),
    /// Backspace in the command-palette input.
    BackspaceInput,
    /// Submit the command palette (enter).
    SubmitPalette,
    /// Key was unhandled.
    Ignore,
}

/// Look up a key event.
///
/// `key` is a logical key name: lowercase letter, "esc", "tab", "enter",
/// "backspace". `palette_open` indicates whether the command palette is
/// active — when open, most keys are appended to the input instead of
/// triggering bindings.
pub fn dispatch(key: &str, palette_open: bool) -> KeyAction {
    if palette_open {
        return dispatch_palette(key);
    }
    match key {
        "q" => KeyAction::Run(Command::Quit),
        "tab" => KeyAction::Run(Command::FocusNext),
        ":" | ";" => KeyAction::Run(Command::OpenPalette),
        "esc" => KeyAction::Ignore,
        _ => KeyAction::Ignore,
    }
}

fn dispatch_palette(key: &str) -> KeyAction {
    match key {
        "enter" => KeyAction::SubmitPalette,
        "esc" => KeyAction::Run(Command::ClosePalette),
        "backspace" => KeyAction::BackspaceInput,
        s if s.chars().count() == 1 => {
            let c = s.chars().next().unwrap();
            if c.is_ascii_graphic() || c == ' ' {
                KeyAction::AppendInput(c)
            } else {
                KeyAction::Ignore
            }
        }
        _ => KeyAction::Ignore,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_q_quits_when_palette_closed() {
        assert_eq!(dispatch("q", false), KeyAction::Run(Command::Quit));
    }

    #[test]
    fn test_q_appends_input_when_palette_open() {
        assert_eq!(dispatch("q", true), KeyAction::AppendInput('q'));
    }

    #[test]
    fn test_colon_opens_palette() {
        assert_eq!(dispatch(":", false), KeyAction::Run(Command::OpenPalette));
    }

    #[test]
    fn test_esc_closes_palette() {
        assert_eq!(dispatch("esc", true), KeyAction::Run(Command::ClosePalette));
    }

    #[test]
    fn test_enter_submits_palette() {
        assert_eq!(dispatch("enter", true), KeyAction::SubmitPalette);
    }

    #[test]
    fn test_tab_cycles_focus() {
        assert_eq!(dispatch("tab", false), KeyAction::Run(Command::FocusNext));
    }
}
