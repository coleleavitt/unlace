//! PE loader implementation using the `object` crate.
//!
//! Handles both PE32 (32-bit) and PE32+ (64-bit) Windows executables and DLLs.

use std::collections::BTreeMap;

use object::pe;
use object::read::pe::{ImageNtHeaders, ImageOptionalHeader, ImageThunkData, PeFile};
use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};

use crate::Loader;
use crate::error::LoadError;
use crate::image::{
    ArchId, BinaryImage, BoundImport, DebugRecord, DelayImport, Endian, ForwardedExport,
    LoadConfig, RelocKind, Relocation, ResourceEntry, RichHeader, RichRecord, RuntimeFunction,
    Section, SectionFlags, Symbol, SymbolKind, UnwindInfo,
};

/// DOS header magic bytes: `MZ`.
const PE_DOS_MAGIC: [u8; 2] = *b"MZ";

/// Loader for PE binaries (PE32 and PE32+).
pub struct PeLoader;

impl Loader for PeLoader {
    fn can_load(data: &[u8]) -> bool {
        if data.len() < 2 || data[..2] != PE_DOS_MAGIC {
            return false;
        }
        // Verify the PE signature is reachable: the e_lfanew field at offset
        // 0x3C gives the offset to the NT headers, which start with "PE\0\0".
        if data.len() < 0x40 {
            return false;
        }
        let nt_offset = u32::from_le_bytes([data[0x3C], data[0x3D], data[0x3E], data[0x3F]]);
        let nt_offset = nt_offset as usize;
        if data.len() < nt_offset + 4 {
            return false;
        }
        // PE signature: "PE\0\0" (0x00004550 little-endian).
        data[nt_offset..nt_offset + 4] == [b'P', b'E', 0, 0]
    }

    fn load(data: &[u8]) -> Result<BinaryImage, LoadError> {
        if !Self::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        // Read the e_lfanew offset to find the NT headers.
        let nt_offset = u32::from_le_bytes([data[0x3C], data[0x3D], data[0x3E], data[0x3F]]);
        let nt_offset = nt_offset as usize;

        // Determine PE32 vs PE32+ from the optional header magic at nt_offset+24.
        if data.len() < nt_offset + 26 {
            return Err(LoadError::InvalidMagic);
        }
        let opt_magic = u16::from_le_bytes([data[nt_offset + 24], data[nt_offset + 25]]);

        match opt_magic {
            pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC => load_pe::<pe::ImageNtHeaders64>(data),
            pe::IMAGE_NT_OPTIONAL_HDR32_MAGIC => load_pe::<pe::ImageNtHeaders32>(data),
            _ => Err(LoadError::InvalidMagic),
        }
    }
}

/// Generic PE loader over PE32/PE32+ NT headers.
fn load_pe<Pe>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Pe: ImageNtHeaders,
{
    let file = PeFile::<Pe>::parse(data)?;

    let arch = map_arch(&file);
    let entry = file.entry();
    let sections = load_sections(&file);
    let mut symbols = load_coff_symbols(&file);

    load_exports(&file, &mut symbols);
    let mut forwarded_exports: Vec<ForwardedExport> = Vec::new();
    load_forwarded_exports::<Pe>(&file, &mut forwarded_exports);
    load_imports(&file, &mut symbols);
    let mut delay_imports: Vec<DelayImport> = Vec::new();
    load_delay_imports::<Pe>(&file, data, &mut symbols, &mut delay_imports);

    let relocations = load_base_relocations(&file, data);
    let tls_callbacks = load_tls_callbacks::<Pe>(&file, data);
    let debug_records = parse_debug_directory(&file, data);
    let load_config = parse_load_config(&file, data);
    let runtime_functions = parse_pdata(&file, data);
    let resources = parse_resources(&file, data);
    let bound_imports = parse_bound_imports(&file, data);
    let rich_header = parse_rich_header(data);

    let forwarded_resolutions = build_forwarded_resolutions::<Pe>(&file, &forwarded_exports);
    // Batch 12 slice 1: PE equivalent of ELF's PLT — IAT slot VA →
    // `"dll!fn"` for every named import. Lets the indirect-call-resolve
    // pass name `Callind` chains that narrow to an IAT slot.
    let iat_imports = build_iat_imports::<Pe>(&file);

    let pe_mitigations = Some(parse_pe_mitigations::<Pe>(
        &file,
        data,
        load_config.as_ref(),
    ));

    let mut image = BinaryImage {
        arch,
        endian: Endian::Little,
        entry,
        sections,
        symbols,
        plt_symbols: iat_imports,
        relocations,
        string_table: BTreeMap::new(),
        tls_callbacks,
        function_starts: Vec::new(),
        debug_records,
        load_config,
        pe_mitigations,
        runtime_functions,
        resources,
        bound_imports,
        delay_imports,
        forwarded_exports,
        forwarded_resolutions,
        rich_header,
        dylibs: Vec::new(),
        rpaths: Vec::new(),
        pdb_types: None,
        msvc_rtti: None,
        seh: None,
        go_module: None,
        go_itabs: std::collections::BTreeMap::new(),
        go_types: std::collections::BTreeMap::new(),
        swift_info: None,
        auth_pointers: Vec::new(),
        auth_ptr_slots: Vec::new(),
        wasm_component: None,
    };

    image.seh = collect_seh_from_image(&image);
    image.msvc_rtti = collect_msvc_rtti_from_image(&image);
    image.go_module = crate::go_moduledata::parse_firstmoduledata(&image);
    crate::go_types::populate_itabs_from_module(&mut image);
    crate::go_types::populate_go_types_from_module(&mut image);

    Ok(image)
}

/// Walk `image.runtime_functions` and the corresponding `.xdata` entries to
/// build a `SehInfo` from the parsed PE. Returns `None` if the binary has no
/// runtime function table.
fn collect_seh_from_image(image: &BinaryImage) -> Option<crate::seh::SehInfo> {
    if image.runtime_functions.is_empty() {
        return None;
    }
    let mut functions = Vec::with_capacity(image.runtime_functions.len());
    for rf in &image.runtime_functions {
        let unwind_info_raw = rf.unwind_info.map(|ui| crate::seh::UnwindInfo {
            version: ui.version,
            flags: ui.flags,
            size_of_prolog: ui.size_of_prolog,
            count_of_codes: ui.count_of_codes,
            frame_register: ui.frame_register,
            frame_offset: ui.frame_offset,
            unwind_codes_raw: Vec::new(),
            handler_rva: None,
        });
        let handler = unwind_info_raw
            .as_ref()
            .and_then(|ui| ui.handler_rva)
            .map(u64::from);
        functions.push(crate::seh::SehFunction {
            begin: rf.begin_address,
            end: rf.end_address,
            unwind_info: unwind_info_raw.unwrap_or(crate::seh::UnwindInfo {
                version: 0,
                flags: 0,
                size_of_prolog: 0,
                count_of_codes: 0,
                frame_register: 0,
                frame_offset: 0,
                unwind_codes_raw: Vec::new(),
                handler_rva: None,
            }),
            handler,
        });
    }
    Some(crate::seh::SehInfo { functions })
}

/// Scan `.rdata` for MSVC vtables and recover the per-class hierarchy.
/// Returns `None` when no classes were found so downstream code can keep
/// using the `Option` discriminant to mean "no RTTI present".
fn collect_msvc_rtti_from_image(image: &BinaryImage) -> Option<crate::msvc_rtti::MsvcRtti> {
    let rtti = crate::msvc_rtti::scan_vtables(image);
    if rtti.classes.is_empty() {
        None
    } else {
        Some(rtti)
    }
}

/// Walk `IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT` and merge each delay-bound thunk
/// into `out` as `dll!function` (mirroring [`load_imports`]'s convention).
///
/// The delay-load mechanism defers DLL resolution until first call; the IAT
/// stays empty at load time and the runtime delay loader patches it on demand.
/// Like the eager IAT, we record names at addr=0 because the true VA depends
/// on runtime fixup. Ordinal-only imports use the literal `#<n>` form.
fn load_delay_imports<Pe>(
    file: &PeFile<Pe>,
    data: &[u8],
    out: &mut BTreeMap<u64, Symbol>,
    delay_imports: &mut Vec<DelayImport>,
) where
    Pe: ImageNtHeaders,
{
    let table = match file
        .data_directories()
        .delay_load_import_table(data, &file.section_table())
    {
        Ok(Some(t)) => t,
        Ok(None) => return,
        Err(err) => {
            tracing::debug!(?err, "PE delay-load directory unreadable");
            return;
        }
    };

    let mut descriptors = match table.descriptors() {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE delay-load descriptors unreadable");
            return;
        }
    };

    while let Ok(Some(desc)) = descriptors.next() {
        let lib = match table.name(desc.dll_name_rva.get(object::endian::LittleEndian)) {
            Ok(name) => String::from_utf8_lossy(name).to_string(),
            Err(_) => continue,
        };

        let int_rva = desc.import_name_table_rva.get(object::endian::LittleEndian);
        let mut thunks = match table.thunks(int_rva) {
            Ok(t) => t,
            Err(_) => continue,
        };

        while let Ok(Some(thunk)) = thunks.next::<Pe>() {
            let name = match table.import::<Pe>(thunk) {
                Ok(object::read::pe::Import::Name(_, n)) => String::from_utf8_lossy(n).to_string(),
                Ok(object::read::pe::Import::Ordinal(n)) => format!("#{n}"),
                Err(_) => continue,
            };
            if name.is_empty() {
                continue;
            }
            let qualified = format!("{lib}!{name}");
            out.entry(0).or_insert(Symbol {
                name: qualified,
                addr: 0,
                size: 0,
                kind: SymbolKind::Unknown,
            });
            delay_imports.push(DelayImport {
                dll_name: lib.clone(),
                function_name: name,
            });
        }
    }
}

/// Read `IMAGE_DIRECTORY_ENTRY_TLS` and return the TLS callback VAs.
///
/// The TLS directory's `AddressOfCallBacks` field points to a null-terminated
/// array of absolute VA pointers (PE32: 4 bytes each, PE32+: 8 bytes). These
/// run before the entry point on thread create/destroy and are a popular
/// anti-debugging / packer-stub injection vector.
fn load_tls_callbacks<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<u64>
where
    Pe: ImageNtHeaders,
{
    let dir = match file.data_directories().get(pe::IMAGE_DIRECTORY_ENTRY_TLS) {
        Some(d) => d,
        None => return Vec::new(),
    };
    let dir_data = match dir.data(data, &file.section_table()) {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE TLS directory unreadable");
            return Vec::new();
        }
    };

    let image_base = file.nt_headers().optional_header().image_base();
    let is_pe64 = std::mem::size_of::<Pe::ImageOptionalHeader>() > 96;
    // IMAGE_TLS_DIRECTORY layout:
    //   PE32  (24B): Start(4) End(4) Index(4) Callbacks(4) ZeroFill(4) Char(4)
    //   PE32+ (40B): Start(8) End(8) Index(8) Callbacks(8) ZeroFill(4) Char(4)
    // We only need AddressOfCallBacks — at offset 12 on PE32, 24 on PE32+ —
    // so reject any short directory that wouldn't contain the field.
    let callbacks_va = if is_pe64 {
        if dir_data.len() < 32 {
            return Vec::new();
        }
        u64::from_le_bytes(dir_data[24..32].try_into().unwrap_or([0; 8]))
    } else {
        if dir_data.len() < 16 {
            return Vec::new();
        }
        u64::from(u32::from_le_bytes(
            dir_data[12..16].try_into().unwrap_or([0; 4]),
        ))
    };

    if callbacks_va == 0 {
        return Vec::new();
    }

    let callbacks_rva = callbacks_va.saturating_sub(image_base);
    let section_with_cb = match find_section_for_rva(file, callbacks_rva) {
        Some(s) => s,
        None => return Vec::new(),
    };

    let mut out = Vec::new();
    let stride: usize = if is_pe64 { 8 } else { 4 };
    let section_offset = (callbacks_rva - section_with_cb.0) as usize;
    let section_data = &section_with_cb.1[section_offset..];
    for chunk in section_data.chunks_exact(stride) {
        let cb = if stride == 8 {
            u64::from_le_bytes(chunk.try_into().unwrap_or([0; 8]))
        } else {
            u64::from(u32::from_le_bytes(chunk.try_into().unwrap_or([0; 4])))
        };
        if cb == 0 {
            break;
        }
        out.push(cb);
        if out.len() >= 256 {
            break;
        }
    }
    out
}

/// RSDS CodeView signature bytes.
const RSDS_SIGNATURE: [u8; 4] = [0x52, 0x53, 0x44, 0x53];

/// Parse `IMAGE_DIRECTORY_ENTRY_DEBUG` into [`DebugRecord`] entries.
///
/// Each IMAGE_DEBUG_DIRECTORY is 28 bytes. For `IMAGE_DEBUG_TYPE_CODEVIEW` (2)
/// entries we follow `PointerToRawData` to read the RSDS record containing the
/// PDB GUID, age, and file path.
fn parse_debug_directory<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<DebugRecord>
where
    Pe: ImageNtHeaders,
{
    let dir = match file.data_directories().get(pe::IMAGE_DIRECTORY_ENTRY_DEBUG) {
        Some(d) => d,
        None => return Vec::new(),
    };
    let dir_data = match dir.data(data, &file.section_table()) {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE debug directory unreadable");
            return Vec::new();
        }
    };

    const DEBUG_DIR_SIZE: usize = 28;
    let count = dir_data.len() / DEBUG_DIR_SIZE;
    let mut out = Vec::with_capacity(count);

    for i in 0..count {
        let entry = &dir_data[i * DEBUG_DIR_SIZE..(i + 1) * DEBUG_DIR_SIZE];
        let time_stamp = u32::from_le_bytes(entry[4..8].try_into().unwrap_or([0; 4]));
        let typ = u32::from_le_bytes(entry[12..16].try_into().unwrap_or([0; 4]));
        let size_of_data = u32::from_le_bytes(entry[16..20].try_into().unwrap_or([0; 4])) as usize;
        let pointer_to_raw_data =
            u32::from_le_bytes(entry[24..28].try_into().unwrap_or([0; 4])) as usize;

        let (pdb_path, pdb_guid, pdb_age) = if typ == pe::IMAGE_DEBUG_TYPE_CODEVIEW {
            parse_rsds_record(data, pointer_to_raw_data, size_of_data)
        } else {
            (None, None, None)
        };

        out.push(DebugRecord {
            typ,
            time_stamp,
            pdb_path,
            pdb_guid,
            pdb_age,
        });
    }
    out
}

/// Try to parse an RSDS CodeView record at the given file offset.
fn parse_rsds_record(
    data: &[u8],
    offset: usize,
    size: usize,
) -> (Option<String>, Option<[u8; 16]>, Option<u32>) {
    // Minimum RSDS: 4 (sig) + 16 (guid) + 4 (age) = 24 bytes
    if size < 24 || data.len() < offset + size {
        return (None, None, None);
    }
    let rec = &data[offset..offset + size];
    if rec[..4] != RSDS_SIGNATURE {
        return (None, None, None);
    }

    let mut guid = [0u8; 16];
    guid.copy_from_slice(&rec[4..20]);
    let age = u32::from_le_bytes(rec[20..24].try_into().unwrap_or([0; 4]));

    // PDB path is NUL-terminated after the age field.
    let path_bytes = &rec[24..];
    let path = match path_bytes.iter().position(|&b| b == 0) {
        Some(nul) => String::from_utf8_lossy(&path_bytes[..nul]).into_owned(),
        None => String::from_utf8_lossy(path_bytes).into_owned(),
    };
    let pdb_path = if path.is_empty() { None } else { Some(path) };

    (pdb_path, Some(guid), Some(age))
}

