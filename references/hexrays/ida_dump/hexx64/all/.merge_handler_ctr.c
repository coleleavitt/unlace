// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA80
// Name:            .merge_handler_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA80 jmp     cs:off_4EDD28
//
// Resolved target: merge_handler_ctr
// Target address:  0x4F2068
// GOT/IAT slot:    0x4EDD28
// Slot symbol:     off_4EDD28
// Target type:     <no type info>
// ============================================================

void .merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr via GOT/IAT indirection
    return merge_handler_ctr(/* forwarded args */);
}

