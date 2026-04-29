// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29820
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29820 jmp     cs:off_4B93F8
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x4BBDC8
// GOT/IAT slot:    0x4B93F8
// Slot symbol:     off_4B93F8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

