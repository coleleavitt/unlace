// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B960
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B960 jmp     cs:off_4DAC98
//
// Resolved target: merge_handler_dtr
// Target address:  0x4DD6B8
// GOT/IAT slot:    0x4DAC98
// Slot symbol:     off_4DAC98
// Target type:     <no type info>
// ============================================================

void .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

