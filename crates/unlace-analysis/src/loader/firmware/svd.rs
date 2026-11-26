//! CMSIS-SVD device descriptions: peripherals as C structures at their base
//! addresses, and interrupt names.
//!
//! `derivedFrom` peripherals reuse their base's registers (and structure);
//! clusters flatten into `<cluster>_<register>` members; `dim` arrays expand
//! `%s` (from `dimIndex` or the index). Registers that overlap an earlier one
//! (SVD alternates) are dropped from the structure; gaps become reserved bytes.
//!
//! [`bundled`] reads a device from the descriptions unlace carries
//! (`svd_devices.br`, written by `tools/gen_svd_bundle.py` from the vendors'
//! Apache-2.0 and BSD-3-Clause device packs), so `--svd STM32F405` needs no file.

use std::collections::BTreeMap;
use std::io::Read;
use std::rc::Rc;
use unlace_base::xml::{Element, xml_tree};

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Register {
    pub name: String,
    pub offset: u64,
    pub size: u32,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Peripheral {
    pub name: String,
    pub base: u64,
    /// The structure name (the base peripheral's for a derived one).
    pub type_name: String,
    pub registers: Vec<Register>,
}

#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Device {
    pub name: String,
    pub peripherals: Vec<Peripheral>,
    /// IRQ number to name.
    pub interrupts: BTreeMap<u32, String>,
}

fn child<'a>(e: &'a Element, name: &str) -> Option<&'a Rc<Element>> {
    e.get_children().iter().find(|c| c.get_name() == name)
}

fn text(e: &Element, name: &str) -> Option<String> {
    child(e, name).map(|c| String::from_utf8_lossy(c.get_content()).trim().to_string())
}

fn number(s: &str) -> Option<u64> {
    let s = s.trim();
    if let Some(h) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        u64::from_str_radix(h, 16).ok()
    } else if let Some(b) = s.strip_prefix('#') {
        u64::from_str_radix(&b.replace(['x', 'X'], "0"), 2).ok()
    } else {
        s.parse().ok()
    }
}

fn c_name(s: &str) -> String {
    let mut out: String = s
        .chars()
        .map(|c| if c.is_ascii_alphanumeric() { c } else { '_' })
        .collect();
    if out.chars().next().is_none_or(|c| c.is_ascii_digit()) {
        out.insert(0, '_');
    }
    out
}

/// `(name, offset)` for each element of a `dim` array, or the one element.
fn expand(e: &Element, name: &str, offset: u64) -> Vec<(String, u64)> {
    let Some(dim) = text(e, "dim").and_then(|d| number(&d)) else {
        return vec![(name.to_string(), offset)];
    };
    let step = text(e, "dimIncrement")
        .and_then(|d| number(&d))
        .unwrap_or(0);
    let index: Vec<String> = match text(e, "dimIndex") {
        Some(list) if list.contains('-') && !list.contains(',') => {
            let (a, b) = list.split_once('-').unwrap_or_default();
            match (a.trim().parse::<u64>(), b.trim().parse::<u64>()) {
                (Ok(a), Ok(b)) => (a..=b).map(|i| i.to_string()).collect(),
                _ => Vec::new(),
            }
        }
        Some(list) => list.split(',').map(|s| s.trim().to_string()).collect(),
        None => Vec::new(),
    };
    (0..dim.min(1024))
        .map(|i| {
            let tag = index
                .get(i as usize)
                .cloned()
                .unwrap_or_else(|| i.to_string());
            (
                name.replace("[%s]", &tag).replace("%s", &tag),
                offset + i * step,
            )
        })
        .collect()
}

fn registers(parent: &Element, prefix: &str, base: u64, size_bits: u32, out: &mut Vec<Register>) {
    for e in parent.get_children() {
        let is_cluster = e.get_name() == "cluster";
        if e.get_name() != "register" && !is_cluster {
            continue;
        }
        let Some(name) = text(e, "name") else {
            continue;
        };
        let Some(offset) = text(e, "addressOffset").and_then(|o| number(&o)) else {
            continue;
        };
        let size = text(e, "size")
            .and_then(|s| number(&s))
            .map_or(size_bits, |s| s as u32);
        for (n, off) in expand(e, &name, base + offset) {
            let full = format!("{prefix}{}", c_name(&n));
            if is_cluster {
                registers(e, &format!("{full}_"), off, size, out);
            } else {
                out.push(Register {
                    name: full,
                    offset: off,
                    size: (size / 8).max(1),
                });
            }
        }
    }
}

/// Parse an SVD file.
pub fn parse(bytes: &[u8]) -> Result<Device, String> {
    let doc = xml_tree(without_declaration(bytes)).map_err(|e| format!("SVD: {}", e.explain()))?;
    let root = doc.get_root();
    if root.get_name() != "device" {
        return Err(format!(
            "SVD: root element is <{}>, not <device>",
            root.get_name()
        ));
    }
    let mut dev = Device {
        name: text(root, "name").unwrap_or_default(),
        ..Device::default()
    };
    let dev_size = text(root, "size").and_then(|s| number(&s)).unwrap_or(32) as u32;
    let Some(list) = child(root, "peripherals") else {
        return Ok(dev);
    };
    let mut by_name: BTreeMap<String, (String, Vec<Register>)> = BTreeMap::new();
    for p in list
        .get_children()
        .iter()
        .filter(|p| p.get_name() == "peripheral")
    {
        let (Some(name), Some(base)) = (
            text(p, "name"),
            text(p, "baseAddress").and_then(|b| number(&b)),
        ) else {
            continue;
        };
        let size = text(p, "size")
            .and_then(|s| number(&s))
            .map_or(dev_size, |s| s as u32);
        let mut regs = Vec::new();
        if let Some(r) = child(p, "registers") {
            registers(r, "", 0, size, &mut regs);
        }
        let derived = p
            .get_attribute_value("derivedFrom")
            .ok()
            .map(|v| String::from_utf8_lossy(v).to_string());
        let type_name = match derived.as_ref().and_then(|d| by_name.get(d)) {
            Some((t, base_regs)) if regs.is_empty() => {
                regs = base_regs.clone();
                t.clone()
            }
            _ => format!("{}_Type", c_name(&name)),
        };
        for irq in p
            .get_children()
            .iter()
            .filter(|c| c.get_name() == "interrupt")
        {
            if let (Some(n), Some(v)) = (
                text(irq, "name"),
                text(irq, "value").and_then(|v| number(&v)),
            ) {
                dev.interrupts.entry(v as u32).or_insert(c_name(&n));
            }
        }
        regs.sort_by_key(|r| r.offset);
        by_name.insert(name.clone(), (type_name.clone(), regs.clone()));
        dev.peripherals.push(Peripheral {
            name: c_name(&name),
            base,
            type_name,
            registers: regs,
        });
    }
    Ok(dev)
}

