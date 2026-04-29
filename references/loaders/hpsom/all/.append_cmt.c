// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_5038
//
// Resolved target: append_cmt
// Target address:  0x51D8
// GOT/IAT slot:    0x5038
// Slot symbol:     off_5038
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

