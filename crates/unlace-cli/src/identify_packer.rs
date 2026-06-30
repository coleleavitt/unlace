//! `unlace identify-packer` — ranked packer/protector classification with
//! evidence (ROADMAP Phase E.4.1).
//!
//! Builds on [`unlace_loader::packer_detect`] for the section-name signature,
//! then layers cheap structural evidence on top: per-section Shannon entropy
//! (compressed/encrypted payloads run hot), entrypoint facts (a writable or
//! non-`.text` entry section is a dumped/unpacked-image tell), and TLS-callback
//! presence (a common unpack-stub / anti-debug hook). The result is a ranked
//! list of hypotheses plus the raw evidence, emitted as human-readable text or
//! JSON.
//!
//! This is deterministic and read-only — it never writes or unpacks anything.

use serde::Serialize;
use unlace_loader::image::BinaryImage;
use unlace_loader::packer_detect::detect_packer;

/// Entropy at or above this (bits/byte, max 8.0) is treated as
/// "compressed/encrypted-looking".
const HIGH_ENTROPY: f64 = 7.0;

/// Per-section evidence row.
#[derive(Debug, Clone, Serialize)]
pub struct SectionEvidence {
    pub name: String,
    pub vaddr: u64,
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
    /// Known-packer signature match, if any (e.g. `"UPX"`).
    pub detected_signature: Option<String>,
    pub arch: String,
    pub entry: u64,
    pub entry_section: Option<String>,
    pub entry_in_text: bool,
    pub entry_section_writable: bool,
    pub tls_callback_count: usize,
    pub symbol_count: usize,
    pub high_entropy_exec_sections: usize,
    pub sections: Vec<SectionEvidence>,
    /// Ranked hypotheses, most-likely first.
    pub hypotheses: Vec<String>,
    /// Recovery steps unlace cannot perform automatically yet (E.4.4 handoff).
    pub unsupported_steps: Vec<String>,
    /// Suggested next commands for the analyst/agent (E.4.4 handoff).
    pub suggested_commands: Vec<String>,
    /// A self-contained, LLM-ready goal prompt summarizing goal + evidence.
    pub llm_goal_prompt: String,
}

/// Analyze an already-loaded image. Pure function of the image so it is
/// unit-testable without touching the filesystem.
pub fn analyze(image: &BinaryImage) -> PackerReport {
    use unlace_loader::image::SectionFlags;

    let detected = detect_packer(image).map(|k| k.as_str().to_string());

    let mut sections = Vec::with_capacity(image.sections.len());
    let mut high_entropy_exec = 0usize;
    for s in &image.sections {
        let exec = s.flags.contains(SectionFlags::EXEC);
        let entropy = shannon_entropy(&s.data);
        let high = entropy >= HIGH_ENTROPY && !s.data.is_empty();
        if high && exec {
            high_entropy_exec += 1;
        }
        sections.push(SectionEvidence {
            name: s.name.clone(),
            vaddr: s.vaddr,
            size: s.size,
            entropy,
            read: s.flags.contains(SectionFlags::READ),
            write: s.flags.contains(SectionFlags::WRITE),
            exec,
            high_entropy: high,
        });
    }

    // Entrypoint facts.
    let entry = image.entry;
    let entry_sec = image
        .sections
        .iter()
        .find(|s| entry >= s.vaddr && entry < s.vaddr.saturating_add(s.size));
    let entry_section = entry_sec.map(|s| s.name.clone());
    let entry_in_text = entry_sec.is_some_and(|s| s.name == ".text" || s.name == "__text");
    let entry_section_writable = entry_sec.is_some_and(|s| s.flags.contains(SectionFlags::WRITE));

    let hypotheses = rank_hypotheses(
        detected.as_deref(),
        entry_sec.is_some(),
        entry_in_text,
        entry_section_writable,
        high_entropy_exec,
        image.tls_callbacks.len(),
    );

    let (unsupported_steps, suggested_commands) =
        recovery_handoff(detected.as_deref(), high_entropy_exec, entry_in_text);
    let llm_goal_prompt = build_llm_prompt(
        detected.as_deref(),
        &format!("{:?}", image.arch),
        &hypotheses,
        &unsupported_steps,
    );

    PackerReport {
        detected_signature: detected,
        arch: format!("{:?}", image.arch),
        entry,
        entry_section,
        entry_in_text,
        entry_section_writable,
        tls_callback_count: image.tls_callbacks.len(),
        symbol_count: image.symbols.len(),
        high_entropy_exec_sections: high_entropy_exec,
        sections,
        hypotheses,
        unsupported_steps,
        suggested_commands,
        llm_goal_prompt,
    }
}

