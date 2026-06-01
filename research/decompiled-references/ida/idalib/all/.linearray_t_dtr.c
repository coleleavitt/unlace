// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABED0
// Name:            .linearray_t_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABED0 jmp     cs:off_2C7B750
//
// Resolved target: linearray_t_dtr
// Target address:  0x4533F0
// GOT/IAT slot:    0x2C7B750
// Slot symbol:     off_2C7B750
// Target type:     <no type info>
// ============================================================

void .linearray_t_dtr(/* see target signature */)
{
    // Tail-call to linearray_t_dtr via GOT/IAT indirection
    return linearray_t_dtr(/* forwarded args */);
}

