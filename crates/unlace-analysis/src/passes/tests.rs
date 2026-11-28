use std::cell::Cell;

use super::*;
use crate::pass::AnalysisPass;
use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;

struct DummyImage;

impl LoadImage for DummyImage {
    fn get_file_name(&self) -> &str {
        "dummy"
    }

    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> UnlaceResult<()> {
        Err(UnlaceError::data_unavail("dummy"))
    }

    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }

    fn adjust_vma(&mut self, _adjust: i64) {}
}

fn test_arch() -> Architecture {
    let sleigh = Sleigh::new(Box::new(DummyImage), Box::new(ContextInternal::new()));
    Architecture::new("test:LE:32", sleigh)
}

fn ids(passes: &[Box<dyn AnalysisPass>]) -> Vec<&'static str> {
    passes.iter().map(|p| p.id()).collect()
}

/// The format every existing pass-set test uses as its base. It was chosen
/// because `rtti` is PE-gated and `objc` is Mach-O-gated, so an ELF carried
/// neither; since `itaniumrtti` it is no longer format-*neutral* — an ELF
/// carries exactly that one format-gated pass, which the tests below account
/// for explicitly.
const NON_PE: object::BinaryFormat = object::BinaryFormat::Elf;

#[test]
fn disabled_dispatch_does_not_invoke_consumer() {
    let calls = Cell::new(0);
    let output = dispatch_if_enabled(false, || {
        calls.set(calls.get() + 1);
        7
    });
    assert_eq!(output, None);
    assert_eq!(calls.get(), 0);

    let output = dispatch_if_enabled(true, || {
        calls.set(calls.get() + 1);
        7
    });
    assert_eq!(output, Some(7));
    assert_eq!(calls.get(), 1);
}

#[test]
fn listing_consumer_schedule_pairs_each_pass_with_its_option() {
    let mut arch = test_arch();
    arch.unlace_options
        .set(unlace_decomp::analysisgates::NoreturnDisc(false));
    arch.unlace_options
        .set(unlace_decomp::analysisgates::NoreturnPropagate(true));
    arch.unlace_options.set(unlace_decomp::analysisgates::Fid {
        on: false,
        strict: false,
    });
    arch.unlace_options
        .set(unlace_decomp::analysisgates::Itaniumrtti(true));
    arch.unlace_options
        .set(unlace_decomp::formatstring::FormatStringMode::Off);
    arch.unlace_options
        .set(unlace_decomp::goitabcalls::GoItabCalls(false));

    let schedule: Vec<(&str, bool)> = listing_consumer_passes(&arch)
        .into_iter()
        .map(|(enabled, pass)| (pass.id(), enabled))
        .collect();

    assert_eq!(
        schedule,
        vec![
            ("noreturn_disc", false),
            ("noreturn_propagate", true),
            ("fid", false),
            ("itaniumrtti", true),
            ("flirt", false),
            ("syscallwrappers", true),
            ("formatstring", false),
            ("goitabargs", false)
        ]
    );

    // `static` asks for the load-time resolver on x86 and `full` on every
    // target; `off` never does.
    use unlace_decomp::formatstring::FormatStringMode::{Full, Off, Static};
    for (archid, mode, want) in [
        ("x86:LE:64:default:gcc", Static, true),
        ("x86:LE:64:default:gcc", Full, true),
        ("x86:LE:64:default:gcc", Off, false),
        ("AARCH64:LE:64:v8A:default", Static, false),
        ("AARCH64:LE:64:v8A:default", Full, true),
    ] {
        arch.archid = archid.to_string();
        arch.unlace_options.set(mode);
        let enabled = listing_consumer_passes(&arch)
            .into_iter()
            .find(|(_, pass)| pass.id() == "formatstring")
            .map(|(enabled, _)| enabled);
        assert_eq!(enabled, Some(want), "{archid} {}", mode.as_str());
    }
}

