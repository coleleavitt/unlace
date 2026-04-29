// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD20
// Name:            .merge_handler_perform_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD20 jmp     cs:off_4BFE78
//
// Resolved target: merge_handler_perform_merging
// Target address:  0x4C33A0
// GOT/IAT slot:    0x4BFE78
// Slot symbol:     off_4BFE78
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_merging(/* see target signature */)
{
    // Tail-call to merge_handler_perform_merging via GOT/IAT indirection
    return merge_handler_perform_merging(/* forwarded args */);
}

