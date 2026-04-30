// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111440
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111440 jmp     cs:set_cmt_ptr
//
// Resolved target: set_cmt
// Target address:  0x8D3338
// GOT/IAT slot:    0x89F6C0
// Slot symbol:     set_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

