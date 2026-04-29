// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51B0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51B0 jmp     cs:off_150C0
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x16150
// GOT/IAT slot:    0x150C0
// Slot symbol:     off_150C0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

