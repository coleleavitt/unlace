//! (kuna `octeoneffects`) The option's mode and the table of Octeon user operations the core reads:
//! each operation's memory effect, upstream's fixups for the ones `off` lifts as upstream does,
//! and the user-op ids an `ArchContext` carries. The passes that act on them are in
//! [`crate::p3_dataflow::octeoneffects`].

use unlace_base::{
    error::{KunaError, KunaResult},
    types::int4,
};

use crate::userop::UserOpManage;

/// What `option octeoneffects` guards.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum OcteonEffectsMode {
    /// Upstream's lifting: `ll`/`sc` as a plain load and an always-successful
    /// store, `sync` as `SYNC(n)`, and no memory effects or types for the rest.
    Off,
    /// Atomic updates, load-linked, store-conditionals and cache-block zeroing.
    #[default]
    Atomic,
    /// Those and every ordering operation.
    Ordered,
}

impl OcteonEffectsMode {
    pub fn as_str(self) -> &'static str {
        match self {
            OcteonEffectsMode::Off => "off",
            OcteonEffectsMode::Atomic => "atomic",
            OcteonEffectsMode::Ordered => "ordered",
        }
    }

    /// Parse an `option octeoneffects` value.
    pub fn parse(p1: &str) -> KunaResult<(OcteonEffectsMode, String)> {
        let mode = match p1 {
            "off" => OcteonEffectsMode::Off,
            "atomic" => OcteonEffectsMode::Atomic,
            "ordered" => OcteonEffectsMode::Ordered,
            other => {
                return Err(KunaError::parse(format!(
                    "Unknown octeoneffects value: {other} (expected off|atomic|ordered)"
                )));
            }
        };
        Ok((
            mode,
            format!("Octeon memory effects set to {}", mode.as_str()),
        ))
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Kind {
    /// Fetch-and-add or exchange: reads and writes the addressed value.
    Update,
    /// Load-linked: reads the addressed value and opens a reservation.
    LoadLinked,
    /// Store-conditional: may write the addressed value.
    StoreConditional,
    /// Zeroes the cache block holding the address.
    ZeroBlock,
    /// Orders memory accesses; touches no address of its own.
    Order,
}

/// One operation's kind, the width in bytes its address operand's pointer is
/// typed to (0 leaves it untyped), whether its second payload input is a
/// stored value, and its result width.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Effect {
    pub kind: Kind,
    pub width: int4,
    pub value: bool,
    pub result: int4,
}

impl Effect {
    const fn new(kind: Kind, width: int4, value: bool, result: int4) -> Effect {
        Effect {
            kind,
            width,
            value,
            result,
        }
    }

    /// Does the operation access memory through an address operand?
    pub fn addressed(self) -> bool {
        self.kind != Kind::Order
    }
}

const ORDER: Effect = Effect::new(Kind::Order, 0, false, 0);

/// A cache-block zero clears a whole block, not a value of any width, so its
/// address stays untyped.
#[doc(hidden)]
pub const OPERATIONS: &[(&str, Effect)] = &[
    ("octeon_fetch_add32", Effect::new(Kind::Update, 4, true, 4)),
    ("octeon_fetch_add64", Effect::new(Kind::Update, 8, true, 8)),
    ("octeon_exchange32", Effect::new(Kind::Update, 4, true, 4)),
    ("octeon_exchange64", Effect::new(Kind::Update, 8, true, 8)),
    (
        "octeon_load_linked32",
        Effect::new(Kind::LoadLinked, 4, false, 4),
    ),
    (
        "octeon_load_linked64",
        Effect::new(Kind::LoadLinked, 8, false, 8),
    ),
    (
        "octeon_store_conditional32",
        Effect::new(Kind::StoreConditional, 4, true, 1),
    ),
    (
        "octeon_store_conditional64",
        Effect::new(Kind::StoreConditional, 8, true, 1),
    ),
    (
        "octeon_zero_cache_block",
        Effect::new(Kind::ZeroBlock, 0, false, 0),
    ),
    (
        "octeon_zero_cache_block_transient",
        Effect::new(Kind::ZeroBlock, 0, false, 0),
    ),
    ("octeon_sync", ORDER),
    ("octeon_synciobdma", ORDER),
    ("octeon_syncw", ORDER),
    ("octeon_syncws", ORDER),
    ("octeon_syncs", ORDER),
    ("octeon_sync_unknown", ORDER),
];

