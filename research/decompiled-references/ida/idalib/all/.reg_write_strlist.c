// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9680
// Name:            .reg_write_strlist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9680 jmp     cs:off_2C7A328
//
// Resolved target: reg_write_strlist
// Target address:  0x854F00
// GOT/IAT slot:    0x2C7A328
// Slot symbol:     off_2C7A328
// Target type:     <no type info>
// ============================================================

void .reg_write_strlist(/* see target signature */)
{
    // Tail-call to reg_write_strlist via GOT/IAT indirection
    return reg_write_strlist(/* forwarded args */);
}

