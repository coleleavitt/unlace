// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C980
// Name:            .calc_tinfo_gaps
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C980 jmp     cs:off_4EDCA8
//
// Resolved target: calc_tinfo_gaps
// Target address:  0x4F1FE0
// GOT/IAT slot:    0x4EDCA8
// Slot symbol:     off_4EDCA8
// Target type:     <no type info>
// ============================================================

void .calc_tinfo_gaps(/* see target signature */)
{
    // Tail-call to calc_tinfo_gaps via GOT/IAT indirection
    return calc_tinfo_gaps(/* forwarded args */);
}

