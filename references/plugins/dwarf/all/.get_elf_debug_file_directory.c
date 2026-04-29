// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xACC0
// Name:            .get_elf_debug_file_directory
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xACC0 jmp     cs:off_CA648
//
// Resolved target: get_elf_debug_file_directory
// Target address:  0xD0FA8
// GOT/IAT slot:    0xCA648
// Slot symbol:     off_CA648
// Target type:     <no type info>
// ============================================================

void .get_elf_debug_file_directory(/* see target signature */)
{
    // Tail-call to get_elf_debug_file_directory via GOT/IAT indirection
    return get_elf_debug_file_directory(/* forwarded args */);
}

