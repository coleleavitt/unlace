//! (kuna `retroimage`) Bootstrap of a PS-X EXE, N64 ROM, a.out, Amiga hunk,
//! PEF or NE executable, or an OMF object or library: the container supplies the language, base, entry,
//! sections and names a headerless image takes from the command line, and the
//! program is then built and discovered exactly as a raw image is.

use std::collections::BTreeSet;
use std::rc::Rc;

use unlace_analysis::loader::retroimage::{self, RETRO_PROBE_LEN, RetroImage};
use unlace_base::address::Address;
use unlace_base::error::KunaResult;
use unlace_sleigh::loadimage::section_flags;

use super::{
    ArmIsa, ConsoleProgram, Languages, ProgramImageMetadata, ProgramSectionMetadata, RawBytes,
    RawModule, apply_readonly_ranges, bootstrap_raw_image, is_arm32_language,
};

/// The file's bytes when it opens as one of the containers. Only the probe's
/// prefix is read from a file that does not.
pub(super) fn file_retro_image(path: &str) -> Option<Vec<u8>> {
    use std::io::Read;
    let mut prefix = [0u8; RETRO_PROBE_LEN];
    let mut file = std::fs::File::open(path).ok()?;
    let got = file.read(&mut prefix).ok()?;
    if matches!(prefix.get(..2), Some(b"MZ" | b"ZM")) && got == prefix.len() {
        // an NE header sits past the MZ stub, where the prefix does not reach;
        // only a file whose e_lfanew names one is read whole
        use std::io::{Seek, SeekFrom};
        let mut lfanew = [0u8; 4];
        let mut sig = [0u8; 2];
        file.seek(SeekFrom::Start(0x3c)).ok()?;
        file.read_exact(&mut lfanew).ok()?;
        file.seek(SeekFrom::Start(u64::from(u32::from_le_bytes(lfanew))))
            .ok()?;
        file.read_exact(&mut sig).ok()?;
        if &sig != b"NE" {
            return None;
        }
        let bytes = std::fs::read(path).ok()?;
        return retroimage::is_retro_image(&bytes).then_some(bytes);
    }
    retroimage::is_retro_image(&prefix[..got])
        .then(|| std::fs::read(path).ok())
        .flatten()
}

pub(crate) fn bootstrap_retro_bytes(
    path: &str,
    bytes: &[u8],
    target: &str,
    languages: &(impl Languages + ?Sized),
    isa: Option<ArmIsa>,
) -> KunaResult<ConsoleProgram> {
    let image = retroimage::parse(path, bytes)?;
    for note in &image.notes {
        unlace_base::notes::say_once(path, &format!("[kuna {}] {path}: {note}", image.format));
    }
    let target = unlace_analysis::loadimage_object::explicit_language_target(target)
        .unwrap_or(image.language);
    let isa = isa.or_else(|| is_arm32_language(target).then_some(ArmIsa::Arm));
    let RetroImage { base, entry, .. } = image;
    let mut entries = vec![entry];
    entries.extend(
        image
            .symbols
            .iter()
            .filter(|symbol| symbol.code)
            .map(|symbol| base + symbol.offset),
    );
    let loaded = image.module.len() as u64;
    let module = RawModule {
        bytes: image.module,
        sections: image
            .sections
            .iter()
            .map(|section| (section.offset, section.size, section.flags()))
            .collect(),
    };
    let mut program = bootstrap_raw_image(
        path,
        target,
        base,
        &entries,
        isa,
        languages,
        RawBytes::Module(module),
    )?;

    let code_space = program
        .analysis_code_space
        .clone()
        .expect("a raw bootstrap captures its code space");
    let at = |address: u64| Address::new(Rc::clone(&code_space), address);
    let data: BTreeSet<u64> = image
        .symbols
        .iter()
        .filter(|symbol| !symbol.code)
        .map(|symbol| symbol.offset)
        .collect();
    for symbol in &image.symbols {
        let address = base + symbol.offset;
        if symbol.code {
            program
                .loader_entry_names
                .entry(address)
                .or_insert_with(|| symbol.name.clone());
            continue;
        }
        // A container names an address, not an extent: a word, or less when
        // the next name or the end of the image is nearer.
        let next = data
            .range(symbol.offset + 1..)
            .next()
            .copied()
            .unwrap_or(loaded);
        program.loader_data_objects.push((
            address,
            symbol.name.clone(),
            (next - symbol.offset).min(4),
        ));
    }
    let readonly: Vec<(Address, Address)> = image
        .sections
        .iter()
        .filter(|section| section.flags() & section_flags::READONLY != 0)
        .map(|section| {
            (
                at(base + section.offset),
                at(base + section.offset + section.size),
            )
        })
        .collect();
    apply_readonly_ranges(&mut program, &readonly);
    for &(register, value) in &image.tracked {
        let Ok(loc) = program.arch().get_register_varnode(register.as_bytes()) else {
            continue;
        };
        let val = value & unlace_base::address::calc_mask(loc.size as i32);
        program.arch().with_context_db_mut(|db| {
            let default = db.get_tracked_default().clone();
            let track = db.create_set(&at(base), &at(base + loaded));
            *track = default;
            track.push(unlace_sleigh::globalcontext::TrackedContext { loc, val });
        });
    }
    program.image_metadata = Some(ProgramImageMetadata {
        entry: Some(entry),
        sections: image
            .sections
            .iter()
            .map(|section| {
                ProgramSectionMetadata::new(
                    &section.name,
                    base + section.offset,
                    section.size,
                    section.kind,
                    section.file_range,
                    section.flags(),
                )
            })
            .collect(),
    });
    Ok(program)
}
