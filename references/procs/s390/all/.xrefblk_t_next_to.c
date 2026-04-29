// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10170
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10170 jmp     cs:off_2E0A0
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x36D18
// GOT/IAT slot:    0x2E0A0
// Slot symbol:     off_2E0A0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

