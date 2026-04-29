// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61C0
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61C0 jmp     cs:off_1D0C8
//
// Resolved target: get_func_chunknum
// Target address:  0x1D5B8
// GOT/IAT slot:    0x1D0C8
// Slot symbol:     off_1D0C8
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

