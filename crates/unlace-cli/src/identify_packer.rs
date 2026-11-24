//! `unlace identify-packer` -- a ranked packer or protector classification of
//! one binary, with the evidence it was ranked on.
//!
//! ```text
//!   unlace identify-packer <binary> [--json]
//! ```
//!
//! Read-only and deterministic: it parses the image with `object`, names a packer
//! when a section carries a known packer's section name, then layers structural
//! evidence on top: per-section Shannon entropy, whether the entry point lies in a
//! writable or non-`.text` section, and a count of executable high-entropy
//! sections. The hypotheses are ordered most likely first. Nothing is written or
//! unpacked; `unlace unpack` handles UPX, NEOLite and PKLITE.
//!
//! Not yet reported: TLS callbacks, and the Mach-O write bit (the section record
//! does not carry it, so a Mach-O section is never reported writable).

use object::{Object, ObjectSection};
use serde::Serialize;

/// Entropy at or above this (bits/byte, max 8.0) reads as compressed or encrypted.
const HIGH_ENTROPY: f64 = 7.0;

/// Section names that identify a packer. Matching is case-sensitive.
const SIGNATURES: &[(&str, &[&str])] = &[
    ("UPX", &["UPX0", "UPX1", "UPX2", ".UPX"]),
    ("ASPack", &[".aspack", ".adata"]),
    ("Themida/WinLicense", &[".themida", ".winlice"]),
    ("MPRESS", &[".MPRESS1", ".MPRESS2"]),
    ("Enigma Protector", &[".enigma1", ".enigma2"]),
    ("VMProtect", &[".vmp0", ".vmp1", ".vmp2"]),
    ("PEtite", &[".petite"]),
    ("FSG", &[".FSG", "FSG!"]),
    ("NsPack", &[".nsp0", ".nsp1", ".nsp2", "nsp0", "nsp1"]),
    ("MEW", &[".MEW", "MEW"]),
];

/// Evidence for one section.
#[derive(Debug, Clone, Serialize)]
pub struct SectionEvidence {
    pub name: String,
    pub address: u64,
    pub size: u64,
    pub entropy: f64,
    pub read: bool,
    pub write: bool,
    pub exec: bool,
    pub high_entropy: bool,
}

/// The full packer report for one binary.
#[derive(Debug, Clone, Serialize)]
pub struct PackerReport {
    /// The packer whose section-name signature matched, if any.
    pub detected_signature: Option<String>,
    pub format: String,
    pub arch: String,
    pub entry: u64,
    pub entry_section: Option<String>,
    pub entry_in_text: bool,
    pub entry_section_writable: bool,
    pub symbol_count: usize,
    pub high_entropy_exec_sections: usize,
    pub sections: Vec<SectionEvidence>,
    /// Ranked hypotheses, most likely first.
    pub hypotheses: Vec<String>,
    /// Recovery steps unlace cannot perform automatically.
    pub unsupported_steps: Vec<String>,
    /// Suggested next commands for the analyst or agent.
    pub suggested_commands: Vec<String>,
}

/// Classify `bytes` (one binary) and return the evidence.
pub fn analyze(bytes: &[u8]) -> Result<PackerReport, String> {
    let file = object::File::parse(bytes).map_err(|e| format!("not an object file: {e}"))?;

    let mut sections = Vec::new();
    let mut names: Vec<String> = Vec::new();
    for sec in file.sections() {
        let name = sec.name().unwrap_or("").to_string();
        let (read, write, exec) = section_access(&sec);
        let data = sec.data().unwrap_or(&[]);
        let entropy = shannon_entropy(data);
        let high = !data.is_empty() && entropy >= HIGH_ENTROPY;
        names.push(name.clone());
        sections.push(SectionEvidence {
            name,
            address: sec.address(),
            size: sec.size(),
            entropy,
            read,
            write,
            exec,
            high_entropy: high,
        });
    }

    let detected = detect_packer(&names).map(str::to_string);
    let high_entropy_exec = sections.iter().filter(|s| s.exec && s.high_entropy).count();

    let entry = file.entry();
    let entry_sec = sections
        .iter()
        .find(|s| entry >= s.address && entry < s.address.saturating_add(s.size));
    let entry_section = entry_sec.map(|s| s.name.clone());
    let entry_in_text = entry_sec.is_some_and(|s| s.name == ".text" || s.name == "__text");
    let entry_section_writable = entry_sec.is_some_and(|s| s.write);

    let hypotheses = rank_hypotheses(
        detected.as_deref(),
        entry_sec.is_some(),
        entry_in_text,
        entry_section_writable,
        high_entropy_exec,
    );
    let (unsupported_steps, suggested_commands) =
        recovery_handoff(detected.as_deref(), high_entropy_exec, entry_in_text);

    Ok(PackerReport {
        detected_signature: detected,
        format: format!("{:?}", file.format()).to_ascii_lowercase(),
        arch: format!("{:?}", file.architecture()).to_ascii_lowercase(),
        entry,
        entry_section,
        entry_in_text,
        entry_section_writable,
        symbol_count: file.symbols().count(),
        high_entropy_exec_sections: high_entropy_exec,
        sections,
        hypotheses,
        unsupported_steps,
        suggested_commands,
    })
}

