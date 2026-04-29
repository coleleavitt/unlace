// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_8078
//
// Resolved target: set_cmt
// Target address:  0x8258
// GOT/IAT slot:    0x8078
// Slot symbol:     off_8078
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

