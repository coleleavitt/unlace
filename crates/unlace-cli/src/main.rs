//! The `unlace` binary: command dispatch lives in the library (`unlace_cli::main`).

// Dev-only: take the engine from the dylib (crates/unlace-decomp-dylib).
#[cfg(feature = "dynamic_linking")]
extern crate unlace_decomp_dylib;

fn main() -> std::process::ExitCode {
    eprintln!("MSVCDBG main");
    unlace_cli::main()
}
