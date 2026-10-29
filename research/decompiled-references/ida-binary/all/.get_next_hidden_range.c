// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1151B0
// Name:            .get_next_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1151B0 jmp     cs:get_next_hidden_range_ptr
//
// Resolved target: get_next_hidden_range
// Target address:  0x8D5AD8
// GOT/IAT slot:    0x8A1578
// Slot symbol:     get_next_hidden_range_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_hidden_range(/* see target signature */)
{
    // Tail-call to get_next_hidden_range via GOT/IAT indirection
    return get_next_hidden_range(/* forwarded args */);
}

