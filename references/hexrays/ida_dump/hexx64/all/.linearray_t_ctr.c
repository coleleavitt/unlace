// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B930
// Name:            .linearray_t_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B930 jmp     cs:off_4ED480
//
// Resolved target: linearray_t_ctr
// Target address:  0x4F1778
// GOT/IAT slot:    0x4ED480
// Slot symbol:     off_4ED480
// Target type:     <no type info>
// ============================================================

void .linearray_t_ctr(/* see target signature */)
{
    // Tail-call to linearray_t_ctr via GOT/IAT indirection
    return linearray_t_ctr(/* forwarded args */);
}

