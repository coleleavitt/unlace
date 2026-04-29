// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B990
// Name:            .merge_handler_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B990 jmp     cs:off_4C0CB0
//
// Resolved target: merge_handler_ctr
// Target address:  0x4C3CC8
// GOT/IAT slot:    0x4C0CB0
// Slot symbol:     off_4C0CB0
// Target type:     <no type info>
// ============================================================

void .merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr via GOT/IAT indirection
    return merge_handler_ctr(/* forwarded args */);
}