/// Batch 23: extract PE mitigation flags from the optional header's
/// `DllCharacteristics` field plus any `LoadConfig::guard_flags`, and
/// note whether `IMAGE_DIRECTORY_ENTRY_SECURITY` (Authenticode) is
/// populated.
///
/// Returns a fully-populated [`PeMitigations`] — fields default to
/// `false`/`0` so an old PE without these directories doesn't generate
/// noise.
fn parse_pe_mitigations<Pe>(
    file: &PeFile<Pe>,
    data: &[u8],
    load_config: Option<&LoadConfig>,
) -> crate::image::PeMitigations
where
    Pe: ImageNtHeaders,
{
    // DLL characteristics flags from the optional header.
    let dll_characteristics = file.nt_headers().optional_header().dll_characteristics();
    const NX_COMPAT: u16 = 0x0100;
    const DYNAMIC_BASE: u16 = 0x0040;
    const HIGH_ENTROPY_VA: u16 = 0x0020;
    const GUARD_CF: u16 = 0x4000;

    // Guard flags from the load config (when present).
    const IMAGE_GUARD_CF_INSTRUMENTED: u32 = 0x0000_0100;
    const IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT: u32 = 0x0000_0400;
    // IMAGE_GUARD_XFG_ENABLED: bit 16 (0x0001_0000) on recent SDKs.
    const IMAGE_GUARD_XFG_ENABLED: u32 = 0x0001_0000;
    // IMAGE_GUARD_RF_INSTRUMENTED: bit 11 (0x0000_2000).
    const IMAGE_GUARD_RF_INSTRUMENTED: u32 = 0x0000_2000;

    let guard_flags = load_config.map(|lc| lc.guard_flags).unwrap_or(0);
    let cfg_instrumented = (guard_flags & IMAGE_GUARD_CF_INSTRUMENTED) != 0;
    let xf_or_xfg_guarded = (guard_flags
        & (IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT
            | IMAGE_GUARD_XFG_ENABLED
            | IMAGE_GUARD_RF_INSTRUMENTED))
        != 0;

    // IMAGE_DIRECTORY_ENTRY_SECURITY (4) carries Authenticode. Unlike
    // other data directories its RVA is a *file offset* — the entry
    // points at a `WIN_CERTIFICATE` blob in the security section.
    let (
        authenticode_present,
        authenticode_size,
        authenticode_certificates,
        authenticode_malformed,
    ) = parse_security_directory(file, data);

    crate::image::PeMitigations {
        nx_compat: (dll_characteristics & NX_COMPAT) != 0,
        dynamic_base: (dll_characteristics & DYNAMIC_BASE) != 0,
        high_entropy_va: (dll_characteristics & HIGH_ENTROPY_VA) != 0,
        guard_cf: (dll_characteristics & GUARD_CF) != 0,
        cfg_instrumented,
        xf_or_xfg_guarded,
        authenticode_present,
        authenticode_size,
        authenticode_certificates,
        authenticode_malformed,
    }
}

/// Walk `IMAGE_DIRECTORY_ENTRY_SECURITY` and decode each
/// `WIN_CERTIFICATE` header. Returns `(present, total_size, entries, malformed)`.
fn parse_security_directory<Pe>(
    file: &PeFile<Pe>,
    data: &[u8],
) -> (bool, u32, Vec<crate::image::AuthenticodeCertificate>, bool)
where
    Pe: ImageNtHeaders,
{
    let dir = match file
        .data_directories()
        .get(pe::IMAGE_DIRECTORY_ENTRY_SECURITY)
    {
        Some(d) if d.size.get(object::LittleEndian) > 0 => d,
        _ => return (false, 0, Vec::new(), false),
    };

    let dir_off = dir.virtual_address.get(object::LittleEndian);
    let dir_size = dir.size.get(object::LittleEndian);
    let (entries, malformed) = match walk_certificate_table(data, dir_off, dir_size) {
        Some(out) => out,
        None => {
            tracing::debug!(
                dir_off,
                dir_size,
                "PE security directory references bytes outside the file"
            );
            return (false, 0, Vec::new(), false);
        }
    };

    (true, dir_size, entries, malformed)
}

/// Pure-bytes walk of the security directory. Returns `None` when the
/// `(offset, size)` pair would read past `data`; returns
/// `Some((entries, malformed))` otherwise. `malformed` is set when a
/// header inside the directory truncates the walk early.
///
/// The certificate table is a packed sequence of `WIN_CERTIFICATE`
/// records, each 8-byte-aligned. Each header is 8 bytes:
///
/// ```text
/// u32 dwLength
/// u16 wRevision
/// u16 wCertificateType
/// ```
///
/// followed by `dwLength - 8` payload bytes. The next entry starts at
/// the next 8-byte boundary past the current `dwLength`.
pub(crate) fn walk_certificate_table(
    data: &[u8],
    dir_offset: u32,
    dir_size: u32,
) -> Option<(Vec<crate::image::AuthenticodeCertificate>, bool)> {
    let dir_off = dir_offset as usize;
    let dir_sz = dir_size as usize;

    let end = dir_off.checked_add(dir_sz)?;
    if end > data.len() {
        return None;
    }

    let mut entries = Vec::new();
    let mut cursor = dir_off;
    let mut malformed = false;

    while cursor + 8 <= end {
        let dw_length = u32::from_le_bytes([
            data[cursor],
            data[cursor + 1],
            data[cursor + 2],
            data[cursor + 3],
        ]);
        let revision = u16::from_le_bytes([data[cursor + 4], data[cursor + 5]]);
        let cert_type = u16::from_le_bytes([data[cursor + 6], data[cursor + 7]]);

        if (dw_length as usize) < 8 || cursor + (dw_length as usize) > end {
            tracing::debug!(
                cursor,
                dw_length,
                end,
                "PE WIN_CERTIFICATE entry truncated or invalid"
            );
            malformed = true;
            break;
        }

        entries.push(crate::image::AuthenticodeCertificate {
            file_offset: cursor as u32,
            length: dw_length,
            revision,
            cert_type,
            data_size: dw_length - 8,
        });

        let next = cursor + (dw_length as usize);
        cursor = (next + 7) & !7;
    }

    Some((entries, malformed))
}

/// Parse `IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG` into a [`LoadConfig`].
///
/// Reads the IMAGE_LOAD_CONFIG_DIRECTORY64 (PE32+) or the 32-bit variant,
/// extracting the security cookie VA and CFG metadata. The guard function
/// table is walked as an array of u32 RVAs absolutized via `image_base`.
fn parse_load_config<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Option<LoadConfig>
where
    Pe: ImageNtHeaders,
{
    let dir = file
        .data_directories()
        .get(pe::IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG)?;
    let dir_data = match dir.data(data, &file.section_table()) {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE load config directory unreadable");
            return None;
        }
    };

    if dir_data.len() < 4 {
        return None;
    }

    let image_base = file.nt_headers().optional_header().image_base();
    let is_pe64 = std::mem::size_of::<Pe::ImageOptionalHeader>() > 96;

    if is_pe64 {
        parse_load_config_64(dir_data, image_base, file, data)
    } else {
        parse_load_config_32(dir_data, image_base, file, data)
    }
}

fn parse_load_config_64<Pe>(
    lc: &[u8],
    image_base: u64,
    file: &PeFile<Pe>,
    data: &[u8],
) -> Option<LoadConfig>
where
    Pe: ImageNtHeaders,
{
    let size = u32::from_le_bytes(lc[..4].try_into().ok()?) as usize;

    let read_u64 = |off: usize| -> u64 {
        if off + 8 <= lc.len().min(size) {
            u64::from_le_bytes(lc[off..off + 8].try_into().unwrap_or([0; 8]))
        } else {
            0
        }
    };
    let read_u32 = |off: usize| -> u32 {
        if off + 4 <= lc.len().min(size) {
            u32::from_le_bytes(lc[off..off + 4].try_into().unwrap_or([0; 4]))
        } else {
            0
        }
    };

    // PE32+ offsets
    let security_cookie = read_u64(0x58);
    let guard_cf_check = read_u64(0x70);
    let guard_cf_dispatch = read_u64(0x78);
    let guard_table_va = read_u64(0x80);
    let guard_table_count = read_u64(0x88);
    let guard_flags = read_u32(0x90);

    let cfg_targets = read_cfg_targets(guard_table_va, guard_table_count, image_base, file, data);

    Some(LoadConfig {
        security_cookie,
        guard_cf_check,
        guard_cf_dispatch,
        guard_flags,
        cfg_targets,
    })
}

fn parse_load_config_32<Pe>(
    lc: &[u8],
    image_base: u64,
    file: &PeFile<Pe>,
    data: &[u8],
) -> Option<LoadConfig>
where
    Pe: ImageNtHeaders,
{
    let size = u32::from_le_bytes(lc[..4].try_into().ok()?) as usize;

    let read_u32 = |off: usize| -> u32 {
        if off + 4 <= lc.len().min(size) {
            u32::from_le_bytes(lc[off..off + 4].try_into().unwrap_or([0; 4]))
        } else {
            0
        }
    };

    // PE32 offsets
    let security_cookie = u64::from(read_u32(0x3C));
    let guard_cf_check = u64::from(read_u32(0x48));
    let guard_cf_dispatch = u64::from(read_u32(0x4C));
    let guard_table_va = u64::from(read_u32(0x50));
    let guard_table_count = u64::from(read_u32(0x54));
    let guard_flags = read_u32(0x58);

    let cfg_targets = read_cfg_targets(guard_table_va, guard_table_count, image_base, file, data);

    Some(LoadConfig {
        security_cookie,
        guard_cf_check,
        guard_cf_dispatch,
        guard_flags,
        cfg_targets,
    })
}

/// Walk the CFG guard function table (array of u32 RVAs) and absolutize each.
fn read_cfg_targets<Pe>(
    table_va: u64,
    count: u64,
    image_base: u64,
    file: &PeFile<Pe>,
    _data: &[u8],
) -> Vec<u64>
where
    Pe: ImageNtHeaders,
{
    if table_va == 0 || count == 0 {
        return Vec::new();
    }

    let table_rva = table_va.saturating_sub(image_base);
    let section = match find_section_for_rva(file, table_rva) {
        Some(s) => s,
        None => return Vec::new(),
    };

    let offset = (table_rva - section.0) as usize;
    let section_data = &section.1[offset..];
    let count = count.min(65536) as usize; // cap to prevent OOM

    let mut out = Vec::with_capacity(count);
    for chunk in section_data.chunks_exact(4).take(count) {
        let rva = u32::from_le_bytes(chunk.try_into().unwrap_or([0; 4]));
        out.push(image_base + u64::from(rva));
    }
    out
}

