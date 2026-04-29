// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA50
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA50 jmp     cs:off_4EDD10
//
// Resolved target: merge_handler_dtr
// Target address:  0x4F2050
// GOT/IAT slot:    0x4EDD10
// Slot symbol:     off_4EDD10
// Target type:     <no type info>
// ============================================================

void .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

