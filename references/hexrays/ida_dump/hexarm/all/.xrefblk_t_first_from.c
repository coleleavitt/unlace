// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E040
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E040 jmp     cs:off_4E9808
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x4EC220
// GOT/IAT slot:    0x4E9808
// Slot symbol:     off_4E9808
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

