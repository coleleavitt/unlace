//! (unlace) Name the goroutine register (`docs/multilang.md`
//! W4, the Go pack's dedicated-register item).
//!
//! ## The gap it closes
//!
//! Under the register ABI every Go function carries the current goroutine in a
//! pinned register — `R14` on amd64, `x28` on arm64, exactly as the vendored
//! golang `register.info` files state (`<current_goroutine register="R14"/>`)
//! — and the runtime reads through it constantly (`stackguard0` checks the
//! `gomorestack` fold leaves in runtime internals, `g.m`, deferred-panic
//! chains). The cspec lists the register as `unaffected` and no `<pentry>`
//! names it, so unlace sees a value that is never a parameter and never written:
//! every access rendered as a phantom local (`v3; // r14`) read through
//! unexplained arithmetic.
//!
//! With the golang cspec active, the register
//! becomes a NAMED, TYPED global: its storage joins the global scope (the
//! cspec `<global><register/>` mechanism, applied unlace-side so the vendored
//! spec stays pristine) and a `g` symbol typed `runtime.g *` is mapped over
//! it, type- and name-locked. A `stackguard0` load then renders
//! `g->stackguard0`, and `g->m`, `g->_defer`, … read like the runtime source.
//!
//! ## The `runtime.g` shell
//!
//! The synthesized-shell pattern (`docs/multilang.md` W3, the `libctypes`
//! precedent): `runtime.g` and `runtime.gobuf` are interned with exactly the
//! fields whose offsets the go1.22 runtime source states for the register-ABI
//! era (`src/runtime/runtime2.go`, 64-bit layout, through `goid` at 0x98;
//! `gobuf` is seven words). Every field is word-sized except the two `u32`s
//! (`atomicstatus`, `stackLock`), so the offsets are the running sum the
//! builder computes; a unit test pins them against the source-stated values.
//! Fields past `goid` vary more across Go releases and are deliberately not
//! modeled — an access past 0xa0 renders as an offset off `g`, which is still
//! anchored and honest.
//!
//! The install runs at architecture build (right after the cspec `<global>`
//! decode). Structurally inert off-Go: it requires the golang cspec
//! (`archid` compiler field `golang`), which only `goabi auto` on a
//! Go-detected image composes.

pub use crate::architecture::{GOVERSION_ENV, GoLayout};
use unlace_base::error::UnlaceResult;
use unlace_base::types::{int4, uint4};

use crate::dtype::{TypeFactory, TypeField, type_metatype};

/// Whether a Go image built by `version` passes arguments in registers on
/// the golang-cspec architecture `archid`: from go1.17 on amd64 and go1.18 on
/// arm64. An unknown version counts as a register-ABI release.
pub fn register_abi(archid: &str, version: Option<(u16, u16)>) -> bool {
    let first = if archid.starts_with("AARCH64:") {
        (1, 18)
    } else {
        (1, 17)
    };
    version.is_none_or(|v| v >= first)
}

/// The goroutine register for a golang-cspec architecture, by SLEIGH language
/// id — the values the vendored `*.register.info` files state
/// (`<current_goroutine register=…/>`). `None` for every non-golang id, for
/// golang ids with no pinned register (x86-32 Go reaches `g` through TLS), and
/// for an image older than the register ABI, where `g` lives in thread-local
/// storage and the register is an ordinary one.
pub fn goroutine_register(archid: &str, version: Option<(u16, u16)>) -> Option<&'static str> {
    // The compiler field is the id's last `:` token; only the golang cspec
    // carries these models, and only goabi composes it.
    if !archid.ends_with(":golang") || !register_abi(archid, version) {
        return None;
    }
    // Before the register ABI reached the CPU (go1.17 on amd64, go1.18 on
    // arm64) `g` lived in thread-local storage and the register was ordinary.
    if archid.starts_with("x86:LE:64:") {
        (version.is_none_or(|v| v >= (1, 17))).then_some("R14")
    } else if archid.starts_with("AARCH64:LE:64:") {
        (version.is_none_or(|v| v >= (1, 18))).then_some("x28")
    } else {
        None
    }
}

