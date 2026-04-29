// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D8A0
// Name:            .reg_str_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D8A0 jmp     cs:off_4E9438
//
// Resolved target: reg_str_set
// Target address:  0x4EBE28
// GOT/IAT slot:    0x4E9438
// Slot symbol:     off_4E9438
// Target type:     <no type info>
// ============================================================

void .reg_str_set(/* see target signature */)
{
    // Tail-call to reg_str_set via GOT/IAT indirection
    return reg_str_set(/* forwarded args */);
}