/// One callother fixup: the user operation, its output and input operand names,
/// and the p-code upstream's `mips32Instructions.sinc`/`mips64Instructions.sinc`
/// lift the instruction to.
pub struct Fixup {
    pub name: &'static [u8],
    pub output: &'static [u8],
    pub inputs: &'static [&'static [u8]],
    pub body: &'static [u8],
}

/// Upstream's lifting of each Octeon operation that replaced a generic MIPS
/// constructor. Registered at architecture bootstrap, before any option is
/// read, and applied only under `off` (`decompile_drive::is_injected_userop`).
pub const UPSTREAM: &[Fixup] = &[
    Fixup {
        name: b"octeon_load_linked32",
        output: b"result",
        inputs: &[b"addr"],
        body: b"result = *[ram]:4 addr;\n",
    },
    Fixup {
        name: b"octeon_load_linked64",
        output: b"result",
        inputs: &[b"addr"],
        body: b"result = *[ram]:8 addr;\n",
    },
    Fixup {
        name: b"octeon_store_conditional32",
        output: b"success",
        inputs: &[b"addr", b"value"],
        body: b"*[ram]:4 addr = value;\nsuccess = 1:1;\n",
    },
    Fixup {
        name: b"octeon_store_conditional64",
        output: b"success",
        inputs: &[b"addr", b"value"],
        body: b"*[ram]:8 addr = value;\nsuccess = 1:1;\n",
    },
    Fixup {
        name: b"octeon_sync",
        output: b"",
        inputs: &[],
        body: b"SYNC(0:1);\n",
    },
    Fixup {
        name: b"octeon_synciobdma",
        output: b"",
        inputs: &[],
        body: b"SYNC(2:1);\n",
    },
    Fixup {
        name: b"octeon_syncw",
        output: b"",
        inputs: &[],
        body: b"SYNC(4:1);\n",
    },
    Fixup {
        name: b"octeon_syncws",
        output: b"",
        inputs: &[],
        body: b"SYNC(5:1);\n",
    },
    Fixup {
        name: b"octeon_syncs",
        output: b"",
        inputs: &[],
        body: b"SYNC(6:1);\n",
    },
    Fixup {
        name: b"octeon_sync_unknown",
        output: b"",
        inputs: &[b"kind"],
        body: b"SYNC(kind);\n",
    },
];

/// The spec's Octeon operations, by user-op index. An operation counts if it
/// is uninjected or carries only this module's own [`UPSTREAM`] fixup (`ours`);
/// a compiler spec's own fixup wins. Only an Octeon language declares these
/// names. `off` resolves only a load-linked or store-conditional that has no
/// fixup at all: where [`UPSTREAM`] could not be compiled (ghidra mode has no
/// local `.sla`), it keeps its memory effect instead of turning opaque.
pub fn userop_ids(
    userops: &UserOpManage,
    mode: OcteonEffectsMode,
    ours: &[int4],
) -> Vec<(u32, Effect)> {
    let off = mode == OcteonEffectsMode::Off;
    OPERATIONS
        .iter()
        .filter(|(_, effect)| {
            !off || matches!(effect.kind, Kind::LoadLinked | Kind::StoreConditional)
        })
        .filter_map(|(name, effect)| {
            userops
                .get_op_by_name(name.as_bytes())
                .filter(|u| match u.get_inject_id() {
                    None => true,
                    Some(id) => !off && ours.contains(&(id as int4)),
                })
                .map(|u| (u.get_index() as u32, *effect))
        })
        .collect()
}

impl crate::optionset::KunaOption for OcteonEffectsMode {
    const NAME: &'static str = "octeoneffects";
    crate::kuna_option_id!();

    fn unset() -> Self {
        OcteonEffectsMode::Off
    }

    fn shipped() -> Self {
        OcteonEffectsMode::Atomic
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        Ok(OcteonEffectsMode::parse(value)?)
    }
}
