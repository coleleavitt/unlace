// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0B0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0B0 jmp     cs:off_4B9840
//
// Resolved target: get_cmt
// Target address:  0x4BC240
// GOT/IAT slot:    0x4B9840
// Slot symbol:     off_4B9840
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

