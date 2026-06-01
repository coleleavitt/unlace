// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116310
// Name:            .merge_handler_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116310 jmp     cs:merge_handler_perform_diff_ptr
//
// Resolved target: merge_handler_perform_diff
// Target address:  0x8D65B0
// GOT/IAT slot:    0x8A1E28
// Slot symbol:     merge_handler_perform_diff_ptr
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff via GOT/IAT indirection
    return merge_handler_perform_diff(/* forwarded args */);
}

