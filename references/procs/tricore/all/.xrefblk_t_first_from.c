// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6440
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6440 jmp     cs:off_24208
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x25FD8
// GOT/IAT slot:    0x24208
// Slot symbol:     off_24208
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

