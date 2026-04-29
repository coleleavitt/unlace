// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A870
// Name:            .calc_tinfo_gaps
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A870 jmp     cs:off_4B9C20
//
// Resolved target: calc_tinfo_gaps
// Target address:  0x4BC630
// GOT/IAT slot:    0x4B9C20
// Slot symbol:     off_4B9C20
// Target type:     <no type info>
// ============================================================

void .calc_tinfo_gaps(/* see target signature */)
{
    // Tail-call to calc_tinfo_gaps via GOT/IAT indirection
    return calc_tinfo_gaps(/* forwarded args */);
}

