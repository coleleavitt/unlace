// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D7E0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D7E0 jmp     cs:off_4E93D8
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x4EBDC8
// GOT/IAT slot:    0x4E93D8
// Slot symbol:     off_4E93D8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

