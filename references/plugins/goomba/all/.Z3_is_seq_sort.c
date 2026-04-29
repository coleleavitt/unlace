// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42B0
// Name:            .Z3_is_seq_sort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42B0 jmp     cs:off_4E140
//
// Resolved target: Z3_is_seq_sort
// Target address:  0x4F748
// GOT/IAT slot:    0x4E140
// Slot symbol:     off_4E140
// Target type:     <no type info>
// ============================================================

void .Z3_is_seq_sort(/* see target signature */)
{
    // Tail-call to Z3_is_seq_sort via GOT/IAT indirection
    return Z3_is_seq_sort(/* forwarded args */);
}

