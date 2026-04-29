// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3B0
// Name:            .get_merge_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3B0 jmp     cs:off_4C01C0
//
// Resolved target: get_merge_handler
// Target address:  0x4C3188
// GOT/IAT slot:    0x4C01C0
// Slot symbol:     off_4C01C0
// Target type:     <no type info>
// ============================================================

void .get_merge_handler(/* see target signature */)
{
    // Tail-call to get_merge_handler via GOT/IAT indirection
    return get_merge_handler(/* forwarded args */);
}

