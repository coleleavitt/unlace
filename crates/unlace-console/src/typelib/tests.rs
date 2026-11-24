//! Tests for the prebuilt type library reader ([`super`]).

use unlace_decomp::dtype::{TypeFactory, TypeFactoryImpl, type_metatype as meta};
use unlace_decomp::typelib::TypeLib;

use super::{BUILTIN, Library, Reader};
use crate::grammar::DataOrg;

const ORG: DataOrg = DataOrg {
    addr_size: 8,
    word_size: 1,
};

/// An x86-64 SysV type factory, wired the way an architecture wires it after
/// loading its compiler spec.
fn factory() -> TypeFactoryImpl {
    use std::rc::Rc;
    use unlace_base::space::{
        AddrSpace, AddrSpaceManager, ConstantSpace, addrspace_flags, spacetype,
    };
    use unlace_decomp::fspec::ProtoModel;
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(16);
    for (name, size, kind, chr) in [
        ("void", 0, meta::TYPE_VOID, false),
        ("char", 1, meta::TYPE_INT, true),
        ("bool", 1, meta::TYPE_BOOL, false),
        ("uint1", 1, meta::TYPE_UINT, false),
        ("int1", 1, meta::TYPE_INT, false),
        ("int2", 2, meta::TYPE_INT, false),
        ("uint2", 2, meta::TYPE_UINT, false),
        ("int4", 4, meta::TYPE_INT, false),
        ("uint4", 4, meta::TYPE_UINT, false),
        ("int8", 8, meta::TYPE_INT, false),
        ("uint8", 8, meta::TYPE_UINT, false),
        ("float4", 4, meta::TYPE_FLOAT, false),
        ("float8", 8, meta::TYPE_FLOAT, false),
        ("float10", 10, meta::TYPE_FLOAT, false),
        ("wchar4", 4, meta::TYPE_INT, true),
    ] {
        f.set_core_type(name, size, kind, chr).unwrap();
    }
    f.cache_core_types().unwrap();
    f.set_size_of_char(1);
    f.set_size_of_short(2);
    f.set_size_of_int(4);
    f.set_size_of_long(8);
    f.set_size_of_long_long(8);
    f.set_size_of_wchar(4);
    f.set_size_of_float(4);
    f.set_size_of_double(8);
    f.set_size_of_long_double(10);
    let mut mgr = AddrSpaceManager::new();
    mgr.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    let ram = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    );
    mgr.insert_space(Rc::new(ram)).unwrap();
    mgr.set_default_code_space(1).unwrap();
    mgr.set_default_data_space(1).unwrap();
    let mgr = Rc::new(mgr);
    let mut model = ProtoModel::new(&mgr);
    model.set_name("__cdecl");
    model.build_param_list("standard").unwrap();
    let model = Rc::new(model);
    let mut models = std::collections::BTreeMap::new();
    models.insert("__cdecl".to_string(), Rc::clone(&model));
    f.set_proto_context(Rc::clone(&mgr));
    f.set_proto_models(Some(model), models);
    f
}

/// The members of a record as `(offset, name)`.
fn fields(ty: &unlace_decomp::dtype::Datatype) -> Vec<(i32, String)> {
    (0..ty.num_depend())
        .filter_map(|i| ty.get_field(i))
        .map(|f| (f.offset, f.name.clone()))
        .collect()
}

fn builtin() -> Library<'static> {
    Library::parse(BUILTIN[0].1).unwrap()
}

const SMALL: &str = "typelib 1\ntarget linux x86_64\nsource test 1\n\
T nfds_t *\tunsigned long\n\
T handle_t m=unsigned long\tstruct handle *\n\
S pollfd * 8 4\n 0 fd\tint\n 4 events\tshort\n 6 revents\tshort\n\
S node * 16 8\n 0 next\tstruct node *\n 8 owner\tstruct tree *\n\
S tree * 8 8\n 0 root\tstruct node *\n\
S packed * 12 1\n 0 events\tunsigned int\n 4 data\tunsigned long\n\
S private m=24,8 16 8\n 0 a\tlong\n 8 b\tlong\n\
U value * 8 8\n 0 ptr\tvoid *\n 0 fd\tint\n\
F poll *\tint poll(struct pollfd *, nfds_t, int)\n\
F walk *\tint walk(struct node *, int (*)(const struct node *, void *), void *)\n\
F only_here m\tint only_here(int)\n\
F opaque *\tint opaque(struct never_defined *, struct private *, handle_t)\n\
F uses_packed *\tint uses_packed(struct packed *, union value *)\n\
F private *\tint private(int)\n\
F bad *\tint bad(struct pollfd *, no_such_type)\n";