/// `passes_for(Unknown, non-PE)` MUST be exactly today's `default_passes()`
/// contents — the no-Rust default must never silently drop a pass (the guard the
/// sourcelang brief calls for).
#[test]
fn unknown_matches_default_passes() {
    assert_eq!(
        ids(&passes_for(Compiler::Unknown, NON_PE)),
        ids(&default_passes())
    );
    // Both must still carry the always-on analysis passes.
    let want = ["noreturn_known", "libproto"];
    for id in want {
        assert!(
            ids(&default_passes()).contains(&id),
            "default_passes must include {id}"
        );
    }
}

/// Compilers with no language pack select the same pass set. Go carries its
/// two Go-only passes (the next test), and Rust appends `fatstrrecords`
/// (the `&str`-record string pass) then `panicloc` (the panic `Location`
/// records) — exactly two passes, at the end, so the base set is
/// byte-identical underneath.
#[test]
fn non_go_compilers_have_same_pass_ids() {
    let base = ids(&passes_for(Compiler::Gcc, NON_PE));
    for c in [Compiler::Clang, Compiler::Unknown] {
        assert_eq!(
            ids(&passes_for(c, NON_PE)),
            base,
            "{c:?} pass ids must match the base set"
        );
    }
    // Swift adds its metadata pass after the base (the next test but one).
    let swift = ids(&passes_for(Compiler::Swift, NON_PE));
    assert_eq!(
        &swift[..base.len()],
        &base[..],
        "Swift set is the base set + extras"
    );
    let rust = ids(&passes_for(Compiler::Rustc, NON_PE));
    assert_eq!(
        &rust[..base.len()],
        &base[..],
        "Rust set is the base set + extras"
    );
    assert_eq!(
        rust.get(base.len()),
        Some(&"fatstrrecords"),
        "Rust appends the record pass"
    );
    assert_eq!(
        rust.get(base.len() + 1),
        Some(&"strcodelen"),
        "then the code-side length finder"
    );
    assert_eq!(
        rust.last(),
        Some(&"panicloc"),
        "then the panic Location pass"
    );
    assert_eq!(rust.len(), base.len() + 3, "Rust adds exactly three passes");
    // No compiler without a string-record arm carries the record pass
    // (Go carries it too — the next test), and only Rust the Location pass.
    for c in [
        Compiler::Gcc,
        Compiler::Clang,
        Compiler::Swift,
        Compiler::Unknown,
        Compiler::Go,
    ] {
        let set = ids(&passes_for(c, NON_PE));
        assert!(
            c == Compiler::Go || !set.contains(&"fatstrrecords"),
            "{c:?} must not carry fatstrrecords"
        );
        assert!(!set.contains(&"panicloc"), "{c:?} must not carry panicloc");
    }
}

/// The Go pass set is exactly the base set plus the four Go-arm passes:
/// `fatstrrecords` (the string-record pass's Go arm), then `gonoreturn`
/// (the pclntab no-return list), then `gotypes` (the runtime-type
/// harvest), then `gopclntab` (the function-name recovery, keeping its
/// appended-last contract); no other compiler carries the Go-only ones.
/// `gopcln` runs deferred ([`run_gopcln`]), so no pass set carries it.
#[test]
fn go_adds_only_the_four_go_passes() {
    let base = ids(&passes_for(Compiler::Gcc, NON_PE));
    let go = ids(&passes_for(Compiler::Go, NON_PE));
    assert_eq!(
        &go[..base.len()],
        &base[..],
        "Go set is the base set + extras"
    );
    assert_eq!(
        go.last(),
        Some(&"gopclntab"),
        "Go appends the gopclntab pass last"
    );
    assert_eq!(
        go.get(go.len() - 2),
        Some(&"gotypes"),
        "gotypes precedes gopclntab"
    );
    assert_eq!(
        go.get(go.len() - 3),
        Some(&"gonoreturn"),
        "gonoreturn precedes gotypes"
    );
    assert_eq!(
        go.get(go.len() - 4),
        Some(&"fatstrrecords"),
        "the record pass opens the Go block"
    );
    assert_eq!(go.len(), base.len() + 4, "Go adds exactly four passes");
    assert!(
        !go.contains(&"gopcln") && !go.contains(&"gopcln_lines"),
        "gopcln runs deferred, not at load"
    );
    // No non-Go compiler carries the Go-only passes.
    for c in [
        Compiler::Gcc,
        Compiler::Rustc,
        Compiler::Clang,
        Compiler::Swift,
        Compiler::Unknown,
    ] {
        let set = ids(&passes_for(c, NON_PE));
        assert!(
            !set.contains(&"gopclntab"),
            "{c:?} must not carry gopclntab"
        );
        assert!(
            !set.contains(&"gopcln") && !set.contains(&"gopcln_lines"),
            "{c:?} must not carry gopcln"
        );
        assert!(
            !set.contains(&"gonoreturn"),
            "{c:?} must not carry gonoreturn"
        );
        assert!(!set.contains(&"gotypes"), "{c:?} must not carry gotypes");
    }
}

