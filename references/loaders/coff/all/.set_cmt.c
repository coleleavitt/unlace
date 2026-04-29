// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4300
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4300 jmp     cs:off_23168
//
// Resolved target: set_cmt
// Target address:  0x23588
// GOT/IAT slot:    0x23168
// Slot symbol:     off_23168
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