#[test]
fn a_record_takes_the_offsets_the_library_states() {
    let lib = Library::parse(SMALL).unwrap();
    assert_eq!(
        (lib.target, lib.source, lib.counts()),
        ("linux x86_64", "test 1", (7, 8))
    );
    let f = factory();
    let mut reader = Reader::new(&lib, false, &f, ORG);
    let poll = reader.prototype("poll").unwrap();
    assert_eq!(poll.intypes.len(), 3);
    assert_eq!(poll.intypes[1].get_name(), "nfds_t");
    let pollfd = f.find_by_name("pollfd").unwrap().unwrap();
    assert_eq!((pollfd.get_size(), pollfd.is_incomplete()), (8, false));
    assert_eq!(
        fields(&pollfd),
        [
            (0, "fd".into()),
            (4, "events".into()),
            (6, "revents".into())
        ]
    );
    assert!(
        f.find_by_name("node").unwrap().is_none(),
        "only what a prototype names is interned"
    );
    assert!(reader.prototype("walk").is_some());
    let node = f.find_by_name("node").unwrap().unwrap();
    let tree = f.find_by_name("tree").unwrap().unwrap();
    assert_eq!((node.get_size(), tree.get_size()), (16, 8));
    assert_eq!(fields(&node).len(), 2);
}

#[test]
fn a_packed_record_keeps_its_measured_layout() {
    let lib = Library::parse(SMALL).unwrap();
    let f = factory();
    assert!(
        Reader::new(&lib, false, &f, ORG)
            .prototype("uses_packed")
            .is_some()
    );
    let packed = f.find_by_name("packed").unwrap().unwrap();
    assert_eq!(packed.get_size(), 12);
    assert_eq!(fields(&packed)[1].0, 4);
    let value = f.find_by_name("value").unwrap().unwrap();
    assert_eq!(
        (value.get_metatype(), value.get_size()),
        (meta::TYPE_UNION, 8)
    );
}

#[test]
fn the_other_c_library_is_offered_only_what_it_agrees_on() {
    let lib = Library::parse(SMALL).unwrap();
    let f = factory();
    let mut source = Reader::new(&lib, false, &f, ORG);
    assert!(source.prototype("only_here").is_some());
    assert!(source.prototype("opaque").is_some());
    assert_eq!(
        fields(&f.find_by_name("private").unwrap().unwrap()).len(),
        2
    );
    assert_eq!(
        f.find_by_name("never_defined").unwrap().unwrap().get_size(),
        1
    );

    let f = factory();
    let mut other = Reader::new(&lib, true, &f, ORG);
    assert!(other.prototype("only_here").is_none());
    assert!(
        other.prototype("private").is_some(),
        "a function's own name is not a type"
    );
    let opaque = other.prototype("opaque").unwrap();
    let private = f.find_by_name("private").unwrap().unwrap();
    assert_eq!((private.get_size(), private.is_incomplete()), (24, true));
    assert_eq!(opaque.intypes[2].get_size(), 8);
    assert_eq!(opaque.intypes[2].get_metatype(), meta::TYPE_UINT);
}

#[test]
fn a_held_name_is_never_redefined_and_a_bad_entry_is_only_itself() {
    let lib = Library::parse(SMALL).unwrap();
    let f = factory();
    let own = f.get_type_struct("pollfd").unwrap();
    let mut reader = Reader::new(&lib, false, &f, ORG);
    assert!(reader.prototype("bad").is_none());
    assert!(reader.prototype("missing").is_none());
    assert!(reader.prototype("poll").is_some());
    assert!(std::rc::Rc::ptr_eq(
        &own,
        &f.find_by_name("pollfd").unwrap().unwrap()
    ));
}

