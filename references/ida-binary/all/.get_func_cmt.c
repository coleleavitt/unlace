// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B920
// Name:            .get_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B920 jmp     cs:get_func_cmt_ptr
//
// Resolved target: get_func_cmt
// Target address:  0x8D9BF0
// GOT/IAT slot:    0x8A4930
// Slot symbol:     get_func_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_cmt(/* see target signature */)
{
    // Tail-call to get_func_cmt via GOT/IAT indirection
    return get_func_cmt(/* forwarded args */);
}

