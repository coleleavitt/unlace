// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA370
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA370 jmp     cs:off_2C7A9A0
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x3E4130
// GOT/IAT slot:    0x2C7A9A0
// Slot symbol:     off_2C7A9A0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

