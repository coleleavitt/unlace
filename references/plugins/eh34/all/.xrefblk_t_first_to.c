// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6200
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6200 jmp     cs:off_8D0E8
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x8D668
// GOT/IAT slot:    0x8D0E8
// Slot symbol:     off_8D0E8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

