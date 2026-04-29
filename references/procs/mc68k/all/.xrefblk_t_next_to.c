// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6300
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6300 jmp     cs:off_1D168
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x1D658
// GOT/IAT slot:    0x1D168
// Slot symbol:     off_1D168
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

