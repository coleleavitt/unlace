// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA70
// Name:            .create_nodeval_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA70 jmp     cs:off_2C7BD20
//
// Resolved target: create_nodeval_merge_handler
// Target address:  0x460C50
// GOT/IAT slot:    0x2C7BD20
// Slot symbol:     off_2C7BD20
// Target type:     <no type info>
// ============================================================

void .create_nodeval_merge_handler(/* see target signature */)
{
    // Tail-call to create_nodeval_merge_handler via GOT/IAT indirection
    return create_nodeval_merge_handler(/* forwarded args */);
}

