// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4180
// Name:            .rangeset_t_intersect
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4180 jmp     cs:off_1F0A8
//
// Resolved target: rangeset_t_intersect
// Target address:  0x1F358
// GOT/IAT slot:    0x1F0A8
// Slot symbol:     off_1F0A8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_intersect(/* see target signature */)
{
    // Tail-call to rangeset_t_intersect via GOT/IAT indirection
    return rangeset_t_intersect(/* forwarded args */);
}

