// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA4B0
// Name:            .merge_handler_perform_diff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA4B0 jmp     cs:off_2C7AA40
//
// Resolved target: merge_handler_perform_diff
// Target address:  0x45ADB0
// GOT/IAT slot:    0x2C7AA40
// Slot symbol:     off_2C7AA40
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff via GOT/IAT indirection
    return merge_handler_perform_diff(/* forwarded args */);
}

