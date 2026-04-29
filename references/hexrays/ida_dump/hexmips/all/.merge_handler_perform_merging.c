// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD30
// Name:            .merge_handler_perform_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD30 jmp     cs:off_4CDE80
//
// Resolved target: merge_handler_perform_merging
// Target address:  0x4D08D0
// GOT/IAT slot:    0x4CDE80
// Slot symbol:     off_4CDE80
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_merging(/* see target signature */)
{
    // Tail-call to merge_handler_perform_merging via GOT/IAT indirection
    return merge_handler_perform_merging(/* forwarded args */);
}

