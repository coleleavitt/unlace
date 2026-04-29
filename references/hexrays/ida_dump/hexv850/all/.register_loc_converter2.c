// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B370
// Name:            .register_loc_converter2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B370 jmp     cs:off_4C09A0
//
// Resolved target: register_loc_converter2
// Target address:  0x4C3998
// GOT/IAT slot:    0x4C09A0
// Slot symbol:     off_4C09A0
// Target type:     <no type info>
// ============================================================

void .register_loc_converter2(/* see target signature */)
{
    // Tail-call to register_loc_converter2 via GOT/IAT indirection
    return register_loc_converter2(/* forwarded args */);
}

