// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD40
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD40 jmp     cs:xrefblk_t_next_to_ptr
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x8D9E78
// GOT/IAT slot:    0x8A4B40
// Slot symbol:     xrefblk_t_next_to_ptr
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

