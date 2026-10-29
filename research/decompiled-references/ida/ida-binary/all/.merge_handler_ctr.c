// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113560
// Name:            .merge_handler_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113560 jmp     cs:merge_handler_ctr_ptr
//
// Resolved target: merge_handler_ctr
// Target address:  0x8D48A0
// GOT/IAT slot:    0x8A0750
// Slot symbol:     merge_handler_ctr_ptr
// Target type:     <no type info>
// ============================================================

void .merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr via GOT/IAT indirection
    return merge_handler_ctr(/* forwarded args */);
}

