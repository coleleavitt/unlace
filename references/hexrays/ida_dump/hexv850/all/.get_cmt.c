// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0C0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0C0 jmp     cs:off_4C0848
//
// Resolved target: get_cmt
// Target address:  0x4C3840
// GOT/IAT slot:    0x4C0848
// Slot symbol:     off_4C0848
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

