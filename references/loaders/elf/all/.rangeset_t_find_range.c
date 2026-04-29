// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93A0
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93A0 jmp     cs:off_891B8
//
// Resolved target: rangeset_t_find_range
// Target address:  0x8C4B8
// GOT/IAT slot:    0x891B8
// Slot symbol:     off_891B8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

