// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C510
// Name:            .get_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C510 jmp     cs:off_4EDA70
//
// Resolved target: get_func_cmt
// Target address:  0x4F1D90
// GOT/IAT slot:    0x4EDA70
// Slot symbol:     off_4EDA70
// Target type:     <no type info>
// ============================================================

void .get_func_cmt(/* see target signature */)
{
    // Tail-call to get_func_cmt via GOT/IAT indirection
    return get_func_cmt(/* forwarded args */);
}

