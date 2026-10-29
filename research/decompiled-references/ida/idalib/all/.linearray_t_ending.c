// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7EE0
// Name:            .linearray_t_ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7EE0 jmp     cs:off_2C79758
//
// Resolved target: linearray_t_ending
// Target address:  0x453820
// GOT/IAT slot:    0x2C79758
// Slot symbol:     off_2C79758
// Target type:     <no type info>
// ============================================================

void .linearray_t_ending(/* see target signature */)
{
    // Tail-call to linearray_t_ending via GOT/IAT indirection
    return linearray_t_ending(/* forwarded args */);
}

