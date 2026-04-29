// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32B0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32B0 jmp     cs:off_28140
//
// Resolved target: set_cmt
// Target address:  0x285F0
// GOT/IAT slot:    0x28140
// Slot symbol:     off_28140
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

