// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8230
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8230 jmp     cs:off_2A100
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x2BB10
// GOT/IAT slot:    0x2A100
// Slot symbol:     off_2A100
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

