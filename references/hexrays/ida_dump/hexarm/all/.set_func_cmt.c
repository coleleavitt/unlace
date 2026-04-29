// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC90
// Name:            .set_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC90 jmp     cs:off_4E9630
//
// Resolved target: set_func_cmt
// Target address:  0x4EC048
// GOT/IAT slot:    0x4E9630
// Slot symbol:     off_4E9630
// Target type:     <no type info>
// ============================================================

void .set_func_cmt(/* see target signature */)
{
    // Tail-call to set_func_cmt via GOT/IAT indirection
    return set_func_cmt(/* forwarded args */);
}