fn find_section_for_rva<'data, Pe>(file: &PeFile<'data, Pe>, rva: u64) -> Option<(u64, &'data [u8])>
where
    Pe: ImageNtHeaders,
{
    for sec in file.sections() {
        let start = sec.address() - file.nt_headers().optional_header().image_base();
        let size = sec.size();
        if rva >= start && rva < start + size {
            let data = sec.data().ok()?;
            return Some((start, data));
        }
    }
    None
}

/// Parse the PE base relocation directory into resolved [`Relocation`] entries.
///
/// Each [`pe::IMAGE_BASE_RELOCATION`] block targets a 4 KiB page; entries are
/// `u16` packed as `(type << 12) | offset_within_page`. We resolve each entry
/// to an absolute virtual address via `image_base + page_rva + offset` and map
/// the PE relocation type to our [`RelocKind`] vocabulary. Empty/missing
/// directories return `Vec::new()` rather than erroring — many object files
/// (e.g. `IMAGE_FILE_RELOCS_STRIPPED`) legitimately omit the table.
fn load_base_relocations<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<Relocation>
where
    Pe: ImageNtHeaders,
{
    let image_base = file.nt_headers().optional_header().image_base();
    let section_table = file.section_table();
    let mut blocks = match file
        .data_directories()
        .relocation_blocks(data, &section_table)
    {
        Ok(Some(iter)) => iter,
        Ok(None) => return Vec::new(),
        Err(err) => {
            tracing::debug!(?err, "PE base relocation directory unreadable");
            return Vec::new();
        }
    };

    let mut out = Vec::new();
    while let Some(block_result) = blocks.next().transpose() {
        let block = match block_result {
            Ok(b) => b,
            Err(err) => {
                tracing::debug!(?err, "PE base relocation block parse failed; truncating");
                break;
            }
        };
        for reloc in block {
            let kind = pe_reloc_kind(reloc.typ);
            if matches!(kind, RelocKind::Other) && reloc.typ == pe::IMAGE_REL_BASED_ABSOLUTE {
                continue;
            }
            out.push(Relocation {
                addr: image_base.wrapping_add(u64::from(reloc.virtual_address)),
                sym_name: String::new(),
                kind,
            });
        }
    }
    out
}

fn pe_reloc_kind(typ: u16) -> RelocKind {
    match typ {
        pe::IMAGE_REL_BASED_HIGHLOW
        | pe::IMAGE_REL_BASED_DIR64
        | pe::IMAGE_REL_BASED_HIGH
        | pe::IMAGE_REL_BASED_LOW
        | pe::IMAGE_REL_BASED_HIGHADJ => RelocKind::Relative,
        _ => RelocKind::Other,
    }
}

/// Parse the `.pdata` exception directory (IMAGE_DIRECTORY_ENTRY_EXCEPTION)
/// into [`RuntimeFunction`] entries, each with its UNWIND_INFO header decoded.
fn parse_pdata<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<RuntimeFunction>
where
    Pe: ImageNtHeaders,
{
    let dir = match file
        .data_directories()
        .get(pe::IMAGE_DIRECTORY_ENTRY_EXCEPTION)
    {
        Some(d) => d,
        None => return Vec::new(),
    };
    let dir_data = match dir.data(data, &file.section_table()) {
        Ok(d) => d,
        Err(err) => {
            tracing::debug!(?err, "PE exception directory unreadable");
            return Vec::new();
        }
    };

    let image_base = file.nt_headers().optional_header().image_base();

    // Each RUNTIME_FUNCTION is 12 bytes: 3 × u32 (begin, end, unwind_info RVA).
    let mut out = Vec::new();
    for chunk in dir_data.chunks_exact(12) {
        let begin_rva = u32::from_le_bytes([chunk[0], chunk[1], chunk[2], chunk[3]]);
        let end_rva = u32::from_le_bytes([chunk[4], chunk[5], chunk[6], chunk[7]]);
        let unwind_rva = u32::from_le_bytes([chunk[8], chunk[9], chunk[10], chunk[11]]);

        if begin_rva == 0 && end_rva == 0 {
            break;
        }

        let unwind_info = parse_xdata(file, data, unwind_rva);

        out.push(RuntimeFunction {
            begin_address: image_base + u64::from(begin_rva),
            end_address: image_base + u64::from(end_rva),
            unwind_info_address: image_base + u64::from(unwind_rva),
            unwind_info,
        });

        if out.len() >= 65536 {
            break;
        }
    }
    out
}

/// Read the 4-byte UNWIND_INFO header at the given RVA.
fn parse_xdata<Pe>(file: &PeFile<Pe>, _data: &[u8], unwind_rva: u32) -> Option<UnwindInfo>
where
    Pe: ImageNtHeaders,
{
    let (sec_rva, sec_data) = find_section_for_rva(file, u64::from(unwind_rva))?;
    let offset = (u64::from(unwind_rva) - sec_rva) as usize;
    if offset + 4 > sec_data.len() {
        return None;
    }
    let b = &sec_data[offset..offset + 4];
    Some(UnwindInfo {
        version: b[0] & 0x07,
        flags: b[0] >> 3,
        size_of_prolog: b[1],
        count_of_codes: b[2],
        frame_register: b[3] & 0x0F,
        frame_offset: b[3] >> 4,
    })
}

/// Parse `IMAGE_DIRECTORY_ENTRY_RESOURCE` into flat [`ResourceEntry`] records.
///
/// Walks the 3-level resource tree (type → name → language) using the `object`
/// crate's `ResourceDirectory` API. Recursion is capped at depth 8.
fn parse_resources<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<ResourceEntry>
where
    Pe: ImageNtHeaders,
{
    let section_table = file.section_table();
    let rsrc_dir = match file
        .data_directories()
        .resource_directory(data, &section_table)
    {
        Ok(Some(d)) => d,
        Ok(None) => return Vec::new(),
        Err(err) => {
            tracing::debug!(?err, "PE resource directory unreadable");
            return Vec::new();
        }
    };

    let root = match rsrc_dir.root() {
        Ok(t) => t,
        Err(_) => return Vec::new(),
    };

    let mut out = Vec::new();
    walk_resource_table(&rsrc_dir, &root, 0, 0, 0, 0, &mut out);
    out
}

fn walk_resource_table(
    dir: &object::read::pe::ResourceDirectory<'_>,
    table: &object::read::pe::ResourceDirectoryTable<'_>,
    depth: u8,
    type_id: u32,
    name_id: u32,
    language: u32,
    out: &mut Vec<ResourceEntry>,
) {
    if depth > 8 || out.len() >= 65536 {
        return;
    }

    for entry in table.entries {
        let entry_id = match entry.name_or_id() {
            object::read::pe::ResourceNameOrId::Id(id) => u32::from(id),
            object::read::pe::ResourceNameOrId::Name(_) => 0,
        };

        let (t, n, l) = match depth {
            0 => (entry_id, name_id, language),
            1 => (type_id, entry_id, language),
            _ => (type_id, name_id, entry_id),
        };

        match entry.data(*dir) {
            Ok(object::read::pe::ResourceDirectoryEntryData::Table(sub)) => {
                walk_resource_table(dir, &sub, depth + 1, t, n, l, out);
            }
            Ok(object::read::pe::ResourceDirectoryEntryData::Data(data_entry)) => {
                let le = object::endian::LittleEndian;
                out.push(ResourceEntry {
                    type_id: t,
                    name_id: n,
                    language: l,
                    rva: data_entry.offset_to_data.get(le),
                    size: data_entry.size.get(le),
                });
            }
            Err(_) => continue,
        }
    }
}

/// Parse `IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT` (index 11).
///
/// Each IMAGE_BOUND_IMPORT_DESCRIPTOR is 8 bytes:
///   `time_date_stamp: u32, offset_module_name: u16, number_of_module_forwarder_refs: u16`
/// Module names are at `bound_import_dir_base + offset_module_name`.
/// The array terminates when all fields are zero.
fn parse_bound_imports<Pe>(file: &PeFile<Pe>, data: &[u8]) -> Vec<BoundImport>
where
    Pe: ImageNtHeaders,
{
    let dir = match file
        .data_directories()
        .get(pe::IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT)
    {
        Some(d) => d,
        None => return Vec::new(),
    };

    let le = object::endian::LittleEndian;
    let dir_rva = dir.virtual_address.get(le);
    let dir_size = dir.size.get(le);
    if dir_rva == 0 || dir_size == 0 {
        return Vec::new();
    }

    // Bound import directory uses raw file offsets (not RVA-mapped through sections).
    // The RVA for bound imports is actually a file offset in practice.
    let dir_base = dir_rva as usize;
    if dir_base + dir_size as usize > data.len() {
        return Vec::new();
    }
    let dir_data = &data[dir_base..dir_base + dir_size as usize];

    let mut out = Vec::new();
    let mut offset = 0usize;

    while offset + 8 <= dir_data.len() && out.len() < 4096 {
        let timestamp =
            u32::from_le_bytes(dir_data[offset..offset + 4].try_into().unwrap_or([0; 4]));
        let name_offset = u16::from_le_bytes(
            dir_data[offset + 4..offset + 6]
                .try_into()
                .unwrap_or([0; 2]),
        );
        let forwarder_refs = u16::from_le_bytes(
            dir_data[offset + 6..offset + 8]
                .try_into()
                .unwrap_or([0; 2]),
        );

        if timestamp == 0 && name_offset == 0 && forwarder_refs == 0 {
            break;
        }

        let name_start = name_offset as usize;
        let module_name = if name_start < dir_data.len() {
            let name_bytes = &dir_data[name_start..];
            match name_bytes.iter().position(|&b| b == 0) {
                Some(nul) => String::from_utf8_lossy(&name_bytes[..nul]).into_owned(),
                None => String::from_utf8_lossy(name_bytes).into_owned(),
            }
        } else {
            String::new()
        };

        out.push(BoundImport {
            module_name,
            timestamp,
        });

        // Skip past this descriptor + any forwarder ref descriptors (each 8 bytes).
        offset += 8 + (forwarder_refs as usize) * 8;
    }
    out
}

/// "Rich" signature in little-endian: bytes `R`, `i`, `c`, `h`.
const RICH_SIGNATURE: u32 = 0x6863_6952;
/// "DanS" signature in little-endian (before XOR decoding).
const DANS_SIGNATURE: u32 = 0x536E_6144;

/// Extract the Rich header from between the DOS stub and PE signature.
///
/// The XOR key is the u32 immediately after the "Rich" marker. Records are
/// decoded by XOR-ing each pair of u32s with the key, skipping the "DanS"
/// sentinel and three padding u32s.
fn parse_rich_header(data: &[u8]) -> Option<RichHeader> {
    if data.len() < 0x40 {
        return None;
    }

    let nt_offset = u32::from_le_bytes(data[0x3C..0x40].try_into().ok()?) as usize;

    // Search region: after DOS header (0x80 is typical stub end) up to NT headers.
    let search_start = 0x40;
    let search_end = nt_offset.min(data.len());
    if search_end <= search_start + 8 {
        return None;
    }
    let region = &data[search_start..search_end];

    // Find "Rich" signature (scan as u32 LE aligned to 4 bytes).
    let rich_pos = region
        .windows(4)
        .enumerate()
        .step_by(4)
        .find(|(_, w)| u32::from_le_bytes([w[0], w[1], w[2], w[3]]) == RICH_SIGNATURE)
        .map(|(i, _)| i)?;

    // XOR key is the u32 immediately after "Rich".
    if rich_pos + 8 > region.len() {
        return None;
    }
    let xor_key = u32::from_le_bytes(
        region[rich_pos + 4..rich_pos + 8]
            .try_into()
            .unwrap_or([0; 4]),
    );

    // Walk backwards from "Rich" to find "DanS" (XOR-encoded).
    // "DanS" ^ key should appear at the start of the Rich block.
    let encoded_dans = DANS_SIGNATURE ^ xor_key;
    let mut dans_pos = None;
    let mut pos = rich_pos.saturating_sub(4);
    loop {
        if pos + 4 > region.len() {
            break;
        }
        let val = u32::from_le_bytes(region[pos..pos + 4].try_into().unwrap_or([0; 4]));
        if val == encoded_dans {
            dans_pos = Some(pos);
            break;
        }
        if pos < 4 {
            break;
        }
        pos -= 4;
    }

    let dans_pos = dans_pos?;

    // Records start after "DanS" + 3 padding u32s (each XOR'd to 0).
    let records_start = dans_pos + 16; // DanS(4) + 3×padding(12)
    if records_start > rich_pos {
        return None;
    }

    let record_data = &region[records_start..rich_pos];
    let mut records = Vec::new();
    for chunk in record_data.chunks_exact(8) {
        let raw_comp = u32::from_le_bytes([chunk[0], chunk[1], chunk[2], chunk[3]]);
        let raw_count = u32::from_le_bytes([chunk[4], chunk[5], chunk[6], chunk[7]]);
        let comp_id = raw_comp ^ xor_key;
        let count = raw_count ^ xor_key;
        if comp_id == 0 && count == 0 {
            continue;
        }
        records.push(RichRecord { comp_id, count });
        if records.len() >= 1024 {
            break;
        }
    }

    if records.is_empty() {
        return None;
    }

    Some(RichHeader { records, xor_key })
}

/// Map the PE `IMAGE_FILE_MACHINE_*` value to our [`ArchId`].
fn map_arch<'data, Pe>(file: &PeFile<'data, Pe>) -> ArchId
where
    Pe: ImageNtHeaders,
{
    let machine = file
        .nt_headers()
        .file_header()
        .machine
        .get(object::endian::LittleEndian);

    match machine {
        pe::IMAGE_FILE_MACHINE_AMD64 => ArchId::X86_64,
        pe::IMAGE_FILE_MACHINE_I386 => ArchId::X86,
        pe::IMAGE_FILE_MACHINE_ARM64 | pe::IMAGE_FILE_MACHINE_ARM64EC => ArchId::AArch64,
        pe::IMAGE_FILE_MACHINE_ARMNT | pe::IMAGE_FILE_MACHINE_ARM => ArchId::Arm,
        pe::IMAGE_FILE_MACHINE_RISCV64 => ArchId::RiscV64,
        pe::IMAGE_FILE_MACHINE_POWERPC | pe::IMAGE_FILE_MACHINE_POWERPCFP => ArchId::Ppc,
        pe::IMAGE_FILE_MACHINE_POWERPCBE => ArchId::Ppc,
        pe::IMAGE_FILE_MACHINE_R4000 | pe::IMAGE_FILE_MACHINE_WCEMIPSV2 => ArchId::Mips,
        _ => ArchId::Unknown(machine),
    }
}

/// Load all PE sections into owned [`Section`] values.
fn load_sections<'data, Pe>(file: &PeFile<'data, Pe>) -> Vec<Section>
where
    Pe: ImageNtHeaders,
{
    file.sections()
        .filter_map(|sec| {
            let name = sec.name().ok()?.to_string();
            if name.is_empty() {
                return None;
            }

            let vaddr = sec.address();
            let size = sec.size();
            let data = sec.data().ok().unwrap_or_default().to_vec();
            let flags = section_flags(&sec);

            Some(Section {
                name,
                vaddr,
                size,
                data,
                flags,
            })
        })
        .collect()
}

/// Derive [`SectionFlags`] from a PE section's characteristics.
fn section_flags<'data>(sec: &impl ObjectSection<'data>) -> SectionFlags {
    use object::SectionFlags as ObjFlags;

    match sec.flags() {
        ObjFlags::Coff { characteristics } => {
            let mut f = SectionFlags::empty();
            if characteristics & pe::IMAGE_SCN_MEM_READ != 0 {
                f = f | SectionFlags::READ;
            }
            if characteristics & pe::IMAGE_SCN_MEM_WRITE != 0 {
                f = f | SectionFlags::WRITE;
            }
            if characteristics & pe::IMAGE_SCN_MEM_EXECUTE != 0 {
                f = f | SectionFlags::EXEC;
            }
            f
        }
        _ => SectionFlags::empty(),
    }
}

/// Load symbols from the COFF symbol table (if present).
fn load_coff_symbols<'data, Pe>(file: &PeFile<'data, Pe>) -> BTreeMap<u64, Symbol>
where
    Pe: ImageNtHeaders,
{
    let mut out = BTreeMap::new();

    if let Some(table) = file.symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    out
}

/// Collect symbols from an iterator of `object::Symbol` into the map.
fn collect_symbols<'data, 'file>(
    out: &mut BTreeMap<u64, Symbol>,
    symbols: impl Iterator<Item = impl ObjectSymbol<'data>>,
) {
    for sym in symbols {
        let addr = sym.address();
        let name = sym.name().unwrap_or_default().to_string();
        if addr == 0 && name.is_empty() {
            continue;
        }

        let kind = match sym.kind() {
            object::SymbolKind::Text => SymbolKind::Function,
            object::SymbolKind::Data => SymbolKind::Object,
            object::SymbolKind::Section => SymbolKind::Section,
            object::SymbolKind::File => SymbolKind::File,
            _ => SymbolKind::Unknown,
        };

        let new_sym = Symbol {
            name: name.clone(),
            addr,
            size: sym.size(),
            kind,
        };

        // Prefer the symbol with a non-empty name when addresses collide.
        out.entry(addr)
            .and_modify(|existing| {
                if existing.name.is_empty() && !new_sym.name.is_empty() {
                    *existing = new_sym.clone();
                }
            })
            .or_insert(new_sym);
    }
}

/// Populate symbols from the PE export directory.
///
/// Exports appear with their fully-resolved virtual addresses (image_base + RVA).
fn load_exports<'data, Pe>(file: &PeFile<'data, Pe>, out: &mut BTreeMap<u64, Symbol>)
where
    Pe: ImageNtHeaders,
{
    let exports = match file.exports() {
        Ok(e) => e,
        Err(_) => return,
    };

    for export in exports {
        let name = String::from_utf8_lossy(export.name()).to_string();
        if name.is_empty() {
            continue;
        }
        let addr = export.address();

        let new_sym = Symbol {
            name: name.clone(),
            addr,
            size: 0,
            kind: SymbolKind::Function,
        };

        out.entry(addr)
            .and_modify(|existing| {
                if existing.name.is_empty() && !new_sym.name.is_empty() {
                    *existing = new_sym.clone();
                }
            })
            .or_insert(new_sym);
    }
}

/// Populate `out` with forwarded exports — exports whose RVA points back
/// into the export directory range, encoding a `"DLL.Symbol"` (or
/// `"DLL.#ordinal"`) redirection string instead of a real function body.
///
/// The high-level `file.exports()` iterator silently *drops* forwarders
/// (it can't synthesise an address for them), so we walk the low-level
/// `ExportTable` here, inspect each address-table entry via
/// `target_from_address`, and emit a [`ForwardedExport`] for the
/// `ForwardByName` / `ForwardByOrdinal` cases. Anonymous (no-name)
/// forwarders are emitted with their `#ord` form as `name`, matching how
/// we surface ordinal-only delay imports elsewhere.
fn load_forwarded_exports<'data, Pe>(file: &PeFile<'data, Pe>, out: &mut Vec<ForwardedExport>)
where
    Pe: ImageNtHeaders,
{
    let table = match file.export_table() {
        Ok(Some(t)) => t,
        Ok(None) => return,
        Err(err) => {
            tracing::debug!(?err, "PE export table unreadable");
            return;
        }
    };

    // Build an ordinal-index → name map so we can attach names to forwarded
    // entries discovered via the address table.
    let mut names: std::collections::BTreeMap<u32, String> = std::collections::BTreeMap::new();
    for (name_ptr, ordinal_index) in table.name_iter() {
        if let Ok(raw) = table.name_from_pointer(name_ptr) {
            names.insert(
                u32::from(ordinal_index),
                String::from_utf8_lossy(raw).into_owned(),
            );
        }
    }

    let ordinal_base = table.ordinal_base();
    for (idx, addr_entry) in table.addresses().iter().enumerate() {
        let addr = addr_entry.get(object::endian::LittleEndian);
        if !table.is_forward(addr) {
            continue;
        }
        let target = match table.target_from_address(addr) {
            Ok(t) => t,
            Err(err) => {
                tracing::debug!(?err, "PE forwarded export target unreadable");
                continue;
            }
        };
        let (target_dll, target_symbol, target_ordinal) = match target {
            object::read::pe::ExportTarget::ForwardByName(lib, sym) => (
                String::from_utf8_lossy(lib).into_owned(),
                String::from_utf8_lossy(sym).into_owned(),
                None,
            ),
            object::read::pe::ExportTarget::ForwardByOrdinal(lib, ord) => (
                String::from_utf8_lossy(lib).into_owned(),
                format!("#{ord}"),
                Some(ord),
            ),
            // Not a forwarder — `is_forward` already filtered these, but the
            // pattern is exhaustive.
            object::read::pe::ExportTarget::Address(_) => continue,
        };
        let idx_u32 = idx as u32;
        let name = names.get(&idx_u32).cloned().unwrap_or_else(|| {
            // Anonymous forward — synthesise `#ord` form using the ordinal
            // base + array index.
            format!("#{}", ordinal_base.wrapping_add(idx_u32))
        });
        out.push(ForwardedExport {
            name,
            target_dll,
            target_symbol,
            target_ordinal,
        });
    }
}

