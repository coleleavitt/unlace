//! Library-prototype seeding — the unlace analog of Ghidra's
//! `ApplyDataArchiveAnalyzer` ("Apply Data Archives").
//!
//! Ghidra ships parsed C headers as binary data-type archives (`.gdt`) and, for
//! each function whose name matches an archive entry, applies the archived
//! signature (return + parameter types) to the function. That gives an import
//! like `puts` its `int puts(char *)` prototype, so the decompiler types the
//! call's argument (a `char *`) and — combined with read-only string data — emits
//! `puts("Username: ")` instead of `puts(0x400915)`.
//!
//! The `.gdt` archives are a binary format not vendored into the unlace tree, so
//! this pass substitutes a **built-in table of the most common libc signatures**
//! (a faithful, minimal stand-in). It is the deliberate analog of the
//! dependency/data substitutions elsewhere in the port (BFD → `object`); the
//! signatures are standard C library declarations. Documented LOSS: it covers
//! only the table below, not a full header archive.
//!
//! Matching is by name against functions actually present in the object (same as
//! `ApplyDataArchiveAnalyzer` matching archive entries to program symbols); a
//! table entry with no matching function is simply not emitted. The commit seam
//! (`engine.rs::commit_analysis_output`) keeps the compatible by-name park and
//! also parks imports at every concrete address reported by the format resolver.
//! The latter is required when an IAT slot and its code veneer share a name:
//! `ActionDefaultParams` reads the prototype back by the resolved entry address.
//! If an image both imports and defines/exports the same spelling, the ambiguous
//! by-name park is suppressed while the genuine import addresses remain typed.

use std::collections::HashSet;
use std::rc::Rc;

use object::SymbolKind;
use object::read::{Object, ObjectSymbol};

use unlace_base::error::UnlaceResult;
use unlace_base::types::uint4;
use unlace_decomp::dtype::{Datatype, TypeFactory, type_metatype};
use unlace_decomp::fspec::PrototypePieces;

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

pub mod aeabisigs;
pub mod importvote;
mod libcnames;
pub mod libcsigs;
pub mod libctypes;
pub mod libgcc;
pub mod nameladder;
pub mod sdkprotos;
pub mod softfpsigs;
pub mod til;
pub mod typelib;
pub mod win32sigs;
pub mod x87intrinsics;

/// Port of `ApplyDataArchiveAnalyzer`: seed built-in libc prototypes onto matching
/// FunctionSymbols so call arguments get typed.
pub struct LibProtoPass;

