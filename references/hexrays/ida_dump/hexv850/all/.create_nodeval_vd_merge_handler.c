// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA70
// Name:            .create_nodeval_vd_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA70 jmp     cs:off_4C0520
//
// Resolved target: create_nodeval_vd_merge_handler
// Target address:  0x4C3500
// GOT/IAT slot:    0x4C0520
// Slot symbol:     off_4C0520
// Target type:     <no type info>
// ============================================================

void .create_nodeval_vd_merge_handler(/* see target signature */)
{
    // Tail-call to create_nodeval_vd_merge_handler via GOT/IAT indirection
    return create_nodeval_vd_merge_handler(/* forwarded args */);
}

