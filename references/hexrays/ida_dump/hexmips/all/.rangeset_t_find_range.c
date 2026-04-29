// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC0
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC0 jmp     cs:off_4CD548
//
// Resolved target: rangeset_t_find_range
// Target address:  0x4CFF50
// GOT/IAT slot:    0x4CD548
// Slot symbol:     off_4CD548
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