#[test]
fn malformed_libraries_are_refused_with_their_line() {
    for (text, want) in [
        ("", "typelib 1"),
        ("typelib 2\ntarget a\nsource b\n", "typelib 1"),
        ("typelib 1\nsource b\n", "target"),
        (
            "typelib 1\ntarget a\nsource b\nX name *\tint\n",
            "line 4: unknown entry kind",
        ),
        ("typelib 1\ntarget a\nsource b\nT name\n", "line 4"),
        (
            "typelib 1\ntarget a\nsource b\nT name ?\tint\n",
            "line 4: unknown library field",
        ),
        (
            "typelib 1\ntarget a\nsource b\n 0 fd\tint\n",
            "line 4: a member outside a record",
        ),
        (
            "typelib 1\ntarget a\nsource b\nS r * 99999999999 8\n",
            "line 4: a record size out of range",
        ),
        (
            "typelib 1\ntarget a\nsource b\nS r * 8 8\n -4 fd\tint\n",
            "line 5: a member offset out of range",
        ),
    ] {
        let err = Library::parse(text).unwrap_err();
        assert!(err.contains(want), "{text:?}: {err}");
    }
    let long = format!(
        "typelib 1\ntarget a\nsource b\nT t *\t{}\n",
        "x".repeat(5000)
    );
    assert!(
        Library::parse(&long)
            .unwrap_err()
            .contains("line 4: longer")
    );
}

#[test]
fn members_that_do_not_fit_are_holes_and_cycles_end() {
    let text = "typelib 1\ntarget a\nsource b\n\
S r * 8 4\n 0 a\tint\n 2 overlap\tint\n 6 past\tint\n 4 b\tint\n\
T loop_a *\tloop_b\nT loop_b *\tloop_a\n\
S self * 8 8\n 0 me\tstruct self\n\
F f *\tint f(struct r *, struct self *)\nF g *\tint g(loop_a)\n";
    let lib = Library::parse(text).unwrap();
    let f = factory();
    let mut reader = Reader::new(&lib, false, &f, ORG);
    assert!(reader.prototype("f").is_some());
    let r = f.find_by_name("r").unwrap().unwrap();
    assert_eq!(fields(&r), [(0, "a".into()), (4, "b".into())]);
    assert_eq!(f.find_by_name("self").unwrap().unwrap().get_size(), 8);
    assert!(reader.prototype("g").is_none());
}

/// Every entry of the built-in library is read by the grammar, for both C
/// libraries of the target, and every record lands at its stated size.
#[test]
fn the_builtin_library_reads_whole() {
    let lib = builtin();
    assert_eq!(lib.target, "linux x86_64");
    for other in [false, true] {
        let f = factory();
        let mut reader = Reader::new(&lib, other, &f, ORG);
        let mut unread = Vec::new();
        for (name, (held, text)) in &lib.functions {
            let offered = !other || *held == super::Other::Same;
            if offered && !text.contains("long double") && reader.prototype(name).is_none() {
                unread.push(*name);
            }
        }
        assert_eq!(unread, [] as [&str; 0], "other={other}");
        for (name, (_, decl)) in &lib.types {
            let super::Decl::Record { size, .. } = decl else {
                continue;
            };
            if let Some(ty) = f.find_by_name(name).unwrap()
                && !ty.is_incomplete()
            {
                assert_eq!(ty.get_size(), *size, "{name}");
            }
        }
    }
}

fn windows(target: &str) -> Library<'static> {
    let (_, text) = BUILTIN.iter().find(|(t, _)| *t == target).unwrap();
    let lib = Library::parse(text).unwrap();
    assert_eq!(lib.target, target);
    lib
}

