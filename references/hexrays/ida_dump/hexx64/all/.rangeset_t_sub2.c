// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D310
// Name:            .rangeset_t_sub2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D310 jmp     cs:off_4EE170
//
// Resolved target: rangeset_t_sub2
// Target address:  0x4F24C8
// GOT/IAT slot:    0x4EE170
// Slot symbol:     off_4EE170
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub2(/* see target signature */)
{
    // Tail-call to rangeset_t_sub2 via GOT/IAT indirection
    return rangeset_t_sub2(/* forwarded args */);
}

