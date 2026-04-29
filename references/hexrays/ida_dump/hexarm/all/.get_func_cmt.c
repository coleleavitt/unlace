// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E480
// Name:            .get_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E480 jmp     cs:off_4E9A28
//
// Resolved target: get_func_cmt
// Target address:  0x4EC448
// GOT/IAT slot:    0x4E9A28
// Slot symbol:     off_4E9A28
// Target type:     <no type info>
// ============================================================

void .get_func_cmt(/* see target signature */)
{
    // Tail-call to get_func_cmt via GOT/IAT indirection
    return get_func_cmt(/* forwarded args */);
}

