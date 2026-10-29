// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD5F0
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD5F0 jmp     cs:off_2C7C2E0
//
// Resolved target: get_max_strlit_length
// Target address:  0x359CE0
// GOT/IAT slot:    0x2C7C2E0
// Slot symbol:     off_2C7C2E0
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

