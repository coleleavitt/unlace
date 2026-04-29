// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63C0
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63C0 jmp     cs:off_8D1C8
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x8D760
// GOT/IAT slot:    0x8D1C8
// Slot symbol:     off_8D1C8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

