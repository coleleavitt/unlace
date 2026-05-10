//! Register aliasing relation for sub-register / overlapping varnodes.
//!
//! A single architectural register may be addressed at several
//! `(offset, size)` pairs in the IR — e.g. on x86-64 the byte registers
//! `AL` `(Register, 0, 1)` and `AH` `(Register, 1, 1)` both overlap the
//! word register `AX` `(Register, 0, 2)` which in turn overlaps `EAX`
//! `(Register, 0, 4)` and `RAX` `(Register, 0, 8)`. AVX widening adds
//! `XMM0` `(Register, x, 16)` ⊂ `YMM0` `(Register, x, 32)` ⊂ `ZMM0`
//! `(Register, x, 64)`.
//!
//! This module exposes [`aliases`], a pure byte-range overlap check on
//! `(space, offset, size)`. Two varnodes alias iff they live in the
//! same address space and their byte ranges intersect.
//!
//! ## Scope (detection-only MVP)
//!
//! Callers (CSE, copy-propagation, DCE, SSA construction) can use
//! [`aliases`] to know when a write to a varnode invalidates a
//! previously-cached varnode. SSA construction itself does **not** yet
//! consume this relation — varnodes that overlap but are not
//! byte-identical are still treated as independent SSA variables.
//! Wiring `aliases` / [`write_kills`] into `build_ssa` so that, e.g., a
//! write to `EAX` kills the live-in `RAX` definition is a follow-up
//! task (t106-followup).

use crate::Varnode;

/// Returns `true` iff `a` and `b` occupy overlapping byte ranges in the
/// same address space.
///
/// The relation is reflexive and symmetric. It is **not** transitive in
/// the general case (it happens to be for x86 register-space because
/// the encoding nests, but the predicate makes no such assumption).
///
/// # Examples
///
/// ```
/// use unlace_ir::{Varnode, reg_alias::aliases};
///
/// let rax = Varnode::reg(0, 8);
/// let eax = Varnode::reg(0, 4);
/// let ebx = Varnode::reg(8, 4);
/// assert!(aliases(rax, eax));
/// assert!(!aliases(rax, ebx));
/// ```
#[inline]
pub fn aliases(a: Varnode, b: Varnode) -> bool {
    if a.space != b.space {
        return false;
    }
    let a_end = a.offset.saturating_add(a.size as u64);
    let b_end = b.offset.saturating_add(b.size as u64);
    a.offset < b_end && b.offset < a_end
}

/// Returns the standard set of x86-style sub-register kills implied by
/// a write to `written`.
///
/// On x86-64, writing a 4-byte sub-register zero-extends to the full
/// 8-byte enclosing register, so writing `EAX` semantically defines
/// `RAX` and kills `AL`, `AH`, `AX`, and `EAX` itself. Writing a 1-or-
/// 2-byte sub-register only kills the smaller aliases that fully nest
/// inside it (`AL` writes don't disturb `AH`).
///
/// The returned iterator yields aligned sub-ranges wholly contained in
/// `written` plus, for 4-byte writes, the 8-byte enclosing slot to
/// model x86 zero-extension. Callers who want a symmetric overlap test
/// should prefer [`aliases`].
pub fn write_kills(written: Varnode) -> impl Iterator<Item = Varnode> {
    let lo = written.offset;
    let hi = written.offset.saturating_add(written.size as u64);
    let space = written.space;
    let mut kills: Vec<Varnode> = Vec::new();

    for size in [1u8, 2, 4, 8, 16, 32] {
        let s = size as u64;
        if s > written.size as u64 {
            continue;
        }
        let mut off = lo;
        while off + s <= hi {
            kills.push(Varnode::new(space, off, size));
            off += s;
        }
    }

    if written.size == 4 {
        kills.push(Varnode::new(space, lo, 8));
    }

    kills.into_iter()
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::SpaceId;

    #[test]
    fn eax_aliases_rax() {
        let eax = Varnode::reg(0, 4);
        let rax = Varnode::reg(0, 8);
        assert!(aliases(eax, rax));
        assert!(aliases(rax, eax));
    }

    #[test]
    fn ah_aliases_ax() {
        let ah = Varnode::reg(1, 1);
        let ax = Varnode::reg(0, 2);
        assert!(aliases(ah, ax));
        assert!(aliases(ax, ah));
    }

    #[test]
    fn eax_does_not_alias_ebx() {
        let eax = Varnode::reg(0, 4);
        let ebx = Varnode::reg(8, 4);
        assert!(!aliases(eax, ebx));
    }

    #[test]
    fn space_mismatch_no_alias() {
        let reg = Varnode::new(SpaceId::Register, 0, 4);
        let stk = Varnode::new(SpaceId::Stack, 0, 4);
        assert!(!aliases(reg, stk));
    }

    #[test]
    fn xmm_subregs_alias_ymm() {
        let xmm0_offset = 0x100;
        let xmm0 = Varnode::reg(xmm0_offset, 16);
        let ymm0 = Varnode::reg(xmm0_offset, 32);
        assert!(aliases(xmm0, ymm0));
        assert!(aliases(ymm0, xmm0));
    }

    #[test]
    fn write_kills_eax_zero_extends_to_rax() {
        let eax = Varnode::reg(0, 4);
        let kills: Vec<_> = write_kills(eax).collect();
        assert!(kills.contains(&Varnode::reg(0, 8)));
        assert!(kills.contains(&Varnode::reg(0, 1)));
        assert!(kills.contains(&Varnode::reg(0, 2)));
    }
}
