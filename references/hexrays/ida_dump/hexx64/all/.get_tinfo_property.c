// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D050
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D050 jmp     cs:off_4EE010
//
// Resolved target: get_tinfo_property
// Target address:  0x4F2360
// GOT/IAT slot:    0x4EE010
// Slot symbol:     off_4EE010
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