/// Build the IAT-slot → resolved-forwarder map for this image.
///
/// Walks every `(library, function)` thunk in the eager and delay-load
/// import directories and looks each function name up in `forwards`. When
/// a match exists we record the IAT slot's *runtime VA* — i.e.
/// `image_base + first_thunk_rva + slot_index * thunk_size` — and value it
/// with `target_dll!target_symbol` (ordinal forwards keep their `#N` form).
///
/// This makes the printer's call renderer able to surface a
/// `/* -> ntdll!RtlAllocateHeap */` trailing comment whenever a Call's
/// resolved target points at one of these IAT slots, so analysts can see
/// the final landing site of a forwarder chain without leaving the C view.
///
/// Returns an empty map when the binary has no import table, no forwarded
/// exports, or no overlap between the two.
fn build_forwarded_resolutions<'data, Pe>(
    file: &PeFile<'data, Pe>,
    forwards: &[ForwardedExport],
) -> BTreeMap<u64, String>
where
    Pe: ImageNtHeaders,
{
    let mut out: BTreeMap<u64, String> = BTreeMap::new();
    if forwards.is_empty() {
        return out;
    }

    // Build a fast `function name → resolved string` index keyed on the
    // *source* (this-DLL) symbol name. We only care about hits during the
    // IAT walk, so the lookup is by-name and case-sensitive (the PE loader
    // already preserves case).
    let mut by_name: BTreeMap<&str, String> = BTreeMap::new();
    for fwd in forwards {
        let resolved = format!("{}!{}", fwd.target_dll, fwd.target_symbol);
        by_name.insert(fwd.name.as_str(), resolved);
    }

    let image_base = file.relative_address_base();
    let thunk_size = std::mem::size_of::<Pe::ImageThunkData>() as u64;

    // Eager imports.
    if let Ok(Some(table)) = file.import_table()
        && let Ok(mut descs) = table.descriptors()
    {
        while let Ok(Some(desc)) = descs.next() {
            let lib_bytes = match table.name(desc.name.get(object::endian::LittleEndian)) {
                Ok(b) => b,
                Err(_) => continue,
            };
            let _ = lib_bytes; // library name not needed for the map key
            let iat_rva = desc.first_thunk.get(object::endian::LittleEndian);
            if iat_rva == 0 {
                continue;
            }
            // Walk via OFT (name table) when present, since the IAT may
            // have been overwritten at load time — names live in the
            // hint-name table referenced by OFT thunks. Fall back to
            // first_thunk if OFT is null.
            let name_thunk_rva = {
                let oft = desc.original_first_thunk.get(object::endian::LittleEndian);
                if oft != 0 { oft } else { iat_rva }
            };
            let mut thunks = match table.thunks(name_thunk_rva) {
                Ok(t) => t,
                Err(_) => continue,
            };
            let mut slot_idx: u64 = 0;
            while let Ok(Some(thunk)) = thunks.next::<Pe>() {
                if !thunk.is_ordinal()
                    && let Ok((_hint, name)) = table.hint_name(thunk.address())
                    && let Some(resolved) = by_name.get(std::str::from_utf8(name).unwrap_or(""))
                {
                    let slot_va = image_base + u64::from(iat_rva) + slot_idx * thunk_size;
                    out.insert(slot_va, resolved.clone());
                }
                slot_idx += 1;
            }
        }
    }

    out
}

/// Build the PE equivalent of ELF's `plt_symbols`: IAT slot VA →
/// `"dll!function"` for every named eager and delay-load import (Batch 12
/// slice 1).
///
/// PE images don't have a PLT in the ELF sense; instead, the loader patches
/// `[iat_slot]` with the resolved function address at load time and calls
/// look like `call qword ptr [iat_slot]` (i.e. an indirect call through the
/// IAT). For the indirect-call-resolve pass we want a `BTreeMap<u64, String>`
/// keyed on the IAT slot's runtime VA — when a `Callind` chain narrows to
/// one of these addresses, we name the resolved target after the imported
/// symbol instead of the canonical `sub_<addr>` placeholder.
///
/// Ordinal-only imports are skipped (they have no name to plumb through).
/// Returns an empty map for COFF objects or PEs without an import directory.
fn build_iat_imports<'data, Pe>(file: &PeFile<'data, Pe>) -> BTreeMap<u64, String>
where
    Pe: ImageNtHeaders,
{
    let mut out: BTreeMap<u64, String> = BTreeMap::new();

    let image_base = file.relative_address_base();
    let thunk_size = std::mem::size_of::<Pe::ImageThunkData>() as u64;

    // Eager imports (`IMAGE_DIRECTORY_ENTRY_IMPORT`).
    if let Ok(Some(table)) = file.import_table()
        && let Ok(mut descs) = table.descriptors()
    {
        while let Ok(Some(desc)) = descs.next() {
            let lib = match table.name(desc.name.get(object::endian::LittleEndian)) {
                Ok(b) => String::from_utf8_lossy(b).to_string(),
                Err(_) => continue,
            };
            let iat_rva = desc.first_thunk.get(object::endian::LittleEndian);
            if iat_rva == 0 {
                continue;
            }
            // Names live in OFT when present; fall back to first_thunk
            // (matches `build_forwarded_resolutions`).
            let name_thunk_rva = {
                let oft = desc.original_first_thunk.get(object::endian::LittleEndian);
                if oft != 0 { oft } else { iat_rva }
            };
            let mut thunks = match table.thunks(name_thunk_rva) {
                Ok(t) => t,
                Err(_) => continue,
            };
            let mut slot_idx: u64 = 0;
            while let Ok(Some(thunk)) = thunks.next::<Pe>() {
                if !thunk.is_ordinal()
                    && let Ok((_hint, name)) = table.hint_name(thunk.address())
                {
                    let fn_name = std::str::from_utf8(name).unwrap_or("");
                    if !fn_name.is_empty() {
                        let slot_va = image_base + u64::from(iat_rva) + slot_idx * thunk_size;
                        out.insert(slot_va, format!("{lib}!{fn_name}"));
                    }
                }
                slot_idx += 1;
            }
        }
    }

    out
}

/// Populate symbols from the PE import directory (IAT).
///
/// Each import is recorded at address 0 (the true IAT slot address depends on
/// the loader at runtime), with the DLL-qualified name `dll!function`.
fn load_imports<'data, Pe>(file: &PeFile<'data, Pe>, out: &mut BTreeMap<u64, Symbol>)
where
    Pe: ImageNtHeaders,
{
    let imports = match file.imports() {
        Ok(i) => i,
        Err(_) => return,
    };

    for import in imports {
        let lib = String::from_utf8_lossy(import.library()).to_string();
        let name = String::from_utf8_lossy(import.name()).to_string();
        if name.is_empty() {
            continue;
        }

        let qualified = format!("{lib}!{name}");

        let new_sym = Symbol {
            name: qualified,
            addr: 0,
            size: 0,
            kind: SymbolKind::Unknown,
        };

        // Import symbols all map to address 0 (unresolved); we store them
        // to record their existence. Collisions at addr 0 keep the first
        // entry to avoid overwriting.
        out.entry(0)
            .and_modify(|_existing| {
                // Don't overwrite — first import at 0 wins.
            })
            .or_insert(new_sym);
    }
}

/// Maximum forwarder hops we will follow inside a single image.
///
/// Forward chains on Windows are typically 1–2 hops (`kernel32 → KernelBase`,
/// or `KernelBase → ntdll`). The API-set redirects can stack 3–4 deep, so a
/// fixed bound of `5` covers any realistic chain while keeping the worst-case
/// walk cheap and protecting us from cycles that slipped past the
/// already-visited check.
const FORWARD_CHAIN_MAX_HOPS: usize = 5;

