// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A80F0
// Name:            .get_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A80F0 jmp     cs:off_2C79860
//
// Resolved target: get_extra_cmt
// Target address:  0x63D510
// GOT/IAT slot:    0x2C79860
// Slot symbol:     off_2C79860
// Target type:     <no type info>
// ============================================================

void .get_extra_cmt(/* see target signature */)
{
    // Tail-call to get_extra_cmt via GOT/IAT indirection
    return get_extra_cmt(/* forwarded args */);
}

