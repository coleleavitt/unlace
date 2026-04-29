// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C960
// Name:            .merge_handler_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C960 jmp     cs:off_4EDC98
//
// Resolved target: merge_handler_perform_diff
// Target address:  0x4F1FD0
// GOT/IAT slot:    0x4EDC98
// Slot symbol:     off_4EDC98
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff via GOT/IAT indirection
    return merge_handler_perform_diff(/* forwarded args */);
}

