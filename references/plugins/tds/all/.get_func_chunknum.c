// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_A080
//
// Resolved target: get_func_chunknum
// Target address:  0xA2B0
// GOT/IAT slot:    0xA080
// Slot symbol:     off_A080
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

