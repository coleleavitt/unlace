// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8210
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8210 jmp     cs:off_2A0F0
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x2A660
// GOT/IAT slot:    0x2A0F0
// Slot symbol:     off_2A0F0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

