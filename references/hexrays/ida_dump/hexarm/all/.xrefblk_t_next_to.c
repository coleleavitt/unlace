// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DDF0
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DDF0 jmp     cs:off_4E96E0
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x4EC0F8
// GOT/IAT slot:    0x4E96E0
// Slot symbol:     off_4E96E0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

