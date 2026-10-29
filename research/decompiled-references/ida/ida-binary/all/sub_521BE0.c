// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x521BE0
// Name:            sub_521BE0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x521BE0 jmp     sub_54E070
//
// Resolved target: sub_54E070
// Target address:  0x54E070
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_521BE0(/* see target signature */)
{
    // Tail-call to sub_54E070 via direct jump indirection
    return sub_54E070(/* forwarded args */);
}

