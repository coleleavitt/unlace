// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A110
// Name:            .get_func_chunknum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A110 jmp     cs:get_func_chunknum_ptr
//
// Resolved target: get_func_chunknum
// Target address:  0x8D8CD0
// GOT/IAT slot:    0x8A3D28
// Slot symbol:     get_func_chunknum_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_chunknum(/* see target signature */)
{
    // Tail-call to get_func_chunknum via GOT/IAT indirection
    return get_func_chunknum(/* forwarded args */);
}

