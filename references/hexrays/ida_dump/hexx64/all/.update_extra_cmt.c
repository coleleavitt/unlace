// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C4F0
// Name:            .update_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C4F0 jmp     cs:off_4EDA60
//
// Resolved target: update_extra_cmt
// Target address:  0x4F1D80
// GOT/IAT slot:    0x4EDA60
// Slot symbol:     off_4EDA60
// Target type:     <no type info>
// ============================================================

void .update_extra_cmt(/* see target signature */)
{
    // Tail-call to update_extra_cmt via GOT/IAT indirection
    return update_extra_cmt(/* forwarded args */);
}

