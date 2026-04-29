// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED60
// Name:            .merge_handler_perform_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED60 jmp     cs:off_4E9E98
//
// Resolved target: merge_handler_perform_merging
// Target address:  0x4EC8E8
// GOT/IAT slot:    0x4E9E98
// Slot symbol:     off_4E9E98
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_merging(/* see target signature */)
{
    // Tail-call to merge_handler_perform_merging via GOT/IAT indirection
    return merge_handler_perform_merging(/* forwarded args */);
}

