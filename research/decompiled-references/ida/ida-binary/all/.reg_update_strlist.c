// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F20
// Name:            .reg_update_strlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F20 jmp     cs:reg_update_strlist_ptr
//
// Resolved target: reg_update_strlist
// Target address:  0x8D4EF0
// GOT/IAT slot:    0x8A0C30
// Slot symbol:     reg_update_strlist_ptr
// Target type:     <no type info>
// ============================================================

void .reg_update_strlist(/* see target signature */)
{
    // Tail-call to reg_update_strlist via GOT/IAT indirection
    return reg_update_strlist(/* forwarded args */);
}

