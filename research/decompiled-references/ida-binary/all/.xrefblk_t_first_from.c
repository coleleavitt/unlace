// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1194D0
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1194D0 jmp     cs:xrefblk_t_first_from_ptr
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x8D84D8
// GOT/IAT slot:    0x8A3708
// Slot symbol:     xrefblk_t_first_from_ptr
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

