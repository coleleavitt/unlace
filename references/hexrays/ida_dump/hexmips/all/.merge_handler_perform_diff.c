// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B890
// Name:            .merge_handler_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B890 jmp     cs:off_4CDC30
//
// Resolved target: merge_handler_perform_diff
// Target address:  0x4D0660
// GOT/IAT slot:    0x4CDC30
// Slot symbol:     off_4CDC30
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff via GOT/IAT indirection
    return merge_handler_perform_diff(/* forwarded args */);
}

