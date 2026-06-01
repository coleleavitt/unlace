// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA5E0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA5E0 jmp     cs:off_2C7AAD8
//
// Resolved target: get_cmt
// Target address:  0x3C3230
// GOT/IAT slot:    0x2C7AAD8
// Slot symbol:     off_2C7AAD8
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

