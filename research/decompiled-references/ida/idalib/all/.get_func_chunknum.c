// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA00
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA00 jmp     cs:off_2C7BCE8
//
// Resolved target: get_func_chunknum
// Target address:  0x5C9AC0
// GOT/IAT slot:    0x2C7BCE8
// Slot symbol:     off_2C7BCE8
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

