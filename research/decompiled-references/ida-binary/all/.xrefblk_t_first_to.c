// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113570
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113570 jmp     cs:xrefblk_t_first_to_ptr
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x8D48A8
// GOT/IAT slot:    0x8A0758
// Slot symbol:     xrefblk_t_first_to_ptr
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