/// Both Windows libraries parse whole, and every x86 entry is a stdcall one
/// whose keyword is left to the image's default model.
#[test]
fn the_windows_libraries_parse_and_name_their_targets() {
    for target in ["windows x86", "windows x86_64"] {
        let lib = windows(target);
        let (functions, types) = lib.counts();
        assert!(
            functions > 7000 && types > 4000,
            "{target}: {functions} {types}"
        );
        for name in [
            "CreateFileW",
            "ReadFile",
            "VirtualAlloc",
            "NtCreateFile",
            "WSAStartup",
        ] {
            assert!(lib.functions.contains_key(name), "{target}: {name}");
        }
        assert!(
            lib.functions
                .values()
                .all(|(held, text)| *held == super::Other::Same && !text.contains("__stdcall")),
            "{target}"
        );
    }
}

/// The x64 Windows library declares a Win32 import with its SDK types, and a
/// record it reaches lands at the size the SDK gives it.
#[test]
fn a_win32_import_reads_with_its_sdk_types() {
    let lib = windows("windows x86_64");
    let f = factory();
    let mut reader = Reader::new(&lib, false, &f, ORG);
    let create = reader.prototype("CreateFileW").unwrap();
    assert_eq!(create.intypes.len(), 7);
    assert_eq!(create.intypes[3].get_name(), "LPSECURITY_ATTRIBUTES");
    assert_eq!(create.outtype.as_ref().unwrap().get_name(), "HANDLE");
    let readfile = reader.prototype("ReadFile").unwrap();
    assert_eq!(readfile.intypes.len(), 5);
    let attrs = f.find_by_name("_SECURITY_ATTRIBUTES").unwrap().unwrap();
    assert_eq!(attrs.get_size(), 24);
    assert_eq!(
        fields(&attrs),
        [
            (0, "nLength".into()),
            (8, "lpSecurityDescriptor".into()),
            (16, "bInheritHandle".into())
        ]
    );
    let mut read = 0;
    for name in lib.functions.keys() {
        if reader.prototype(name).is_some() {
            read += 1;
        }
    }
    assert!(
        read * 10 >= lib.functions.len() * 9,
        "{read} of {}",
        lib.functions.len()
    );
}

/// `auto` picks the libraries IDA would load for a PE: the newest SDK or
/// driver-kit library of the image's width, the Native API library, or
/// `uefi` for an EFI image, from the directory or its `pc` subdirectory.
#[test]
fn auto_chooses_the_til_ida_would_for_a_pe() {
    let dir = std::env::temp_dir().join(format!("unlace-tildir-{}", std::process::id()));
    std::fs::create_dir_all(dir.join("pc")).unwrap();
    for name in [
        "mssdk64_win10.til",
        "pc/mssdk64_win7.til",
        "ntapi64_win10.til",
        "pc/ntddk64_win81.til",
        "pc/uefi64.til",
    ] {
        std::fs::write(dir.join(name), b"IDATIL").unwrap();
    }
    let pick = |target, subsystem| super::til_choice(&dir, target, subsystem, &[]);
    let user = pick("windows x86_64", Some(3));
    let native = pick("windows x86_64", Some(1));
    let efi = pick("windows x86_64", Some(10));
    let narrow = pick("windows x86", Some(3));
    let linux = pick("linux x86_64", None);
    std::fs::remove_dir_all(&dir).unwrap();
    assert_eq!(
        user,
        [dir.join("mssdk64_win10.til"), dir.join("ntapi64_win10.til")]
    );
    assert_eq!(
        native,
        [
            dir.join("pc/ntddk64_win81.til"),
            dir.join("ntapi64_win10.til")
        ]
    );
    assert_eq!(efi, [dir.join("pc/uefi64.til")]);
    assert!(narrow.is_empty() && linux.is_empty());
}

