//! Signature files shipped inside the binary, chosen by the image's
//! toolchain.
//!
//! Each file is an IDASGN made with `unlace siggen` from one library build
//! (see `sig/*/README.md`). A signature names code only when the first 32
//! bytes, the CRC16 of the following bytes and any referenced names agree,
//! so applying a file of the wrong build costs time but rarely a wrong
//! name. The exception is Rust: its symbol names carry a hash that changes
//! with every release, so a `std` signature is used only for the release
//! that built the image. Go's runtime likewise changes layout each
//! release; its signature is used for the matching release only.
//!
//! [`select`] reads the image's [`ToolchainReport`] and returns the files
//! to apply: the C runtimes of the image's platform, ordered so that the
//! detected compiler's own runtime answers collisions first, plus the Rust
//! or Go standard library of the detected release.

use std::sync::{Arc, OnceLock};

use unlace_ir::{ArchId, OsAbi};
use unlace_loader::{BinaryImage, Tool, ToolVersionNumber as Version, Toolchain, ToolchainReport};

use crate::FlirtError;
use crate::match_pass::FlirtMatcher;
use crate::sig::SigFile;

/// Which platform a signature's library was built for.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Platform {
    LinuxX86_64,
    WindowsX86_64,
}

impl Platform {
    fn of(image: &BinaryImage) -> Option<Self> {
        match (image.os_abi, image.arch) {
            (OsAbi::SysV, ArchId::X86_64) => Some(Self::LinuxX86_64),
            (OsAbi::Windows, ArchId::X86_64) => Some(Self::WindowsX86_64),
            _ => None,
        }
    }
}

/// The library a bundled signature was made from.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Library {
    Glibc,
    Musl,
    /// mingw-w64 CRT (`libmingwex`, `libmingw32`, `libmsvcrt-os`, ...).
    MingwRuntime,
    Libgcc,
    Libstdcxx,
    CompilerRt,
    Libcxx,
    GoStd,
    RustStd,
    /// The MSVC CRT (`libucrt`, `libvcruntime`, `libcmt`, ...). No file is
    /// bundled yet; an MSVC image reports the toolset it would need.
    MsvcCrt,
}

/// One shipped `.sig` file.
#[derive(Debug)]
pub struct BundledSig {
    /// The file name under `sig/<platform>/`.
    pub file: &'static str,
    pub library: Library,
    pub platform: Platform,
    /// The library release the file was made from.
    pub version: Version,
    bytes: &'static [u8],
    parsed: OnceLock<Arc<SigFile>>,
}

impl BundledSig {
    /// Decode the file; the result is kept for the life of the process.
    pub fn sig(&self) -> Result<Arc<SigFile>, FlirtError> {
        if let Some(sig) = self.parsed.get() {
            return Ok(Arc::clone(sig));
        }
        let sig = Arc::new(SigFile::parse(self.bytes)?);
        Ok(Arc::clone(self.parsed.get_or_init(|| sig)))
    }

    /// The library name recorded in the file header.
    pub fn library_name(&self) -> Result<String, FlirtError> {
        Ok(self.sig()?.header.library_name.clone())
    }
}

macro_rules! bundled {
    ($($dir:literal / $file:literal => $library:ident, $platform:ident, ($major:literal, $minor:literal, $patch:literal);)*) => {
        /// Every shipped signature file.
        pub static BUNDLED: [BundledSig; 0 $(+ { let _ = $file; 1 })*] = [$(BundledSig {
            file: $file,
            library: Library::$library,
            platform: Platform::$platform,
            version: Version::new($major, $minor, $patch),
            bytes: include_bytes!(concat!("../sig/", $dir, "/", $file)),
            parsed: OnceLock::new(),
        },)*];
    };
}

