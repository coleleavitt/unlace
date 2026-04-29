// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A770
// Name:            .rangeset_t_add2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A770 jmp     cs:off_4BF3A0
//
// Resolved target: rangeset_t_add2
// Target address:  0x4C2868
// GOT/IAT slot:    0x4BF3A0
// Slot symbol:     off_4BF3A0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add2(/* see target signature */)
{
    // Tail-call to rangeset_t_add2 via GOT/IAT indirection
    return rangeset_t_add2(/* forwarded args */);
}

