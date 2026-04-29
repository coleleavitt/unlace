// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B420
// Name:            .update_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B420 jmp     cs:off_4C09F8
//
// Resolved target: update_extra_cmt
// Target address:  0x4C39F0
// GOT/IAT slot:    0x4C09F8
// Slot symbol:     off_4C09F8
// Target type:     <no type info>
// ============================================================

void .update_extra_cmt(/* see target signature */)
{
    // Tail-call to update_extra_cmt via GOT/IAT indirection
    return update_extra_cmt(/* forwarded args */);
}

