//! Choose the C spelling of an unconditional loop.

use unlace_base::error::{UnlaceError, UnlaceResult};

pub fn parse_inf_loop_style(value: &str) -> UnlaceResult<(bool, String)> {
    let top = match value {
        "while" => true,
        "do" => false,
        other => {
            return Err(UnlaceError::parse(format!(
                "Unknown infloopstyle value: {other} (expected while|do)"
            )));
        }
    };
    Ok((top, format!("Infinite loop style set to {value}")))
}
