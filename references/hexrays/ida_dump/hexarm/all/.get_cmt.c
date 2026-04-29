// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E0E0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E0E0 jmp     cs:off_4E9858
//
// Resolved target: get_cmt
// Target address:  0x4EC278
// GOT/IAT slot:    0x4E9858
// Slot symbol:     off_4E9858
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

