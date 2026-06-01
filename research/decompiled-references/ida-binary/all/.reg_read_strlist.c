// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E00
// Name:            .reg_read_strlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E00 jmp     cs:reg_read_strlist_ptr
//
// Resolved target: reg_read_strlist
// Target address:  0x8D76B0
// GOT/IAT slot:    0x8A2BA0
// Slot symbol:     reg_read_strlist_ptr
// Target type:     <no type info>
// ============================================================

void .reg_read_strlist(/* see target signature */)
{
    // Tail-call to reg_read_strlist via GOT/IAT indirection
    return reg_read_strlist(/* forwarded args */);
}

