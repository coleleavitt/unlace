// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A81E0
// Name:            .create_byfunc_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A81E0 jmp     cs:off_2C798D8
//
// Resolved target: create_byfunc_merge_handler
// Target address:  0x5D3FC0
// GOT/IAT slot:    0x2C798D8
// Slot symbol:     off_2C798D8
// Target type:     <no type info>
// ============================================================

void .create_byfunc_merge_handler(/* see target signature */)
{
    // Tail-call to create_byfunc_merge_handler via GOT/IAT indirection
    return create_byfunc_merge_handler(/* forwarded args */);
}

