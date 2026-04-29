// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F1D0
// Name:            .rangeset_t_sub2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F1D0 jmp     cs:off_4EA0D0
//
// Resolved target: rangeset_t_sub2
// Target address:  0x4ECB28
// GOT/IAT slot:    0x4EA0D0
// Slot symbol:     off_4EA0D0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub2(/* see target signature */)
{
    // Tail-call to rangeset_t_sub2 via GOT/IAT indirection
    return rangeset_t_sub2(/* forwarded args */);
}

