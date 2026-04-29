// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5190
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5190 jmp     cs:off_1A0B0
//
// Resolved target: get_func_chunknum
// Target address:  0x1A438
// GOT/IAT slot:    0x1A0B0
// Slot symbol:     off_1A0B0
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

