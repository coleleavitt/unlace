// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52E0
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52E0 jmp     cs:off_15158
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x161E8
// GOT/IAT slot:    0x15158
// Slot symbol:     off_15158
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

