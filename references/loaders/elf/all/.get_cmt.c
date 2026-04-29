// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9550
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9550 jmp     cs:off_89290
//
// Resolved target: get_cmt
// Target address:  0x8C598
// GOT/IAT slot:    0x89290
// Slot symbol:     off_89290
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

