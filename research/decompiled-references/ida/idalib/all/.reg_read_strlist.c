// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB430
// Name:            .reg_read_strlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB430 jmp     cs:off_2C7B200
//
// Resolved target: reg_read_strlist
// Target address:  0x854E30
// GOT/IAT slot:    0x2C7B200
// Slot symbol:     off_2C7B200
// Target type:     <no type info>
// ============================================================

void .reg_read_strlist(/* see target signature */)
{
    // Tail-call to reg_read_strlist via GOT/IAT indirection
    return reg_read_strlist(/* forwarded args */);
}

