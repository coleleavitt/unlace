//! Code targets of x86 `call`, `jmp` and `jcc` rel32 instructions whose
//! displacement a plain PC-relative relocation fills. COFF's
//! `IMAGE_REL_I386_REL32` and `IMAGE_REL_AMD64_REL32`, and ELF's `R_386_PC32`,
//! do not say the field belongs to a branch, so the opcode bytes in front of it
//! do; an undefined symbol a branch reaches is an extern function.

use object::{Relocation, RelocationKind, RelocationTarget, SymbolIndex};
use std::collections::HashSet;

pub(super) fn code_targets(
    bytes: &[u8],
    relocations: &[(u64, Relocation)],
) -> HashSet<SymbolIndex> {
    let mut targets = HashSet::new();
    for (offset, relocation) in relocations {
        if relocation.kind() != RelocationKind::Relative || relocation.size() != 32 {
            continue;
        }
        let RelocationTarget::Symbol(symbol) = relocation.target() else {
            continue;
        };
        let Ok(at) = usize::try_from(*offset) else {
            continue;
        };
        if is_branch_rel32(bytes, at) {
            targets.insert(symbol);
        }
    }
    targets
}

/// Whether the rel32 field at `at` follows a `call` (`E8`), `jmp` (`E9`) or
/// `jcc` (`0F 80`..`0F 8F`) opcode.
fn is_branch_rel32(bytes: &[u8], at: usize) -> bool {
    match at.checked_sub(1).and_then(|i| bytes.get(i)) {
        Some(0xe8 | 0xe9) => true,
        _ => at
            .checked_sub(2)
            .and_then(|i| bytes.get(i..at))
            .is_some_and(|op| op[0] == 0x0f && (0x80..=0x8f).contains(&op[1])),
    }
}

#[cfg(test)]
mod tests {
    use super::is_branch_rel32;

    #[test]
    fn call_jmp_and_jcc_fields_are_branches() {
        let code = [
            0x6a, 0x03, 0xe8, 0, 0, 0, 0, 0xe9, 0, 0, 0, 0, 0x0f, 0x85, 0, 0, 0, 0,
        ];
        assert!(is_branch_rel32(&code, 3));
        assert!(is_branch_rel32(&code, 8));
        assert!(is_branch_rel32(&code, 14));
    }

    #[test]
    fn a_rip_relative_operand_is_not_a_branch() {
        // lea rdi, [rip + rel32]: 48 8D 3D rel32.
        let code = [0x48, 0x8d, 0x3d, 0, 0, 0, 0];
        assert!(!is_branch_rel32(&code, 3));
        assert!(!is_branch_rel32(&code, 0));
    }
}
