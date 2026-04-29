// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A570
// Name:            .get_extra_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A570 jmp     cs:off_4BF2A0
//
// Resolved target: get_extra_cmt
// Target address:  0x4C2768
// GOT/IAT slot:    0x4BF2A0
// Slot symbol:     off_4BF2A0
// Target type:     <no type info>
// ============================================================

void .get_extra_cmt(/* see target signature */)
{
    // Tail-call to get_extra_cmt via GOT/IAT indirection
    return get_extra_cmt(/* forwarded args */);
}

