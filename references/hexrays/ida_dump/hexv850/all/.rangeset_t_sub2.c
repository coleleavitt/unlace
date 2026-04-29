// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1A0
// Name:            .rangeset_t_sub2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1A0 jmp     cs:off_4C10B8
//
// Resolved target: rangeset_t_sub2
// Target address:  0x4C40E8
// GOT/IAT slot:    0x4C10B8
// Slot symbol:     off_4C10B8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub2(/* see target signature */)
{
    // Tail-call to rangeset_t_sub2 via GOT/IAT indirection
    return rangeset_t_sub2(/* forwarded args */);
}

