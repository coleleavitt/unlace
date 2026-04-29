// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19320
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19320 jmp     cs:off_75178
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x759C8
// GOT/IAT slot:    0x75178
// Slot symbol:     off_75178
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

