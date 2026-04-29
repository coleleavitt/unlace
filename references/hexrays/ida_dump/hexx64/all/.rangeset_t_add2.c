// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7A0
// Name:            .rangeset_t_add2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7A0 jmp     cs:off_4ED3B8
//
// Resolved target: rangeset_t_add2
// Target address:  0x4F16B0
// GOT/IAT slot:    0x4ED3B8
// Slot symbol:     off_4ED3B8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add2(/* see target signature */)
{
    // Tail-call to rangeset_t_add2 via GOT/IAT indirection
    return rangeset_t_add2(/* forwarded args */);
}

