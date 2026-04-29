// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E710
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E710 jmp     cs:off_4E9B70
//
// Resolved target: reg_str_get
// Target address:  0x4EC598
// GOT/IAT slot:    0x4E9B70
// Slot symbol:     off_4E9B70
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}

