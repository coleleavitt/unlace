// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xB550
// Name:            sub_B550
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0xB550 endbr64
//   0xB554 jmp     sub_B4D0
//
// Resolved target: sub_B4D0
// Target address:  0xB4D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_B550(/* see target signature */)
{
    // Tail-call to sub_B4D0 via direct jump indirection
    return sub_B4D0(/* forwarded args */);
}

