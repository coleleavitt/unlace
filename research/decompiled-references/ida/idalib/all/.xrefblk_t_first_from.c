// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC390
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC390 jmp     cs:off_2C7B9B0
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x3E4100
// GOT/IAT slot:    0x2C7B9B0
// Slot symbol:     off_2C7B9B0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

