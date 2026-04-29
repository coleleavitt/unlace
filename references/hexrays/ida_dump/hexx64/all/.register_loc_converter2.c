// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C430
// Name:            .register_loc_converter2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C430 jmp     cs:off_4EDA00
//
// Resolved target: register_loc_converter2
// Target address:  0x4F1D20
// GOT/IAT slot:    0x4EDA00
// Slot symbol:     off_4EDA00
// Target type:     <no type info>
// ============================================================

void .register_loc_converter2(/* see target signature */)
{
    // Tail-call to register_loc_converter2 via GOT/IAT indirection
    return register_loc_converter2(/* forwarded args */);
}

