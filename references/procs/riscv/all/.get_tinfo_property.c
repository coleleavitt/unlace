// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA980
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA980 jmp     cs:off_354A8
//
// Resolved target: get_tinfo_property
// Target address:  0x35B10
// GOT/IAT slot:    0x354A8
// Slot symbol:     off_354A8
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