/// The MSVC RTTI pass (`rtti`) is registered ONLY on a PE image — never on a
/// non-PE one — so a non-PE pass set is byte-identical to before the pass
/// existed (the parity-safety contract).
#[test]
fn rtti_pass_is_pe_gated() {
    // PE: the rtti pass is appended (after any compiler-specific extras; the
    // `pdb` pass follows it, so rtti is no longer strictly last).
    let pe = ids(&passes_for(Compiler::Clang, object::BinaryFormat::Pe));
    assert!(pe.contains(&"rtti"), "PE pass set must carry the rtti pass");
    // Non-PE: never carried, for every format + compiler.
    for fmt in [
        object::BinaryFormat::Elf,
        object::BinaryFormat::MachO,
        object::BinaryFormat::Coff,
    ] {
        for c in [
            Compiler::Gcc,
            Compiler::Clang,
            Compiler::Go,
            Compiler::Unknown,
        ] {
            assert!(
                !ids(&passes_for(c, fmt)).contains(&"rtti"),
                "{c:?}/{fmt:?} must not carry rtti"
            );
        }
    }
}

/// `image_on_disk_path` reports a load image's path only when that name is
/// really a file: a synthesized image name must not make a companion-file
/// search (the `pdb` sidecar tiers) probe the working directory.
#[test]
fn image_on_disk_path_needs_a_real_file() {
    let bin = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/pdb_prog.exe");
    let bytes = std::fs::read(bin).expect("read the PE fixture");
    let real = ObjectLoadImage::from_bytes(bin, &bytes).expect("load the PE");
    assert_eq!(image_on_disk_path(&real), Some(std::path::Path::new(bin)));

    let synthetic = ObjectLoadImage::from_bytes("ghidra_program", &bytes)
        .expect("the same bytes under a name that is not a path");
    assert_eq!(image_on_disk_path(&synthetic), None);
}

/// The Itanium RTTI pass (`itaniumrtti`) is registered ONLY on an ELF or
/// Mach-O image, the two formats of the GCC/Clang C++ ABI, as the Microsoft
/// ABI is a PE one, so a PE or COFF pass set is byte-identical to before it existed.
/// It precedes the Go `gopclntab` pass so that pass keeps its "appended last"
/// contract on a Go ELF.
#[test]
fn itaniumrtti_pass_is_elf_and_macho_gated() {
    for c in [
        Compiler::Gcc,
        Compiler::Clang,
        Compiler::Go,
        Compiler::Unknown,
    ] {
        for fmt in [object::BinaryFormat::Elf, object::BinaryFormat::MachO] {
            assert!(
                ids(&passes_for(c, fmt)).contains(&"itaniumrtti"),
                "{c:?}/{fmt:?} must carry itaniumrtti"
            );
        }
        for fmt in [object::BinaryFormat::Pe, object::BinaryFormat::Coff] {
            assert!(
                !ids(&passes_for(c, fmt)).contains(&"itaniumrtti"),
                "{c:?}/{fmt:?} must not carry itaniumrtti"
            );
        }
    }
    // It never displaces `gopclntab` from the end of a Go ELF's pass list.
    let go = ids(&passes_for(Compiler::Go, object::BinaryFormat::Elf));
    assert_eq!(go.last(), Some(&"gopclntab"));
}

