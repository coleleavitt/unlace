//! The `decomp_dbg` console binary ([`unlace_console::consolemain`]).

use std::process::ExitCode;

fn main() -> ExitCode {
    unlace_console::consolemain::main(std::env::args().collect())
}
