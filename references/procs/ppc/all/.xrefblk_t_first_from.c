// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x207D0
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x207D0 jmp     cs:off_953D0
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x95E08
// GOT/IAT slot:    0x953D0
// Slot symbol:     off_953D0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

