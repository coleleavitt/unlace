// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62C0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62C0 jmp     cs:off_2D148
//
// Resolved target: set_cmt
// Target address:  0x2D648
// GOT/IAT slot:    0x2D148
// Slot symbol:     off_2D148
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

