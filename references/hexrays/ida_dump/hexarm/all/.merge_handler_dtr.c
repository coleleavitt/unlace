// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E9A0
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E9A0 jmp     cs:off_4E9CB8
//
// Resolved target: merge_handler_dtr
// Target address:  0x4EC6F8
// GOT/IAT slot:    0x4E9CB8
// Slot symbol:     off_4E9CB8
// Target type:     <no type info>
// ============================================================

void .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

