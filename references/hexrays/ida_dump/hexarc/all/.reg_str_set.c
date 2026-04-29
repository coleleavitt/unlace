// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29890
// Name:            .reg_str_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29890 jmp     cs:off_4B9430
//
// Resolved target: reg_str_set
// Target address:  0x4BBE00
// GOT/IAT slot:    0x4B9430
// Slot symbol:     off_4B9430
// Target type:     <no type info>
// ============================================================

void .reg_str_set(/* see target signature */)
{
    // Tail-call to reg_str_set via GOT/IAT indirection
    return reg_str_set(/* forwarded args */);
}

