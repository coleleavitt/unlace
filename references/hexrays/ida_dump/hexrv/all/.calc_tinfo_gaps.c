// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B890
// Name:            .calc_tinfo_gaps
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B890 jmp     cs:off_4BFC30
//
// Resolved target: calc_tinfo_gaps
// Target address:  0x4C3138
// GOT/IAT slot:    0x4BFC30
// Slot symbol:     off_4BFC30
// Target type:     <no type info>
// ============================================================

void .calc_tinfo_gaps(/* see target signature */)
{
    // Tail-call to calc_tinfo_gaps via GOT/IAT indirection
    return calc_tinfo_gaps(/* forwarded args */);
}