/// Walk a forwarder chain inside a single [`BinaryImage`] up to
/// [`FORWARD_CHAIN_MAX_HOPS`] levels deep and return the ordered list of
/// resolved targets as `"target_dll!target_symbol"` strings.
///
/// In static analysis we usually cannot see the *target* DLL's export table,
/// so we model transitive resolution as: the current hop's `target_symbol`
/// matches another `ForwardedExport.name` in the *same* image, in which case
/// we treat that record as the next hop and continue. The walk terminates
/// when either:
///
/// 1. No `ForwardedExport.name` in this image matches the current
///    `target_symbol` (the loader is done — runtime will resolve to a real
///    function inside the named target DLL), or
/// 2. We would revisit a source name already used as a hop on this walk
///    (cycle protection — e.g. `A → B → A`), or
/// 3. We hit the depth cap (`FORWARD_CHAIN_MAX_HOPS`).
///
/// The returned vector always has at least one element (the root's
/// immediate `target_dll!target_symbol`); single-hop chains are length 1,
/// two-hop chains are length 2, and so on.
///
/// Time complexity: `O(N × forwarded_exports.len())` for `N` hops; we keep
/// the lookup linear since `forwarded_exports` is typically small (tens of
/// entries) and the depth cap is a tight constant.
pub fn build_forward_chain(image: &BinaryImage, root: &ForwardedExport) -> Vec<String> {
    let mut chain: Vec<String> = Vec::new();
    // Track source-`name`s we have already used to resolve a hop, so an
    // entry like `A.name="B", B.name="A"` cycle is caught after both
    // members have been recorded once.
    let mut visited: std::collections::BTreeSet<&str> = std::collections::BTreeSet::new();

    let mut current_dll: &str = &root.target_dll;
    let mut current_sym: &str = &root.target_symbol;
    chain.push(format!("{current_dll}!{current_sym}"));
    visited.insert(root.name.as_str());

    for _ in 0..FORWARD_CHAIN_MAX_HOPS {
        // Cycle: the next hop's *source* name is one we've already used.
        if visited.contains(current_sym) {
            break;
        }
        // Find the next forwarder in this image whose source name matches
        // the current target symbol. If none, the runtime would resolve
        // this in the target DLL — we're done.
        let Some(next) = image
            .forwarded_exports
            .iter()
            .find(|f| f.name == current_sym)
        else {
            break;
        };
        visited.insert(next.name.as_str());
        current_dll = &next.target_dll;
        current_sym = &next.target_symbol;
        chain.push(format!("{current_dll}!{current_sym}"));
    }

    chain
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a minimal valid PE32+ (64-bit) binary in memory.
    ///
    /// This produces the smallest valid PE that the `object` crate will accept:
    /// DOS header + NT headers + one `.text` section with a single `ret` (0xC3).
    fn minimal_pe64() -> Vec<u8> {
        let mut buf = vec![0u8; 512];

        // ---- DOS Header (64 bytes) ----
        // e_magic = "MZ"
        buf[0] = b'M';
        buf[1] = b'Z';
        // e_lfanew at offset 0x3C: point to NT headers at offset 0x80
        let nt_offset: u32 = 0x80;
        buf[0x3C..0x40].copy_from_slice(&nt_offset.to_le_bytes());

        // ---- NT Headers at 0x80 ----
        let nt = nt_offset as usize;
        // Signature: "PE\0\0"
        buf[nt] = b'P';
        buf[nt + 1] = b'E';
        buf[nt + 2] = 0;
        buf[nt + 3] = 0;

        // ---- COFF File Header (20 bytes) at nt+4 ----
        let fh = nt + 4;
        // Machine: IMAGE_FILE_MACHINE_AMD64
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        // NumberOfSections: 1
        buf[fh + 2..fh + 4].copy_from_slice(&1u16.to_le_bytes());
        // SizeOfOptionalHeader: 112 bytes for PE32+ (minimum)
        let opt_hdr_size: u16 = 112;
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        // Characteristics: IMAGE_FILE_EXECUTABLE_IMAGE | IMAGE_FILE_LARGE_ADDRESS_AWARE
        let characteristics: u16 =
            pe::IMAGE_FILE_EXECUTABLE_IMAGE | pe::IMAGE_FILE_LARGE_ADDRESS_AWARE;
        buf[fh + 18..fh + 20].copy_from_slice(&characteristics.to_le_bytes());

        // ---- Optional Header (PE32+, 112 bytes) at nt+24 ----
        let oh = nt + 24;
        // Magic: PE32+ (0x020B)
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        // AddressOfEntryPoint at oh+16 (relative to ImageBase)
        let entry_rva: u32 = 0x1000;
        buf[oh + 16..oh + 20].copy_from_slice(&entry_rva.to_le_bytes());
        // ImageBase at oh+24 (8 bytes for PE32+)
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        // SectionAlignment at oh+32
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        // FileAlignment at oh+36
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // SizeOfImage at oh+56
        buf[oh + 56..oh + 60].copy_from_slice(&0x3000u32.to_le_bytes());
        // SizeOfHeaders at oh+60
        buf[oh + 60..oh + 64].copy_from_slice(&0x200u32.to_le_bytes());
        // NumberOfRvaAndSizes at oh+108
        buf[oh + 108..oh + 112].copy_from_slice(&0u32.to_le_bytes());

        // ---- Section Header (.text) at nt+24+112 = nt+136 ----
        let sh = oh + opt_hdr_size as usize;
        // Name: ".text\0\0\0"
        buf[sh..sh + 5].copy_from_slice(b".text");
        // VirtualSize at sh+8
        buf[sh + 8..sh + 12].copy_from_slice(&1u32.to_le_bytes());
        // VirtualAddress at sh+12 (RVA)
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes());
        // SizeOfRawData at sh+16
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes());
        // PointerToRawData at sh+20 — section data starts at file offset 0x200
        buf[sh + 20..sh + 24].copy_from_slice(&0x200u32.to_le_bytes());
        // Characteristics at sh+36: MEM_READ | MEM_EXECUTE | CNT_CODE
        let sec_flags: u32 =
            pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE;
        buf[sh + 36..sh + 40].copy_from_slice(&sec_flags.to_le_bytes());

        // ---- Section data at 0x200 ----
        // Ensure buffer is large enough.
        if buf.len() < 0x200 + 1 {
            buf.resize(0x200 + 0x200, 0);
        }
        buf[0x200] = 0xC3; // x86 RET instruction

        buf
    }

    #[test]
    fn test_can_load_minimal_pe() {
        let pe = minimal_pe64();
        assert!(PeLoader::can_load(&pe));
    }

    #[test]
    fn test_load_minimal_pe64() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse minimal PE64");

        // Batch 23: PE mitigation flags are populated even for the
        // synthetic minimal PE — `pe_mitigations` is always `Some` for
        // a successfully loaded PE.
        let mits = img
            .pe_mitigations
            .as_ref()
            .expect("PE input must yield pe_mitigations");
        assert!(!mits.authenticode_present, "minimal PE has no signature");
        assert_eq!(mits.authenticode_size, 0);
        assert!(
            mits.authenticode_certificates.is_empty(),
            "no certificate entries expected for an unsigned PE"
        );
        assert!(!mits.authenticode_malformed);

        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        // Entry = ImageBase (0x400000) + RVA (0x1000)
        assert_eq!(img.entry, 0x0040_1000);

        // Should have the .text section.
        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(
            text.flags.contains(SectionFlags::EXEC),
            ".text should be executable"
        );
        assert!(
            text.flags.contains(SectionFlags::READ),
            ".text should be readable"
        );
        assert!(
            !text.flags.contains(SectionFlags::WRITE),
            ".text should not be writable"
        );
    }

    #[test]
    fn test_reject_non_pe() {
        assert!(!PeLoader::can_load(b""));
        assert!(!PeLoader::can_load(b"not a PE"));
        assert!(!PeLoader::can_load(&[0u8; 1024]));
        assert!(!PeLoader::can_load(b"\x7fELF")); // ELF magic

        // MZ alone without valid PE signature should be rejected.
        let mut mz_only = vec![0u8; 256];
        mz_only[0] = b'M';
        mz_only[1] = b'Z';
        // e_lfanew points to 0x80 but no PE signature there.
        mz_only[0x3C] = 0x80;
        assert!(!PeLoader::can_load(&mz_only));

        // Attempting to load non-PE data should error.
        let err = PeLoader::load(b"not a PE").unwrap_err();
        assert!(matches!(err, LoadError::InvalidMagic));
    }

    #[test]
    fn test_pe_text_section_flags() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");

        // .text: readable + executable, not writable.
        assert!(text.flags.contains(SectionFlags::READ));
        assert!(text.flags.contains(SectionFlags::EXEC));
        assert!(!text.flags.contains(SectionFlags::WRITE));
    }

    #[test]
    fn test_pe_entry_is_absolute_va() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");

        // The `object` crate returns entry as an absolute VA (ImageBase + RVA).
        assert!(
            img.entry >= 0x0040_0000,
            "entry VA should include the image base"
        );
    }

    /// Build a minimal PE32 (32-bit) binary.
    fn minimal_pe32() -> Vec<u8> {
        let mut buf = vec![0u8; 512];

        // DOS Header
        buf[0] = b'M';
        buf[1] = b'Z';
        let nt_offset: u32 = 0x80;
        buf[0x3C..0x40].copy_from_slice(&nt_offset.to_le_bytes());

        let nt = nt_offset as usize;
        // PE signature
        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        // COFF File Header
        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_I386.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&1u16.to_le_bytes()); // 1 section
        let opt_hdr_size: u16 = 96; // PE32 optional header size (minimum)
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        let characteristics: u16 = pe::IMAGE_FILE_EXECUTABLE_IMAGE;
        buf[fh + 18..fh + 20].copy_from_slice(&characteristics.to_le_bytes());

        // Optional Header (PE32)
        let oh = nt + 24;
        // Magic: PE32 (0x010B)
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR32_MAGIC.to_le_bytes());
        // AddressOfEntryPoint at oh+16
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        // ImageBase at oh+28 (4 bytes for PE32)
        buf[oh + 28..oh + 32].copy_from_slice(&0x0040_0000u32.to_le_bytes());
        // SectionAlignment at oh+32
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        // FileAlignment at oh+36
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // SizeOfImage at oh+56
        buf[oh + 56..oh + 60].copy_from_slice(&0x3000u32.to_le_bytes());
        // SizeOfHeaders at oh+60
        buf[oh + 60..oh + 64].copy_from_slice(&0x200u32.to_le_bytes());
        // NumberOfRvaAndSizes at oh+92
        buf[oh + 92..oh + 96].copy_from_slice(&0u32.to_le_bytes());

        // Section Header (.text)
        let sh = oh + opt_hdr_size as usize;
        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&1u32.to_le_bytes()); // VirtualSize
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes()); // VirtualAddress
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes()); // SizeOfRawData
        buf[sh + 20..sh + 24].copy_from_slice(&0x200u32.to_le_bytes()); // PointerToRawData
        let sec_flags: u32 =
            pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE;
        buf[sh + 36..sh + 40].copy_from_slice(&sec_flags.to_le_bytes());

        // Section data at 0x200
        if buf.len() < 0x400 {
            buf.resize(0x400, 0);
        }
        buf[0x200] = 0xC3; // RET

        buf
    }

    #[test]
    fn test_load_pe32() {
        let pe = minimal_pe32();
        assert!(PeLoader::can_load(&pe));

        let img = PeLoader::load(&pe).expect("should parse minimal PE32");
        assert_eq!(img.arch, ArchId::X86);
        assert_eq!(img.endian, Endian::Little);
        assert_eq!(img.entry, 0x0040_1000);

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(text.flags.contains(SectionFlags::EXEC));
        assert!(text.flags.contains(SectionFlags::READ));
    }

    #[test]
    fn test_pe_sections_have_data() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");

        let text = img
            .section_by_name(".text")
            .expect(".text section must exist");
        assert!(!text.data.is_empty(), ".text should have data");
    }

    #[test]
    fn test_pe_no_reloc_directory_returns_empty() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("should parse");
        assert!(
            img.relocations.is_empty(),
            "PE without IMAGE_DIRECTORY_ENTRY_BASERELOC should have no relocations"
        );
    }

    /// Build a PE32+ binary with a `.reloc` section containing one block of
    /// three relocations: one `DIR64`, one `HIGHLOW`, and one `ABSOLUTE` (padding).
    fn pe64_with_reloc() -> Vec<u8> {
        let nt: usize = 0x80;
        let opt_hdr_size: u16 = 16 * 8 + 112;
        let oh = nt + 24;
        let sh = oh + opt_hdr_size as usize;
        let section_count: u16 = 2;
        let section_table_end = sh + (section_count as usize) * 40;
        let text_offset: u32 = 0x400;
        let reloc_offset: u32 = 0x600;
        let reloc_size: u32 = 0x200;
        let total_size: u32 = reloc_offset + reloc_size;
        let mut buf = vec![0u8; total_size as usize];

        buf[0] = b'M';
        buf[1] = b'Z';
        buf[0x3C..0x40].copy_from_slice(&(nt as u32).to_le_bytes());

        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&section_count.to_le_bytes());
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        buf[oh + 56..oh + 60].copy_from_slice(&0x4000u32.to_le_bytes());
        buf[oh + 60..oh + 64].copy_from_slice(&(section_table_end as u32).to_le_bytes());
        let dir_count: u32 = 16;
        buf[oh + 108..oh + 112].copy_from_slice(&dir_count.to_le_bytes());

        let basereloc_dir = oh + 112 + pe::IMAGE_DIRECTORY_ENTRY_BASERELOC * 8;
        let reloc_rva: u32 = 0x3000;
        buf[basereloc_dir..basereloc_dir + 4].copy_from_slice(&reloc_rva.to_le_bytes());
        let reloc_block_size: u32 = 8 + 3 * 2 + 2;
        buf[basereloc_dir + 4..basereloc_dir + 8].copy_from_slice(&reloc_block_size.to_le_bytes());

        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 20..sh + 24].copy_from_slice(&text_offset.to_le_bytes());
        buf[sh + 36..sh + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE)
                .to_le_bytes(),
        );

        let sh2 = sh + 40;
        buf[sh2..sh2 + 6].copy_from_slice(b".reloc");
        buf[sh2 + 8..sh2 + 12].copy_from_slice(&reloc_size.to_le_bytes());
        buf[sh2 + 12..sh2 + 16].copy_from_slice(&reloc_rva.to_le_bytes());
        buf[sh2 + 16..sh2 + 20].copy_from_slice(&reloc_size.to_le_bytes());
        buf[sh2 + 20..sh2 + 24].copy_from_slice(&reloc_offset.to_le_bytes());
        buf[sh2 + 36..sh2 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ
                | pe::IMAGE_SCN_MEM_DISCARDABLE
                | pe::IMAGE_SCN_CNT_INITIALIZED_DATA)
                .to_le_bytes(),
        );

        buf[text_offset as usize] = 0xC3;

        let r = reloc_offset as usize;
        buf[r..r + 4].copy_from_slice(&reloc_rva.to_le_bytes());
        buf[r + 4..r + 8].copy_from_slice(&reloc_block_size.to_le_bytes());

        let entry_dir64: u16 = (pe::IMAGE_REL_BASED_DIR64 << 12) | 0x100;
        let entry_highlow: u16 = (pe::IMAGE_REL_BASED_HIGHLOW << 12) | 0x200;
        let entry_padding: u16 = pe::IMAGE_REL_BASED_ABSOLUTE << 12;
        buf[r + 8..r + 10].copy_from_slice(&entry_dir64.to_le_bytes());
        buf[r + 10..r + 12].copy_from_slice(&entry_highlow.to_le_bytes());
        buf[r + 12..r + 14].copy_from_slice(&entry_padding.to_le_bytes());

        buf
    }

    #[test]
    fn test_pe_reloc_block_parsed() {
        let pe = pe64_with_reloc();
        let img = PeLoader::load(&pe).expect("PE with .reloc must parse");

        assert_eq!(
            img.relocations.len(),
            2,
            "two real relocations (ABSOLUTE padding excluded)"
        );

        let image_base: u64 = 0x0040_0000;
        let page_rva: u64 = 0x3000;
        let dir64 = &img.relocations[0];
        assert_eq!(dir64.addr, image_base + page_rva + 0x100);
        assert_eq!(dir64.kind, RelocKind::Relative);
        assert!(dir64.sym_name.is_empty());

        let highlow = &img.relocations[1];
        assert_eq!(highlow.addr, image_base + page_rva + 0x200);
        assert_eq!(highlow.kind, RelocKind::Relative);
    }

    /// Build a PE32+ binary with `.pdata`, `.xdata`, `.rdata` sections containing:
    /// - 1 RUNTIME_FUNCTION entry in .pdata (exception directory)
    /// - 1 UNWIND_INFO record with 1 unwind code in .xdata
    /// - 1 IMAGE_DEBUG_DIRECTORY with CodeView RSDS record in .rdata
    /// - 1 minimal IMAGE_LOAD_CONFIG_DIRECTORY64 in .rdata
    fn pe64_with_pdata_and_debug() -> Vec<u8> {
        // ---- Layout constants ----
        let nt: usize = 0x80;
        let opt_hdr_size: u16 = 112 + 16 * 8; // 240 bytes (PE32+ base + 16 data dirs)
        let oh = nt + 24;
        let sh = oh + opt_hdr_size as usize; // section headers start
        let section_count: u16 = 4;
        let _section_table_end = sh + (section_count as usize) * 40;

        // File offsets (FileAlignment = 0x200)
        let headers_end: u32 = 0x400; // covers NT + optional + 4 section headers
        let text_foff: u32 = 0x400;
        let pdata_foff: u32 = 0x600;
        let xdata_foff: u32 = 0x800;
        let rdata_foff: u32 = 0xA00;
        let total_size: u32 = rdata_foff + 0x200; // 0xC00 = 3072 bytes

        // RVAs (SectionAlignment = 0x1000)
        let text_rva: u32 = 0x1000;
        let pdata_rva: u32 = 0x2000;
        let xdata_rva: u32 = 0x3000;
        let rdata_rva: u32 = 0x4000;

        let mut buf = vec![0u8; total_size as usize];

        // ---- DOS Header ----
        buf[0] = b'M';
        buf[1] = b'Z';
        buf[0x3C..0x40].copy_from_slice(&(nt as u32).to_le_bytes());

        // ---- PE Signature ----
        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        // ---- COFF File Header (20 bytes) ----
        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&section_count.to_le_bytes());
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        // ---- Optional Header (PE32+, 240 bytes) ----
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        // AddressOfEntryPoint
        buf[oh + 16..oh + 20].copy_from_slice(&text_rva.to_le_bytes());
        // ImageBase
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        // SectionAlignment
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        // FileAlignment
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // SizeOfImage (last section RVA + aligned size)
        buf[oh + 56..oh + 60].copy_from_slice(&0x5000u32.to_le_bytes());
        // SizeOfHeaders
        buf[oh + 60..oh + 64].copy_from_slice(&headers_end.to_le_bytes());
        // NumberOfRvaAndSizes
        buf[oh + 108..oh + 112].copy_from_slice(&16u32.to_le_bytes());

        // ---- Data Directories (16 × 8 bytes at oh+112) ----
        let dirs = oh + 112;

        // [3] IMAGE_DIRECTORY_ENTRY_EXCEPTION → .pdata
        let pdata_dir_size: u32 = 12; // 1 RUNTIME_FUNCTION = 12 bytes
        let exc_dir = dirs + pe::IMAGE_DIRECTORY_ENTRY_EXCEPTION * 8;
        buf[exc_dir..exc_dir + 4].copy_from_slice(&pdata_rva.to_le_bytes());
        buf[exc_dir + 4..exc_dir + 8].copy_from_slice(&pdata_dir_size.to_le_bytes());

        // [6] IMAGE_DIRECTORY_ENTRY_DEBUG → debug directory in .rdata
        // Debug directory entry is at rdata_rva+0, size = 28 bytes (1 entry)
        let debug_dir_entry = dirs + pe::IMAGE_DIRECTORY_ENTRY_DEBUG * 8;
        buf[debug_dir_entry..debug_dir_entry + 4].copy_from_slice(&rdata_rva.to_le_bytes());
        buf[debug_dir_entry + 4..debug_dir_entry + 8].copy_from_slice(&28u32.to_le_bytes());

        // [10] IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG → load config in .rdata at offset 0x80
        let load_cfg_rva = rdata_rva + 0x80;
        let load_cfg_size: u32 = 112; // minimal IMAGE_LOAD_CONFIG_DIRECTORY64
        let lc_dir = dirs + pe::IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG * 8;
        buf[lc_dir..lc_dir + 4].copy_from_slice(&load_cfg_rva.to_le_bytes());
        buf[lc_dir + 4..lc_dir + 8].copy_from_slice(&load_cfg_size.to_le_bytes());

        // ---- Section Headers (4 × 40 bytes) ----
        // .text
        let s0 = sh;
        buf[s0..s0 + 5].copy_from_slice(b".text");
        buf[s0 + 8..s0 + 12].copy_from_slice(&0x200u32.to_le_bytes()); // VirtualSize
        buf[s0 + 12..s0 + 16].copy_from_slice(&text_rva.to_le_bytes());
        buf[s0 + 16..s0 + 20].copy_from_slice(&0x200u32.to_le_bytes()); // SizeOfRawData
        buf[s0 + 20..s0 + 24].copy_from_slice(&text_foff.to_le_bytes());
        buf[s0 + 36..s0 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE)
                .to_le_bytes(),
        );

        // .pdata
        let s1 = sh + 40;
        buf[s1..s1 + 6].copy_from_slice(b".pdata");
        buf[s1 + 8..s1 + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[s1 + 12..s1 + 16].copy_from_slice(&pdata_rva.to_le_bytes());
        buf[s1 + 16..s1 + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[s1 + 20..s1 + 24].copy_from_slice(&pdata_foff.to_le_bytes());
        buf[s1 + 36..s1 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        // .xdata
        let s2 = sh + 80;
        buf[s2..s2 + 6].copy_from_slice(b".xdata");
        buf[s2 + 8..s2 + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[s2 + 12..s2 + 16].copy_from_slice(&xdata_rva.to_le_bytes());
        buf[s2 + 16..s2 + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[s2 + 20..s2 + 24].copy_from_slice(&xdata_foff.to_le_bytes());
        buf[s2 + 36..s2 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        // .rdata (debug dir + RSDS + load_config)
        let s3 = sh + 120;
        buf[s3..s3 + 6].copy_from_slice(b".rdata");
        buf[s3 + 8..s3 + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[s3 + 12..s3 + 16].copy_from_slice(&rdata_rva.to_le_bytes());
        buf[s3 + 16..s3 + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[s3 + 20..s3 + 24].copy_from_slice(&rdata_foff.to_le_bytes());
        buf[s3 + 36..s3 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        // ---- .text section data at text_foff ----
        buf[text_foff as usize] = 0xC3; // RET

        // ---- .pdata section data at pdata_foff ----
        // 1 RUNTIME_FUNCTION: begin_address(u32), end_address(u32), unwind_info_address(u32)
        let p = pdata_foff as usize;
        buf[p..p + 4].copy_from_slice(&text_rva.to_le_bytes()); // BeginAddress
        buf[p + 4..p + 8].copy_from_slice(&(text_rva + 0x10).to_le_bytes()); // EndAddress
        buf[p + 8..p + 12].copy_from_slice(&xdata_rva.to_le_bytes()); // UnwindInfoAddress

        // ---- .xdata section data at xdata_foff ----
        // UNWIND_INFO: version(3 bits)=1, flags(5 bits)=0 → byte 0 = 0x01
        // SizeOfProlog = 4, CountOfCodes = 1
        // FrameRegister(4 bits)=0, FrameOffset(4 bits)=0 → byte 3 = 0x00
        // UnwindCode[0]: offset_in_prolog=4, unwind_op(4 bits)=2 (ALLOC_SMALL), op_info(4 bits)=0
        //   → 2 bytes: [0x04, 0x02]
        let x = xdata_foff as usize;
        buf[x] = 0x01; // Version=1, Flags=0
        buf[x + 1] = 0x04; // SizeOfProlog
        buf[x + 2] = 0x01; // CountOfCodes
        buf[x + 3] = 0x00; // FrameRegister=0, FrameOffset=0
        buf[x + 4] = 0x04; // UnwindCode: OffsetInProlog=4
        buf[x + 5] = 0x02; // UnwindCode: UnwindOp=ALLOC_SMALL(2), OpInfo=0

        // ---- .rdata section data at rdata_foff ----
        let r = rdata_foff as usize;

        // IMAGE_DEBUG_DIRECTORY (28 bytes) at rdata_foff+0
        // Characteristics (4) = 0
        // TimeDateStamp (4) = 0
        // MajorVersion (2) = 0, MinorVersion (2) = 0
        // Type (4) = IMAGE_DEBUG_TYPE_CODEVIEW = 2
        buf[r + 12..r + 16].copy_from_slice(&2u32.to_le_bytes());
        // SizeOfData (4) = size of RSDS record
        let pdb_path = b"test.pdb\0";
        let rsds_size: u32 = 4 + 16 + 4 + pdb_path.len() as u32; // sig + guid + age + path
        buf[r + 16..r + 20].copy_from_slice(&rsds_size.to_le_bytes());
        // AddressOfRawData (RVA) — RSDS record at rdata_rva + 0x20
        let rsds_rva = rdata_rva + 0x20;
        buf[r + 20..r + 24].copy_from_slice(&rsds_rva.to_le_bytes());
        // PointerToRawData (file offset)
        let rsds_foff = rdata_foff + 0x20;
        buf[r + 24..r + 28].copy_from_slice(&rsds_foff.to_le_bytes());

        // CodeView RSDS record at rdata_foff + 0x20
        let cv = r + 0x20;
        buf[cv..cv + 4].copy_from_slice(&[0x52, 0x53, 0x44, 0x53]); // "RSDS"
        // GUID (16 bytes) — arbitrary non-zero
        buf[cv + 4..cv + 20].copy_from_slice(&[
            0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E,
            0x0F, 0x10,
        ]);
        // Age (4 bytes)
        buf[cv + 20..cv + 24].copy_from_slice(&1u32.to_le_bytes());
        // PDB path (NUL-terminated)
        buf[cv + 24..cv + 24 + pdb_path.len()].copy_from_slice(pdb_path);

        // IMAGE_LOAD_CONFIG_DIRECTORY64 at rdata_foff + 0x80
        let lc = r + 0x80;
        // Size field (4 bytes at offset 0)
        buf[lc..lc + 4].copy_from_slice(&load_cfg_size.to_le_bytes());
        // SecurityCookie at offset 0x58 (88) in the struct — 8 bytes (VA)
        let cookie_va = image_base + rdata_rva as u64 + 0x100;
        buf[lc + 0x58..lc + 0x60].copy_from_slice(&cookie_va.to_le_bytes());
        buf
    }

    #[test]
    fn test_pe_pdata_fixture_loads() {
        let pe = pe64_with_pdata_and_debug();
        assert!(pe.len() <= 4096, "fixture must be < 4 KB, got {}", pe.len());
        assert!(PeLoader::can_load(&pe), "fixture must be recognized as PE");

        let img = PeLoader::load(&pe).expect("PE with .pdata/.xdata/.debug/load_config must load");

        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);
        assert_eq!(img.entry, 0x0040_0000 + 0x1000);

        assert!(img.section_by_name(".text").is_some(), ".text missing");
        assert!(img.section_by_name(".pdata").is_some(), ".pdata missing");
        assert!(img.section_by_name(".xdata").is_some(), ".xdata missing");
        assert!(img.section_by_name(".rdata").is_some(), ".rdata missing");
    }

    #[test]
    fn test_pe_pdata_runtime_function_parsed() {
        let pe = pe64_with_pdata_and_debug();
        let img = PeLoader::load(&pe).expect("must parse");

        assert_eq!(
            img.runtime_functions.len(),
            1,
            "fixture has 1 RUNTIME_FUNCTION"
        );

        let rf = &img.runtime_functions[0];
        let image_base: u64 = 0x0040_0000;
        let text_rva: u64 = 0x1000;
        let xdata_rva: u64 = 0x3000;

        assert_eq!(rf.begin_address, image_base + text_rva);
        assert_eq!(rf.end_address, image_base + text_rva + 0x10);
        assert_eq!(rf.unwind_info_address, image_base + xdata_rva);
    }

    #[test]
    fn test_pe_xdata_unwind_info_decoded() {
        let pe = pe64_with_pdata_and_debug();
        let img = PeLoader::load(&pe).expect("must parse");

        let rf = &img.runtime_functions[0];
        let ui = rf.unwind_info.as_ref().expect("UNWIND_INFO must be parsed");

        assert_eq!(ui.version, 1);
        assert_eq!(ui.flags, 0);
        assert_eq!(ui.size_of_prolog, 4);
        assert_eq!(ui.count_of_codes, 1);
        assert_eq!(ui.frame_register, 0);
        assert_eq!(ui.frame_offset, 0);
    }

    #[test]
    fn test_pe_pdata_empty_when_no_exception_dir() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("must parse");
        assert!(img.runtime_functions.is_empty());
    }

    #[test]
    fn test_pe_debug_codeview_rsds_parsed() {
        let pe = pe64_with_pdata_and_debug();
        let img = PeLoader::load(&pe).expect("must parse");

        assert_eq!(
            img.debug_records.len(),
            1,
            "fixture has 1 debug directory entry"
        );

        let rec = &img.debug_records[0];
        assert_eq!(rec.typ, 2, "type should be IMAGE_DEBUG_TYPE_CODEVIEW");

        let path = rec.pdb_path.as_deref().expect("RSDS should have pdb_path");
        assert_eq!(path, "test.pdb");

        let guid = rec.pdb_guid.expect("RSDS should have guid");
        assert_eq!(
            guid,
            [
                0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E,
                0x0F, 0x10
            ]
        );

        let age = rec.pdb_age.expect("RSDS should have age");
        assert_eq!(age, 1);
    }

    #[test]
    fn test_pe_debug_empty_when_no_debug_dir() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("must parse");
        assert!(img.debug_records.is_empty());
    }

    #[test]
    fn test_pe_load_config_security_cookie() {
        let pe = pe64_with_pdata_and_debug();
        let img = PeLoader::load(&pe).expect("must parse");

        let lc = img.load_config.as_ref().expect("fixture has load config");

        let image_base: u64 = 0x0040_0000;
        let rdata_rva: u64 = 0x4000;
        let expected_cookie = image_base + rdata_rva + 0x100;
        assert_eq!(lc.security_cookie, expected_cookie);
    }

    #[test]
    fn test_pe_load_config_none_when_absent() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("must parse");
        assert!(img.load_config.is_none());
    }

    #[test]
    fn test_pe_load_config_cfg_fields_default_zero() {
        let pe = pe64_with_pdata_and_debug();
        let img = PeLoader::load(&pe).expect("must parse");

        let lc = img.load_config.as_ref().expect("fixture has load config");
        assert_eq!(lc.guard_cf_check, 0, "fixture has no CFG check pointer");
        assert_eq!(
            lc.guard_cf_dispatch, 0,
            "fixture has no CFG dispatch pointer"
        );
        assert_eq!(lc.guard_flags, 0, "fixture has no guard flags");
        assert!(lc.cfg_targets.is_empty(), "fixture has no CFG targets");
    }

    #[test]
    fn test_pe_resources_empty_when_no_resource_dir() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("must parse");
        assert!(img.resources.is_empty());
    }

    #[test]
    fn test_pe_bound_imports_empty_when_no_bound_dir() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("must parse");
        assert!(img.bound_imports.is_empty());
    }

    #[test]
    fn test_pe_rich_header_none_when_absent() {
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("must parse");
        assert!(img.rich_header.is_none());
    }

    #[test]
    fn test_pe_rich_header_decoded() {
        let mut pe = minimal_pe64();
        let nt_offset = 0x80usize;

        // Build a Rich header between 0x40 and 0x80.
        // Layout: DanS(4) + 3×padding(12) + records(N×8) + Rich(4) + key(4)
        let xor_key: u32 = 0xDEAD_BEEF;

        let mut rich_block = Vec::new();
        // "DanS" XOR'd
        rich_block.extend_from_slice(&(DANS_SIGNATURE ^ xor_key).to_le_bytes());
        // 3 padding u32s (each XOR'd with key → key)
        for _ in 0..3 {
            rich_block.extend_from_slice(&xor_key.to_le_bytes());
        }
        // 1 record: comp_id=0x00930001, count=5
        let comp_id: u32 = 0x0093_0001;
        let count: u32 = 5;
        rich_block.extend_from_slice(&(comp_id ^ xor_key).to_le_bytes());
        rich_block.extend_from_slice(&(count ^ xor_key).to_le_bytes());
        // "Rich" signature (plaintext)
        rich_block.extend_from_slice(&RICH_SIGNATURE.to_le_bytes());
        // XOR key (plaintext)
        rich_block.extend_from_slice(&xor_key.to_le_bytes());

        // Place at offset 0x40 (right after DOS header fields).
        let start = 0x40;
        assert!(
            start + rich_block.len() <= nt_offset,
            "Rich block must fit before NT headers"
        );
        pe[start..start + rich_block.len()].copy_from_slice(&rich_block);

        let img = PeLoader::load(&pe).expect("must parse PE with Rich header");
        let rh = img
            .rich_header
            .as_ref()
            .expect("Rich header should be present");
        assert_eq!(rh.xor_key, xor_key);
        assert_eq!(rh.records.len(), 1);
        assert_eq!(rh.records[0].comp_id, comp_id);
        assert_eq!(rh.records[0].count, count);
    }

    // ---------------------------------------------------------------------
    // t164: forwarded exports — exports whose RVA points back inside the
    // export directory range and resolves to a `"DLL.Symbol"` (or
    // `"DLL.#ordinal"`) redirection string. We build a minimal PE32+ image
    // with a `.rdata` section holding a valid export directory + two
    // forwarders (one by name, one by ordinal) and verify both are surfaced
    // on `BinaryImage.forwarded_exports`.
    // ---------------------------------------------------------------------

    /// PE32+ fixture: one `.text` + one `.rdata` section, with an export
    /// directory in `.rdata` listing two forwarded exports:
    ///   `HeapAlloc`     → `NTDLL.RtlAllocateHeap`
    ///   `ZwQuerySystem` → `NTDLL.#142`
    fn pe64_with_forwarded_exports() -> Vec<u8> {
        let nt: usize = 0x80;
        let opt_hdr_size: u16 = 16 * 8 + 112;
        let oh = nt + 24;
        let sh = oh + opt_hdr_size as usize;
        let section_count: u16 = 2;
        let section_table_end = sh + (section_count as usize) * 40;

        let text_offset: u32 = 0x400;
        let rdata_offset: u32 = 0x600;
        let rdata_size: u32 = 0x200;
        let total_size: u32 = rdata_offset + rdata_size;
        let mut buf = vec![0u8; total_size as usize];

        // ---- DOS + NT signature ----
        buf[0] = b'M';
        buf[1] = b'Z';
        buf[0x3C..0x40].copy_from_slice(&(nt as u32).to_le_bytes());
        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        // ---- COFF file header ----
        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&section_count.to_le_bytes());
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        // ---- Optional header ----
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        buf[oh + 56..oh + 60].copy_from_slice(&0x4000u32.to_le_bytes());
        buf[oh + 60..oh + 64].copy_from_slice(&(section_table_end as u32).to_le_bytes());
        let dir_count: u32 = 16;
        buf[oh + 108..oh + 112].copy_from_slice(&dir_count.to_le_bytes());

        // ---- Section: .text ----
        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 20..sh + 24].copy_from_slice(&text_offset.to_le_bytes());
        buf[sh + 36..sh + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE)
                .to_le_bytes(),
        );

        // ---- Section: .rdata (holds the export directory) ----
        let rdata_rva: u32 = 0x2000;
        let sh2 = sh + 40;
        buf[sh2..sh2 + 6].copy_from_slice(b".rdata");
        buf[sh2 + 8..sh2 + 12].copy_from_slice(&rdata_size.to_le_bytes());
        buf[sh2 + 12..sh2 + 16].copy_from_slice(&rdata_rva.to_le_bytes());
        buf[sh2 + 16..sh2 + 20].copy_from_slice(&rdata_size.to_le_bytes());
        buf[sh2 + 20..sh2 + 24].copy_from_slice(&rdata_offset.to_le_bytes());
        buf[sh2 + 36..sh2 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        buf[text_offset as usize] = 0xC3;

        // ---- Build the export directory inside .rdata ----
        //
        // Layout, all offsets relative to `rdata_offset` (file) and
        // `rdata_rva` (RVA):
        //   +0x00  export_dir (40 bytes)
        //   +0x28  address-of-functions table (2 × u32)
        //   +0x30  address-of-names    table (2 × u32)
        //   +0x38  address-of-name-ord table (2 × u16)
        //   +0x3C  dll-name "kernel32.dll\0"
        //   +0x4A  fn1-name "HeapAlloc\0"
        //   +0x54  fn2-name "ZwQuerySystem\0"
        //   +0x62  forward1 "NTDLL.RtlAllocateHeap\0"
        //   +0x78  forward2 "NTDLL.#142\0"
        //
        // We pin every offset explicitly to keep the test obvious.
        let rd = rdata_offset as usize;
        let export_dir_rva = rdata_rva;
        let funcs_off = 0x28usize;
        let names_off = 0x30usize;
        let ords_off = 0x38usize;
        let dll_name_off = 0x3Cusize;
        let fn1_name_off = 0x4Ausize;
        let fn2_name_off = 0x54usize;
        let fwd1_off = 0x62usize;
        let fwd2_off = 0x78usize;
        let blob_end = 0x84usize;
        let export_dir_size = blob_end as u32;

        // export_dir
        // Characteristics .. MinorVersion: leave zero.
        // Name RVA
        buf[rd + 12..rd + 16].copy_from_slice(&(rdata_rva + dll_name_off as u32).to_le_bytes());
        // Base ordinal = 1
        buf[rd + 16..rd + 20].copy_from_slice(&1u32.to_le_bytes());
        // NumberOfFunctions = 2
        buf[rd + 20..rd + 24].copy_from_slice(&2u32.to_le_bytes());
        // NumberOfNames = 2
        buf[rd + 24..rd + 28].copy_from_slice(&2u32.to_le_bytes());
        // AddressOfFunctions RVA
        buf[rd + 28..rd + 32].copy_from_slice(&(rdata_rva + funcs_off as u32).to_le_bytes());
        // AddressOfNames RVA
        buf[rd + 32..rd + 36].copy_from_slice(&(rdata_rva + names_off as u32).to_le_bytes());
        // AddressOfNameOrdinals RVA
        buf[rd + 36..rd + 40].copy_from_slice(&(rdata_rva + ords_off as u32).to_le_bytes());

        // Address-of-functions: both RVAs point *inside* the export directory
        // range → `is_forward` returns true.
        buf[rd + funcs_off..rd + funcs_off + 4]
            .copy_from_slice(&(rdata_rva + fwd1_off as u32).to_le_bytes());
        buf[rd + funcs_off + 4..rd + funcs_off + 8]
            .copy_from_slice(&(rdata_rva + fwd2_off as u32).to_le_bytes());

        // Address-of-names
        buf[rd + names_off..rd + names_off + 4]
            .copy_from_slice(&(rdata_rva + fn1_name_off as u32).to_le_bytes());
        buf[rd + names_off + 4..rd + names_off + 8]
            .copy_from_slice(&(rdata_rva + fn2_name_off as u32).to_le_bytes());

        // Address-of-name-ordinals: 0-based index into the functions table.
        buf[rd + ords_off..rd + ords_off + 2].copy_from_slice(&0u16.to_le_bytes());
        buf[rd + ords_off + 2..rd + ords_off + 4].copy_from_slice(&1u16.to_le_bytes());

        // Strings.
        let write_cstr = |buf: &mut [u8], off: usize, s: &str| {
            buf[off..off + s.len()].copy_from_slice(s.as_bytes());
            buf[off + s.len()] = 0;
        };
        write_cstr(&mut buf, rd + dll_name_off, "kernel32.dll");
        write_cstr(&mut buf, rd + fn1_name_off, "HeapAlloc");
        write_cstr(&mut buf, rd + fn2_name_off, "ZwQuerySystem");
        write_cstr(&mut buf, rd + fwd1_off, "NTDLL.RtlAllocateHeap");
        write_cstr(&mut buf, rd + fwd2_off, "NTDLL.#142");

        // Wire the EXPORT data directory entry.
        let export_dir_entry = oh + 112 + pe::IMAGE_DIRECTORY_ENTRY_EXPORT * 8;
        buf[export_dir_entry..export_dir_entry + 4].copy_from_slice(&export_dir_rva.to_le_bytes());
        buf[export_dir_entry + 4..export_dir_entry + 8]
            .copy_from_slice(&export_dir_size.to_le_bytes());

        buf
    }

    #[test]
    fn test_pe_forwarded_export_by_name() {
        let pe = pe64_with_forwarded_exports();
        let img = PeLoader::load(&pe).expect("PE with forwarded exports must parse");
        let f = img
            .forwarded_export("HeapAlloc")
            .expect("HeapAlloc forwarder must be surfaced");
        assert_eq!(f.target_dll, "NTDLL");
        assert_eq!(f.target_symbol, "RtlAllocateHeap");
        assert!(
            f.target_ordinal.is_none(),
            "by-name forward has no numeric ordinal"
        );
    }

    #[test]
    fn test_pe_forwarded_export_by_ordinal() {
        let pe = pe64_with_forwarded_exports();
        let img = PeLoader::load(&pe).expect("PE with forwarded exports must parse");
        let f = img
            .forwarded_export("ZwQuerySystem")
            .expect("ZwQuerySystem forwarder must be surfaced");
        assert_eq!(f.target_dll, "NTDLL");
        assert_eq!(f.target_symbol, "#142");
        assert_eq!(f.target_ordinal, Some(142));
        // Both forwarders should be present and the eager `.symbols` map
        // should NOT contain them (the high-level exports iterator drops
        // forwarders, by design).
        assert_eq!(img.forwarded_exports.len(), 2);
    }

    // ---------------------------------------------------------------------
    // t173: forwarded export *resolution* — build a PE that exports two
    // forwarders AND imports those same names from its own DLL, then
    // verify [`BinaryImage::forwarded_resolutions`] maps each IAT slot VA
    // onto the resolved `target_dll!target_symbol` (ordinal forwards keep
    // their `#N` form).
    // ---------------------------------------------------------------------

    /// PE32+ fixture: `.text` + `.rdata` (export dir) + `.idata` (import
    /// dir). Imports two thunks from `self.dll` — `HeapAlloc` and
    /// `ZwQuerySystem` — whose names collide with the two forwarded
    /// exports also wired into the export directory.
    ///
    /// Returns `(buf, iat_va_heap_alloc, iat_va_zw_query)` so test bodies
    /// can assert on the expected IAT slot VAs without reproducing the
    /// layout math.
    fn pe64_with_self_import_of_forwarders() -> (Vec<u8>, u64, u64) {
        let nt: usize = 0x80;
        let opt_hdr_size: u16 = 16 * 8 + 112;
        let oh = nt + 24;
        let sh = oh + opt_hdr_size as usize;
        let section_count: u16 = 3;
        let section_table_end = sh + (section_count as usize) * 40;

        let text_offset: u32 = 0x400;
        let rdata_offset: u32 = 0x600;
        let rdata_size: u32 = 0x200;
        let idata_offset: u32 = 0x800;
        let idata_size: u32 = 0x200;
        let total_size: u32 = idata_offset + idata_size;
        let mut buf = vec![0u8; total_size as usize];

        // ---- DOS + NT signature ----
        buf[0] = b'M';
        buf[1] = b'Z';
        buf[0x3C..0x40].copy_from_slice(&(nt as u32).to_le_bytes());
        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);

        // ---- COFF file header ----
        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&section_count.to_le_bytes());
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        // ---- Optional header ----
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        buf[oh + 56..oh + 60].copy_from_slice(&0x5000u32.to_le_bytes());
        buf[oh + 60..oh + 64].copy_from_slice(&(section_table_end as u32).to_le_bytes());
        let dir_count: u32 = 16;
        buf[oh + 108..oh + 112].copy_from_slice(&dir_count.to_le_bytes());

        // ---- Section: .text ----
        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sh + 20..sh + 24].copy_from_slice(&text_offset.to_le_bytes());
        buf[sh + 36..sh + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE)
                .to_le_bytes(),
        );
        buf[text_offset as usize] = 0xC3;

        // ---- Section: .rdata (export directory) ----
        let rdata_rva: u32 = 0x2000;
        let sh2 = sh + 40;
        buf[sh2..sh2 + 6].copy_from_slice(b".rdata");
        buf[sh2 + 8..sh2 + 12].copy_from_slice(&rdata_size.to_le_bytes());
        buf[sh2 + 12..sh2 + 16].copy_from_slice(&rdata_rva.to_le_bytes());
        buf[sh2 + 16..sh2 + 20].copy_from_slice(&rdata_size.to_le_bytes());
        buf[sh2 + 20..sh2 + 24].copy_from_slice(&rdata_offset.to_le_bytes());
        buf[sh2 + 36..sh2 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        // ---- Section: .idata (import directory) ----
        let idata_rva: u32 = 0x3000;
        let sh3 = sh + 80;
        buf[sh3..sh3 + 6].copy_from_slice(b".idata");
        buf[sh3 + 8..sh3 + 12].copy_from_slice(&idata_size.to_le_bytes());
        buf[sh3 + 12..sh3 + 16].copy_from_slice(&idata_rva.to_le_bytes());
        buf[sh3 + 16..sh3 + 20].copy_from_slice(&idata_size.to_le_bytes());
        buf[sh3 + 20..sh3 + 24].copy_from_slice(&idata_offset.to_le_bytes());
        buf[sh3 + 36..sh3 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        // ---- Build export directory inside .rdata (same as t164 fixture) ----
        let rd = rdata_offset as usize;
        let export_dir_rva = rdata_rva;
        let funcs_off = 0x28usize;
        let names_off = 0x30usize;
        let ords_off = 0x38usize;
        let dll_name_off = 0x3Cusize;
        let fn1_name_off = 0x4Ausize;
        let fn2_name_off = 0x54usize;
        let fwd1_off = 0x62usize;
        let fwd2_off = 0x78usize;
        let blob_end = 0x84usize;
        let export_dir_size = blob_end as u32;

        buf[rd + 12..rd + 16].copy_from_slice(&(rdata_rva + dll_name_off as u32).to_le_bytes());
        buf[rd + 16..rd + 20].copy_from_slice(&1u32.to_le_bytes());
        buf[rd + 20..rd + 24].copy_from_slice(&2u32.to_le_bytes());
        buf[rd + 24..rd + 28].copy_from_slice(&2u32.to_le_bytes());
        buf[rd + 28..rd + 32].copy_from_slice(&(rdata_rva + funcs_off as u32).to_le_bytes());
        buf[rd + 32..rd + 36].copy_from_slice(&(rdata_rva + names_off as u32).to_le_bytes());
        buf[rd + 36..rd + 40].copy_from_slice(&(rdata_rva + ords_off as u32).to_le_bytes());

        buf[rd + funcs_off..rd + funcs_off + 4]
            .copy_from_slice(&(rdata_rva + fwd1_off as u32).to_le_bytes());
        buf[rd + funcs_off + 4..rd + funcs_off + 8]
            .copy_from_slice(&(rdata_rva + fwd2_off as u32).to_le_bytes());

        buf[rd + names_off..rd + names_off + 4]
            .copy_from_slice(&(rdata_rva + fn1_name_off as u32).to_le_bytes());
        buf[rd + names_off + 4..rd + names_off + 8]
            .copy_from_slice(&(rdata_rva + fn2_name_off as u32).to_le_bytes());

        buf[rd + ords_off..rd + ords_off + 2].copy_from_slice(&0u16.to_le_bytes());
        buf[rd + ords_off + 2..rd + ords_off + 4].copy_from_slice(&1u16.to_le_bytes());

        let write_cstr = |buf: &mut [u8], off: usize, s: &str| {
            buf[off..off + s.len()].copy_from_slice(s.as_bytes());
            buf[off + s.len()] = 0;
        };
        write_cstr(&mut buf, rd + dll_name_off, "kernel32.dll");
        write_cstr(&mut buf, rd + fn1_name_off, "HeapAlloc");
        write_cstr(&mut buf, rd + fn2_name_off, "ZwQuerySystem");
        write_cstr(&mut buf, rd + fwd1_off, "NTDLL.RtlAllocateHeap");
        write_cstr(&mut buf, rd + fwd2_off, "NTDLL.#142");

        // ---- Build import directory inside .idata ----
        //
        // Layout (offsets relative to `idata_offset` / `idata_rva`):
        //   +0x00  ImageImportDescriptor[0]: OFT, ts, fwd, name, FT (20 B)
        //   +0x14  ImageImportDescriptor[1]: null terminator (20 B)
        //   +0x28  Import lookup table (OFT thunks, 8 B × 2 + null) = 24 B
        //   +0x40  Import address table (FT thunks, 8 B × 2 + null) = 24 B
        //   +0x58  DLL name "self.dll\0"
        //   +0x62  hint-name "\0\0HeapAlloc\0"        (2-byte hint + str)
        //   +0x70  hint-name "\0\0ZwQuerySystem\0"
        let id = idata_offset as usize;
        let desc0_off = 0x00usize;
        let oft_off = 0x28usize;
        let ft_off = 0x40usize;
        let dll_off = 0x58usize;
        let hn1_off = 0x62usize;
        let hn2_off = 0x70usize;

        // Descriptor[0]
        // OriginalFirstThunk
        buf[id + desc0_off..id + desc0_off + 4]
            .copy_from_slice(&(idata_rva + oft_off as u32).to_le_bytes());
        // TimeDateStamp (0), ForwarderChain (0) — already zero
        // Name
        buf[id + desc0_off + 12..id + desc0_off + 16]
            .copy_from_slice(&(idata_rva + dll_off as u32).to_le_bytes());
        // FirstThunk (IAT)
        buf[id + desc0_off + 16..id + desc0_off + 20]
            .copy_from_slice(&(idata_rva + ft_off as u32).to_le_bytes());
        // Descriptor[1] = all zeroes already (null terminator)

        // OFT thunks (64-bit): two RVAs to hint-name entries, then 0
        buf[id + oft_off..id + oft_off + 8]
            .copy_from_slice(&u64::from(idata_rva + hn1_off as u32).to_le_bytes());
        buf[id + oft_off + 8..id + oft_off + 16]
            .copy_from_slice(&u64::from(idata_rva + hn2_off as u32).to_le_bytes());
        // 3rd thunk = 0 terminator

        // IAT thunks (same as OFT pre-bind)
        buf[id + ft_off..id + ft_off + 8]
            .copy_from_slice(&u64::from(idata_rva + hn1_off as u32).to_le_bytes());
        buf[id + ft_off + 8..id + ft_off + 16]
            .copy_from_slice(&u64::from(idata_rva + hn2_off as u32).to_le_bytes());

        write_cstr(&mut buf, id + dll_off, "self.dll");
        // hint-name: u16 hint (=0) then asciiz name
        buf[id + hn1_off..id + hn1_off + 2].copy_from_slice(&0u16.to_le_bytes());
        write_cstr(&mut buf, id + hn1_off + 2, "HeapAlloc");
        buf[id + hn2_off..id + hn2_off + 2].copy_from_slice(&0u16.to_le_bytes());
        write_cstr(&mut buf, id + hn2_off + 2, "ZwQuerySystem");

        // Wire EXPORT and IMPORT data directory entries.
        let export_dir_entry = oh + 112 + pe::IMAGE_DIRECTORY_ENTRY_EXPORT * 8;
        buf[export_dir_entry..export_dir_entry + 4].copy_from_slice(&export_dir_rva.to_le_bytes());
        buf[export_dir_entry + 4..export_dir_entry + 8]
            .copy_from_slice(&export_dir_size.to_le_bytes());

        let import_dir_entry = oh + 112 + pe::IMAGE_DIRECTORY_ENTRY_IMPORT * 8;
        buf[import_dir_entry..import_dir_entry + 4].copy_from_slice(&idata_rva.to_le_bytes());
        // size = two descriptors (the loader doesn't actually use this).
        buf[import_dir_entry + 4..import_dir_entry + 8].copy_from_slice(&40u32.to_le_bytes());

        // IAT slot VAs the test will assert on. FT thunks are u64-sized for
        // PE32+; slot 0 → HeapAlloc, slot 1 → ZwQuerySystem.
        let iat_heap_alloc = image_base + u64::from(idata_rva + ft_off as u32);
        let iat_zw_query = iat_heap_alloc + 8;
        (buf, iat_heap_alloc, iat_zw_query)
    }

    #[test]
    fn forwarded_resolutions_maps_iat_slot_to_target() {
        let (pe, iat_heap, _iat_zw) = pe64_with_self_import_of_forwarders();
        let img = PeLoader::load(&pe).expect("PE must parse");
        // Sanity: both forwarders surfaced as t164.
        assert_eq!(img.forwarded_exports.len(), 2);
        // The IAT slot VA for HeapAlloc must resolve to the NTDLL target.
        let resolved = img
            .forwarded_resolutions
            .get(&iat_heap)
            .expect("HeapAlloc IAT slot must be in forwarded_resolutions");
        assert_eq!(resolved, "NTDLL!RtlAllocateHeap");
    }

    #[test]
    fn forwarded_resolutions_handles_ordinal_form() {
        let (pe, _iat_heap, iat_zw) = pe64_with_self_import_of_forwarders();
        let img = PeLoader::load(&pe).expect("PE must parse");
        let resolved = img
            .forwarded_resolutions
            .get(&iat_zw)
            .expect("ZwQuerySystem IAT slot must be in forwarded_resolutions");
        // Ordinal forwards keep their `#N` form in the resolved target.
        assert_eq!(resolved, "NTDLL!#142");
    }

    /// Batch 12 slice 1: `plt_symbols` is populated with IAT slot VA →
    /// `"dll!fn"` for every named import. The `pe64_with_self_import_of_forwarders`
    /// fixture imports `HeapAlloc` and `ZwQuerySystem` from itself, so both
    /// slots must surface in `plt_symbols` regardless of forwarder semantics.
    #[test]
    fn plt_symbols_populated_from_iat_imports() {
        let (pe, iat_heap, iat_zw) = pe64_with_self_import_of_forwarders();
        let img = PeLoader::load(&pe).expect("PE must parse");
        assert!(
            !img.plt_symbols.is_empty(),
            "PE with named imports must populate plt_symbols"
        );
        let heap = img
            .plt_symbols
            .get(&iat_heap)
            .expect("HeapAlloc IAT slot must be in plt_symbols");
        // The fixture self-imports under its own filename ("self"); we only
        // need to assert the `!HeapAlloc` suffix.
        assert!(
            heap.ends_with("!HeapAlloc"),
            "expected `*!HeapAlloc`, got {heap:?}"
        );
        let zw = img
            .plt_symbols
            .get(&iat_zw)
            .expect("ZwQuerySystem IAT slot must be in plt_symbols");
        assert!(
            zw.ends_with("!ZwQuerySystem"),
            "expected `*!ZwQuerySystem`, got {zw:?}"
        );
    }

    #[test]
    fn forwarded_resolutions_empty_when_no_matching_imports() {
        // The original t164 fixture exports forwarders but doesn't import
        // them. The resolution map must therefore stay empty — proves the
        // pass only fires on actual import↔export overlap and doesn't
        // synthesise spurious entries.
        let pe = pe64_with_forwarded_exports();
        let img = PeLoader::load(&pe).expect("PE must parse");
        assert_eq!(img.forwarded_exports.len(), 2);
        assert!(
            img.forwarded_resolutions.is_empty(),
            "no imports → no resolutions, got {:?}",
            img.forwarded_resolutions
        );
    }

    // -----------------------------------------------------------------------
    // IMAGE_DIRECTORY_ENTRY_TLS — callback array recovery (t188)
    // -----------------------------------------------------------------------

    /// Build a PE64 carrying an `IMAGE_DIRECTORY_ENTRY_TLS` that resolves
    /// to one TLS callback pointing at `.text + 0`.
    ///
    /// Layout:
    /// ```text
    /// 0x000  DOS header (MZ + e_lfanew → 0x80)
    /// 0x080  PE\0\0 + COFF FH (Machine=AMD64, 2 sections, opt_hdr=240)
    /// 0x098  Optional header (PE32+, 16 data-directory slots; TLS slot set)
    /// 0x188  Section table: .text, .tls
    /// 0x200  .text raw data       (1 B: 0xC3 RET)
    /// 0x400  .tls  raw data       (40 B IMAGE_TLS_DIRECTORY64
    ///                              followed by callback array)
    /// ```
    ///
    /// Returns `(buf, image_base, expected_callback_va)`.
    fn pe64_with_tls_callbacks() -> (Vec<u8>, u64, u64) {
        let nt: usize = 0x80;
        let opt_hdr_size: u16 = 16 * 8 + 112;
        let oh = nt + 24;
        let sh = oh + opt_hdr_size as usize;
        let section_count: u16 = 2;
        let text_offset: u32 = 0x200;
        let tls_offset: u32 = 0x400;
        let tls_size: u32 = 0x200;
        let total_size: u32 = tls_offset + tls_size;
        let mut buf = vec![0u8; total_size as usize];

        // ── DOS header ─────────────────────────────────────────────
        buf[0] = b'M';
        buf[1] = b'Z';
        buf[0x3C..0x40].copy_from_slice(&(nt as u32).to_le_bytes());

        // ── PE signature + COFF FH ─────────────────────────────────
        buf[nt..nt + 4].copy_from_slice(&[b'P', b'E', 0, 0]);
        let fh = nt + 4;
        buf[fh..fh + 2].copy_from_slice(&pe::IMAGE_FILE_MACHINE_AMD64.to_le_bytes());
        buf[fh + 2..fh + 4].copy_from_slice(&section_count.to_le_bytes());
        buf[fh + 16..fh + 18].copy_from_slice(&opt_hdr_size.to_le_bytes());
        buf[fh + 18..fh + 20].copy_from_slice(&pe::IMAGE_FILE_EXECUTABLE_IMAGE.to_le_bytes());

        // ── Optional header (PE32+) ────────────────────────────────
        buf[oh..oh + 2].copy_from_slice(&pe::IMAGE_NT_OPTIONAL_HDR64_MAGIC.to_le_bytes());
        // AddressOfEntryPoint
        buf[oh + 16..oh + 20].copy_from_slice(&0x1000u32.to_le_bytes());
        // ImageBase
        let image_base: u64 = 0x0040_0000;
        buf[oh + 24..oh + 32].copy_from_slice(&image_base.to_le_bytes());
        // SectionAlignment, FileAlignment
        buf[oh + 32..oh + 36].copy_from_slice(&0x1000u32.to_le_bytes());
        buf[oh + 36..oh + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // SizeOfImage
        buf[oh + 56..oh + 60].copy_from_slice(&0x4000u32.to_le_bytes());
        // SizeOfHeaders (must cover section table)
        buf[oh + 60..oh + 64].copy_from_slice(&0x400u32.to_le_bytes());
        // NumberOfRvaAndSizes
        buf[oh + 108..oh + 112].copy_from_slice(&16u32.to_le_bytes());

        // ── IMAGE_DIRECTORY_ENTRY_TLS (index 9) → RVA 0x2000, size 40 ─
        let tls_dir_slot = oh + 112 + pe::IMAGE_DIRECTORY_ENTRY_TLS * 8;
        let tls_rva: u32 = 0x2000;
        buf[tls_dir_slot..tls_dir_slot + 4].copy_from_slice(&tls_rva.to_le_bytes());
        buf[tls_dir_slot + 4..tls_dir_slot + 8].copy_from_slice(&40u32.to_le_bytes());

        // ── Section: .text @ RVA 0x1000 ────────────────────────────
        buf[sh..sh + 5].copy_from_slice(b".text");
        buf[sh + 8..sh + 12].copy_from_slice(&0x200u32.to_le_bytes()); // VirtualSize
        buf[sh + 12..sh + 16].copy_from_slice(&0x1000u32.to_le_bytes()); // VirtualAddress
        buf[sh + 16..sh + 20].copy_from_slice(&0x200u32.to_le_bytes()); // SizeOfRawData
        buf[sh + 20..sh + 24].copy_from_slice(&text_offset.to_le_bytes());
        buf[sh + 36..sh + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_MEM_EXECUTE | pe::IMAGE_SCN_CNT_CODE)
                .to_le_bytes(),
        );

        // ── Section: .tls @ RVA 0x2000 ─────────────────────────────
        let sh2 = sh + 40;
        buf[sh2..sh2 + 4].copy_from_slice(b".tls");
        buf[sh2 + 8..sh2 + 12].copy_from_slice(&tls_size.to_le_bytes());
        buf[sh2 + 12..sh2 + 16].copy_from_slice(&tls_rva.to_le_bytes());
        buf[sh2 + 16..sh2 + 20].copy_from_slice(&tls_size.to_le_bytes());
        buf[sh2 + 20..sh2 + 24].copy_from_slice(&tls_offset.to_le_bytes());
        buf[sh2 + 36..sh2 + 40].copy_from_slice(
            &(pe::IMAGE_SCN_MEM_READ | pe::IMAGE_SCN_CNT_INITIALIZED_DATA).to_le_bytes(),
        );

        // ── .text raw data ─────────────────────────────────────────
        buf[text_offset as usize] = 0xC3;

        // ── .tls raw data: IMAGE_TLS_DIRECTORY64 (40 B) + callbacks ─
        let tls = tls_offset as usize;
        // Place the callback-pointer array at RVA 0x2040 (offset 0x40 inside .tls).
        let callbacks_rva: u32 = tls_rva + 0x40;
        let callbacks_va: u64 = image_base + u64::from(callbacks_rva);
        // StartAddressOfRawData / End / Index — zero is fine for the test.
        // AddressOfCallBacks at offset 24
        buf[tls + 24..tls + 32].copy_from_slice(&callbacks_va.to_le_bytes());
        // SizeOfZeroFill (offset 32..36), Characteristics (36..40) — zero.

        // Callback array @ offset 0x40 inside .tls: one VA, then NUL terminator.
        let expected_callback_va: u64 = image_base + 0x1000;
        buf[tls + 0x40..tls + 0x48].copy_from_slice(&expected_callback_va.to_le_bytes());
        // Bytes 0x48..0x50 already zero → null-terminator.

        (buf, image_base, expected_callback_va)
    }

    #[test]
    fn parse_synthetic_pe_with_tls_callbacks() {
        let (pe, _image_base, expected_cb) = pe64_with_tls_callbacks();
        let img =
            PeLoader::load(&pe).expect("synthetic PE64 with TLS directory must parse cleanly");
        assert_eq!(
            img.tls_callbacks.len(),
            1,
            "exactly one callback recovered before the NUL terminator, got {:?}",
            img.tls_callbacks
        );
        assert_eq!(
            img.tls_callbacks[0], expected_cb,
            "callback VA must match the absolute pointer stored in .tls"
        );
    }

    #[test]
    fn pe_without_tls_directory_has_empty_callbacks() {
        // `minimal_pe64()` sets NumberOfRvaAndSizes = 0 — there is no TLS
        // data-directory slot at all. The loader must respond by leaving
        // `tls_callbacks` empty rather than panicking or fabricating entries.
        let pe = minimal_pe64();
        let img = PeLoader::load(&pe).expect("minimal PE64 must parse");
        assert!(
            img.tls_callbacks.is_empty(),
            "PE without IMAGE_DIRECTORY_ENTRY_TLS yields empty tls_callbacks, got {:?}",
            img.tls_callbacks
        );
    }

    // -----------------------------------------------------------------------
    // t195: transitive forwarder chain resolution
    //
    // `build_forward_chain` walks the in-image `forwarded_exports` set using
    // a simple model: when one forwarder's `target_symbol` *also* appears as
    // another forwarder's source `name` in the same image, we treat that as
    // an additional hop. Termination is bounded by `FORWARD_CHAIN_MAX_HOPS`
    // and by a visited-set cycle guard.
    // -----------------------------------------------------------------------

    /// Construct a `BinaryImage` populated only with the fields
    /// `build_forward_chain` reads (`forwarded_exports`). Every other field
    /// stays at its empty/zero baseline so the test surface is just the
    /// chain-walk logic.
    fn image_with_forwards(forwards: Vec<ForwardedExport>) -> BinaryImage {
        BinaryImage {
            arch: ArchId::Unknown(0),
            endian: Endian::Little,
            entry: 0,
            sections: Vec::new(),
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            pe_mitigations: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: forwards,
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
        }
    }

    fn fwd(name: &str, target_dll: &str, target_symbol: &str) -> ForwardedExport {
        ForwardedExport {
            name: name.to_string(),
            target_dll: target_dll.to_string(),
            target_symbol: target_symbol.to_string(),
            target_ordinal: None,
        }
    }

    #[test]
    fn forward_chain_single_hop_terminates_at_root_target() {
        // Root forwards `Func1` → `LibB.Func2`. `Func2` is NOT a source name
        // in this image, so the walk terminates immediately and the chain
        // contains only the root's resolved target.
        let root = fwd("Func1", "LibB", "Func2");
        let img = image_with_forwards(vec![root.clone()]);
        let chain = build_forward_chain(&img, &root);
        assert_eq!(chain, vec!["LibB!Func2".to_string()]);
    }

    #[test]
    fn forward_chain_two_hop_follows_in_image_redirect() {
        // Root `Func1 → LibB.Func2`, and `Func2 → LibC.Func3` is also a
        // forwarder in this image (e.g. an API-set thunk). The walk follows
        // the second hop and stops because `Func3` has no further entry.
        let root = fwd("Func1", "LibB", "Func2");
        let hop2 = fwd("Func2", "LibC", "Func3");
        let img = image_with_forwards(vec![root.clone(), hop2]);
        let chain = build_forward_chain(&img, &root);
        assert_eq!(
            chain,
            vec!["LibB!Func2".to_string(), "LibC!Func3".to_string()]
        );
    }

    #[test]
    fn forward_chain_cycle_a_b_a_stops_after_two_entries() {
        // `A → LibX.B`, `B → LibX.A`. Walking from root `A`:
        //   step 0: push "LibX!B", mark `A` visited.
        //   step 1: find `B` in image, push "LibX!A", mark `B` visited.
        //   step 2: would look up `A`, but `A` is already in the visited
        //           set → cycle detected → stop.
        // Resulting chain has exactly two entries, matching the spec.
        let root = fwd("A", "LibX", "B");
        let back = fwd("B", "LibX", "A");
        let img = image_with_forwards(vec![root.clone(), back]);
        let chain = build_forward_chain(&img, &root);
        assert_eq!(
            chain,
            vec!["LibX!B".to_string(), "LibX!A".to_string()],
            "cycle A→B→A must record both hops then halt without recursing"
        );
    }

    /// Build a single `WIN_CERTIFICATE` header (8 bytes) at `offset`
    /// in `out`, then fill the payload with `payload`. Returns the
    /// byte length the entry consumed including header.
    fn write_win_cert(out: &mut Vec<u8>, revision: u16, cert_type: u16, payload: &[u8]) -> u32 {
        let total = 8 + payload.len() as u32;
        out.extend_from_slice(&total.to_le_bytes());
        out.extend_from_slice(&revision.to_le_bytes());
        out.extend_from_slice(&cert_type.to_le_bytes());
        out.extend_from_slice(payload);
        total
    }

    /// Pad `out` up to the next 8-byte boundary.
    fn pad_to_align8(out: &mut Vec<u8>) {
        while out.len() % 8 != 0 {
            out.push(0);
        }
    }

    #[test]
    fn certificate_table_walks_single_pkcs7_entry() {
        // dir_offset = 0; build one PKCS#7 v2 record with a tiny payload.
        let mut blob: Vec<u8> = Vec::new();
        write_win_cert(
            &mut blob,
            crate::image::WIN_CERT_REVISION_2_0,
            crate::image::WIN_CERT_TYPE_PKCS_SIGNED_DATA,
            &[0xAA, 0xBB, 0xCC, 0xDD],
        );
        // Pad the directory so the size is exactly a multiple of 8 —
        // matches what real PEs do.
        pad_to_align8(&mut blob);

        let (entries, malformed) =
            walk_certificate_table(&blob, 0, blob.len() as u32).expect("in-bounds");
        assert!(!malformed);
        assert_eq!(entries.len(), 1);
        let e = &entries[0];
        assert_eq!(e.file_offset, 0);
        assert_eq!(e.length, 12);
        assert_eq!(e.revision, crate::image::WIN_CERT_REVISION_2_0);
        assert_eq!(e.cert_type, crate::image::WIN_CERT_TYPE_PKCS_SIGNED_DATA);
        assert_eq!(e.data_size, 4);
    }

    #[test]
    fn certificate_table_walks_two_entries_with_padding() {
        // Two records: first one whose dwLength (10) is not 8-aligned —
        // the walker must skip 6 padding bytes to land on the next
        // header at offset 16.
        let mut blob: Vec<u8> = Vec::new();
        write_win_cert(
            &mut blob,
            crate::image::WIN_CERT_REVISION_1_0,
            crate::image::WIN_CERT_TYPE_X509,
            &[0x11, 0x22],
        );
        pad_to_align8(&mut blob);
        write_win_cert(
            &mut blob,
            crate::image::WIN_CERT_REVISION_2_0,
            crate::image::WIN_CERT_TYPE_PKCS_SIGNED_DATA,
            &[0xFF; 16],
        );
        pad_to_align8(&mut blob);

        let (entries, malformed) =
            walk_certificate_table(&blob, 0, blob.len() as u32).expect("in-bounds");
        assert!(!malformed);
        assert_eq!(entries.len(), 2);

        assert_eq!(entries[0].file_offset, 0);
        assert_eq!(entries[0].length, 10);
        assert_eq!(entries[0].cert_type, crate::image::WIN_CERT_TYPE_X509);
        assert_eq!(entries[0].data_size, 2);

        // Second header must start at the next 8-byte boundary past
        // entry-0's tail (10 → next aligned offset is 16).
        assert_eq!(entries[1].file_offset, 16);
        assert_eq!(entries[1].length, 24);
        assert_eq!(
            entries[1].cert_type,
            crate::image::WIN_CERT_TYPE_PKCS_SIGNED_DATA
        );
        assert_eq!(entries[1].data_size, 16);
    }

    #[test]
    fn certificate_table_marks_truncated_entry_as_malformed() {
        // dwLength claims 64 bytes but only 16 are in the directory.
        let mut blob: Vec<u8> = Vec::new();
        blob.extend_from_slice(&64u32.to_le_bytes());
        blob.extend_from_slice(&crate::image::WIN_CERT_REVISION_2_0.to_le_bytes());
        blob.extend_from_slice(&crate::image::WIN_CERT_TYPE_PKCS_SIGNED_DATA.to_le_bytes());
        blob.extend_from_slice(&[0; 8]);

        let (entries, malformed) =
            walk_certificate_table(&blob, 0, blob.len() as u32).expect("in-bounds");
        assert!(
            malformed,
            "claimed length 64 in a 16-byte blob must be flagged"
        );
        assert!(
            entries.is_empty(),
            "no entries should be emitted past the truncation"
        );
    }

    #[test]
    fn certificate_table_rejects_zero_dwlength() {
        // dwLength = 0 is invalid: the header itself is 8 bytes long,
        // so any record needs dwLength >= 8.
        let mut blob: Vec<u8> = Vec::new();
        blob.extend_from_slice(&0u32.to_le_bytes());
        blob.extend_from_slice(&0u16.to_le_bytes());
        blob.extend_from_slice(&0u16.to_le_bytes());

        let (entries, malformed) = walk_certificate_table(&blob, 0, 8).expect("in-bounds");
        assert!(malformed);
        assert!(entries.is_empty());
    }

    #[test]
    fn certificate_table_out_of_bounds_directory_returns_none() {
        // dir_offset+size points past the file end → None, so the
        // caller leaves `authenticode_present` false even though the
        // optional header advertises a security directory.
        let blob = vec![0u8; 32];
        assert!(walk_certificate_table(&blob, 16, 32).is_none());
    }

    #[test]
    fn certificate_table_empty_directory_yields_no_entries() {
        let blob = vec![0u8; 0];
        let (entries, malformed) =
            walk_certificate_table(&blob, 0, 0).expect("zero-length dir is in-bounds");
        assert!(!malformed);
        assert!(entries.is_empty());
    }
}
