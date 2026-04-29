// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62B0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62B0 jmp     cs:off_1D140
//
// Resolved target: set_cmt
// Target address:  0x1D630
// GOT/IAT slot:    0x1D140
// Slot symbol:     off_1D140
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

