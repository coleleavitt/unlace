// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAC0
// Name:            .create_nodeval_vd_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAC0 jmp     cs:off_4ED548
//
// Resolved target: create_nodeval_vd_merge_handler
// Target address:  0x4F1848
// GOT/IAT slot:    0x4ED548
// Slot symbol:     off_4ED548
// Target type:     <no type info>
// ============================================================

void .create_nodeval_vd_merge_handler(/* see target signature */)
{
    // Tail-call to create_nodeval_vd_merge_handler via GOT/IAT indirection
    return create_nodeval_vd_merge_handler(/* forwarded args */);
}

