//! Firmware front end: a raw Cortex-M dump, or a firmware container (U-Boot
//! uImage, Intel HEX, S-record, ESP image, bFLT, Qualcomm MBN, MediaTek
//! md1img, PC BIOS image), gets the
//! `--raw-image --target --base --entry` arguments it would otherwise need by
//! hand (`unlace_analysis::loader::firmware`). `--svd FILE` adds a CMSIS-SVD
//! device's peripherals as typed volatile globals and its interrupt names.
//!
//! Runs before the subcommand parses its arguments, for the subcommands that
//! take a raw image. The binary must be the first argument. A container is
//! flattened into a temporary file that [`Prepared`] removes when dropped.

use unlace_analysis::loader::firmware::{containers, cortexm, svd};

const RAW_COMMANDS: [&str; 4] = [
    "decompile",
    "decompile-all",
    "decompile-project",
    "functions",
];
const CORTEX_TARGET: &str = "ARM:LE:32:Cortex";
/// The ARMv7-M/ARMv8-M Device memory regions: Peripheral and System (PPB).
const DEVICE_REGIONS: [&str; 2] = ["0x40000000+0x20000000", "0xe0000000+0x20000000"];

/// The rewritten arguments and the temporary image they name, if any.
pub struct Prepared {
    pub args: Vec<String>,
    temp: Vec<std::path::PathBuf>,
}

impl Drop for Prepared {
    fn drop(&mut self) {
        for t in &self.temp {
            let _ = std::fs::remove_file(t);
        }
    }
}

