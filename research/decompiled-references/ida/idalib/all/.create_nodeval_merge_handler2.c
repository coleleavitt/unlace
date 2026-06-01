// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA3C0
// Name:            .create_nodeval_merge_handler2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA3C0 jmp     cs:off_2C7A9C8
//
// Resolved target: create_nodeval_merge_handler2
// Target address:  0x461280
// GOT/IAT slot:    0x2C7A9C8
// Slot symbol:     off_2C7A9C8
// Target type:     <no type info>
// ============================================================

void .create_nodeval_merge_handler2(/* see target signature */)
{
    // Tail-call to create_nodeval_merge_handler2 via GOT/IAT indirection
    return create_nodeval_merge_handler2(/* forwarded args */);
}