/// The packer whose section name appears in `names`. UPX wins ties: it is the
/// most common packer in the wild.
fn detect_packer(names: &[String]) -> Option<&'static str> {
    SIGNATURES
        .iter()
        .find(|(_, needles)| needles.iter().any(|n| names.iter().any(|s| s == n)))
        .map(|(packer, _)| *packer)
}

/// Read, write and execute access for a section, per object format.
fn section_access<'a>(sec: &impl object::read::ObjectSection<'a>) -> (bool, bool, bool) {
    const SHF_WRITE: u64 = 0x1;
    const SHF_EXECINSTR: u64 = 0x4;
    const SHF_ALLOC: u64 = 0x2;
    match sec.flags() {
        object::SectionFlags::Elf { sh_flags } => (
            sh_flags & SHF_ALLOC != 0,
            sh_flags & SHF_WRITE != 0,
            sh_flags & SHF_EXECINSTR != 0,
        ),
        object::SectionFlags::Coff { characteristics } => (
            characteristics & object::pe::IMAGE_SCN_MEM_READ != 0,
            characteristics & object::pe::IMAGE_SCN_MEM_WRITE != 0,
            characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0,
        ),
        object::SectionFlags::MachO { flags } => (
            true,
            false,
            flags & object::macho::S_ATTR_PURE_INSTRUCTIONS != 0
                || flags & object::macho::S_ATTR_SOME_INSTRUCTIONS != 0,
        ),
        _ => (false, false, false),
    }
}

/// Ranked hypotheses from the evidence. Deterministic.
fn rank_hypotheses(
    detected: Option<&str>,
    entry_mapped: bool,
    entry_in_text: bool,
    entry_writable: bool,
    high_entropy_exec: usize,
) -> Vec<String> {
    let mut out = Vec::new();
    if let Some(name) = detected {
        out.push(format!(
            "Packed with {name} (section-name signature match), high confidence"
        ));
    }
    if high_entropy_exec > 0 {
        out.push(format!(
            "{high_entropy_exec} high-entropy executable section(s): compressed or encrypted payload likely"
        ));
    }
    if entry_mapped && !entry_in_text {
        out.push(
            "Entry point is not in a .text section: possible dumped or unpacked image, or a custom stub"
                .to_string(),
        );
    }
    if entry_writable {
        out.push(
            "Entry point section is writable: strong unpacked or self-modifying image signal"
                .to_string(),
        );
    }
    if out.is_empty() {
        out.push(
            "No packer signature or structural anomaly detected: likely not packed".to_string(),
        );
    }
    out
}

/// What unlace cannot do automatically for this classification, and the commands to run next.
fn recovery_handoff(
    detected: Option<&str>,
    high_entropy_exec: usize,
    entry_in_text: bool,
) -> (Vec<String>, Vec<String>) {
    let mut unsupported = Vec::new();
    let mut commands = Vec::new();
    if let Some(name) = detected {
        unsupported.push(format!(
            "Automated static unpacking of {name} is not implemented beyond the formats of unlace unpack"
        ));
        if name == "UPX" {
            commands.push("unlace unpack <binary> -o <binary>.unpacked".to_string());
        }
        commands.push(format!(
            "# Unpack {name} dynamically under unlace emu or a sandbox, then dump the original entry image"
        ));
    }
    if high_entropy_exec > 0 && detected.is_none() {
        unsupported.push(
            "High-entropy executable section(s) suggest an unknown packer or encrypter; behavioural unpacking is not automated"
                .to_string(),
        );
    }
    if !entry_in_text {
        unsupported.push(
            "Entry point outside .text suggests a dumped or rebuilt image; import reconstruction is not automated"
                .to_string(),
        );
    }
    commands
        .push("unlace identify-packer <binary> --json   # machine-readable evidence".to_string());
    commands.push("unlace decompile-all <binary>   # attempt decompilation as-is".to_string());
    (unsupported, commands)
}

/// Shannon entropy in bits per byte (0.0 to 8.0).
fn shannon_entropy(data: &[u8]) -> f64 {
    if data.is_empty() {
        return 0.0;
    }
    let mut counts = [0u64; 256];
    for &b in data {
        counts[b as usize] += 1;
    }
    let len = data.len() as f64;
    counts
        .iter()
        .filter(|&&c| c > 0)
        .map(|&c| {
            let p = c as f64 / len;
            -p * p.log2()
        })
        .sum()
}

