// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD880
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD880 jmp     cs:off_2C7C428
//
// Resolved target: get_ea_name
// Target address:  0x4D03D0
// GOT/IAT slot:    0x2C7C428
// Slot symbol:     off_2C7C428
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

