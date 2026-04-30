// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BBA0
// Name:            .reg_delete_subkey
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BBA0 jmp     cs:reg_delete_subkey_ptr
//
// Resolved target: reg_delete_subkey
// Target address:  0x8D9D70
// GOT/IAT slot:    0x8A4A70
// Slot symbol:     reg_delete_subkey_ptr
// Target type:     <no type info>
// ============================================================

void .reg_delete_subkey(/* see target signature */)
{
    // Tail-call to reg_delete_subkey via GOT/IAT indirection
    return reg_delete_subkey(/* forwarded args */);
}

