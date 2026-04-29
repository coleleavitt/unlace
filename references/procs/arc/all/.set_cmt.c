// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8320
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8320 jmp     cs:off_2A178
//
// Resolved target: set_cmt
// Target address:  0x2BB88
// GOT/IAT slot:    0x2A178
// Slot symbol:     off_2A178
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

