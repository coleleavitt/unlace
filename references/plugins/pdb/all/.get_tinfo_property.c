// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB30
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB30 jmp     cs:off_B3580
//
// Resolved target: get_tinfo_property
// Target address:  0xB3D50
// GOT/IAT slot:    0xB3580
// Slot symbol:     off_B3580
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

