// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9510
// Name:            .merge_handler_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9510 jmp     cs:off_2C7A270
//
// Resolved target: merge_handler_init
// Target address:  0x45AD60
// GOT/IAT slot:    0x2C7A270
// Slot symbol:     off_2C7A270
// Target type:     <no type info>
// ============================================================

void .merge_handler_init(/* see target signature */)
{
    // Tail-call to merge_handler_init via GOT/IAT indirection
    return merge_handler_init(/* forwarded args */);
}

