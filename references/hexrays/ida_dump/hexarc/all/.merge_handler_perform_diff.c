// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A860
// Name:            .merge_handler_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A860 jmp     cs:off_4B9C18
//
// Resolved target: merge_handler_perform_diff
// Target address:  0x4BC628
// GOT/IAT slot:    0x4B9C18
// Slot symbol:     off_4B9C18
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff via GOT/IAT indirection
    return merge_handler_perform_diff(/* forwarded args */);
}