/// Build the recovery handoff: which steps unlace can't yet do automatically,
/// and the concrete next commands to run. Deterministic.
fn recovery_handoff(
    detected: Option<&str>,
    high_entropy_exec: usize,
    entry_in_text: bool,
) -> (Vec<String>, Vec<String>) {
    let mut unsupported = Vec::new();
    let mut commands = Vec::new();

    if let Some(name) = detected {
        unsupported.push(format!(
            "Automated static unpacking of {name} is not implemented — the packed payload must be unpacked before full decompilation."
        ));
        match name {
            "UPX" => commands.push("upx -d <binary> -o <binary>.unpacked   # UPX is self-unpacking".to_string()),
            _ => commands.push(format!(
                "# Unpack {name} dynamically (run under unlace emu / a sandbox), then dump the OEP image"
            )),
        }
        commands.push(
            "unlace emu <binary> --max-instructions 5000000   # observe unpack stub behaviour"
                .to_string(),
        );
    }
    if high_entropy_exec > 0 && detected.is_none() {
        unsupported.push(
            "High-entropy executable section(s) suggest an unknown packer/encrypter; behavioural unpacking is not automated."
                .to_string(),
        );
    }
    if !entry_in_text {
        unsupported.push(
            "Entrypoint outside .text suggests a dumped/rebuilt image; import-table reconstruction is not automated."
                .to_string(),
        );
    }

    commands.push(
        "unlace identify-packer <binary> --format json   # machine-readable evidence".to_string(),
    );
    commands.push("unlace decompile <binary> --emit c   # attempt decompilation as-is".to_string());
    (unsupported, commands)
}

/// Compose a self-contained prompt an analyst can hand to an LLM/agent.
fn build_llm_prompt(
    detected: Option<&str>,
    arch: &str,
    hypotheses: &[String],
    unsupported: &[String],
) -> String {
    let packer = detected.unwrap_or("none detected (signature-based)");
    let mut p = String::new();
    p.push_str("You are assisting with reverse engineering a binary. ");
    p.push_str(&format!(
        "Architecture: {arch}. Packer signature: {packer}. "
    ));
    p.push_str("Deterministic evidence (ranked hypotheses): ");
    for (i, h) in hypotheses.iter().enumerate() {
        p.push_str(&format!("({}) {h}; ", i + 1));
    }
    if !unsupported.is_empty() {
        p.push_str("unlace cannot automatically: ");
        for u in unsupported {
            p.push_str(u);
            p.push(' ');
        }
    }
    p.push_str(
        "Goal: propose the next concrete steps to unpack/deobfuscate and recover readable C. ",
    );
    p.push_str("Do NOT execute the sample; reason only from the evidence and propose commands.");
    p
}

fn rank_hypotheses(
    detected: Option<&str>,
    entry_mapped: bool,
    entry_in_text: bool,
    entry_writable: bool,
    high_entropy_exec: usize,
    tls_callbacks: usize,
) -> Vec<String> {
    let mut out = Vec::new();
    if let Some(name) = detected {
        out.push(format!(
            "Packed with {name} (section-name signature match) — high confidence"
        ));
    }
    if high_entropy_exec > 0 {
        out.push(format!(
            "{high_entropy_exec} high-entropy executable section(s) — compressed/encrypted payload likely"
        ));
    }
    if entry_mapped && !entry_in_text {
        out.push(
            "Entrypoint is not in a .text section — possible dumped/unpacked image or custom stub"
                .to_string(),
        );
    }
    if entry_writable {
        out.push(
            "Entrypoint section is writable (RWX) — strong unpacked/self-modifying-image signal"
                .to_string(),
        );
    }
    if tls_callbacks > 0 {
        out.push(format!(
            "{tls_callbacks} TLS callback(s) present — common unpack-stub / anti-debug hook"
        ));
    }
    if out.is_empty() {
        out.push(
            "No packer signatures or structural anomalies detected — likely not packed".to_string(),
        );
    }
    out
}

