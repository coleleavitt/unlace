// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A70
// Name:            .update_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A70 jmp     cs:off_2C7A520
//
// Resolved target: update_extra_cmt
// Target address:  0x63D3A0
// GOT/IAT slot:    0x2C7A520
// Slot symbol:     off_2C7A520
// Target type:     <no type info>
// ============================================================

void .update_extra_cmt(/* see target signature */)
{
    // Tail-call to update_extra_cmt via GOT/IAT indirection
    return update_extra_cmt(/* forwarded args */);
}

