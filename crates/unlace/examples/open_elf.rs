//! Open an ELF (or any container unlace loads) and decompile one function by name.
//!
//! ```sh
//! cargo run -p unlace --example open_elf -- /usr/bin/true main
//! ```
//!
//! Prints the function's prototype, its C, its warnings, and the size of the
//! structured record (`variables`, `line_mappings`) the JSON document carries.

use unlace::Decompiler;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let mut args = std::env::args().skip(1);
    let (Some(path), Some(name)) = (args.next(), args.next()) else {
        eprintln!("usage: open_elf <binary> <function>");
        std::process::exit(2);
    };

    let mut decompiler = Decompiler::open(&path)?;
    println!("// {path}: {}", decompiler.architecture()?);
    let function = decompiler.decompile_named(&name)?;
    if let Some(prototype) = &function.prototype {
        println!("// {prototype}");
    }
    println!("{}", function.c);
    for warning in &function.warnings {
        println!("// warning: {warning}");
    }
    let record = &function.json["functions"][0];
    let count = |key: &str| record[key].as_array().map_or(0, Vec::len);
    println!(
        "// {} variables, {} line mappings",
        count("variables"),
        count("line_mappings")
    );
    Ok(())
}
