// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115DC0
// Name:            .get_vault_filesys
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115DC0 jmp     cs:get_vault_filesys_ptr
//
// Resolved target: get_vault_filesys
// Target address:  0x8D6250
// GOT/IAT slot:    0x8A1B80
// Slot symbol:     get_vault_filesys_ptr
// Target type:     <no type info>
// ============================================================

void .get_vault_filesys(/* see target signature */)
{
    // Tail-call to get_vault_filesys via GOT/IAT indirection
    return get_vault_filesys(/* forwarded args */);
}

