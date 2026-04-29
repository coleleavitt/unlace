// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0A0
// Name:            .create_byfunc_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0A0 jmp     cs:off_4BF038
//
// Resolved target: create_byfunc_merge_handler
// Target address:  0x4C2500
// GOT/IAT slot:    0x4BF038
// Slot symbol:     off_4BF038
// Target type:     <no type info>
// ============================================================

void .create_byfunc_merge_handler(/* see target signature */)
{
    // Tail-call to create_byfunc_merge_handler via GOT/IAT indirection
    return create_byfunc_merge_handler(/* forwarded args */);
}

