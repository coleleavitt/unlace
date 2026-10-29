//! Function prototypes recovered by signature analysis.
//!
//! A prototype is only as trustworthy as its source, so every
//! [`FunctionSignature`] carries a [`SignatureRank`], and every parameter the
//! [`ArgLoc`] it is passed in. Two views of one function merge by rank first
//! and then location by location ([`FunctionSignature::merge`]), following
//! the Hex-Rays `set_type` merge (`sub_37EEC0`, see
//! `research/hexrays-type-recovery.md` S5 section 8).

use std::cmp::Ordering;
use std::collections::BTreeMap;

use crate::ssa::{CallingConvention, PrimitiveType};

const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;
const AARCH64_X: [u64; 8] = [0, 8, 16, 24, 32, 40, 48, 56];

/// `XMMn` / `VREGn` register-space offsets as laid out by the x86 and AArch64
/// lifters (`unlace-lift-x86` `register_file.rs`, `unlace-lift-arm`
/// `register_file.rs`).
const fn xmm(n: u64) -> u64 {
    0x400 + n * 64
}
const fn aarch64_v(n: u64) -> u64 {
    280 + n * 32
}

const SYSV_INT: [u64; 6] = [RDI, RSI, RDX, RCX, R8, R9];
const SYSV_FLOAT: [u64; 8] = [
    xmm(0),
    xmm(1),
    xmm(2),
    xmm(3),
    xmm(4),
    xmm(5),
    xmm(6),
    xmm(7),
];
const MSX64_INT: [u64; 4] = [RCX, RDX, R8, R9];
const MSX64_FLOAT: [u64; 4] = [xmm(0), xmm(1), xmm(2), xmm(3)];
const AARCH64_V: [u64; 8] = [
    aarch64_v(0),
    aarch64_v(1),
    aarch64_v(2),
    aarch64_v(3),
    aarch64_v(4),
    aarch64_v(5),
    aarch64_v(6),
    aarch64_v(7),
];

/// Where one argument is passed.
#[derive(
    Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash, serde::Serialize, serde::Deserialize,
)]
pub enum ArgLoc {
    /// A register, by its register-space offset.
    Reg(u64),
    /// A stack slot, by its byte offset from the stack pointer at the call
    /// instruction (the start of the outgoing argument area, including the
    /// Microsoft x64 shadow space).
    Stack(u32),
}

/// How far a prototype source is trusted, best first.
///
/// Mirrors Hex-Rays' `type_source_t` ranks (`GUESSED_NONE` user types,
/// `GUESSED_WEAK` database types, `GUESSED_FUNC`, `GUESSED_DATA`), with
/// known library prototypes split out between debug info and guesses.
#[derive(
    Copy,
    Clone,
    Debug,
    Default,
    PartialEq,
    Eq,
    PartialOrd,
    Ord,
    Hash,
    serde::Serialize,
    serde::Deserialize,
)]
pub enum SignatureRank {
    /// Set by the user; replaces anything.
    User,
    /// DWARF or PDB prototype.
    DebugInfo,
    /// A known library prototype: the libc table, a FLIRT match, or the
    /// parameter list of a demangled name.
    Library,
    /// Recovered from the function's own body (argument registers it reads).
    CalleeBody,
    /// Guessed from what callers set up before calling it.
    #[default]
    CallSite,
}

/// One parameter: where it is passed and its type.
#[derive(Copy, Clone, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct SignatureParam {
    pub loc: ArgLoc,
    pub ty: PrimitiveType,
}

/// Inferred signature of a function: return type, located parameters,
/// convention and the rank of the source that produced it.
///
/// Keyed by function entry address in a [`FunctionSignatureRegistry`] so
/// that `Call` instructions whose target is a constant address can look up
/// callee prototypes.
#[derive(Clone, Debug, PartialEq, Eq, Default, serde::Serialize, serde::Deserialize)]
pub struct FunctionSignature {
    /// Return type (the value left in RAX/X0/etc.).
    pub return_type: PrimitiveType,
    /// Named parameters in calling-convention order.
    pub params: Vec<SignatureParam>,
    /// Calling convention used to place the parameters.
    pub calling_convention: CallingConvention,
    /// Souremote code execution of this prototype.
    pub rank: SignatureRank,
    /// Further arguments may follow `params` (`...`).
    pub variadic: bool,
}

/// Map from function entry address to its inferred [`FunctionSignature`].
pub type FunctionSignatureRegistry = BTreeMap<u64, FunctionSignature>;

