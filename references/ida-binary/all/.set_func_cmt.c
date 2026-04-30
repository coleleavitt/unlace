// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E70
// Name:            .set_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E70 jmp     cs:set_func_cmt_ptr
//
// Resolved target: set_func_cmt
// Target address:  0x8D80C0
// GOT/IAT slot:    0x8A33D8
// Slot symbol:     set_func_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .set_func_cmt(/* see target signature */)
{
    // Tail-call to set_func_cmt via GOT/IAT indirection
    return set_func_cmt(/* forwarded args */);
}

