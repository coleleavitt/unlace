// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E8D0
// Name:            .calc_tinfo_gaps
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E8D0 jmp     cs:off_4E9C50
//
// Resolved target: calc_tinfo_gaps
// Target address:  0x4EC680
// GOT/IAT slot:    0x4E9C50
// Slot symbol:     off_4E9C50
// Target type:     <no type info>
// ============================================================

void .calc_tinfo_gaps(/* see target signature */)
{
    // Tail-call to calc_tinfo_gaps via GOT/IAT indirection
    return calc_tinfo_gaps(/* forwarded args */);
}