impl CallingConvention {
    /// Integer argument registers in order.
    pub fn int_arg_regs(self) -> &'static [u64] {
        match self {
            Self::SystemV => &SYSV_INT,
            Self::MicrosoftX64 => &MSX64_INT,
            Self::AArch64 => &AARCH64_X,
            Self::Thiscall => &[RCX],
            Self::Cdecl | Self::Stdcall | Self::Unknown => &[],
        }
    }

    /// Floating-point and vector argument registers in order.
    pub fn float_arg_regs(self) -> &'static [u64] {
        match self {
            Self::SystemV => &SYSV_FLOAT,
            Self::MicrosoftX64 => &MSX64_FLOAT,
            Self::AArch64 => &AARCH64_V,
            Self::Thiscall | Self::Cdecl | Self::Stdcall | Self::Unknown => &[],
        }
    }

    /// Size in bytes of one stack argument slot.
    pub fn stack_slot_size(self) -> u32 {
        match self {
            Self::Cdecl | Self::Stdcall | Self::Thiscall => 4,
            Self::SystemV | Self::MicrosoftX64 | Self::AArch64 | Self::Unknown => 8,
        }
    }

    /// Offset of the first stack argument in the outgoing argument area:
    /// the 32-byte shadow space on Microsoft x64, zero elsewhere.
    pub fn stack_args_start(self) -> u32 {
        match self {
            Self::MicrosoftX64 => 32,
            _ => 0,
        }
    }

    /// Whether integer and floating-point arguments consume one shared
    /// sequence of positions (Microsoft x64) rather than independent
    /// register lists (System V, AAPCS64).
    fn positional_args(self) -> bool {
        self == Self::MicrosoftX64
    }

    /// The location of each parameter of the given types, in order: the
    /// counterpart of IDA's `calc_arglocs` for the conventions Unlace
    /// models. Aggregates passed by value are not modelled.
    pub fn arg_locs(self, types: &[PrimitiveType]) -> Vec<ArgLoc> {
        let int_regs = self.int_arg_regs();
        let float_regs = self.float_arg_regs();
        let slot = self.stack_slot_size();
        let mut next_int = 0;
        let mut next_float = 0;
        let mut stack = self.stack_args_start();
        let mut locs = Vec::with_capacity(types.len());
        for (index, &ty) in types.iter().enumerate() {
            let (regs, next) = if is_float_class(ty) {
                (float_regs, &mut next_float)
            } else {
                (int_regs, &mut next_int)
            };
            let reg_index = if self.positional_args() { index } else { *next };
            if let Some(&reg) = regs.get(reg_index) {
                *next += 1;
                locs.push(ArgLoc::Reg(reg));
                continue;
            }
            locs.push(ArgLoc::Stack(stack));
            stack += value_size(ty, slot).div_ceil(slot) * slot;
        }
        locs
    }
}

fn is_float_class(ty: PrimitiveType) -> bool {
    matches!(
        ty,
        PrimitiveType::Float | PrimitiveType::Double | PrimitiveType::Vector(_)
    )
}

fn value_size(ty: PrimitiveType, slot: u32) -> u32 {
    match ty {
        PrimitiveType::Bool => 1,
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => u32::from(w.max(1)),
        PrimitiveType::Float => 4,
        PrimitiveType::Double => 8,
        PrimitiveType::Vector(v) => u32::from(v.size()),
        PrimitiveType::Ptr | PrimitiveType::Unknown => slot,
    }
}

impl FunctionSignature {
    /// A prototype whose parameters of the given types are placed by `cc`.
    pub fn with_param_types(
        calling_convention: CallingConvention,
        rank: SignatureRank,
        return_type: PrimitiveType,
        param_types: &[PrimitiveType],
    ) -> Self {
        let params = calling_convention
            .arg_locs(param_types)
            .into_iter()
            .zip(param_types)
            .map(|(loc, &ty)| SignatureParam { loc, ty })
            .collect();
        FunctionSignature {
            return_type,
            params,
            calling_convention,
            rank,
            variadic: false,
        }
    }

