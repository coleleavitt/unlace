// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114820
// Name:            .merge_handler_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114820 jmp     cs:merge_handler_init_ptr
//
// Resolved target: merge_handler_init
// Target address:  0x8D54A0
// GOT/IAT slot:    0x8A10B0
// Slot symbol:     merge_handler_init_ptr
// Target type:     <no type info>
// ============================================================

void .merge_handler_init(/* see target signature */)
{
    // Tail-call to merge_handler_init via GOT/IAT indirection
    return merge_handler_init(/* forwarded args */);
}

