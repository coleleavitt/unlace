// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8490
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8490 jmp     cs:off_2A230
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x2BC40
// GOT/IAT slot:    0x2A230
// Slot symbol:     off_2A230
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

