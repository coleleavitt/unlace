// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E10
// Name:            .linearray_t_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E10 jmp     cs:linearray_t_dtr_ptr
//
// Resolved target: linearray_t_dtr
// Target address:  0x8D8078
// GOT/IAT slot:    0x8A33A8
// Slot symbol:     linearray_t_dtr_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_dtr(/* see target signature */)
{
    // Tail-call to linearray_t_dtr via GOT/IAT indirection
    return linearray_t_dtr(/* forwarded args */);
}

