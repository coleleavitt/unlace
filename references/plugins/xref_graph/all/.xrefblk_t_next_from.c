// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B10
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B10 jmp     cs:off_4F570
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x507B0
// GOT/IAT slot:    0x4F570
// Slot symbol:     off_4F570
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

