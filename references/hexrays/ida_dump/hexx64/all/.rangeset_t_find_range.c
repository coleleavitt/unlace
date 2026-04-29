// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB10
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB10 jmp     cs:off_4ED570
//
// Resolved target: rangeset_t_find_range
// Target address:  0x4F1870
// GOT/IAT slot:    0x4ED570
// Slot symbol:     off_4ED570
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

