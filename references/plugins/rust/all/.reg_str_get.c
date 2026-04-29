// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_A120
//
// Resolved target: reg_str_get
// Target address:  0xB3F0
// GOT/IAT slot:    0xA120
// Slot symbol:     off_A120
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}