/// One verified field of a shell: `(name, size, is_pointer)`. Offsets are the
/// running sum (everything is naturally aligned at these sizes and order).
type ShellField = (&'static str, int4, bool);

/// `runtime.gobuf` through go1.24 — seven words (go1.22 `runtime2.go`).
const GOBUF_FIELDS: &[ShellField] = &[
    ("sp", 8, false),
    ("pc", 8, false),
    ("g", 8, false),
    ("ctxt", 8, true),
    ("ret", 8, false),
    ("lr", 8, false),
    ("bp", 8, false),
];
/// `runtime.gobuf` from go1.25 — `ret` dropped (go1.25 `runtime2.go`).
const GOBUF_FIELDS_125: &[ShellField] = &[
    ("sp", 8, false),
    ("pc", 8, false),
    ("g", 8, false),
    ("ctxt", 8, true),
    ("lr", 8, false),
    ("bp", 8, false),
];

/// `runtime.g` through `goid` (go1.22 `runtime2.go`, 64-bit): the prefix whose
/// offsets are stated in the source ("offset known to liblink"). `sched` is
/// handled apart (it takes the `runtime.gobuf` shell type).
const G_FIELDS_HEAD: &[ShellField] = &[
    ("stack_lo", 8, false),    // 0x00  stack.lo
    ("stack_hi", 8, false),    // 0x08  stack.hi
    ("stackguard0", 8, false), // 0x10
    ("stackguard1", 8, false), // 0x18
    ("_panic", 8, true),       // 0x20
    ("_defer", 8, true),       // 0x28
    ("m", 8, true),            // 0x30
];
const G_FIELDS_TAIL: &[ShellField] = &[
    ("syscallsp", 8, false), // 0x70 under the baseline layout
    ("syscallpc", 8, false),
    // `syscallbp` is inserted here from go1.23 (layout-dependent).
    ("stktopsp", 8, false),
    ("param", 8, true),
    ("atomicstatus", 4, false),
    ("stackLock", 4, false),
    ("goid", 8, false),
];
/// The `syscallbp` word go1.23 inserted after `syscallpc`.
const G_SYSCALLBP: ShellField = ("syscallbp", 8, false);

/// The byte offset `sched` sits at, and the sizes the builder must reproduce.
pub const G_SCHED_OFFSET: int4 = 0x38;
/// `runtime.gobuf`'s size (seven words).
pub const GOBUF_SIZE: int4 = 0x38;
/// The modeled `runtime.g` prefix size (through `goid`, padded to its align).
pub const G_SIZE: int4 = 0xa0;

/// `runtime.gsignalStack` (`signal_unix.go`, identical in go1.22 and go1.25):
/// the embedded stack bounds plus guards the signal g borrows.
const GSIGSTACK_FIELDS: &[ShellField] = &[
    ("stack_lo", 8, false),
    ("stack_hi", 8, false),
    ("stackguard0", 8, false),
    ("stackguard1", 8, false),
    ("stktopsp", 8, false),
];
/// `runtime.gsignalStack`'s size (five words).
pub const GSIGSTACK_SIZE: int4 = 0x28;

/// `runtime.m` head (`runtime2.go`, 64-bit; field list and order identical in
/// go1.22 and go1.25 — 1.25 merely drops the explicit pad `_ uint32`, which
/// natural alignment reinserts). `g0`/`gsignal` are goroutine pointers but are
/// typed `void *` here: `runtime.g` is completed only after `runtime.m` (the
/// `g.m` field needs the finished m), and a pointer taken to a still-incomplete
/// composite would keep referring to the pre-completion type through the
/// factory's clone-and-re-key completion. The names are the readability win.
const M_FIELDS_HEAD: &[ShellField] = &[
    ("g0", 8, true), // 0x00  *g, scheduling stack
                     // 0x08 `morebuf` (a gobuf) is pushed apart, like g's `sched`.
];
/// `runtime.m` after `morebuf`: `divmod` ("known to liblink") then the
/// debugger-visible block. `goSigStack` is pushed apart (its own shell).
const M_FIELDS_MID: &[ShellField] = &[
    ("divmod", 4, false), // 0x40  arm div/mod denominator, known to liblink
    ("pad_44", 4, false), // 0x44  alignment (explicit `_ uint32` in go1.22)
    ("procid", 8, false), // 0x48
    ("gsignal", 8, true), // 0x50  *g
];
/// `runtime.m` tail after `goSigStack`: verified identical through
/// `profilehz` on go1.22.10 and go1.25.3, linux/amd64 (`sigmask` is the
/// linux `[2]uint32`; a PE Go binary's `sigset` is empty, shifting everything
/// from `tls` on — the shell is a linux/darwin-era reading aid).
const M_FIELDS_TAIL: &[ShellField] = &[
    ("sigmask", 8, false), // 0x80
    // 0x88 `tls` ([6]uintptr) is pushed apart as an array.
    ("mstartfn", 8, true),        // 0xb8
    ("curg", 8, true),            // 0xc0  *g, the running goroutine
    ("caughtsig", 8, false),      // 0xc8  guintptr (an integer, not a pointer)
    ("p", 8, false),              // 0xd0  puintptr
    ("nextp", 8, false),          // 0xd8  puintptr
    ("oldp", 8, false),           // 0xe0  puintptr
    ("id", 8, false),             // 0xe8  int64
    ("mallocing", 4, false),      // 0xf0
    ("throwing", 4, false),       // 0xf4
    ("preemptoff_ptr", 8, false), // 0xf8  string header
    ("preemptoff_len", 8, false), // 0x100
    ("locks", 4, false),          // 0x108
    ("dying", 4, false),          // 0x10c
    ("profilehz", 4, false),      // 0x110
];
/// `morebuf`'s offset inside `runtime.m`.
pub const M_MOREBUF_OFFSET: int4 = 0x08;
/// `goSigStack`'s offset inside `runtime.m`.
pub const M_GSIGSTACK_OFFSET: int4 = 0x58;
/// `tls`'s offset inside `runtime.m` ([6]uintptr).
pub const M_TLS_OFFSET: int4 = 0x88;
/// The modeled `runtime.m` prefix size (through `profilehz`, padded).
pub const M_SIZE: int4 = 0x118;

fn push_fields(
    types: &dyn TypeFactory,
    fields: &mut Vec<TypeField>,
    spec: &[ShellField],
    mut offset: int4,
) -> UnlaceResult<int4> {
    for (name, size, is_ptr) in spec {
        let ct = if *is_ptr {
            let void = types.get_base(1, type_metatype::TYPE_VOID)?;
            types.get_type_pointer(8, void, 1)?
        } else {
            types.get_base(*size, type_metatype::TYPE_UINT)?
        };
        fields.push(TypeField {
            ident: fields.len() as int4,
            offset,
            name: (*name).to_string(),
            field_type: ct,
        });
        offset += size;
    }
    Ok(offset)
}

/// Intern the `runtime.gsignalStack` + `runtime.m` shells and return
/// `runtime.m *`. Built before `runtime.g` so g's `m` field can carry the
/// completed type (see the pointer note on [`M_FIELDS_HEAD`]).
fn m_pointer_type(
    types: &dyn TypeFactory,
    gobuf: std::rc::Rc<crate::dtype::Datatype>,
    layout: GoLayout,
) -> UnlaceResult<std::rc::Rc<crate::dtype::Datatype>> {
    let gobuf_size = layout.gobuf_size();
    let sig_shell = types.get_type_struct("runtime.gsignalStack")?;
    let mut sf = Vec::new();
    let end = push_fields(types, &mut sf, GSIGSTACK_FIELDS, 0)?;
    debug_assert_eq!(end, GSIGSTACK_SIZE);
    let gsig = types.set_fields_struct_raw(&sig_shell, sf, Vec::new(), GSIGSTACK_SIZE, 8, 0)?;

    let m_shell = types.get_type_struct("runtime.m")?;
    let mut mf = Vec::new();
    let at = push_fields(types, &mut mf, M_FIELDS_HEAD, 0)?;
    debug_assert_eq!(at, M_MOREBUF_OFFSET);
    mf.push(TypeField {
        ident: mf.len() as int4,
        offset: M_MOREBUF_OFFSET,
        name: "morebuf".to_string(),
        field_type: gobuf,
    });
    let at = push_fields(types, &mut mf, M_FIELDS_MID, M_MOREBUF_OFFSET + gobuf_size)?;
    debug_assert_eq!(at, M_GSIGSTACK_OFFSET + gobuf_size - GOBUF_SIZE);
    mf.push(TypeField {
        ident: mf.len() as int4,
        offset: at,
        name: "goSigStack".to_string(),
        field_type: gsig,
    });
    let mut mid_tail = Vec::new();
    let at = push_fields(
        types,
        &mut mid_tail,
        &M_FIELDS_TAIL[..1],
        at + GSIGSTACK_SIZE,
    )?;
    for mut f in mid_tail {
        f.ident = mf.len() as int4;
        mf.push(f);
    }
    debug_assert_eq!(at, M_TLS_OFFSET + gobuf_size - GOBUF_SIZE);
    let word = types.get_base(8, type_metatype::TYPE_UINT)?;
    let tls = types.get_type_array(6, word)?;
    mf.push(TypeField {
        ident: mf.len() as int4,
        offset: at,
        name: "tls".to_string(),
        field_type: tls,
    });
    let mut tail = Vec::new();
    let end = push_fields(types, &mut tail, &M_FIELDS_TAIL[1..], at + 6 * 8)?;
    for mut f in tail {
        f.ident = mf.len() as int4;
        mf.push(f);
    }
    debug_assert_eq!(end, 0x110 + 4 + gobuf_size - GOBUF_SIZE);
    let m_size = (end + 7) & !7;
    let m = types.set_fields_struct_raw(&m_shell, mf, Vec::new(), m_size, 8, 0)?;
    types.get_type_pointer(8, m, 1)
}

/// Intern the `runtime.gobuf` + `runtime.m` + `runtime.g` shells and return
/// `runtime.g *`.
///
/// Idempotent through the factory's name-keyed interning: a second install of
/// the same layouts resolves to the already-interned types.
pub fn g_pointer_type(
    types: &dyn TypeFactory,
    layout: GoLayout,
) -> UnlaceResult<std::rc::Rc<crate::dtype::Datatype>> {
    let gobuf_shell = types.get_type_struct("runtime.gobuf")?;
    let mut gb = Vec::new();
    let table = if layout.gobuf_words == 6 {
        GOBUF_FIELDS_125
    } else {
        GOBUF_FIELDS
    };
    let end = push_fields(types, &mut gb, table, 0)?;
    debug_assert_eq!(end, layout.gobuf_size());
    let gobuf =
        types.set_fields_struct_raw(&gobuf_shell, gb, Vec::new(), layout.gobuf_size(), 8, 0)?;

    let m_ptr = m_pointer_type(types, std::rc::Rc::clone(&gobuf), layout)?;

    let g_shell = types.get_type_struct("runtime.g")?;
    let mut gf = Vec::new();
    let mid = push_fields(types, &mut gf, G_FIELDS_HEAD, 0)?;
    debug_assert_eq!(mid, G_SCHED_OFFSET);
    // `g.m` carries the completed `runtime.m *`, so `g->m->curg`-style chains
    // render named end to end.
    if let Some(mf) = gf.iter_mut().find(|f| f.name == "m") {
        mf.field_type = m_ptr;
    }
    gf.push(TypeField {
        ident: gf.len() as int4,
        offset: G_SCHED_OFFSET,
        name: "sched".to_string(),
        field_type: gobuf,
    });
    let at = push_fields(
        types,
        &mut gf,
        &G_FIELDS_TAIL[..2],
        G_SCHED_OFFSET + layout.gobuf_size(),
    )?;
    let at = if layout.syscallbp {
        push_fields(types, &mut gf, &[G_SYSCALLBP], at)?
    } else {
        at
    };
    let end = push_fields(types, &mut gf, &G_FIELDS_TAIL[2..], at)?;
    let g_size = (end + 7) & !7;
    debug_assert!(end <= g_size && g_size <= G_SIZE + 8);
    let g = types.set_fields_struct_raw(&g_shell, gf, Vec::new(), g_size, 8, 0)?;
    types.get_type_pointer(8, g, 1)
}

/// The flags the mapped `g` symbol locks: the name is the point, and the type
/// is what turns an offset read into a named field.
pub fn g_symbol_flags() -> uint4 {
    crate::varnode::varnode_flags::typelock | crate::varnode::varnode_flags::namelock
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.goreg_g_pointer_type = Some(g_pointer_type);
    hooks.goreg_g_symbol_flags = Some(g_symbol_flags);
    hooks.goreg_goroutine_register = Some(goroutine_register);
    hooks.goreg_register_abi = Some(register_abi);
}

#[cfg(test)]
mod tests;
