// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x170F0
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x170F0 jmp     cs:off_4F860
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x50CE8
// GOT/IAT slot:    0x4F860
// Slot symbol:     off_4F860
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