    /// Parameter types in order.
    pub fn param_types(&self) -> impl Iterator<Item = PrimitiveType> + '_ {
        self.params.iter().map(|param| param.ty)
    }

    /// Merge another view of the same function into this one and report
    /// whether anything changed.
    ///
    /// - A [`SignatureRank::User`] prototype replaces this one.
    /// - A better-ranked prototype takes over the shape (arity, locations,
    ///   convention, varargs); types it leaves unknown keep this one's
    ///   concrete type at the same location.
    /// - A worse-ranked prototype only fills unknown types at matching
    ///   locations; it never changes the arity.
    /// - Equal ranks merge location by location (see
    ///   [`merge_param_type`]). The arity of two call-site guesses is the
    ///   smaller one, since every call site bounds the fixed arguments from
    ///   above; other equal-rank views keep the longer list, since a
    ///   parameter one view saw read is real.
    pub fn merge(&mut self, incoming: &FunctionSignature) -> bool {
        if self == incoming {
            return false;
        }
        let before = self.clone();
        if incoming.rank == SignatureRank::User {
            *self = incoming.clone();
            return true;
        }
        match incoming.rank.cmp(&self.rank) {
            Ordering::Less => {
                let mut better = incoming.clone();
                better.fill_unknown_from(self);
                *self = better;
            }
            Ordering::Greater => self.fill_unknown_from(incoming),
            Ordering::Equal => self.merge_same_rank(incoming),
        }
        *self != before
    }

    fn fill_unknown_from(&mut self, other: &FunctionSignature) {
        if self.return_type == PrimitiveType::Unknown {
            self.return_type = other.return_type;
        }
        if self.calling_convention == CallingConvention::Unknown {
            self.calling_convention = other.calling_convention;
        }
        for param in &mut self.params {
            if param.ty != PrimitiveType::Unknown {
                continue;
            }
            if let Some(found) = other.params.iter().find(|o| o.loc == param.loc) {
                param.ty = found.ty;
            }
        }
    }

    fn merge_same_rank(&mut self, other: &FunctionSignature) {
        self.return_type = merge_param_type(self.return_type, other.return_type);
        if self.calling_convention == CallingConvention::Unknown {
            self.calling_convention = other.calling_convention;
        }
        self.variadic |= other.variadic;

        let common = self
            .params
            .iter()
            .zip(&other.params)
            .take_while(|(mine, theirs)| mine.loc == theirs.loc)
            .count();
        for (mine, theirs) in self.params.iter_mut().zip(&other.params).take(common) {
            mine.ty = merge_param_type(mine.ty, theirs.ty);
        }

        if self.rank == SignatureRank::CallSite {
            let len = self.params.len().min(other.params.len()).min(common);
            self.params.truncate(len);
        } else if common == self.params.len() && other.params.len() > common {
            self.params.extend_from_slice(&other.params[common..]);
        }
    }
}

