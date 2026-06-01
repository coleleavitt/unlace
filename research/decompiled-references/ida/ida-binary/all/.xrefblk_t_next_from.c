// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116130
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116130 jmp     cs:xrefblk_t_next_from_ptr
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x8D6490
// GOT/IAT slot:    0x8A1D38
// Slot symbol:     xrefblk_t_next_from_ptr
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

