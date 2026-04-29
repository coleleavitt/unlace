// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6230
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6230 jmp     cs:off_24100
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x25ED0
// GOT/IAT slot:    0x24100
// Slot symbol:     off_24100
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

