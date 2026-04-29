// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6250
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6250 jmp     cs:off_2F110
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x2F780
// GOT/IAT slot:    0x2F110
// Slot symbol:     off_2F110
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

