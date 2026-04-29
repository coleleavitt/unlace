// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3260
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3260 jmp     cs:off_13118
//
// Resolved target: set_cmt
// Target address:  0x13490
// GOT/IAT slot:    0x13118
// Slot symbol:     off_13118
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

