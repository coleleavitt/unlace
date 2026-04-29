// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42B0
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42B0 jmp     cs:off_23140
//
// Resolved target: append_cmt
// Target address:  0x23560
// GOT/IAT slot:    0x23140
// Slot symbol:     off_23140
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

