// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B970
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B970 jmp     cs:off_4C0CA0
//
// Resolved target: merge_handler_dtr
// Target address:  0x4C3CB8
// GOT/IAT slot:    0x4C0CA0
// Slot symbol:     off_4C0CA0
// Target type:     <no type info>
// ============================================================

void .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

