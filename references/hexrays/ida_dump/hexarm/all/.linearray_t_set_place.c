// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1E0
// Name:            .linearray_t_set_place
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1E0 jmp     cs:off_4E90D8
//
// Resolved target: linearray_t_set_place
// Target address:  0x4EBAC8
// GOT/IAT slot:    0x4E90D8
// Slot symbol:     off_4E90D8
// Target type:     <no type info>
// ============================================================

void .linearray_t_set_place(/* see target signature */)
{
    // Tail-call to linearray_t_set_place via GOT/IAT indirection
    return linearray_t_set_place(/* forwarded args */);
}

