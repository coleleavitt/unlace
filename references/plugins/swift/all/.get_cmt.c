// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4450
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4450 jmp     cs:off_28210
//
// Resolved target: get_cmt
// Target address:  0x29BA8
// GOT/IAT slot:    0x28210
// Slot symbol:     off_28210
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