/// A primitive type slot in a built-in libc signature.
///
/// Integer slots are four bytes or pointer-width for libc declarations. Compiler
/// runtime machine-mode contracts can additionally state an exact eight-byte
/// integer; that does not establish the width of libc `long long` parameters.
#[derive(Clone, Copy)]
enum Ty {
    /// `void` (return only).
    Void,
    /// `int` (4-byte signed).
    Int,
    /// `unsigned int` / `mode_t` / `uid_t` / `wint_t` (4-byte unsigned).
    UInt,
    /// `size_t` (pointer-width unsigned).
    Size,
    /// `ssize_t` / `long` / `ptrdiff_t` (pointer-width signed).
    Long,
    /// Signed DI-mode integer (exactly eight bytes in the compiler runtime ABI).
    Int64,
    /// Unsigned DI-mode integer (exactly eight bytes in the compiler runtime ABI).
    UInt64,
    /// `char *`.
    CharPtr,
    /// `char **`.
    CharPtrPtr,
    /// `int *`.
    IntPtr,
    /// `unsigned int *` (`LPDWORD`, `PDWORD`).
    UIntPtr,
    /// `wchar_t *` (`LPWSTR` / `LPCWSTR`), at the compiler spec's `wchar_size`.
    WCharPtr,
    /// `void *` (also used for `FILE *`, opaque handles).
    VoidPtr,
    /// `float` (4-byte IEEE 754 on every target these tables apply to).
    Float,
    /// Two-component complex value, only seeded on explicitly supported ABIs.
    Complex(i32),
    /// `double` (8-byte IEEE 754). `long double` has no fixed width and no Ty.
    Double,
    /// (unlace `libctypes`) A pointer to the NAMED libc/POSIX aggregate spelled by
    /// the payload (`FILE`, `stat`, `DIR`, ...), sized from
    /// [`libctypes::NAMED_AGGREGATES`].
    ///
    /// Pointer-only: no slot these tables name is taken or returned BY VALUE,
    /// because no libc declaration restated here does that. That is a property
    /// of the TABLE, not a guarantee about the emitted C. Ordinary type
    /// propagation can still carry a named type into a by-value position, and
    /// does — on `-O2` coreutils `ls` the gnulib `gettime` wrapper renders
    /// `timespec sub_10210(void) { timespec v1; clock_gettime(0,&v1); return
    /// v1; }` from the `timespec *` slot alone.
    ///
    /// What makes that rendering right is the WIDTH, not the pointer. Both
    /// hazards `analyzers::dwarf::dwarfstructs` documents are hazards of a
    /// SIZELESS aggregate: a by-value parameter the ABI classifier cannot size
    /// degrades to a raw integer, and a sizeless RETURN is classified as a
    /// hidden-return-buffer call, which grows a phantom first parameter and
    /// shifts every real one. Every name here carries its real ABI width, so
    /// the classifier answers correctly — a 16-byte `timespec` really is
    /// returned in a register pair. `rethidden` appears nowhere in the sweep
    /// corpus, where those three `gettime` wrappers are the only by-value named
    /// returns at all and nothing wider than a register pair reaches a return
    /// slot.
    NamedPtr(&'static str),
}

/// Shorthand for the one layout every `void *` table can be built under: these
/// signatures carry no [`Ty::NamedPtr`], so the value never reaches a mint.
const L: libctypes::Layout = libctypes::Layout::Opaque;

/// A built-in libc signature: return type, parameter types, and the first
/// variadic slot (`-1` if not variadic).
struct Sig {
    ret: Ty,
    params: &'static [Ty],
    vararg: i32,
}

/// The built-in libc prototype table — a faithful minimal stand-in for Ghidra's
/// `.gdt` archives. Standard C library signatures; `FILE *` is modeled as
/// `void *`. Keep entries conservative and correct.
const LIBC: &[(&str, Sig)] = &[
    // stdio
    (
        "puts",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "printf",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr],
            vararg: 1,
        },
    ),
    (
        "fputs",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "fprintf",
        Sig {
            ret: Ty::Int,
            params: &[Ty::VoidPtr, Ty::CharPtr],
            vararg: 2,
        },
    ),
    (
        "sprintf",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: 2,
        },
    ),
    (
        "snprintf",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr, Ty::Size, Ty::CharPtr],
            vararg: 3,
        },
    ),
    (
        "scanf",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr],
            vararg: 1,
        },
    ),
    (
        "sscanf",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: 2,
        },
    ),
    (
        "perror",
        Sig {
            ret: Ty::Void,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "fopen",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    // locale.h — `char *setlocale(int category, const char *locale)`.  Without
    // this prototype the call's result is an untyped `undefined8`, so a wrapper
    // whose last act is `return setlocale(cat, NULL);` (e.g. gnulib's
    // `setlocale_null_androidfix`, a tail call at -O2) loses both the recovered
    // return value and the `char *` type.  See docs/features/setlocale-rettype/.
    (
        "setlocale",
        Sig {
            ret: Ty::CharPtr,
            params: &[Ty::Int, Ty::CharPtr],
            vararg: -1,
        },
    ),
    // string.h
    (
        "strlen",
        Sig {
            ret: Ty::Size,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "strcmp",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "strncmp",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr, Ty::CharPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "strcpy",
        Sig {
            ret: Ty::CharPtr,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "strncpy",
        Sig {
            ret: Ty::CharPtr,
            params: &[Ty::CharPtr, Ty::CharPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "strcat",
        Sig {
            ret: Ty::CharPtr,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "strchr",
        Sig {
            ret: Ty::CharPtr,
            params: &[Ty::CharPtr, Ty::Int],
            vararg: -1,
        },
    ),
    (
        "strstr",
        Sig {
            ret: Ty::CharPtr,
            params: &[Ty::CharPtr, Ty::CharPtr],
            vararg: -1,
        },
    ),
    (
        "atoi",
        Sig {
            ret: Ty::Int,
            params: &[Ty::CharPtr],
            vararg: -1,
        },
    ),
    // stdlib / mem
    (
        "malloc",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size],
            vararg: -1,
        },
    ),
    (
        "calloc",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "realloc",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "free",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "memcpy",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "memmove",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "memset",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::VoidPtr, Ty::Int, Ty::Size],
            vararg: -1,
        },
    ),
    // sys/ptrace.h — `long ptrace(int request, pid_t pid, void *addr, void *data)`.
    // glibc DECLARES it variadic (`long ptrace(enum __ptrace_request, ...)`), so no
    // body analysis can derive the arity; the four fixed slots are glibc's own
    // (`sysdeps/unix/sysv/linux/ptrace.c` fetches `pid_t`, `void *`, `void *` after
    // the request with `va_arg`), which is also the call form ptrace(2) documents.
    (
        "ptrace",
        Sig {
            ret: Ty::Long,
            params: &[Ty::Int, Ty::Int, Ty::VoidPtr, Ty::VoidPtr],
            vararg: -1,
        },
    ),
];

/// The Itanium `operator new` / `operator delete` imports, by mangled name
/// (`m` = 64-bit `size_t`, `j` = 32-bit). Seeded while `cppsig` is on.
const CXX_ALLOC: &[(&str, Sig)] = &[
    (
        "_Znwm",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_Znam",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_Znwj",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_Znaj",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZnwmRKSt9nothrow_t",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "_ZnamRKSt9nothrow_t",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "_ZnwjRKSt9nothrow_t",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "_ZnajRKSt9nothrow_t",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "_ZnwmSt11align_val_t",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZnamSt11align_val_t",
        Sig {
            ret: Ty::VoidPtr,
            params: &[Ty::Size, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZdlPv",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "_ZdaPv",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr],
            vararg: -1,
        },
    ),
    (
        "_ZdlPvm",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZdaPvm",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZdlPvj",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZdaPvj",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZdlPvSt11align_val_t",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size],
            vararg: -1,
        },
    ),
    (
        "_ZdlPvmSt11align_val_t",
        Sig {
            ret: Ty::Void,
            params: &[Ty::VoidPtr, Ty::Size, Ty::Size],
            vararg: -1,
        },
    ),
];

/// Build the unlace [`Datatype`] for a [`Ty`] using the architecture's type factory.
fn build_ty(
    t: Ty,
    types: &dyn TypeFactory,
    word_size: uint4,
    layout: libctypes::Layout,
) -> UnlaceResult<Rc<Datatype>> {
    let ptr = types.get_size_of_pointer();
    match t {
        Ty::Void => types.get_type_void(),
        Ty::Int => types.get_base(4, type_metatype::TYPE_INT),
        Ty::UInt => types.get_base(4, type_metatype::TYPE_UINT),
        Ty::Size => types.get_base(ptr, type_metatype::TYPE_UINT),
        Ty::Long => types.get_base(ptr, type_metatype::TYPE_INT),
        Ty::Int64 => types.get_base(8, type_metatype::TYPE_INT),
        Ty::UInt64 => types.get_base(8, type_metatype::TYPE_UINT),
        Ty::CharPtr => {
            let c = types.get_type_char(types.get_size_of_char())?;
            types.get_type_pointer(ptr, c, word_size)
        }
        Ty::CharPtrPtr => {
            let c = types.get_type_char(types.get_size_of_char())?;
            let cp = types.get_type_pointer(ptr, c, word_size)?;
            types.get_type_pointer(ptr, cp, word_size)
        }
        Ty::IntPtr => {
            let i = types.get_base(4, type_metatype::TYPE_INT)?;
            types.get_type_pointer(ptr, i, word_size)
        }
        Ty::UIntPtr => {
            let u = types.get_base(4, type_metatype::TYPE_UINT)?;
            types.get_type_pointer(ptr, u, word_size)
        }
        Ty::WCharPtr => {
            let w = types.get_type_char(types.get_size_of_wchar())?;
            types.get_type_pointer(ptr, w, word_size)
        }
        Ty::VoidPtr => {
            let v = types.get_type_void()?;
            types.get_type_pointer(ptr, v, word_size)
        }
        Ty::Complex(size) => crate::analyzers::dwarf::dwarfcomplex::complex_type(types, size)
            .ok_or_else(|| unlace_base::error::UnlaceError::lowlevel("unsupported complex layout")),
        Ty::Float => types.get_base(4, type_metatype::TYPE_FLOAT),
        Ty::Double => types.get_base(8, type_metatype::TYPE_FLOAT),
        Ty::NamedPtr(n) => {
            let s = libctypes::named_aggregate(n, types, word_size, layout)?;
            types.get_type_pointer(ptr, s, word_size)
        }
    }
}

/// Build [`PrototypePieces`] for a single table entry.
fn build_pieces(
    name: &str,
    sig: &Sig,
    types: &dyn TypeFactory,
    word_size: uint4,
    layout: libctypes::Layout,
) -> UnlaceResult<PrototypePieces> {
    let outtype = Some(build_ty(sig.ret, types, word_size, layout)?);
    let mut intypes = Vec::with_capacity(sig.params.len());
    for p in sig.params {
        intypes.push(build_ty(*p, types, word_size, layout)?);
    }
    let innames = vec![String::new(); intypes.len()];
    Ok(PrototypePieces {
        name: name.to_string(),
        outtype,
        intypes,
        innames,
        first_var_arg_slot: sig.vararg,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: libcnames::library_names(name)
            .filter(|n| n.params.len() == sig.params.len()),
    })
}

/// (unlace) The named-aggregate layout this image's built-in prototypes are built
/// under: the `libctypes` gate, narrowed by whether the aggregate widths are
/// true of THIS object (`Off` when they are not) and then by whether the
/// published glibc layouts are.
///
/// The decision `LibcTypesPass` makes, factored out so a second consumer
/// (`formatstring static`, which must spell `fprintf`'s `FILE *` exactly as the
/// callee's own parked prototype does) cannot drift from it.
pub(crate) fn effective_libctypes_layout(
    file: &object::File,
) -> unlace_decomp::libctypes::LibcTypesLayout {
    use unlace_decomp::libctypes::LibcTypesLayout as L;
    match unlace_decomp::libctypes::libctypes_layout() {
        L::Off => L::Off,
        _ if !libctypes::glibc::target_takes_the_widths(file) => L::Off,
        L::Glibc if libctypes::glibc::target_is_glibc_x86_64(file) => L::Glibc,
        L::Streams if libctypes::glibc::target_is_glibc_x86_64(file) => L::Streams,
        // `streams` is `opaque` plus FILE's published fields, which need the same
        // target as `glibc`; elsewhere it is exactly `opaque`.
        L::Streams => L::Opaque,
        _ => L::Opaque,
    }
}

/// (unlace `formatstring static`) The table names whose last fixed parameter is a
/// `char *` and whose varargs are nevertheless NOT governed by it. `execlp`'s is
/// `argv[0]`, not a format — every other variadic in the tables is excluded
/// structurally (its last fixed slot is an `int` or a `size_t`).
const NOT_FORMAT_VARIADICS: &[&str] = &["execl", "execle", "execlp"];

/// (unlace `formatstring static`) The built-in prototype for a VARIADIC
/// format-taking libc function, plus the parameter index its format string
/// occupies — or `None` when neither table knows the name, or knows it as
/// something else.
///
/// The predicate is the tables' own data, not a name list: a signature qualifies
/// when it declares a first-variadic slot (`vararg >= 1`) and the fixed parameter
/// immediately before it is a `char *`. That is Ghidra's
/// `usesVariadicFormatString` read off the declaration instead of off a recovered
/// prototype, and it is what keeps `execlp`/`fcntl`/`ioctl`/`open` — variadic, but
/// not format-taking — out while admitting the `err`/`warn`/`error`/`syslog`
/// families the `printf`/`scanf` substring test never matched.
///
/// `layout` selects the same named-aggregate spelling the load-time prototype
/// passes install, so a `fprintf` override carries the very `FILE *` the callee's
/// own parked prototype does.
pub(crate) fn variadic_format_prototype(
    name: &str,
    types: &dyn TypeFactory,
    word_size: uint4,
    layout: unlace_decomp::libctypes::LibcTypesLayout,
) -> Option<(PrototypePieces, usize)> {
    if NOT_FORMAT_VARIADICS.contains(&name) {
        return None;
    }
    let named = if layout == libctypes::Layout::Off {
        None
    } else {
        libctypes::declared_named_prototype(name)
    };
    let sig = match named {
        Some(sig) => sig,
        None => LIBC
            .iter()
            .chain(libcsigs::LIBC_EXT.iter())
            .find(|(n, _)| *n == name)
            .map(|(_, sig)| sig)?,
    };
    if sig.vararg < 1 || (sig.vararg as usize) != sig.params.len() {
        return None;
    }
    let slot = sig.params.len() - 1;
    if !matches!(sig.params[slot], Ty::CharPtr) {
        return None;
    }
    let pieces = build_pieces(name, sig, types, word_size, layout).ok()?;
    Some((pieces, slot))
}

/// Imported function names paired with every concrete address the format
/// resolver associates with them. A PE import normally contributes both its IAT
/// slot and its `FF 25` veneer.
pub(crate) fn resolved_import_addrs(file: &object::File, bytes: &[u8]) -> Vec<(String, u64)> {
    crate::loader::format::resolve_imports(file, bytes)
        .into_iter()
        .filter(|sym| sym.kind == crate::loader::format::ImportSymKind::Import)
        .filter_map(|imp| {
            String::from_utf8(imp.name)
                .ok()
                .map(|name| (name, imp.addr))
        })
        .collect()
}

/// Add address-keyed prototypes for the resolver entries whose names occur in
/// `table`. The compatible by-name streams are emitted separately by each pass.
fn seed_resolved_prototypes(
    out: &mut AnalysisOutput,
    imports: &[(String, u64)],
    table: &[(&str, Sig)],
    types: &dyn TypeFactory,
    word_size: uint4,
    layout: libctypes::Layout,
) {
    for (name, addr) in imports {
        let Some((_, sig)) = table.iter().find(|(candidate, _)| *candidate == name) else {
            continue;
        };
        if let Ok(pieces) = build_pieces(name, sig, types, word_size, layout) {
            out.prototypes_at.push((*addr, pieces));
        }
    }
}

/// Add compatible by-name prototypes for names which may be resolved without
/// ambiguity. Address-keyed prototypes are emitted separately.
fn seed_named_prototypes(
    out: &mut AnalysisOutput,
    names: &HashSet<String>,
    table: &[(&str, Sig)],
    types: &dyn TypeFactory,
    word_size: uint4,
    layout: libctypes::Layout,
    ladder: bool,
) {
    for (name, sig) in table {
        if !names.contains(*name) {
            continue;
        }
        if let Ok(pieces) = build_pieces(name, sig, types, word_size, layout) {
            out.prototypes.push(pieces);
        }
    }
    if !ladder {
        return;
    }
    let mut spelled: Vec<&String> = names
        .iter()
        .filter(|n| table.iter().all(|(t, _)| t != n))
        .collect();
    spelled.sort_unstable();
    for present in spelled {
        let hit = nameladder::fallbacks(present)
            .into_iter()
            .find_map(|f| table.iter().find(|(t, _)| *t == f));
        if let Some((_, sig)) = hit
            && let Ok(pieces) = build_pieces(present, sig, types, word_size, layout) {
                out.prototypes.push(pieces);
            }
    }
}

/// (unlace `declaredlibcproto`) The built-in signature for a function name the
/// OPERATOR declared, or `None` when neither table knows the name.
///
/// The two load-time passes match a name the *image* carries: [`LibProtoPass`]
/// over the object's own FUNC symbols and imports, [`libcsigs::LibcSigsPass`]
/// over the imports alone. Neither can answer for a name that exists only because
/// a caller said so (`--define-function 0x8048968=ptrace` on a stripped, statically
/// linked image), which is precisely the reverse-engineering case: the symbol table
/// is gone, the operator has identified the callee, and the arity is still unknown.
///
/// Both tables are searched here, the imports-only restriction included. That
/// restriction exists because a *coincidental* spelling must not retype a function
/// the image defines itself — a judgement about evidence, and the evidence is
/// different when a human or an agent has named the entry outright.
pub fn declared_libc_prototype(
    name: &str,
    types: &dyn TypeFactory,
    word_size: uint4,
    layout: unlace_decomp::libctypes::LibcTypesLayout,
) -> Option<PrototypePieces> {
    // (unlace `libctypes`) The named-aggregate form of the same signature when that
    // gate is on, so a declared `fopen` agrees with what the load-time pass parks
    // on an imported one. A named signature that cannot be built -- the image
    // holds `stat` as its own 24-byte struct, say -- degrades to the width-stable
    // one rather than withdrawing the prototype, which is what the load-time pass
    // does too (it skips the named slot and the `void *` seeding still stands).
    //
    // `layout` is the CALLER's, and the only caller that may pass `Glibc` is the
    // console, which passes on the load-time pass's own target decision
    // (`AnalysisOutput::libctypes_glibc`). It cannot be re-derived here: the
    // object file is out of reach by the time a `--define-function` directive is
    // answered, and the program alone cannot stand in for it -- a MIPS32 image's
    // DWARF `stat` also puts `st_dev` at offset 0. `Off` is how the console
    // passes on a target whose ABI the aggregate widths are not measured for.
    let named = if layout == libctypes::Layout::Off {
        None
    } else {
        libctypes::declared_named_prototype(name)
    };
    if let Some(sig) = named
        && let Ok(pieces) = build_pieces(name, sig, types, word_size, layout) {
            return Some(pieces);
        }
    let sig = LIBC
        .iter()
        .chain(libcsigs::LIBC_EXT.iter())
        .find(|(n, _)| *n == name)
        .map(|(_, sig)| sig)?;
    build_pieces(name, sig, types, word_size, layout).ok()
}

/// Whether a built-in table declares `name`, so no other source types it.
pub(crate) fn has_builtin_prototype(name: &str) -> bool {
    LIBC.iter()
        .chain(libcsigs::LIBC_EXT.iter())
        .any(|(n, _)| *n == name)
        || libctypes::declared_named_prototype(name).is_some()
}

/// Collect the set of FUNC symbol names present in the object — the names the
/// prototype table is matched against. Two format-neutral sources, unioned:
///
/// 1. defined/declared FUNC symbols (`.symtab` + `.dynsym` on ELF; the COFF
///    symtab on PE/COFF; `LC_SYMTAB` on Mach-O), `@VERSION` stripped;
/// 2. the §3 import resolver (`resolve_imports`): PE IAT/INT, Mach-O `__stubs`.
///    This is the source that matters on a **stripped** PE (no symtab `puts`)
///    and on Mach-O (the import `printf` is named by the `__stubs` walk, not a
///    `SymbolKind::Text` entry) — `ApplyDataArchiveAnalyzer` matches archive
///    entries to the program's *functions*, which on these formats include the
///    resolved imports.
///
/// libc/msvcrt names are unmangled, so demangling is a no-op here.
fn present_function_names(file: &object::File, bytes: &[u8]) -> HashSet<String> {
    let mut present = HashSet::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        if let Ok(n) = sym.name()
            && let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) {
                present.insert(n);
            }
    }
    // The resolved format symbols (PE IAT/exports, Mach-O stubs/exports). On
    // ELF this overlaps the `.dynsym` set already collected (`elf_plt` names the
    // PLT stub by the same `.dynstr` name), so the union is a no-op there — ELF
    // behavior unchanged. Exports make a name present but are also definition
    // evidence: a same-named import/definition collision is removed later from
    // the otherwise-compatible by-name stream. `resolved_import_addrs` rejects
    // exports from exact address locking.
    for sym in crate::loader::format::resolve_imports(file, bytes) {
        if let Ok(name) = String::from_utf8(sym.name) {
            present.insert(name);
        }
    }
    present
}

