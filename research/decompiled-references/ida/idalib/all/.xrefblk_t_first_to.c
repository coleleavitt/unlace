// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8860
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8860 jmp     cs:off_2C79C18
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x3E43C0
// GOT/IAT slot:    0x2C79C18
// Slot symbol:     off_2C79C18
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

