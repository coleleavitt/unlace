// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB9C0
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB9C0 jmp     cs:off_2C7B4C8
//
// Resolved target: append_cmt
// Target address:  0x59B6F0
// GOT/IAT slot:    0x2C7B4C8
// Slot symbol:     off_2C7B4C8
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

