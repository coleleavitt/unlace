// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E320
// Name:            .merge_handler_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E320 jmp     cs:off_4E9978
//
// Resolved target: merge_handler_init
// Target address:  0x4EC398
// GOT/IAT slot:    0x4E9978
// Slot symbol:     off_4E9978
// Target type:     <no type info>
// ============================================================

void .merge_handler_init(/* see target signature */)
{
    // Tail-call to merge_handler_init via GOT/IAT indirection
    return merge_handler_init(/* forwarded args */);
}

