use super::*;

/// The generated witness -- see `tests/fixtures/neolite_packed_pe_i386.py`,
/// which carries a reference encoder for the format and rebuilds this file.
fn fixture() -> Vec<u8> {
    let p = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures/neolite_packed_pe_i386.exe");
    std::fs::read(&p).unwrap_or_else(|e| panic!("read {}: {e}", p.display()))
}

/// The 16-byte snippet `.text` is 256 copies of.
const SNIPPET: [u8; 16] = [
    0x55, 0x8b, 0xec, 0x8b, 0x45, 0x08, 0x03, 0x4d, 0x0c, 0x5d, 0xc3, 0x90, 0x90, 0x90, 0x90, 0x90,
];

/// The rebuilt file's section bodies, by name.
fn sections(image: &[u8]) -> Vec<(String, u32, Vec<u8>)> {
    let pe = Pe::parse(image).expect("rebuilt file parses");
    pe.sections
        .iter()
        .map(|s| {
            let from = s.raw_offset as usize;
            let to = (from + s.raw_size as usize).min(image.len());
            let body = if from < to {
                image[from..to].to_vec()
            } else {
                Vec::new()
            };
            (s.name.clone(), rd32(image, s.header_at + 36).unwrap(), body)
        })
        .collect()
}

#[test]
fn a_file_with_no_loader_section_is_not_neolite() {
    assert!(!detect(b"\x7fELF not a PE at all"));
    assert_eq!(unpack(b"MZ short").err(), Some(NeoliteError::NotPacked));
}

#[test]
fn the_loader_section_must_own_the_entry_point() {
    // The name alone proves nothing: move the entry point out of
    // `.NEOpack` and the image stops being a NEOLite image.
    let mut image = fixture();
    let pe = Pe::parse(&image).unwrap();
    assert!(detect(&image));
    wr32(&mut image, pe.opt_at + 16, 0x1000);
    assert!(!detect(&image));
}

#[test]
fn the_fixture_unpacks_to_its_original_sections() {
    let u = unpack(&fixture()).expect("fixture unpacks");
    assert_eq!(u.entry, 0x1000, "original entry point, read from the stub");
    assert_eq!(u.stub_entry, 0x6001);
    assert_eq!(u.compressed_sections(), 3);

    let secs = sections(&u.bytes);
    let text = &secs.iter().find(|(n, _, _)| n == ".text").unwrap().2;
    assert_eq!(text.len(), 0x1000);
    assert!(
        text.chunks_exact(16).all(|c| c == SNIPPET),
        "every 16-byte row of .text decodes back to the snippet"
    );

    let data = &secs.iter().find(|(n, _, _)| n == ".data").unwrap().2;
    assert_eq!(data.len(), 0x2000);
    assert!(data.starts_with(b"unlace neolite fixture payload\0"));
    assert!(
        data[31..].iter().all(|&b| b == 0),
        "the zero tail is part of the stream"
    );
}

#[test]
fn a_section_the_packer_stored_is_carried_through_verbatim() {
    let u = unpack(&fixture()).expect("fixture unpacks");
    let rsrc = u.sections.iter().find(|s| s.name == ".rsrc").unwrap();
    assert!(
        !rsrc.compressed,
        "plaintext must not be run through the decoder"
    );
    assert_eq!(rsrc.packed, rsrc.unpacked);
    let secs = sections(&u.bytes);
    let body = &secs.iter().find(|(n, _, _)| n == ".rsrc").unwrap().2;
    assert!(body.starts_with(b"stored plaintext the packer left alone"));
}

#[test]
fn the_entry_section_is_restored_as_code() {
    let u = unpack(&fixture()).expect("fixture unpacks");
    let secs = sections(&u.bytes);
    let (_, ch, _) = secs.iter().find(|(n, _, _)| n == ".text").unwrap();
    assert_eq!(
        *ch, TEXT_CHARACTERISTICS,
        "the packer left .text as plain rw data"
    );
    let (_, other, _) = secs.iter().find(|(n, _, _)| n == ".data").unwrap();
    assert_eq!(*other, 0xC000_0040, "no other section's flags are touched");
}

#[test]
fn the_original_import_directory_is_found_and_pointed_at() {
    let u = unpack(&fixture()).expect("fixture unpacks");
    assert_eq!(u.imports, Some(0x2040));
    let pe = Pe::parse(&u.bytes).unwrap();
    assert_eq!(rd32(&u.bytes, pe.opt_at + 96 + 8), Some(0x2040));

    // Walk it the way a disassembler would: a table nothing can follow is
    // the failure this guards.
    let names: Vec<String> = {
        let mut out = Vec::new();
        let mut d = 0x2040u32;
        loop {
            let at = |rva: u32| -> usize {
                let s = pe.section_of_rva(rva).unwrap();
                (s.raw_offset + (rva - s.virtual_address)) as usize
            };
            let dll_rva = rd32(&u.bytes, at(d) + 12).unwrap();
            if dll_rva == 0 {
                break;
            }
            let a = at(dll_rva);
            let n = u.bytes[a..].iter().position(|&c| c == 0).unwrap();
            let dll = String::from_utf8_lossy(&u.bytes[a..a + n]).into_owned();
            let mut thunk = rd32(&u.bytes, at(d) + 16).unwrap();
            loop {
                let hint = rd32(&u.bytes, at(thunk)).unwrap();
                if hint == 0 {
                    break;
                }
                let a = at(hint) + 2;
                let n = u.bytes[a..].iter().position(|&c| c == 0).unwrap();
                out.push(format!(
                    "{dll}!{}",
                    String::from_utf8_lossy(&u.bytes[a..a + n])
                ));
                thunk += 4;
            }
            d += 20;
        }
        out
    };
    assert_eq!(
        names,
        vec![
            "KERNEL32.dll!ExitProcess",
            "KERNEL32.dll!GetTickCount",
            "USER32.dll!MessageBoxA"
        ]
    );
}

#[test]
fn an_incomplete_code_table_is_refused() {
    // Completeness is the only thing standing between a section the packer
    // stored and a decode of it as though it were a stream.
    assert!(Huffman::build(&[0u8; 19]).is_err(), "no codes at all");
    assert!(Huffman::build(&[1, 3, 3]).is_err(), "under-subscribed");
    assert!(Huffman::build(&[1, 1, 1]).is_err(), "over-subscribed");
    assert!(Huffman::build(&[1, 2, 2]).is_ok());
    assert!(
        Huffman::build(&[0, 1, 0]).is_ok(),
        "a lone symbol is well defined"
    );
}

#[test]
fn plaintext_is_not_mistaken_for_a_stream() {
    let plain = b"\0\0\0\0\0\0\0\0\0\0\0\0\x02\0\x04\0stored resource directory bytes";
    assert!(decompress(plain, 4096).is_err());
}

#[test]
fn a_64_bit_image_is_declined_by_name() {
    let mut image = fixture();
    let pe = Pe::parse(&image).unwrap();
    image[pe.opt_at] = 0x0b;
    image[pe.opt_at + 1] = 0x02; // PE32+
    match unpack(&image) {
        Err(NeoliteError::Unsupported(what)) => assert!(what.contains("magic")),
        other => panic!("expected an Unsupported, got {other:?}"),
    }
}