/// Shannon entropy in bits/byte (0.0..=8.0) of a byte slice.
fn shannon_entropy(data: &[u8]) -> f64 {
    if data.is_empty() {
        return 0.0;
    }
    let mut counts = [0u64; 256];
    for &b in data {
        counts[b as usize] += 1;
    }
    let len = data.len() as f64;
    let mut entropy = 0.0;
    for &c in counts.iter() {
        if c > 0 {
            let p = c as f64 / len;
            entropy -= p * p.log2();
        }
    }
    entropy
}

/// Render a human-readable report.
pub fn render_text(r: &PackerReport) -> String {
    let mut out = String::new();
    out.push_str("# Packer identification\n\n");
    match &r.detected_signature {
        Some(name) => out.push_str(&format!("- detected: **{name}**\n")),
        None => out.push_str("- detected: none (no known section-name signature)\n"),
    }
    out.push_str(&format!("- architecture: `{}`\n", r.arch));
    out.push_str(&format!("- entry: `{:#x}`", r.entry));
    if let Some(sec) = &r.entry_section {
        out.push_str(&format!(" (section `{sec}`)"));
    }
    out.push('\n');
    out.push_str(&format!("- entrypoint in .text: {}\n", r.entry_in_text));
    out.push_str(&format!(
        "- entrypoint section writable (RWX): {}\n",
        r.entry_section_writable
    ));
    out.push_str(&format!("- TLS callbacks: {}\n", r.tls_callback_count));
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
        out.push_str(&format!("- `{c}`\n"));
    }

    out.push_str("\n## LLM-ready goal prompt\n\n");
    out.push_str("> ");
    out.push_str(&r.llm_goal_prompt);
    out.push('\n');

    out.push_str("\n## Sections\n\n");
    out.push_str("| section | vaddr | size | entropy | r | w | x |\n");
    out.push_str("|---------|------:|-----:|--------:|:-:|:-:|:-:|\n");
    for s in &r.sections {
        let flag = |b: bool| if b { "✓" } else { " " };
        let hot = if s.high_entropy { " 🔥" } else { "" };
        out.push_str(&format!(
            "| `{}` | {:#x} | {} | {:.2}{} | {} | {} | {} |\n",
            s.name,
            s.vaddr,
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

/// Render the report as JSON.
pub fn render_json(r: &PackerReport) -> serde_json::Result<String> {
    serde_json::to_string_pretty(r)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn entropy_is_zero_for_uniform_and_max_for_random_spread() {
        assert_eq!(shannon_entropy(&[]), 0.0);
        assert_eq!(shannon_entropy(&[0u8; 100]), 0.0);
        let all: Vec<u8> = (0..=255).collect();
        let e = shannon_entropy(&all);
        assert!(
            (e - 8.0).abs() < 1e-9,
            "uniform 0..255 should be 8 bits, got {e}"
        );
    }

    #[test]
    fn no_signal_yields_not_packed_hypothesis() {
        let h = rank_hypotheses(None, true, true, false, 0, 0);
        assert_eq!(h.len(), 1);
        assert!(h[0].contains("likely not packed"));
    }

    #[test]
    fn detected_packer_ranks_first() {
        let h = rank_hypotheses(Some("UPX"), true, false, false, 1, 0);
        assert!(h[0].contains("UPX"));
        assert!(h.iter().any(|x| x.contains("not in a .text")));
        assert!(h.iter().any(|x| x.contains("high-entropy")));
    }

    #[test]
    fn recovery_handoff_for_upx_suggests_unpacking() {
        let (unsupported, commands) = recovery_handoff(Some("UPX"), 1, true);
        assert!(unsupported.iter().any(|s| s.contains("UPX")));
        assert!(commands.iter().any(|c| c.contains("upx -d")));
        // Generic commands always present.
        assert!(commands.iter().any(|c| c.contains("identify-packer")));
    }

    #[test]
    fn llm_prompt_contains_goal_and_no_execute_guard() {
        let prompt = build_llm_prompt(
            Some("UPX"),
            "X86_64",
            &["Packed with UPX".to_string()],
            &["unpacking not automated".to_string()],
        );
        assert!(prompt.contains("UPX"));
        assert!(prompt.contains("Goal:"));
        assert!(prompt.contains("Do NOT execute"));
    }
}