/// `bytes` past a leading `<?xml ...?>` declaration (and byte-order mark). The
/// unlace XML reader takes `version` and `encoding` only, and the vendors' SVD
/// files declare `standalone="no"` as well.
fn without_declaration(bytes: &[u8]) -> &[u8] {
    let b = bytes.strip_prefix(b"\xEF\xBB\xBF").unwrap_or(bytes);
    if !b.starts_with(b"<?xml") {
        return b;
    }
    match b.windows(2).position(|w| w == b"?>") {
        Some(end) => &b[end + 2..],
        None => b,
    }
}

/// The bundled device descriptions, compressed.
const BUNDLE: &[u8] = include_bytes!("svd_devices.br");
/// The most the bundle may decompress to.
const MAX_BUNDLE: u64 = 64 << 20;

/// The bundle's devices, in order, with each document's bytes.
fn bundle() -> Result<Vec<(String, Vec<u8>)>, String> {
    let mut data = Vec::new();
    brotli_decompressor::Decompressor::new(BUNDLE, 4096)
        .take(MAX_BUNDLE)
        .read_to_end(&mut data)
        .map_err(|e| format!("SVD bundle: {e}"))?;
    let header = data
        .windows(2)
        .position(|w| w == b"\n\n")
        .ok_or("SVD bundle: no index")?;
    let index = std::str::from_utf8(&data[..header]).map_err(|_| "SVD bundle: index not UTF-8")?;
    let mut at = header + 2;
    let mut out = Vec::new();
    for line in index.lines().skip(1) {
        let (name, len) = line.split_once('\t').ok_or("SVD bundle: bad index line")?;
        let len: usize = len.parse().map_err(|_| "SVD bundle: bad length")?;
        let doc = data.get(at..at + len).ok_or("SVD bundle: truncated")?;
        out.push((name.to_string(), doc.to_vec()));
        at += len;
    }
    Ok(out)
}

/// The names of the bundled devices.
pub fn bundled_names() -> Vec<String> {
    bundle()
        .map(|b| b.into_iter().map(|(n, _)| n).collect())
        .unwrap_or_default()
}

/// Whether the bundled name `stem` covers the part `query`: case-insensitive, an
/// `X` in the name standing for any one character (`STM32F0X0`), and the part
/// number may go on (a package or flash code: `STM32F405RG`).
fn covers(stem: &str, query: &str) -> bool {
    let (s, q) = (stem.as_bytes(), query.as_bytes());
    s.len() <= q.len()
        && s.iter()
            .zip(q)
            .all(|(&a, &b)| a.eq_ignore_ascii_case(&b) || (a == b'X' && b.is_ascii_alphanumeric()))
}

/// The bundled description of the device `query` names: the bundled name equal to
/// it, or else the longest one that covers it, the most specific of those (fewest
/// `X`). `(name, document)`.
pub fn bundled(query: &str) -> Option<(String, Vec<u8>)> {
    let devices = bundle().ok()?;
    if let Some(i) = devices
        .iter()
        .position(|(n, _)| n.eq_ignore_ascii_case(query))
    {
        return devices.into_iter().nth(i);
    }
    devices
        .into_iter()
        .filter(|(n, _)| covers(n, query))
        .max_by_key(|(n, _)| (n.len(), n.bytes().filter(|&c| c != b'X').count()))
}

impl Device {
    /// The device name as a C identifier.
    pub fn c_name(&self) -> String {
        c_name(&self.name)
    }
}

impl Peripheral {
    /// Bytes the registers span.
    pub fn extent(&self) -> u64 {
        self.registers
            .iter()
            .map(|r| r.offset + u64::from(r.size))
            .max()
            .unwrap_or(0)
    }

    /// `struct <type> { ... };` with reserved padding, one member per
    /// non-overlapping register.
    pub fn c_struct(&self) -> String {
        let mut body = String::new();
        let mut at = 0u64;
        let mut pad = 0;
        for r in &self.registers {
            if r.offset < at {
                continue;
            }
            if r.offset > at {
                body.push_str(&format!(
                    " unsigned char _reserved{pad}[{}];",
                    r.offset - at
                ));
                pad += 1;
            }
            let ty = match r.size {
                1 => "unsigned char",
                2 => "unsigned short",
                8 => "unsigned long long",
                _ => "unsigned int",
            };
            body.push_str(&format!(" {ty} {};", r.name));
            at = r.offset + u64::from(r.size);
        }
        format!("struct {} {{{body} }};", self.type_name)
    }
}

#[cfg(test)]
mod tests;
