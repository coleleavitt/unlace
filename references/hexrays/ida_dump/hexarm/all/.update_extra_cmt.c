// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E460
// Name:            .update_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E460 jmp     cs:off_4E9A18
//
// Resolved target: update_extra_cmt
// Target address:  0x4EC438
// GOT/IAT slot:    0x4E9A18
// Slot symbol:     off_4E9A18
// Target type:     <no type info>
// ============================================================

void .update_extra_cmt(/* see target signature */)
{
    // Tail-call to update_extra_cmt via GOT/IAT indirection
    return update_extra_cmt(/* forwarded args */);
}

