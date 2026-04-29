// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B440
// Name:            .get_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B440 jmp     cs:off_4DAA08
//
// Resolved target: get_func_cmt
// Target address:  0x4DD408
// GOT/IAT slot:    0x4DAA08
// Slot symbol:     off_4DAA08
// Target type:     <no type info>
// ============================================================

void .get_func_cmt(/* see target signature */)
{
    // Tail-call to get_func_cmt via GOT/IAT indirection
    return get_func_cmt(/* forwarded args */);
}

