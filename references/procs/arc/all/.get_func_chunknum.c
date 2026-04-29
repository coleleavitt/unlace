// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8220
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8220 jmp     cs:off_2A0F8
//
// Resolved target: get_func_chunknum
// Target address:  0x2BB08
// GOT/IAT slot:    0x2A0F8
// Slot symbol:     off_2A0F8
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

