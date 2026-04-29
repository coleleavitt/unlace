// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2E0
// Name:            .merge_handler_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2E0 jmp     cs:off_4B9958
//
// Resolved target: merge_handler_init
// Target address:  0x4BC358
// GOT/IAT slot:    0x4B9958
// Slot symbol:     off_4B9958
// Target type:     <no type info>
// ============================================================

void .merge_handler_init(/* see target signature */)
{
    // Tail-call to merge_handler_init via GOT/IAT indirection
    return merge_handler_init(/* forwarded args */);
}

