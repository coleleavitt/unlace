// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C7A0
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C7A0 jmp     cs:off_4EDBB8
//
// Resolved target: reg_str_get
// Target address:  0x4F1EE8
// GOT/IAT slot:    0x4EDBB8
// Slot symbol:     off_4EDBB8
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}