/// Collect every function spelling for which the image supplies its own
/// definition. Resolver exports matter here because stripped PE and Mach-O
/// images need not carry an ordinary text symbol for the exported function.
fn defined_function_names(file: &object::File, bytes: &[u8]) -> HashSet<String> {
    let mut defined = HashSet::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text || sym.is_undefined() {
            continue;
        }
        if let Ok(n) = sym.name()
            && let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) {
                defined.insert(n);
            }
    }
    for sym in crate::loader::format::resolve_imports(file, bytes) {
        if sym.kind != crate::loader::format::ImportSymKind::Export {
            continue;
        }
        if let Ok(name) = String::from_utf8(sym.name) {
            defined.insert(name);
        }
    }
    defined
}

/// Collect imported function spellings from ordinary undefined symbols and the
/// format resolver. This is intentionally the broad evidence set, before any
/// same-spelled definition is used to suppress ambiguous by-name parking.
fn imported_function_names(file: &object::File, bytes: &[u8]) -> HashSet<String> {
    let mut imported = HashSet::new();
    for sym in file.symbols().chain(file.dynamic_symbols()) {
        if sym.kind() != SymbolKind::Text || !sym.is_undefined() {
            continue;
        }
        if let Ok(n) = sym.name()
            && let Ok(n) = String::from_utf8(crate::loader::elf_plt::strip_version(n.as_bytes())) {
                imported.insert(n);
            }
    }
    imported.extend(
        resolved_import_addrs(file, bytes)
            .into_iter()
            .map(|(name, _)| name),
    );
    imported
}

