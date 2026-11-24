//! Firmware front end: a raw Cortex-M dump, or a firmware container (U-Boot
//! uImage, Intel HEX, S-record, bFLT, Qualcomm MBN, MediaTek
//! md1img, PC BIOS image), gets the
//! `--raw-image --target --base --entry` arguments it would otherwise need by
//! hand (`unlace_analysis::loader::firmware`). A U-Boot FIT image selected as
//! an archive member (`armember`) arrives already flattened. `--svd FILE` adds a CMSIS-SVD
//! device's peripherals as typed volatile globals, to an object file (an ELF, an
//! ESP image) as well, and names a raw dump's interrupt handlers after the
//! device's interrupts.
//!
//! An IDA database (`.idb`/`.i64`) becomes a raw load of its segments with its
//! knowledge as `--assert` directives (`crate::idb::prepare_args`).
//!
//! Runs before the subcommand parses its arguments, for the subcommands that
//! take a raw image. The binary must be the first argument. A container is
//! flattened into a temporary file that [`Prepared`] removes when dropped.

use unlace_analysis::loader::firmware::{avrvectors, containers, cortexm, esp, svd};

pub(crate) const RAW_COMMANDS: [&str; 4] = [
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

/// The `--svd` argument's description: the file it names, or else the bundled
/// device it names (`--svd STM32F405`, `--svd nrf52840`).
fn svd_bytes(arg: &str) -> Result<Vec<u8>, String> {
    if std::path::Path::new(arg).exists() {
        return std::fs::read(arg).map_err(|e| format!("could not read {arg}: {e}"));
    }
    if let Some((name, doc)) = svd::bundled(arg) {
        eprintln!("[unlace firmware] SVD: bundled description {name} for {arg}");
        return Ok(doc);
    }
    let names = svd::bundled_names();
    let family: Vec<&str> = names
        .iter()
        .map(String::as_str)
        .filter(|n| {
            arg.get(..7)
                .is_some_and(|a| n.get(..7).is_some_and(|p| p.eq_ignore_ascii_case(a)))
        })
        .collect();
    Err(format!(
        "--svd {arg}: no such file and no bundled device of that name{}",
        if family.is_empty() {
            format!(" ({} bundled; any CMSIS-SVD file works too)", names.len())
        } else {
            format!(" (bundled: {})", family.join(", "))
        }
    ))
}

/// The arguments with the firmware layout filled in; `args` unchanged when
/// nothing applies. An unreadable `--svd` file, or a name that is neither a file
/// nor a bundled device, is an error. `member` is the flat image of a container
/// member the arguments already selected.
pub fn prepare(
    sub: &str,
    args: &[String],
    member: Option<containers::Flat>,
) -> Result<Prepared, String> {
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
        Some(f) => Some(svd::parse(&svd_bytes(f)?)?),
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
    if crate::idb::is_database_file(&binary) {
        crate::idb::prepare_args(sub, &mut prepared.args, &mut prepared.temp)?;
        return Ok(prepared);
    }
    let Ok(mut bytes) = std::fs::read(&binary) else {
        return Ok(prepared);
    };
    if member.is_none()
        && !prepared.args.iter().any(|a| a == "--raw-image")
        && esp::parse(&bytes).is_some()
    {
        if let Some(device) = &device {
            declare_device(device, &mut prepared.args);
        }
        return Ok(prepared);
    }
    let out = &mut prepared.args;
    let has = |args: &[String], flag: &str| args.iter().any(|a| a == flag);
    let value = |args: &[String], flag: &str| {
        args.iter()
            .position(|a| a == flag)
            .and_then(|i| args.get(i + 1))
            .cloned()
    };
    let mut flat_entries: Vec<u64> = Vec::new();
    if member.is_some() || (!has(out, "--raw-image") && !is_object(&bytes)) {
        let found = match member {
            Some(flat) => Some(containers::Container::Flat(flat)),
            None => containers::detect(&bytes)?,
        };
        match found {
            Some(containers::Container::Embedded {
                format,
                bytes: inner,
            }) => {
                let path = temp_path(&binary, "elf");
                std::fs::write(&path, &inner)
                    .map_err(|e| format!("could not write {}: {e}", path.display()))?;
                eprintln!(
                    "[unlace firmware] {format}: loading the ELF it wraps ({} bytes)",
                    inner.len()
                );
                out[0] = path.display().to_string();
                prepared.temp.push(path);
                if let Some(device) = &device {
                    declare_device(device, out);
                }
                return Ok(prepared);
            }
            Some(containers::Container::Flat(mut flat)) => {
                let wants_flash = value(out, "--target")
                    .is_some_and(|t| t.starts_with("x86:LE:32") || t.starts_with("x86:LE:64"));
                if flat.format == "PC BIOS image" && wants_flash {
                    flat = containers::bios_flash(&bytes).unwrap_or(flat);
                }
                if let Some(note) = &flat.note {
                    eprintln!("[unlace firmware] {}: {note}", flat.format);
                }
                let path = temp_path(&binary, "bin");
                std::fs::write(&path, &flat.bytes)
                    .map_err(|e| format!("could not write {}: {e}", path.display()))?;
                eprintln!(
                    "[unlace firmware] {}: {} bytes at {:#x}, target {}, entries {:x?}",
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
        if let Some(device) = &device {
            declare_device(device, out);
        }
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
            "[unlace firmware] Cortex-M vector table: base {:#x}, initial SP {:#x}, {} handlers, reset {:#x}",
            table.base,
            table.initial_sp,
            table.handlers.len(),
            table.reset()
        );
    }
    // An AVR image's vector table names its reset and interrupt handlers.
    if flat_entries.is_empty()
        && has(out, "--raw-image")
        && target.as_deref().is_some_and(|t| t.starts_with("avr8:"))
    {
        let base = value(out, "--base")
            .and_then(|b| parse_address(&b))
            .unwrap_or(0);
        flat_entries = avrvectors::probe(&bytes)
            .into_iter()
            .map(|w| base.wrapping_add(w))
            .collect();
        if !flat_entries.is_empty() {
            eprintln!(
                "[unlace firmware] AVR vector table: {} handler(s), reset {:#x}",
                flat_entries.len(),
                flat_entries[0]
            );
        }
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
        declare_device(device, out);
    }
    Ok(prepared)
}

/// Declare the peripherals of `device` as typed volatile globals: a
/// structure per peripheral type, a global at each base and a volatile range
/// over its registers. A type named like a built-in System Control Space
/// block takes the device name in front.
fn declare_device(device: &svd::Device, out: &mut Vec<String>) {
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
        "[unlace firmware] SVD {}: {} peripherals, {} interrupts",
        device.name,
        device.peripherals.len(),
        device.interrupts.len()
    );
}

/// A `--base` value: hexadecimal with `0x`, else decimal.
fn parse_address(s: &str) -> Option<u64> {
    match s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        Some(hex) => u64::from_str_radix(hex, 16).ok(),
        None => s.parse().ok(),
    }
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
    std::env::temp_dir().join(format!(
        "unlace-firmware-{}-{stem}.{ext}",
        std::process::id()
    ))
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
