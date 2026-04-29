// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB20
// Name:            .linearray_t_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB20 jmp     cs:off_4DAD78
//
// Resolved target: linearray_t_dtr
// Target address:  0x4DD798
// GOT/IAT slot:    0x4DAD78
// Slot symbol:     off_4DAD78
// Target type:     <no type info>
// ============================================================

void .linearray_t_dtr(/* see target signature */)
{
    // Tail-call to linearray_t_dtr via GOT/IAT indirection
    return linearray_t_dtr(/* forwarded args */);
}

