// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABF40
// Name:            .set_func_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABF40 jmp     cs:off_2C7B788
//
// Resolved target: set_func_cmt
// Target address:  0x5C71E0
// GOT/IAT slot:    0x2C7B788
// Slot symbol:     off_2C7B788
// Target type:     <no type info>
// ============================================================

void .set_func_cmt(/* see target signature */)
{
    // Tail-call to set_func_cmt via GOT/IAT indirection
    return set_func_cmt(/* forwarded args */);
}

