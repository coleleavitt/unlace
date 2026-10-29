// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ADE0
// Name:            .linearray_t_set_place
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ADE0 jmp     cs:linearray_t_set_place_ptr
//
// Resolved target: linearray_t_set_place
// Target address:  0x8D94E0
// GOT/IAT slot:    0x8A4390
// Slot symbol:     linearray_t_set_place_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_set_place(/* see target signature */)
{
    // Tail-call to linearray_t_set_place via GOT/IAT indirection
    return linearray_t_set_place(/* forwarded args */);
}

