// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xB7A0
// Name:            sub_B7A0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0xB7A0 endbr64
//   0xB7A4 jmp     sub_B720
//
// Resolved target: sub_B720
// Target address:  0xB720
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_B7A0(/* see target signature */)
{
    // Tail-call to sub_B720 via direct jump indirection
    return sub_B720(/* forwarded args */);
}

