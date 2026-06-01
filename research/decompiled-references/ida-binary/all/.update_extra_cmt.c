// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115110
// Name:            .update_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115110 jmp     cs:update_extra_cmt_ptr
//
// Resolved target: update_extra_cmt
// Target address:  0x8D5A68
// GOT/IAT slot:    0x8A1528
// Slot symbol:     update_extra_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .update_extra_cmt(/* see target signature */)
{
    // Tail-call to update_extra_cmt via GOT/IAT indirection
    return update_extra_cmt(/* forwarded args */);
}

