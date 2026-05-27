//! Commands that the user can issue via keybindings or the command palette.

/// A user-issued command. Issued by [`crate::keymap`] handlers or by the
/// command palette REPL.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Command {
    Quit,
    FocusNext,
    OpenPalette,
    ClosePalette,
    /// Jump to address.
    Goto(u64),
    /// Rename the symbol at address.
    Rename {
        ea: u64,
        name: String,
    },
}

/// Parse a command-palette line into a [`Command`].
///
/// Syntax:
/// - `goto <hex>` — jump to address
/// - `rename <hex> <name>` — rename at address
/// - `q` or `quit` — quit
pub fn parse_palette(line: &str) -> Option<Command> {
    let line = line.trim();
    if line == "q" || line == "quit" {
        return Some(Command::Quit);
    }
    let mut parts = line.split_whitespace();
    let cmd = parts.next()?;
    match cmd {
        "goto" | "g" => {
            let addr = parts.next()?;
            let ea = parse_hex_addr(addr)?;
            Some(Command::Goto(ea))
        }
        "rename" | "n" => {
            let addr = parts.next()?;
            let name = parts.next()?;
            let ea = parse_hex_addr(addr)?;
            Some(Command::Rename {
                ea,
                name: name.to_string(),
            })
        }
        _ => None,
    }
}

fn parse_hex_addr(s: &str) -> Option<u64> {
    let s = s.trim_start_matches("0x").trim_start_matches("0X");
    u64::from_str_radix(s, 16).ok()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_palette_goto_hex() {
        assert_eq!(
            parse_palette("goto 0x401000"),
            Some(Command::Goto(0x401000))
        );
        assert_eq!(parse_palette("g 0x401000"), Some(Command::Goto(0x401000)));
        assert_eq!(parse_palette("goto 401000"), Some(Command::Goto(0x401000)));
    }

    #[test]
    fn test_parse_palette_rename() {
        assert_eq!(
            parse_palette("rename 0x401000 process_data"),
            Some(Command::Rename {
                ea: 0x401000,
                name: "process_data".into(),
            })
        );
    }

    #[test]
    fn test_parse_palette_quit() {
        assert_eq!(parse_palette("q"), Some(Command::Quit));
        assert_eq!(parse_palette("quit"), Some(Command::Quit));
    }

    #[test]
    fn test_parse_palette_unknown() {
        assert_eq!(parse_palette("xyzzy"), None);
        assert_eq!(parse_palette(""), None);
    }
}
