// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD2F0
// Name:            .linearray_t_set_place
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD2F0 jmp     cs:off_2C7C160
//
// Resolved target: linearray_t_set_place
// Target address:  0x4537F0
// GOT/IAT slot:    0x2C7C160
// Slot symbol:     off_2C7C160
// Target type:     <no type info>
// ============================================================

void .linearray_t_set_place(/* see target signature */)
{
    // Tail-call to linearray_t_set_place via GOT/IAT indirection
    return linearray_t_set_place(/* forwarded args */);
}