/// Remove only names which are simultaneously imported and defined. A global
/// by-name prototype cannot distinguish those functions, while an address-keyed
/// prototype can and remains safe on each genuine import resolver address.
fn retain_unambiguous_names(
    candidates: &mut HashSet<String>,
    imported: &HashSet<String>,
    defined: &HashSet<String>,
) {
    candidates.retain(|name| !(imported.contains(name) && defined.contains(name)));
}

/// The names this image DEFINES and does not also import — the mirror of
/// `loaded_function_names(..., true)`, and the only set that can tell a
/// linked-in copy of a library function from a call into the system one.
///
/// `loaded_function_names(..., false)` cannot: it is the union, minus the
/// collisions, so an ordinary import is in it.
fn unambiguous_defined_function_names(
    file: &object::File,
    bytes: &[u8],
    reloc_imports: &[(String, u64)],
) -> HashSet<String> {
    let mut defined = defined_function_names(file, bytes);
    let mut imported = imported_function_names(file, bytes);
    imported.extend(reloc_imports.iter().map(|(name, _)| name.clone()));
    let defined_evidence = defined.clone();
    retain_unambiguous_names(&mut defined, &imported, &defined_evidence);
    defined
}

/// Extend resolver addresses with proven ELF code externs retained by `reloc_symbols`.
pub(crate) fn loaded_import_addrs(
    file: &object::File,
    bytes: &[u8],
    image: &crate::loadimage_object::ObjectLoadImage,
) -> (Vec<(String, u64)>, Vec<(String, u64)>) {
    let mut imports = resolved_import_addrs(file, bytes);
    let mut reloc_imports = Vec::new();
    if file.format() != object::BinaryFormat::Elf || image.reloc_symbols().is_empty() {
        return (imports, reloc_imports);
    }
    let mut seen: HashSet<_> = imports.iter().cloned().collect();
    for sym in image.reloc_symbols().iter().filter(|sym| sym.undefined) {
        let name = crate::loader::elf_plt::strip_version(sym.name.as_bytes());
        let imported = (String::from_utf8_lossy(&name).into_owned(), sym.vma);
        if seen.insert(imported.clone()) {
            imports.push(imported.clone());
            reloc_imports.push(imported);
        }
    }
    (imports, reloc_imports)
}

