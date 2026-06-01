// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A3A0
// Name:            .linearray_t_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A3A0 jmp     cs:linearray_t_ctr_ptr
//
// Resolved target: linearray_t_ctr
// Target address:  0x8D8E68
// GOT/IAT slot:    0x8A3E70
// Slot symbol:     linearray_t_ctr_ptr
// Target type:     <no type info>
// ============================================================

void .linearray_t_ctr(/* see target signature */)
{
    // Tail-call to linearray_t_ctr via GOT/IAT indirection
    return linearray_t_ctr(/* forwarded args */);
}

