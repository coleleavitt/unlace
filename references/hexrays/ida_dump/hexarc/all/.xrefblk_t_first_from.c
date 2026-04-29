// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A010
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A010 jmp     cs:off_4B97F0
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x4BC1E8
// GOT/IAT slot:    0x4B97F0
// Slot symbol:     off_4B97F0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

