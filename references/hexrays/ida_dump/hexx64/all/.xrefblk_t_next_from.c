// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B850
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B850 jmp     cs:off_4ED410
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x4F1708
// GOT/IAT slot:    0x4ED410
// Slot symbol:     off_4ED410
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

