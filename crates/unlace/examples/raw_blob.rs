//! Decompile a raw x86-64 blob whose function bounds the caller already knows.
//!
//! ```sh
//! cargo run -p unlace --example raw_blob
//! ```
//!
//! The blob holds two functions with no header and no symbols: `add` at
//! 0x1000 and `mul` at 0x1010. A framework with its own loader is in the same
//! position: it hands over the bytes, the base, and the bounds and prototypes
//! it already recovered, and unlace decompiles inside those bounds.

use unlace::{Decompiler, Target};

/// `lea eax, [rdi+rsi]; ret`, padding, `mov eax, edi; imul eax, esi; ret`.
const BLOB: [u8; 0x20] = [
    0x8d, 0x04, 0x37, 0xc3, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0x89, 0xf8, 0x0f, 0xaf, 0xc6, 0xc3, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
];

fn main() -> Result<(), unlace::Error> {
    let mut decompiler =
        Decompiler::from_raw(BLOB, Target::X86_64, 0x1000, &[], &[0x1000, 0x1010])?
            .with_function(0x1000, Some(0x1004), Some("add"))
            .with_function(0x1010, Some(0x1016), Some("mul"))
            .with_prototype(0x1000, "int add(int a, int b)")
            .with_prototype(0x1010, "int mul(int a, int b)");

    for function in decompiler.functions()? {
        println!(
            "// {:#x} {} ({} bytes)",
            function.address, function.name, function.size
        );
    }
    for function in decompiler.decompile_all() {
        let function = function?;
        println!("{}", function.c);
    }
    Ok(())
}
