use super::*;

#[test]
fn eligibility_requires_linked_matching_elf_x86_metadata() {
    for (class, machine, bits) in [(1, 3u16, 32), (2, 62, 64)] {
        let mut bytes = [0u8; 20];
        bytes[..4].copy_from_slice(b"\x7fELF");
        bytes[4] = class;
        bytes[5] = 1;
        bytes[18..20].copy_from_slice(&machine.to_le_bytes());
        for kind in [2u16, 3] {
            bytes[16..18].copy_from_slice(&kind.to_le_bytes());
            assert!(eligible_elf(&bytes, &format!("x86:LE:{bits}:default:gcc")));
            for target in ["ARM:LE:32:v7", "x86:BE:32:default", "x86:LE:16:Real Mode"] {
                assert!(!eligible_elf(&bytes, target));
            }
            assert!(!eligible_elf(
                &bytes,
                &format!("x86:LE:{}:default", 96 - bits)
            ));
        }
        bytes[16..18].copy_from_slice(&1u16.to_le_bytes());
        assert!(!eligible_elf(&bytes, &format!("x86:LE:{bits}:default")));
        bytes[16] = 2;
        bytes[5] = 2;
        assert!(!eligible_elf(&bytes, &format!("x86:LE:{bits}:default")));
    }
    assert!(!eligible_elf(b"", "x86:LE:32:default"));
}
