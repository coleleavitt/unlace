// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D830
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D830 jmp     cs:off_4E9400
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x4EBDF0
// GOT/IAT slot:    0x4E9400
// Slot symbol:     off_4E9400
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