/// Render the report as human-readable text.
pub fn render_text(r: &PackerReport) -> String {
    let mut out = String::new();
    out.push_str("# Packer identification\n\n");
    match &r.detected_signature {
        Some(name) => out.push_str(&format!("- detected: {name}\n")),
        None => out.push_str("- detected: none (no known section-name signature)\n"),
    }
    out.push_str(&format!(
        "- format: {}, architecture: {}\n",
        r.format, r.arch
    ));
    out.push_str(&format!("- entry: {:#x}", r.entry));
    if let Some(sec) = &r.entry_section {
        out.push_str(&format!(" (section {sec})"));
    }
    out.push('\n');
    out.push_str(&format!("- entry point in .text: {}\n", r.entry_in_text));
    out.push_str(&format!(
        "- entry section writable: {}\n",
        r.entry_section_writable
    ));
    out.push_str(&format!("- symbols: {}\n", r.symbol_count));
    out.push_str(&format!(
        "- high-entropy executable sections: {}\n",
        r.high_entropy_exec_sections
    ));

    out.push_str("\n## Ranked hypotheses\n\n");
    for (i, h) in r.hypotheses.iter().enumerate() {
        out.push_str(&format!("{}. {h}\n", i + 1));
    }
    if !r.unsupported_steps.is_empty() {
        out.push_str("\n## Unsupported recovery steps\n\n");
        for s in &r.unsupported_steps {
            out.push_str(&format!("- {s}\n"));
        }
    }
    out.push_str("\n## Suggested next commands\n\n");
    for c in &r.suggested_commands {
        out.push_str(&format!("- {c}\n"));
    }

    out.push_str("\n## Sections\n\n");
    out.push_str("| section | address | size | entropy | r | w | x |\n");
    out.push_str("|---------|--------:|-----:|--------:|:-:|:-:|:-:|\n");
    for s in &r.sections {
        let flag = |b: bool| if b { "y" } else { "" };
        let hot = if s.high_entropy { " (high)" } else { "" };
        out.push_str(&format!(
            "| {} | {:#x} | {} | {:.2}{} | {} | {} | {} |\n",
            s.name,
            s.address,
            s.size,
            s.entropy,
            hot,
            flag(s.read),
            flag(s.write),
            flag(s.exec),
        ));
    }
    out
}

fn usage() {
    eprintln!(
        "usage: unlace identify-packer <binary> [--json]\n\
         \n\
         Ranked packer or protector classification with its evidence: section-name\n\
         signatures, per-section entropy and entry-point placement. Read-only.\n\
         --json emits the report as one JSON object."
    );
}

/// `unlace identify-packer` entry point.
pub fn run(argv: &[String]) -> i32 {
    let mut binary: Option<String> = None;
    let mut json = false;
    let mut i = 0;
    while i < argv.len() {
        match argv[i].as_str() {
            "--json" => json = true,
            "-h" | "--help" => {
                usage();
                return 0;
            }
            s if s.starts_with("--") => {
                eprintln!("error: unknown option {s}");
                usage();
                return 2;
            }
            _ => {
                if binary.is_some() {
                    eprintln!("error: more than one binary given");
                    usage();
                    return 2;
                }
                binary = Some(argv[i].clone());
            }
        }
        i += 1;
    }
    let Some(binary) = binary else {
        usage();
        return 2;
    };
    let bytes = match std::fs::read(&binary) {
        Ok(b) => b,
        Err(e) => {
            eprintln!("error: {binary}: {e}");
            return 2;
        }
    };
    let report = match analyze(&bytes) {
        Ok(r) => r,
        Err(e) => {
            eprintln!("error: {binary}: {e}");
            return 2;
        }
    };
    if json {
        match serde_json::to_string_pretty(&report) {
            Ok(text) => println!("{text}"),
            Err(e) => {
                eprintln!("error: {e}");
                return 2;
            }
        }
    } else {
        print!("{}", render_text(&report));
    }
    0
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn entropy_is_zero_for_uniform_and_eight_for_full_spread() {
        assert_eq!(shannon_entropy(&[]), 0.0);
        assert_eq!(shannon_entropy(&[0u8; 100]), 0.0);
        let all: Vec<u8> = (0..=255).collect();
        assert!((shannon_entropy(&all) - 8.0).abs() < 1e-9);
    }

    #[test]
    fn upx_section_name_wins_and_unknown_names_do_not_match() {
        let names = vec![".text".to_string(), "UPX1".to_string()];
        assert_eq!(detect_packer(&names), Some("UPX"));
        let plain = vec![".text".to_string(), ".data".to_string()];
        assert_eq!(detect_packer(&plain), None);
    }

    #[test]
    fn no_signal_yields_not_packed_hypothesis() {
        let h = rank_hypotheses(None, true, true, false, 0);
        assert_eq!(h.len(), 1);
        assert!(h[0].contains("likely not packed"));
    }

    #[test]
    fn detected_packer_ranks_first() {
        let h = rank_hypotheses(Some("UPX"), true, false, false, 1);
        assert!(h[0].contains("UPX"));
        assert!(
            h.iter()
                .any(|x| x.contains("Entry point is not in a .text"))
        );
        assert!(h.iter().any(|x| x.contains("high-entropy")));
    }
}
