// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E8C0
// Name:            .merge_handler_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E8C0 jmp     cs:off_4E9C48
//
// Resolved target: merge_handler_perform_diff
// Target address:  0x4EC678
// GOT/IAT slot:    0x4E9C48
// Slot symbol:     off_4E9C48
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff via GOT/IAT indirection
    return merge_handler_perform_diff(/* forwarded args */);
}

