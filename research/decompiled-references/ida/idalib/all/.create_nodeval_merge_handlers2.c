// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8730
// Name:            .create_nodeval_merge_handlers2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8730 jmp     cs:off_2C79B80
//
// Resolved target: create_nodeval_merge_handlers2
// Target address:  0x4615D0
// GOT/IAT slot:    0x2C79B80
// Slot symbol:     off_2C79B80
// Target type:     <no type info>
// ============================================================

void .create_nodeval_merge_handlers2(/* see target signature */)
{
    // Tail-call to create_nodeval_merge_handlers2 via GOT/IAT indirection
    return create_nodeval_merge_handlers2(/* forwarded args */);
}

