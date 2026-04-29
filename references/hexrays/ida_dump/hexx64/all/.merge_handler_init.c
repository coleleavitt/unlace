// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C3A0
// Name:            .merge_handler_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C3A0 jmp     cs:off_4ED9B8
//
// Resolved target: merge_handler_init
// Target address:  0x4F1CD8
// GOT/IAT slot:    0x4ED9B8
// Slot symbol:     off_4ED9B8
// Target type:     <no type info>
// ============================================================

void .merge_handler_init(/* see target signature */)
{
    // Tail-call to merge_handler_init via GOT/IAT indirection
    return merge_handler_init(/* forwarded args */);
}

