// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A960
// Name:            .merge_handler_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A960 jmp     cs:off_4B9C98
//
// Resolved target: merge_handler_ctr
// Target address:  0x4BC6B8
// GOT/IAT slot:    0x4B9C98
// Slot symbol:     off_4B9C98
// Target type:     <no type info>
// ============================================================

void .merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr via GOT/IAT indirection
    return merge_handler_ctr(/* forwarded args */);
}