/// For an ELF or Mach-O, `auto` reads the first existing candidate of each
/// slot the analysis named, from the directory or by file name from the
/// subdirectory the variable points at.
#[test]
fn auto_reads_the_slots_of_a_non_pe_image() {
    let dir = std::env::temp_dir().join(format!("unlace-tilslots-{}", std::process::id()));
    std::fs::create_dir_all(dir.join("arm")).unwrap();
    for name in [
        "arm/gnulnx_arm64.til",
        "gnuunx64.til",
        "arm/macos13_sdk00_arm64.til",
        "arm/uefi64.til",
    ] {
        std::fs::write(dir.join(name), b"IDATIL").unwrap();
    }
    let s = |v: &[&str]| v.iter().map(|n| n.to_string()).collect::<Vec<_>>();
    let linux = super::til_choice(
        &dir,
        "elf aarch64",
        None,
        &[s(&["arm/gnulnx_arm64.til"]), s(&["gnuunx64.til"])],
    );
    let mac = super::til_choice(
        &dir,
        "macho aarch64",
        None,
        &[s(&[
            "arm/macos14_sdk00_arm64.til",
            "arm/macos13_sdk00_arm64.til",
        ])],
    );
    let in_arm = super::til_choice(
        &dir.join("arm"),
        "elf aarch64",
        None,
        &[s(&["arm/gnulnx_arm64.til"])],
    );
    let efi = super::til_choice(&dir, "windows aarch64", Some(10), &[]);
    let missing = super::til_choice(&dir, "elf ppc", None, &[s(&["ppc/gnulnx_ppc.til"])]);
    std::fs::remove_dir_all(&dir).unwrap();
    assert_eq!(
        linux,
        [dir.join("arm/gnulnx_arm64.til"), dir.join("gnuunx64.til")]
    );
    assert_eq!(mac, [dir.join("arm/macos13_sdk00_arm64.til")]);
    assert_eq!(in_arm, [dir.join("arm").join("gnulnx_arm64.til")]);
    assert_eq!(efi, [dir.join("arm/uefi64.til")]);
    assert!(missing.is_empty());
}

/// A name the image's own metadata states wins over signature guesses, and
/// guesses that disagree name nothing.
#[test]
fn names_beyond_imports_take_one_agreed_name_per_address() {
    use unlace_analysis::pass::FidMatch;
    let m = |addr, name: &str, by_signature| FidMatch {
        addr,
        name: name.into(),
        by_signature,
    };
    let names = super::names_beyond_imports(&[
        m(0x10, "CreateFileW", false),
        m(0x10, "sub_10", true),
        m(0x20, "memcpy", true),
        m(0x20, "memcpy", true),
        m(0x30, "strlen", true),
        m(0x30, "strnlen", true),
    ]);
    assert_eq!(
        names,
        [
            (0x10, "CreateFileW".to_string()),
            (0x20, "memcpy".to_string())
        ]
    );
}

/// A list of library files is read in order, and `off` reads none.
#[test]
fn a_list_of_files_is_read_in_order() {
    let dir = std::env::temp_dir();
    let a = dir.join(format!("unlace-typelib-src-a-{}.ktl", std::process::id()));
    let b = dir.join(format!("unlace-typelib-src-b-{}.ktl", std::process::id()));
    std::fs::write(&a, SMALL).unwrap();
    std::fs::write(&b, "typelib 1\ntarget linux x86_64\nsource second 1\n").unwrap();
    let choice = TypeLib::Files(vec![a.clone(), b.clone()]);
    let read = super::library_sources(&choice, "linux x86_64", None, &[], 8, None);
    let off = super::library_sources(&TypeLib::Off, "linux x86_64", None, &[], 8, None);
    std::fs::remove_file(&a).unwrap();
    std::fs::remove_file(&b).unwrap();
    let (sources, note) = read.unwrap();
    let labels: Vec<_> = sources.iter().map(|s| s.label.clone()).collect();
    assert_eq!(labels, [a.display().to_string(), b.display().to_string()]);
    assert!(sources[1].text.contains("source second 1"));
    assert!(note.is_none());
    assert!(off.unwrap().0.is_empty());
}

/// `auto` without a directory reads the built-in library of the target alone.
#[test]
fn auto_without_a_directory_reads_the_built_in_library() {
    let (sources, note) =
        super::library_sources(&TypeLib::Auto, "windows x86_64", Some(3), &[], 8, None).unwrap();
    assert_eq!(sources.len(), 1);
    assert_eq!(sources[0].label, "auto");
    assert!(note.is_none());
    let (none, _) = super::library_sources(&TypeLib::Auto, "elf mips", None, &[], 4, None).unwrap();
    assert!(none.is_empty());
}
