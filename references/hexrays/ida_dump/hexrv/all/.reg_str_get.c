// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6D0
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6D0 jmp     cs:off_4BFB50
//
// Resolved target: reg_str_get
// Target address:  0x4C3050
// GOT/IAT slot:    0x4BFB50
// Slot symbol:     off_4BFB50
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}