/// Preserve import/definition ambiguity checks after adding proven code externs.
fn loaded_function_names(
    file: &object::File,
    bytes: &[u8],
    reloc_imports: &[(String, u64)],
    imported_only: bool,
) -> HashSet<String> {
    let mut imported = imported_function_names(file, bytes);
    imported.extend(reloc_imports.iter().map(|(name, _)| name.clone()));
    let defined = defined_function_names(file, bytes);
    let mut names = if imported_only {
        imported.clone()
    } else {
        present_function_names(file, bytes)
    };
    if !imported_only {
        names.extend(reloc_imports.iter().map(|(name, _)| name.clone()));
    }
    retain_unambiguous_names(&mut names, &imported, &defined);
    names
}

impl AnalysisPass for LibProtoPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "libproto"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        // Format-agnostic (PR-10): the libc/msvcrt name match reads neutral data
        // (`present_function_names` unions the FUNC symbols with the §3 import
        // resolver's names), so it fires on ELF/PE/COFF/Mach-O alike — no format
        // branch. On a PE a `printf` import then types its first arg `char *`, so
        // `printf("%d\n", …)` renders the literal instead of `printf(0x…, …)`.
        let mut out = AnalysisOutput::default();
        let (imports, reloc_imports) = loaded_import_addrs(
            ctx.file,
            ctx.bytes,
            ctx.image.expect("load-time analysis image"),
        );
        let present = loaded_function_names(ctx.file, ctx.bytes, &reloc_imports, false);
        let types = ctx.arch.types();
        let (_addr_size, word_size) = ctx.arch.data_org();
        seed_named_prototypes(
            &mut out,
            &present,
            LIBC,
            types,
            word_size,
            L,
            unlace_decomp::loadoptions::nameladder_enabled(),
        );
        seed_resolved_prototypes(&mut out, &imports, LIBC, types, word_size, L);
        if ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::cppsig::CppSigMode>()
            .enabled()
        {
            seed_named_prototypes(
                &mut out,
                &present,
                CXX_ALLOC,
                types,
                word_size,
                L,
                unlace_decomp::loadoptions::nameladder_enabled(),
            );
            seed_resolved_prototypes(&mut out, &imports, CXX_ALLOC, types, word_size, L);
        }
        out.c_runtime_imports = crate::loader::pe_iat::c_runtime_import_names(ctx.bytes);
        out
    }
}

#[cfg(test)]
mod tests;
