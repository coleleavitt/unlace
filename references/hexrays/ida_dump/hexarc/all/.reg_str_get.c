// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6B0
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6B0 jmp     cs:off_4B9B40
//
// Resolved target: reg_str_get
// Target address:  0x4BC548
// GOT/IAT slot:    0x4B9B40
// Slot symbol:     off_4B9B40
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}

