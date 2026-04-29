// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2E0
// Name:            .merge_handler_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2E0 jmp     cs:off_4CD958
//
// Resolved target: merge_handler_init
// Target address:  0x4D0378
// GOT/IAT slot:    0x4CD958
// Slot symbol:     off_4CD958
// Target type:     <no type info>
// ============================================================

void .merge_handler_init(/* see target signature */)
{
    // Tail-call to merge_handler_init via GOT/IAT indirection
    return merge_handler_init(/* forwarded args */);
}

