// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA90
// Name:            .create_nodeval_vd_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA90 jmp     cs:off_4E9530
//
// Resolved target: create_nodeval_vd_merge_handler
// Target address:  0x4EBF38
// GOT/IAT slot:    0x4E9530
// Slot symbol:     off_4E9530
// Target type:     <no type info>
// ============================================================

void .create_nodeval_vd_merge_handler(/* see target signature */)
{
    // Tail-call to create_nodeval_vd_merge_handler via GOT/IAT indirection
    return create_nodeval_vd_merge_handler(/* forwarded args */);
}

