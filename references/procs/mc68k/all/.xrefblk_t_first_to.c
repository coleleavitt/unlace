// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61D0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61D0 jmp     cs:off_1D0D0
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x1D5C0
// GOT/IAT slot:    0x1D0D0
// Slot symbol:     off_1D0D0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

