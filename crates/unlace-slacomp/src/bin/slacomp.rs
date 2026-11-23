//! The `slacomp` SLEIGH compiler binary ([`unlace_slacomp::slacompmain`]).

use std::process::ExitCode;

fn main() -> ExitCode {
    unlace_slacomp::slacompmain::main(std::env::args().collect())
}
