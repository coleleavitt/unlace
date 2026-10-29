// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112790
// Name:            .linearray_t_ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112790 jmp     cs:linearray_t_ending_ptr
//
// Resolved target: linearray_t_ending
// Target address:  0x8D3FC8
// GOT/IAT slot:    0x8A0068
// Slot symbol:     linearray_t_ending_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_ending(/* see target signature */)
{
    // Tail-call to linearray_t_ending via GOT/IAT indirection
    return linearray_t_ending(/* forwarded args */);
}

