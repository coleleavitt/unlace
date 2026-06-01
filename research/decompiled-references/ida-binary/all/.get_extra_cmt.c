// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112AB0
// Name:            .get_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112AB0 jmp     cs:get_extra_cmt_ptr
//
// Resolved target: get_extra_cmt
// Target address:  0x8D41A0
// GOT/IAT slot:    0x8A01F8
// Slot symbol:     get_extra_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .get_extra_cmt(/* see target signature */)
{
    // Tail-call to get_extra_cmt via GOT/IAT indirection
    return get_extra_cmt(/* forwarded args */);
}

