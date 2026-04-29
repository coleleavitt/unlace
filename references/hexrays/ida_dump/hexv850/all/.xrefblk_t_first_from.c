// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B020
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B020 jmp     cs:off_4C07F8
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x4C37E8
// GOT/IAT slot:    0x4C07F8
// Slot symbol:     off_4C07F8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

