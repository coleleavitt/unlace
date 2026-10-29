// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8850
// Name:            .merge_handler_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8850 jmp     cs:off_2C79C10
//
// Resolved target: merge_handler_ctr
// Target address:  0x45EC90
// GOT/IAT slot:    0x2C79C10
// Slot symbol:     off_2C79C10
// Target type:     <no type info>
// ============================================================

void .merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr via GOT/IAT indirection
    return merge_handler_ctr(/* forwarded args */);
}

