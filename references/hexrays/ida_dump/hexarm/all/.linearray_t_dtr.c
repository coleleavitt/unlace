// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB60
// Name:            .linearray_t_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB60 jmp     cs:off_4E9D98
//
// Resolved target: linearray_t_dtr
// Target address:  0x4EC7D8
// GOT/IAT slot:    0x4E9D98
// Slot symbol:     off_4E9D98
// Target type:     <no type info>
// ============================================================

void .linearray_t_dtr(/* see target signature */)
{
    // Tail-call to linearray_t_dtr via GOT/IAT indirection
    return linearray_t_dtr(/* forwarded args */);
}

