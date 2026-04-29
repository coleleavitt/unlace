// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E3B0
// Name:            .register_loc_converter2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E3B0 jmp     cs:off_4E99C0
//
// Resolved target: register_loc_converter2
// Target address:  0x4EC3E0
// GOT/IAT slot:    0x4E99C0
// Slot symbol:     off_4E99C0
// Target type:     <no type info>
// ============================================================

void .register_loc_converter2(/* see target signature */)
{
    // Tail-call to register_loc_converter2 via GOT/IAT indirection
    return register_loc_converter2(/* forwarded args */);
}