bundled! {
    "linux-x86_64" / "glibc-2.43-x86_64.sig" => Glibc, LinuxX86_64, (2, 43, 0);
    "linux-x86_64" / "musl-1.2.5-zig0.15-x86_64.sig" => Musl, LinuxX86_64, (1, 2, 5);
    "linux-x86_64" / "libgcc-15-x86_64.sig" => Libgcc, LinuxX86_64, (15, 3, 0);
    "linux-x86_64" / "libstdc++-15-x86_64.sig" => Libstdcxx, LinuxX86_64, (15, 3, 0);
    "linux-x86_64" / "compiler-rt-22-x86_64.sig" => CompilerRt, LinuxX86_64, (22, 0, 0);
    "linux-x86_64" / "libc++-20-zig0.15-x86_64.sig" => Libcxx, LinuxX86_64, (20, 1, 2);
    "linux-x86_64" / "go1.26-amd64.sig" => GoStd, LinuxX86_64, (1, 26, 2);
    "linux-x86_64" / "rust-1.85.0-x86_64.sig" => RustStd, LinuxX86_64, (1, 85, 0);
    "linux-x86_64" / "rust-1.88.0-x86_64.sig" => RustStd, LinuxX86_64, (1, 88, 0);
    "linux-x86_64" / "rust-1.92.0-x86_64.sig" => RustStd, LinuxX86_64, (1, 92, 0);
    "linux-x86_64" / "rust-1.94.0-x86_64.sig" => RustStd, LinuxX86_64, (1, 94, 0);
    "linux-x86_64" / "rust-1.95.0-x86_64.sig" => RustStd, LinuxX86_64, (1, 95, 0);
    "linux-x86_64" / "rust-1.96.1-x86_64.sig" => RustStd, LinuxX86_64, (1, 96, 1);
    "linux-x86_64" / "rust-1.97.1-x86_64.sig" => RustStd, LinuxX86_64, (1, 97, 1);
    "linux-x86_64" / "rust-1.98.1-x86_64.sig" => RustStd, LinuxX86_64, (1, 98, 1);
    "windows-x86_64" / "mingw-w64-gcc15-x86_64.sig" => MingwRuntime, WindowsX86_64, (15, 2, 0);
    "windows-x86_64" / "libgcc-15-mingw-x86_64.sig" => Libgcc, WindowsX86_64, (15, 2, 0);
    "windows-x86_64" / "libstdc++-15-mingw-x86_64.sig" => Libstdcxx, WindowsX86_64, (15, 2, 0);
}

/// A standard library the image needs a signature of a specific release
/// for, and no bundled file has it.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct MissingRelease {
    pub library: Library,
    pub version: Version,
}

/// The files [`select`] chose for an image.
#[derive(Debug)]
pub struct Selection {
    pub toolchain: ToolchainReport,
    pub sigs: Vec<&'static BundledSig>,
    pub missing: Vec<MissingRelease>,
}

impl Selection {
    /// A matcher over the selected files.
    pub fn matcher(&self) -> Result<FlirtMatcher, FlirtError> {
        let mut matcher = FlirtMatcher::default();
        for bundled in &self.sigs {
            matcher.push_shared(bundled.sig()?);
        }
        Ok(matcher)
    }

    pub fn is_empty(&self) -> bool {
        self.sigs.is_empty()
    }
}

