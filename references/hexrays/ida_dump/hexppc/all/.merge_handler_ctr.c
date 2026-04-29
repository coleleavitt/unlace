// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B980
// Name:            .merge_handler_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B980 jmp     cs:off_4DACA8
//
// Resolved target: merge_handler_ctr
// Target address:  0x4DD6C8
// GOT/IAT slot:    0x4DACA8
// Slot symbol:     off_4DACA8
// Target type:     <no type info>
// ============================================================

void .merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr via GOT/IAT indirection
    return merge_handler_ctr(/* forwarded args */);
}

