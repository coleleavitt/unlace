// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B540
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B540 jmp     cs:merge_handler_dtr_ptr
//
// Resolved target: merge_handler_dtr
// Target address:  0x8D9998
// GOT/IAT slot:    0x8A4740
// Slot symbol:     merge_handler_dtr_ptr
// Target type:     <no type info>
// ============================================================

void .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

