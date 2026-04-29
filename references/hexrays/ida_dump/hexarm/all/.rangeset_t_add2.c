// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D780
// Name:            .rangeset_t_add2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D780 jmp     cs:off_4E93A8
//
// Resolved target: rangeset_t_add2
// Target address:  0x4EBD98
// GOT/IAT slot:    0x4E93A8
// Slot symbol:     off_4E93A8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add2(/* see target signature */)
{
    // Tail-call to rangeset_t_add2 via GOT/IAT indirection
    return rangeset_t_add2(/* forwarded args */);
}