/// Choose the bundled files for `image`.
pub fn select(image: &BinaryImage) -> Selection {
    let toolchain = ToolchainReport::detect(image);
    let mut selection = Selection {
        sigs: Vec::new(),
        missing: Vec::new(),
        toolchain,
    };
    let Some(platform) = Platform::of(image) else {
        return selection;
    };
    let report = &selection.toolchain;
    let on_platform = |library: Library| {
        BUNDLED
            .iter()
            .filter(move |sig| sig.platform == platform && sig.library == library)
    };

    // The C runtimes, the detected compiler's own first.
    let gnu_first = !matches!(report.toolchain, Toolchain::Clang);
    let c_runtimes: &[Library] = match platform {
        Platform::LinuxX86_64 => {
            let musl_first = matches!(report.libc, Some(unlace_loader::Libc::Musl));
            match (musl_first, gnu_first) {
                (false, true) => &[
                    Library::Glibc,
                    Library::Musl,
                    Library::Libgcc,
                    Library::Libstdcxx,
                    Library::CompilerRt,
                    Library::Libcxx,
                ],
                (false, false) => &[
                    Library::Glibc,
                    Library::Musl,
                    Library::CompilerRt,
                    Library::Libcxx,
                    Library::Libgcc,
                    Library::Libstdcxx,
                ],
                (true, true) => &[
                    Library::Musl,
                    Library::Glibc,
                    Library::Libgcc,
                    Library::Libstdcxx,
                    Library::CompilerRt,
                    Library::Libcxx,
                ],
                (true, false) => &[
                    Library::Musl,
                    Library::Glibc,
                    Library::CompilerRt,
                    Library::Libcxx,
                    Library::Libgcc,
                    Library::Libstdcxx,
                ],
            }
        }
        // No MSVC runtime is bundled; the mingw files only name mingw code.
        Platform::WindowsX86_64 => match report.toolchain {
            Toolchain::Msvc | Toolchain::DotNet => &[],
            _ => &[Library::MingwRuntime, Library::Libgcc, Library::Libstdcxx],
        },
    };
    let is_c_family = matches!(
        report.toolchain,
        Toolchain::Gcc | Toolchain::Clang | Toolchain::Mingw | Toolchain::Rust | Toolchain::Unknown
    );
    if is_c_family {
        for &library in c_runtimes {
            selection.sigs.extend(on_platform(library));
        }
    }

    // Release-exact standard libraries.
    let release_exact = |library: Library, version: Version| {
        on_platform(library)
            .find(|sig| (sig.version.major, sig.version.minor) == (version.major, version.minor))
    };
    if let Some(version) = report.version_of(Tool::Rustc) {
        match release_exact(Library::RustStd, version) {
            Some(sig) => selection.sigs.push(sig),
            None => selection.missing.push(MissingRelease {
                library: Library::RustStd,
                version,
            }),
        }
    }
    if let Some(version) = report.version_of(Tool::Go) {
        match release_exact(Library::GoStd, version) {
            Some(sig) => selection.sigs.push(sig),
            None => selection.missing.push(MissingRelease {
                library: Library::GoStd,
                version,
            }),
        }
    }
    if let Some(version) = report.version_of(Tool::Msvc) {
        match release_exact(Library::MsvcCrt, version) {
            Some(sig) => selection.sigs.push(sig),
            None => selection.missing.push(MissingRelease {
                library: Library::MsvcCrt,
                version,
            }),
        }
    }
    selection
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_loader::{Endian, Section, SectionFlags};

    fn image(os_abi: OsAbi, arch: ArchId) -> BinaryImage {
        let mut image = BinaryImage::empty(arch, Endian::Little);
        image.os_abi = os_abi;
        image
    }

    fn comment(image: &mut BinaryImage, entries: &[&str]) {
        let mut data = vec![0u8];
        for entry in entries {
            data.extend_from_slice(entry.as_bytes());
            data.push(0);
        }
        image.sections.push(Section {
            name: ".comment".into(),
            vaddr: 0,
            size: data.len() as u64,
            data,
            flags: SectionFlags::empty(),
        });
    }

    fn libraries(selection: &Selection) -> Vec<Library> {
        selection.sigs.iter().map(|sig| sig.library).collect()
    }

    #[test]
    fn every_bundled_file_parses_for_its_platform() {
        for bundled in &BUNDLED {
            let sig = bundled
                .sig()
                .unwrap_or_else(|err| panic!("{}: {err}", bundled.file));
            assert!(!sig.modules().is_empty(), "{}", bundled.file);
            assert!(sig.header.applies_to(ArchId::X86_64), "{}", bundled.file);
            assert_eq!(
                sig.header.n_modules as usize,
                sig.modules().len(),
                "{}",
                bundled.file
            );
        }
    }

    #[test]
    fn gcc_linux_image_gets_gnu_runtimes_first() {
        let mut img = image(OsAbi::SysV, ArchId::X86_64);
        comment(
            &mut img,
            &["GCC: (Gentoo 15.2.1_p20260214 p5) 15.2.1 20260214"],
        );
        let selection = select(&img);
        assert_eq!(selection.toolchain.toolchain, Toolchain::Gcc);
        assert_eq!(
            libraries(&selection),
            vec![
                Library::Glibc,
                Library::Musl,
                Library::Libgcc,
                Library::Libstdcxx,
                Library::CompilerRt,
                Library::Libcxx,
            ]
        );
        assert!(selection.missing.is_empty());
    }

    #[test]
    fn clang_image_prefers_llvm_runtimes() {
        let mut img = image(OsAbi::SysV, ArchId::X86_64);
        comment(&mut img, &["clang version 20.1.2 (zig)"]);
        let libs = libraries(&select(&img));
        assert_eq!(&libs[2..4], &[Library::CompilerRt, Library::Libcxx]);
    }

    #[test]
    fn rust_release_is_exact_or_reported_missing() {
        let mut img = image(OsAbi::SysV, ArchId::X86_64);
        comment(&mut img, &["rustc version 1.88.0 (6b00bc388 2025-06-23)"]);
        let selection = select(&img);
        assert_eq!(selection.toolchain.toolchain, Toolchain::Rust);
        let rust: Vec<_> = selection
            .sigs
            .iter()
            .filter(|sig| sig.library == Library::RustStd)
            .map(|sig| sig.file)
            .collect();
        assert_eq!(rust, vec!["rust-1.88.0-x86_64.sig"]);
        assert!(libraries(&selection).contains(&Library::Glibc));

        let mut img = image(OsAbi::SysV, ArchId::X86_64);
        comment(
            &mut img,
            &["rustc version 1.101.0-nightly (92ffebece 2026-10-28)"],
        );
        let selection = select(&img);
        assert!(!libraries(&selection).contains(&Library::RustStd));
        assert_eq!(
            selection.missing,
            vec![MissingRelease {
                library: Library::RustStd,
                version: Version::new(1, 101, 0)
            }]
        );
    }

    #[test]
    fn go_release_selects_only_the_go_runtime() {
        let mut img = image(OsAbi::SysV, ArchId::X86_64);
        let mut data = b"\xff Go buildinf:\x08\x02".to_vec();
        data.resize(32, 0);
        data.push(8);
        data.extend_from_slice(b"go1.26.2");
        img.sections.push(Section {
            name: ".go.buildinfo".into(),
            vaddr: 0,
            size: data.len() as u64,
            data,
            flags: SectionFlags::READ,
        });
        assert_eq!(libraries(&select(&img)), vec![Library::GoStd]);
    }

    #[test]
    fn windows_images() {
        let mut img = image(OsAbi::Windows, ArchId::X86_64);
        img.string_table
            .insert(0x1000, "Mingw-w64 runtime failure:\n".into());
        assert_eq!(
            libraries(&select(&img)),
            vec![Library::MingwRuntime, Library::Libgcc, Library::Libstdcxx]
        );
        let mut img = image(OsAbi::Windows, ArchId::X86_64);
        img.rich_header = Some(unlace_loader::RichHeader {
            records: vec![unlace_loader::RichRecord {
                comp_id: (0x104 << 16) | 30133,
                count: 3,
            }],
            xor_key: 0,
        });
        let selection = select(&img);
        assert!(selection.is_empty());
        assert_eq!(
            selection.missing,
            vec![MissingRelease {
                library: Library::MsvcCrt,
                version: Version::new(19, 29, 30133)
            }]
        );
    }

    #[test]
    fn other_architectures_get_nothing() {
        assert!(select(&image(OsAbi::SysV, ArchId::AArch64)).is_empty());
    }
}
