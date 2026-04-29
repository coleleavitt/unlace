// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45A0
// Name:            .Z3_is_re_sort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45A0 jmp     cs:off_4E2B8
//
// Resolved target: Z3_is_re_sort
// Target address:  0x4F8C8
// GOT/IAT slot:    0x4E2B8
// Slot symbol:     off_4E2B8
// Target type:     <no type info>
// ============================================================

void .Z3_is_re_sort(/* see target signature */)
{
    // Tail-call to Z3_is_re_sort via GOT/IAT indirection
    return Z3_is_re_sort(/* forwarded args */);
}

