// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C60
// Name:            .merge_handler_perform_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C60 jmp     cs:merge_handler_perform_merging_ptr
//
// Resolved target: merge_handler_perform_merging
// Target address:  0x8D42B8
// GOT/IAT slot:    0x8A02D0
// Slot symbol:     merge_handler_perform_merging_ptr
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_merging(/* see target signature */)
{
    // Tail-call to merge_handler_perform_merging via GOT/IAT indirection
    return merge_handler_perform_merging(/* forwarded args */);
}

