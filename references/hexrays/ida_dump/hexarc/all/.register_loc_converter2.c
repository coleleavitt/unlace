// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A370
// Name:            .register_loc_converter2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A370 jmp     cs:off_4B99A0
//
// Resolved target: register_loc_converter2
// Target address:  0x4BC3A0
// GOT/IAT slot:    0x4B99A0
// Slot symbol:     off_4B99A0
// Target type:     <no type info>
// ============================================================

void .register_loc_converter2(/* see target signature */)
{
    // Tail-call to register_loc_converter2 via GOT/IAT indirection
    return register_loc_converter2(/* forwarded args */);
}

