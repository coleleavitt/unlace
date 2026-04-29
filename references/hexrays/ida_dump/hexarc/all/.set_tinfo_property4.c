// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A750
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A750 jmp     cs:off_4B9B90
//
// Resolved target: set_tinfo_property4
// Target address:  0x4BC5A0
// GOT/IAT slot:    0x4B9B90
// Slot symbol:     off_4B9B90
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