/// The import-slot binding pass (`peimportcall`) is registered only where a
/// loader exposes import-pointer slots: PE/COFF, Mach-O and ELF.
#[test]
fn peimportcall_pass_is_pe_coff_macho_elf_gated() {
    for c in [
        Compiler::Gcc,
        Compiler::Clang,
        Compiler::Go,
        Compiler::Unknown,
    ] {
        for fmt in [
            object::BinaryFormat::Pe,
            object::BinaryFormat::Coff,
            object::BinaryFormat::MachO,
            object::BinaryFormat::Elf,
        ] {
            assert!(
                ids(&passes_for(c, fmt)).contains(&"peimportcall"),
                "{c:?}/{fmt:?} must carry peimportcall"
            );
        }
        {
            let fmt = object::BinaryFormat::Wasm;
            assert!(
                !ids(&passes_for(c, fmt)).contains(&"peimportcall"),
                "{c:?}/{fmt:?} must not carry peimportcall"
            );
        }
    }
}

/// Debug metadata passes stay PE-only; PDB names precede CVF names.
#[test]
fn pdb_pass_is_pe_gated() {
    let pe = ids(&passes_for(Compiler::Clang, object::BinaryFormat::Pe));
    assert!(pe.contains(&"pdb"), "PE pass set must carry the pdb pass");
    assert_eq!(
        pe[pe.len() - 4..],
        ["pdb", "pdbinterior", "cvftrace", "cvftrace_lines"],
        "PDB metadata precedes CVF metadata"
    );
    // The full-read PDB passes run at the commit, only when their gate is on.
    assert!(!pe.contains(&"pdbtypes") && !pe.contains(&"pdblines"));
    let deferred = ids(&deferred_entry_passes());
    assert!(deferred.contains(&"pdbtypes") && deferred.contains(&"pdblines"));
    // A PE carries BOTH the rtti and pdb metadata passes (rtti then pdb).
    let rtti_i = pe.iter().position(|&p| p == "rtti");
    let pdb_i = pe.iter().position(|&p| p == "pdb");
    assert!(rtti_i < pdb_i, "rtti precedes pdb on a PE");
    // Non-PE: never carried, for every format + compiler.
    for fmt in [
        object::BinaryFormat::Elf,
        object::BinaryFormat::MachO,
        object::BinaryFormat::Coff,
    ] {
        for c in [
            Compiler::Gcc,
            Compiler::Clang,
            Compiler::Go,
            Compiler::Unknown,
        ] {
            let set = ids(&passes_for(c, fmt));
            assert!(!set.contains(&"pdb"), "{c:?}/{fmt:?} must not carry pdb");
            assert!(
                !set.contains(&"pdbinterior"),
                "{c:?}/{fmt:?} must not carry pdbinterior"
            );
            assert!(
                !set.contains(&"pdbtypes") && !set.contains(&"pdblines"),
                "{c:?}/{fmt:?} must not carry pdbtypes or pdblines"
            );
            assert!(
                !set.contains(&"cvftrace"),
                "{c:?}/{fmt:?} must not carry cvftrace"
            );
            assert!(
                !set.contains(&"cvftrace_lines"),
                "{c:?}/{fmt:?} must not carry cvftrace_lines"
            );
        }
    }
}

