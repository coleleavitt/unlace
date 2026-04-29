// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE50
// Name:            .merge_handler_perform_merging
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE50 jmp     cs:off_4EDF10
//
// Resolved target: merge_handler_perform_merging
// Target address:  0x4F2260
// GOT/IAT slot:    0x4EDF10
// Slot symbol:     off_4EDF10
// Target type:     <no type info>
// ============================================================

void .merge_handler_perform_merging(/* see target signature */)
{
    // Tail-call to merge_handler_perform_merging via GOT/IAT indirection
    return merge_handler_perform_merging(/* forwarded args */);
}

