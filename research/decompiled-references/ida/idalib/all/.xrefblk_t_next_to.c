// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADBD0
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADBD0 jmp     cs:off_2C7C5D0
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x3E43F0
// GOT/IAT slot:    0x2C7C5D0
// Slot symbol:     off_2C7C5D0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

