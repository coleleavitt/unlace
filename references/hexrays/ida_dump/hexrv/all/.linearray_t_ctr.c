// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F0
// Name:            .linearray_t_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F0 jmp     cs:off_4BF460
//
// Resolved target: linearray_t_ctr
// Target address:  0x4C2938
// GOT/IAT slot:    0x4BF460
// Slot symbol:     off_4BF460
// Target type:     <no type info>
// ============================================================

void .linearray_t_ctr(/* see target signature */)
{
    // Tail-call to linearray_t_ctr via GOT/IAT indirection
    return linearray_t_ctr(/* forwarded args */);
}

