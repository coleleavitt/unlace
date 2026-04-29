// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203C0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x203C0 jmp     cs:off_951C8
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x95C00
// GOT/IAT slot:    0x951C8
// Slot symbol:     off_951C8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

