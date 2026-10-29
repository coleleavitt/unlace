// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACBB0
// Name:            .linearray_t_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACBB0 jmp     cs:off_2C7BDC0
//
// Resolved target: linearray_t_ctr
// Target address:  0x4533C0
// GOT/IAT slot:    0x2C7BDC0
// Slot symbol:     off_2C7BDC0
// Target type:     <no type info>
// ============================================================

void .linearray_t_ctr(/* see target signature */)
{
    // Tail-call to linearray_t_ctr via GOT/IAT indirection
    return linearray_t_ctr(/* forwarded args */);
}

