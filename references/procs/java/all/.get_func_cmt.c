// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64F0
// Name:            .get_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64F0 jmp     cs:off_2D260
//
// Resolved target: get_func_cmt
// Target address:  0x2D760
// GOT/IAT slot:    0x2D260
// Slot symbol:     off_2D260
// Target type:     <no type info>
// ============================================================

void .get_func_cmt(/* see target signature */)
{
    // Tail-call to get_func_cmt via GOT/IAT indirection
    return get_func_cmt(/* forwarded args */);
}

