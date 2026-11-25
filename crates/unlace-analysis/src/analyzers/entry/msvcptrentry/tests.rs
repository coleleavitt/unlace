use super::*;

#[test]
fn a_stored_function_pointer_is_read_off_mov_imm32() {
    // mov dword ptr [eax+4], imm32 ; ret ; <target>
    let code = [0xc7, 0x40, 0x04, 0, 0, 0, 0, 0xc3, 0x55];
    let byte = |rva: u32| code.get(rva as usize).copied();
    assert!(is_mov_imm32(3, &byte));
    assert!(follows_ret(8, &byte));
    assert!(!is_mov_imm32(4, &byte));
    // mov eax, imm32 is not read
    let movr = [0xb8, 0, 0, 0, 0];
    assert!(!is_mov_imm32(1, &|rva: u32| movr
        .get(rva as usize)
        .copied()));
}

#[test]
fn a_gnu_linked_image_is_not_read() {
    // terminatecurrent_i686.exe (MinGW) writes major linker version 2.
    assert!(!is_msvc_linked(2));
    assert!(is_msvc_linked(5));
    assert!(is_msvc_linked(14));
}

#[test]
fn only_the_msvc_encoding_of_mov_ebp_esp_is_a_prologue() {
    assert!(is_frame_prologue(&[0x55, 0x8b, 0xec, 0x83]));
    assert!(is_frame_prologue(&[0x8b, 0xff, 0x55, 0x8b, 0xec]));
    assert!(!is_frame_prologue(&[0x55, 0x89, 0xe5]));
    assert!(!is_frame_prologue(&[0x8b, 0x4d, 0xf0]));
}
