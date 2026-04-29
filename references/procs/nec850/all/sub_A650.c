// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA650
// Name:            sub_A650
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0xA650 endbr64
//   0xA654 jmp     sub_A5D0
//
// Resolved target: sub_A5D0
// Target address:  0xA5D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_A650(/* see target signature */)
{
    // Tail-call to sub_A5D0 via direct jump indirection
    return sub_A5D0(/* forwarded args */);
}

