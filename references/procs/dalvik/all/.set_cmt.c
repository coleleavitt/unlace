// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5200
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5200 jmp     cs:off_1A0E8
//
// Resolved target: set_cmt
// Target address:  0x1A470
// GOT/IAT slot:    0x1A0E8
// Slot symbol:     off_1A0E8
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

