// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6270
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6270 jmp     cs:off_2D120
//
// Resolved target: append_cmt
// Target address:  0x2D620
// GOT/IAT slot:    0x2D120
// Slot symbol:     off_2D120
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