/// The arguments with the firmware layout filled in; `args` unchanged when
/// nothing applies. An unreadable `--svd` file is an error.
pub fn prepare(sub: &str, args: &[String]) -> Result<Prepared, String> {
    let mut prepared = Prepared {
        args: args.to_vec(),
        temp: Vec::new(),
    };
    let svd_file = take_flag(&mut prepared.args, "--svd");
    if !RAW_COMMANDS.contains(&sub) {
        return match svd_file {
            Some(_) => Err(format!("--svd does not apply to {sub}")),
            None => Ok(prepared),
        };
    }
    let device = match &svd_file {
        Some(f) => Some(svd::parse(
            &std::fs::read(f).map_err(|e| format!("could not read {f}: {e}"))?,
        )?),
        None => None,
    };
    let Some(binary) = prepared
        .args
        .first()
        .filter(|a| !a.starts_with("--"))
        .cloned()
    else {
        return Ok(prepared);
    };
    let Ok(mut bytes) = std::fs::read(&binary) else {
        return Ok(prepared);
    };
    let out = &mut prepared.args;
    let has = |args: &[String], flag: &str| args.iter().any(|a| a == flag);
    let value = |args: &[String], flag: &str| {
        args.iter()
            .position(|a| a == flag)
            .and_then(|i| args.get(i + 1))
            .cloned()
    };
    let mut flat_entries: Vec<u64> = Vec::new();
    if !has(out, "--raw-image") && !is_object(&bytes) {
        match containers::detect(&bytes)? {
            Some(containers::Container::Embedded {
                format,
                bytes: inner,
            }) => {
                let path = temp_path(&binary, "elf");
                std::fs::write(&path, &inner)
                    .map_err(|e| format!("could not write {}: {e}", path.display()))?;
                eprintln!(
                    "[kuna firmware] {format}: loading the ELF it wraps ({} bytes)",
                    inner.len()
                );
                out[0] = path.display().to_string();
                prepared.temp.push(path);
                return Ok(prepared);
            }
            Some(containers::Container::Flat(mut flat)) => {
                let wants_flash = value(out, "--target")
                    .is_some_and(|t| t.starts_with("x86:LE:32") || t.starts_with("x86:LE:64"));
                if flat.format == "PC BIOS image" && wants_flash {
                    flat = containers::bios_flash(&bytes).unwrap_or(flat);
                }
                if let Some(note) = &flat.note {
                    eprintln!("[kuna firmware] {}: {note}", flat.format);
                }
                let path = temp_path(&binary, "bin");
                std::fs::write(&path, &flat.bytes)
                    .map_err(|e| format!("could not write {}: {e}", path.display()))?;
                eprintln!(
                    "[kuna firmware] {}: {} bytes at {:#x}, target {}, entries {:x?}",
                    flat.format,
                    flat.bytes.len(),
                    flat.base,
                    flat.target
                        .as_deref()
                        .unwrap_or("(from --target or the vector table)"),
                    flat.entries
                );
                out[0] = path.display().to_string();
                prepared.temp.push(path);
                out.push("--raw-image".into());
                for directive in &flat.asserts {
                    out.extend(["--assert".into(), directive.clone()]);
                }
                if !flat.symbols.is_empty() {
                    let list = temp_path(&binary, "functions");
                    let text: String = flat
                        .symbols
                        .iter()
                        .map(|(a, n)| format!("{a:#x}={n}\n"))
                        .collect();
                    std::fs::write(&list, text)
                        .map_err(|e| format!("could not write {}: {e}", list.display()))?;
                    out.extend(["--define-function".into(), format!("@{}", list.display())]);
                    prepared.temp.push(list);
                }
                if !has(out, "--target")
                    && let Some(t) = &flat.target
                {
                    out.extend(["--target".into(), t.clone()]);
                }
                if !has(out, "--base") && (flat.target.is_some() || has(out, "--target")) {
                    out.extend(["--base".into(), format!("{:#x}", flat.base)]);
                }
                if flat.thumb && !has(out, "--isa") {
                    out.extend(["--isa".into(), "thumb".into()]);
                }
                flat_entries = flat.entries.clone();
                bytes = flat.bytes;
            }
            None => {}
        }
    }
    let raw = has(out, "--raw-image");
    if !raw && is_object(&bytes) {
        return Ok(prepared);
    }
    let target = value(out, "--target");
    let cortex = match &target {
        Some(t) => raw && t.starts_with("ARM:LE:32"),
        None => true,
    };
    let table = if cortex && !has(out, "--base") {
        cortexm::probe(&bytes, None)
    } else {
        None
    };
    if let Some(table) = &table {
        if !raw {
            out.push("--raw-image".into());
        }
        if target.is_none() {
            out.extend(["--target".into(), CORTEX_TARGET.into()]);
        }
        out.extend(["--base".into(), format!("{:#x}", table.base)]);
        if !has(out, "--isa") {
            out.extend(["--isa".into(), "thumb".into()]);
        }
        for device in DEVICE_REGIONS {
            out.extend(["--assert".into(), format!("volatile {device}")]);
        }
        eprintln!(
            "[kuna firmware] Cortex-M vector table: base {:#x}, initial SP {:#x}, {} handlers, reset {:#x}",
            table.base,
            table.initial_sp,
            table.handlers.len(),
            table.reset()
        );
    }
    let handlers: Vec<(u64, String)> = table
        .iter()
        .flat_map(|t| &t.handlers)
        .map(|h| {
            let irq = h
                .name
                .strip_prefix("IRQ")
                .and_then(|n| n.strip_suffix("_Handler"))
                .and_then(|n| n.parse::<u32>().ok());
            let named = irq
                .and_then(|n| device.as_ref()?.interrupts.get(&n))
                .map(|n| format!("{n}_IRQHandler"));
            (h.addr, named.unwrap_or_else(|| h.name.clone()))
        })
        .collect();
    if sub != "decompile" && !has(out, "--entry") && !has(out, "--addr") && has(out, "--raw-image")
    {
        for addr in handlers
            .iter()
            .map(|h| h.0)
            .chain(flat_entries.iter().copied())
        {
            out.extend(["--entry".into(), format!("{addr:#x}")]);
        }
    }
    for (addr, name) in &handlers {
        out.extend(["--define-function".into(), format!("{addr:#x}={name}")]);
    }
    if let Some(device) = &device {
        let mut declared = std::collections::BTreeSet::new();
        for p in device
            .peripherals
            .iter()
            .filter(|p| !p.registers.is_empty())
        {
            let renamed;
            let p = if unlace_analysis::cortexmscs::names_a_type(&p.type_name) {
                renamed = unlace_analysis::loader::firmware::svd::Peripheral {
                    type_name: format!("{}_{}", device.c_name(), p.type_name),
                    ..p.clone()
                };
                &renamed
            } else {
                p
            };
            if declared.insert(p.type_name.clone()) {
                out.extend(["--assert".into(), format!("typedef {}", p.c_struct())]);
            }
            out.extend([
                "--assert".into(),
                format!("data {:#x} struct {} {}", p.base, p.type_name, p.name),
            ]);
            out.extend([
                "--assert".into(),
                format!("volatile {:#x}+{:#x}", p.base, p.extent()),
            ]);
        }
        eprintln!(
            "[kuna firmware] SVD {}: {} peripherals, {} interrupts",
            device.name,
            device.peripherals.len(),
            device.interrupts.len()
        );
    }
    Ok(prepared)
}

/// Remove `flag VALUE` from `args`, returning the value.
fn take_flag(args: &mut Vec<String>, flag: &str) -> Option<String> {
    let i = args.iter().position(|a| a == flag)?;
    let value = args.get(i + 1).cloned();
    args.drain(i..(i + 2).min(args.len()));
    value
}

fn temp_path(binary: &str, ext: &str) -> std::path::PathBuf {
    let stem = std::path::Path::new(binary)
        .file_name()
        .map_or("image".into(), |n| n.to_string_lossy().to_string());
    std::env::temp_dir().join(format!("kuna-firmware-{}-{stem}.{ext}", std::process::id()))
}

/// Formats the loader parses itself.
fn is_object(bytes: &[u8]) -> bool {
    let magic = bytes.get(..4).unwrap_or(&[]);
    magic == b"\x7fELF"
        || magic.starts_with(b"MZ")
        || magic.starts_with(b"VZ")
        || matches!(magic, [0xfe | 0xce | 0xcf | 0xca, 0xed | 0xfa | 0xfe, ..])
        || magic == b"dyld"
        || magic == b"!<ar"
}
