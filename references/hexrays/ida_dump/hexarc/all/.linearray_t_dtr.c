// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB00
// Name:            .linearray_t_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB00 jmp     cs:off_4B9D68
//
// Resolved target: linearray_t_dtr
// Target address:  0x4BC788
// GOT/IAT slot:    0x4B9D68
// Slot symbol:     off_4B9D68
// Target type:     <no type info>
// ============================================================

void .linearray_t_dtr(/* see target signature */)
{
    // Tail-call to linearray_t_dtr via GOT/IAT indirection
    return linearray_t_dtr(/* forwarded args */);
}

