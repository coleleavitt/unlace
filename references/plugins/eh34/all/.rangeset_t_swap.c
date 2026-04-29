// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6330
// Name:            .rangeset_t_swap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6330 jmp     cs:off_8D180
//
// Resolved target: rangeset_t_swap
// Target address:  0x8D718
// GOT/IAT slot:    0x8D180
// Slot symbol:     off_8D180
// Target type:     <no type info>
// ============================================================

void .rangeset_t_swap(/* see target signature */)
{
    // Tail-call to rangeset_t_swap via GOT/IAT indirection
    return rangeset_t_swap(/* forwarded args */);
}

