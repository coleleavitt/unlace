// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x637B0
// Name:            sub_637B0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x637B0 endbr64
//   0x637B4 jmp     sub_63730
//
// Resolved target: sub_63730
// Target address:  0x63730
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_637B0(/* see target signature */)
{
    // Tail-call to sub_63730 via direct jump indirection
    return sub_63730(/* forwarded args */);
}

