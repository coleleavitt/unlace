// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA620
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA620 jmp     cs:off_2C7AAF8
//
// Resolved target: rangeset_t_find_range
// Target address:  0x848A70
// GOT/IAT slot:    0x2C7AAF8
// Slot symbol:     off_2C7AAF8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

