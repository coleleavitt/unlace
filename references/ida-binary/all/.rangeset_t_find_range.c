// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116570
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116570 jmp     cs:rangeset_t_find_range_ptr
//
// Resolved target: rangeset_t_find_range
// Target address:  0x8D6740
// GOT/IAT slot:    0x8A1F58
// Slot symbol:     rangeset_t_find_range_ptr
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

