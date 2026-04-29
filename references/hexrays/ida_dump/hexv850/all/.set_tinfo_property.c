// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0E0
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0E0 jmp     cs:off_4C0858
//
// Resolved target: set_tinfo_property
// Target address:  0x4C3850
// GOT/IAT slot:    0x4C0858
// Slot symbol:     off_4C0858
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}

