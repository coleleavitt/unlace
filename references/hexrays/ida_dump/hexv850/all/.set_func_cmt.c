// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC70
// Name:            .set_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC70 jmp     cs:off_4C0620
//
// Resolved target: set_func_cmt
// Target address:  0x4C3610
// GOT/IAT slot:    0x4C0620
// Slot symbol:     off_4C0620
// Target type:     <no type info>
// ============================================================

void .set_func_cmt(/* see target signature */)
{
    // Tail-call to set_func_cmt via GOT/IAT indirection
    return set_func_cmt(/* forwarded args */);
}

