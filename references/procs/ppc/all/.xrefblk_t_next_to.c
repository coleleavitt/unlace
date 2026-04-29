// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20660
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20660 jmp     cs:off_95318
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x95D50
// GOT/IAT slot:    0x95318
// Slot symbol:     off_95318
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

