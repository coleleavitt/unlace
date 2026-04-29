// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2390
// Name:            .get_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2390 jmp     cs:off_A1B0
//
// Resolved target: get_tinfo_property
// Target address:  0xA400
// GOT/IAT slot:    0xA1B0
// Slot symbol:     off_A1B0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property(/* see target signature */)
{
    // Tail-call to get_tinfo_property via GOT/IAT indirection
    return get_tinfo_property(/* forwarded args */);
}

