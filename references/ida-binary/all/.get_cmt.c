// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1164B0
// Name:            .get_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1164B0 jmp     cs:get_cmt_ptr
//
// Resolved target: get_cmt
// Target address:  0x8D66B0
// GOT/IAT slot:    0x8A1EF8
// Slot symbol:     get_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .get_cmt(/* see target signature */)
{
    // Tail-call to get_cmt via GOT/IAT indirection
    return get_cmt(/* forwarded args */);
}