/// The `objc` pass is registered ONLY for a Mach-O binary (the Mach-O-format
/// gate, like `gopclntab`'s Go gate): a Mach-O target carries it and every
/// other format omits it.
#[test]
fn objc_pass_registered_only_for_macho() {
    let elf = ids(&passes_for(Compiler::Clang, object::BinaryFormat::Elf));
    let macho = ids(&passes_for(Compiler::Clang, object::BinaryFormat::MachO));
    assert!(!elf.contains(&"objc"), "ELF must not carry the objc pass");
    assert!(macho.contains(&"objc"), "Mach-O must carry the objc pass");
    // Compare the format-neutral base after dropping each format's gated
    // additions: `elfgotimports` and `armbasepcs` for ELF and `authptrcall`, `arm64evcall`,
    // `stubbinds`, `cfstrings`, `machobinds`, `machodataslots` and `objc` for
    // Mach-O. Both carry `itaniumrtti`.
    let elf_neutral: Vec<&str> = elf
        .iter()
        .copied()
        .filter(|&p| p != "elfgotimports" && p != "armbasepcs")
        .collect();
    let macho_neutral: Vec<&str> = macho
        .iter()
        .copied()
        .filter(|&p| {
            !matches!(
                p,
                "authptrcall"
                    | "arm64evcall"
                    | "stubbinds"
                    | "cfstrings"
                    | "machobinds"
                    | "machodataslots"
                    | "iokitclasses"
                    | "xnutables"
                    | "osclassinfo"
                    | "objc"
            )
        })
        .collect();
    assert_eq!(
        macho_neutral, elf_neutral,
        "Mach-O and ELF must share the same format-neutral pass base"
    );
    assert_eq!(macho.last(), Some(&"objc"), "objc is appended last");
    // No non-Mach-O format carries it.
    for f in [
        object::BinaryFormat::Elf,
        object::BinaryFormat::Pe,
        object::BinaryFormat::Coff,
    ] {
        assert!(
            !ids(&passes_for(Compiler::Clang, f)).contains(&"objc"),
            "{f:?} must not carry objc"
        );
    }
}

/// The Swift metadata pass and the runtime-prototype pass are registered
/// only for a Swift image in one of the two formats Swift ships in
/// (Mach-O, ELF), after every format block, and for no other compiler or
/// format.
#[test]
fn swiftmetadata_pass_registered_for_swift_macho_and_elf_only() {
    for f in [object::BinaryFormat::MachO, object::BinaryFormat::Elf] {
        let swift = ids(&passes_for(Compiler::Swift, f));
        let base = ids(&passes_for(Compiler::Clang, f));
        assert_eq!(
            &swift[..base.len()],
            &base[..],
            "{f:?}: the Swift set is the base set + the Swift passes"
        );
        assert_eq!(
            &swift[base.len()..],
            ["swiftmetadata", "swiftruntime"],
            "{f:?}: the Swift passes close the set"
        );
    }
    for f in [object::BinaryFormat::Pe, object::BinaryFormat::Coff] {
        assert!(
            !ids(&passes_for(Compiler::Swift, f)).contains(&"swiftmetadata"),
            "{f:?} must not carry swiftmetadata"
        );
    }
    for c in [
        Compiler::Gcc,
        Compiler::Clang,
        Compiler::Rustc,
        Compiler::Go,
        Compiler::Unknown,
    ] {
        assert!(
            !ids(&passes_for(c, NON_PE)).contains(&"swiftmetadata"),
            "{c:?} must not carry swiftmetadata"
        );
    }
}

/// The arch-marker passes are registered (always-on): ARM `TMode` painting,
/// MIPS `$gp` (`t9`) recovery, and MIPS16 `ISA_MODE` painting. All gate
/// internally on their architecture, so listing them here is safe on every
/// binary.
#[test]
fn arch_marker_passes_registered() {
    let d = ids(&default_passes());
    assert!(d.contains(&"arm_markers"), "arm_markers must be registered");
    assert!(d.contains(&"mips_gp"), "mips_gp must be registered");
    assert!(d.contains(&"mips_isa"), "mips_isa must be registered");
}
