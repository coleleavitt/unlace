// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A940
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A940 jmp     cs:off_4B9C88
//
// Resolved target: merge_handler_dtr
// Target address:  0x4BC6A8
// GOT/IAT slot:    0x4B9C88
// Slot symbol:     off_4B9C88
// Target type:     <no type info>
// ============================================================

void .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