/// Merge two types seen for one parameter location by equally ranked
/// sources (Hex-Rays `sub_36B620`): unknown takes the other type;
/// integers of different widths in the same location keep the narrower
/// one (the wider view also carries junk high bits); a pointer beats a
/// pointer-width integer; any other conflict, such as integer against
/// floating point, follows [`PrimitiveType::join`] and becomes unknown.
pub fn merge_param_type(current: PrimitiveType, incoming: PrimitiveType) -> PrimitiveType {
    use PrimitiveType::{Int, Ptr, Unknown, UnsignedInt};
    match (current, incoming) {
        (Unknown, ty) | (ty, Unknown) => ty,
        (a, b) if a == b => a,
        (Int(a) | UnsignedInt(a), Int(b) | UnsignedInt(b)) if a != b => {
            if b < a {
                incoming
            } else {
                current
            }
        }
        (Ptr, Int(8) | UnsignedInt(8)) | (Int(8) | UnsignedInt(8), Ptr) => Ptr,
        _ => current.join(incoming),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sig(rank: SignatureRank, types: &[PrimitiveType]) -> FunctionSignature {
        FunctionSignature::with_param_types(
            CallingConvention::SystemV,
            rank,
            PrimitiveType::Unknown,
            types,
        )
    }

    #[test]
    fn sysv_locations_use_independent_int_and_float_lists() {
        let locs = CallingConvention::SystemV.arg_locs(&[
            PrimitiveType::Int(4),
            PrimitiveType::Double,
            PrimitiveType::Ptr,
        ]);
        assert_eq!(
            locs,
            vec![ArgLoc::Reg(RDI), ArgLoc::Reg(xmm(0)), ArgLoc::Reg(RSI)]
        );
    }

    #[test]
    fn sysv_seventh_integer_argument_is_on_the_stack() {
        let locs = CallingConvention::SystemV.arg_locs(&[PrimitiveType::Int(8); 8]);
        assert_eq!(locs[6], ArgLoc::Stack(0));
        assert_eq!(locs[7], ArgLoc::Stack(8));
    }

    #[test]
    fn msx64_locations_are_positional_and_skip_shadow_space() {
        let locs = CallingConvention::MicrosoftX64.arg_locs(&[
            PrimitiveType::Int(4),
            PrimitiveType::Double,
            PrimitiveType::Int(4),
            PrimitiveType::Int(4),
            PrimitiveType::Int(4),
        ]);
        assert_eq!(
            locs,
            vec![
                ArgLoc::Reg(RCX),
                ArgLoc::Reg(xmm(1)),
                ArgLoc::Reg(R8),
                ArgLoc::Reg(R9),
                ArgLoc::Stack(32),
            ]
        );
    }

    #[test]
    fn cdecl_double_takes_two_slots() {
        let locs =
            CallingConvention::Cdecl.arg_locs(&[PrimitiveType::Double, PrimitiveType::Int(4)]);
        assert_eq!(locs, vec![ArgLoc::Stack(0), ArgLoc::Stack(8)]);
    }

    #[test]
    fn worse_rank_only_fills_unknown_types() {
        let mut body = sig(SignatureRank::CalleeBody, &[PrimitiveType::Unknown]);
        let callers = sig(
            SignatureRank::CallSite,
            &[PrimitiveType::Ptr, PrimitiveType::Int(4)],
        );
        assert!(body.merge(&callers));
        assert_eq!(body.params.len(), 1, "call sites never add parameters");
        assert_eq!(body.params[0].ty, PrimitiveType::Ptr);
        assert_eq!(body.rank, SignatureRank::CalleeBody);
    }

    #[test]
    fn better_rank_takes_shape_and_keeps_known_types() {
        let mut guess = sig(
            SignatureRank::CallSite,
            &[
                PrimitiveType::Ptr,
                PrimitiveType::Int(4),
                PrimitiveType::Int(4),
            ],
        );
        let library = sig(
            SignatureRank::Library,
            &[PrimitiveType::Unknown, PrimitiveType::Int(4)],
        );
        assert!(guess.merge(&library));
        assert_eq!(guess.rank, SignatureRank::Library);
        assert_eq!(
            guess.param_types().collect::<Vec<_>>(),
            vec![PrimitiveType::Ptr, PrimitiveType::Int(4)]
        );
    }

    #[test]
    fn user_rank_replaces() {
        let mut debug = sig(SignatureRank::DebugInfo, &[PrimitiveType::Ptr]);
        let user = sig(SignatureRank::User, &[PrimitiveType::Unknown]);
        assert!(debug.merge(&user));
        assert_eq!(debug, user);
    }

    #[test]
    fn call_site_guesses_keep_the_minimum_arity() {
        let mut first = sig(SignatureRank::CallSite, &[PrimitiveType::Unknown; 3]);
        let second = sig(SignatureRank::CallSite, &[PrimitiveType::Int(4); 2]);
        assert!(first.merge(&second));
        assert_eq!(first.params.len(), 2);
        assert_eq!(first.params[0].ty, PrimitiveType::Int(4));
    }

    #[test]
    fn equal_body_ranks_keep_the_longer_list() {
        let mut first = sig(SignatureRank::CalleeBody, &[PrimitiveType::Int(8)]);
        let second = sig(
            SignatureRank::CalleeBody,
            &[PrimitiveType::Int(4), PrimitiveType::Ptr],
        );
        assert!(first.merge(&second));
        assert_eq!(
            first.param_types().collect::<Vec<_>>(),
            vec![PrimitiveType::Int(4), PrimitiveType::Ptr]
        );
    }

    #[test]
    fn mismatched_locations_are_not_merged() {
        let mut ints = sig(
            SignatureRank::CallSite,
            &[PrimitiveType::Int(4), PrimitiveType::Int(4)],
        );
        let floats = sig(
            SignatureRank::CallSite,
            &[PrimitiveType::Double, PrimitiveType::Int(4)],
        );
        assert!(ints.merge(&floats));
        assert!(ints.params.is_empty(), "no common location prefix");
    }

    #[test]
    fn param_type_merge_rules() {
        use PrimitiveType::*;
        assert_eq!(merge_param_type(Unknown, Ptr), Ptr);
        assert_eq!(merge_param_type(Int(8), Int(4)), Int(4));
        assert_eq!(merge_param_type(UnsignedInt(1), Int(4)), UnsignedInt(1));
        assert_eq!(merge_param_type(Int(8), Ptr), Ptr);
        assert_eq!(merge_param_type(Double, Int(4)), Unknown);
        assert_eq!(merge_param_type(Int(4), UnsignedInt(4)), Int(4));
    }
}
