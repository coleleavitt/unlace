// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCC0
// Name:            .set_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCC0 jmp     cs:off_4ED648
//
// Resolved target: set_func_cmt
// Target address:  0x4F1958
// GOT/IAT slot:    0x4ED648
// Slot symbol:     off_4ED648
// Target type:     <no type info>
// ============================================================

void .set_func_cmt(/* see target signature */)
{
    // Tail-call to set_func_cmt via GOT/IAT indirection
    return set_func_cmt(/* forwarded args */);
}

