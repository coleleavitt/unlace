// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB3E0
// Name:            .create_nodeval_merge_handlers
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB3E0 jmp     cs:off_2C7B1D8
//
// Resolved target: create_nodeval_merge_handlers
// Target address:  0x461080
// GOT/IAT slot:    0x2C7B1D8
// Slot symbol:     off_2C7B1D8
// Target type:     <no type info>
// ============================================================

void .create_nodeval_merge_handlers(/* see target signature */)
{
    // Tail-call to create_nodeval_merge_handlers via GOT/IAT indirection
    return create_nodeval_merge_handlers(/* forwarded args */);
}

