// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D900
// Name:            .linearray_t_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D900 jmp     cs:off_4E9468
//
// Resolved target: linearray_t_ctr
// Target address:  0x4EBE68
// GOT/IAT slot:    0x4E9468
// Slot symbol:     off_4E9468
// Target type:     <no type info>
// ============================================================

void .linearray_t_ctr(/* see target signature */)
{
    // Tail-call to linearray_t_ctr via GOT/IAT indirection
    return linearray_t_ctr(/* forwarded args */);
}

