// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8220
// Name:            .merge_handler_perform_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8220 jmp     cs:off_2C798F8
//
// Resolved target: merge_handler_perform_merging
// Target address:  0x45F7F0
// GOT/IAT slot:    0x2C798F8
// Slot symbol:     off_2C798F8
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_merging(/* see target signature */)
{
    // Tail-call to merge_handler_perform_merging via GOT/IAT indirection
    return merge_handler_perform_merging(/* forwarded args */);
}

