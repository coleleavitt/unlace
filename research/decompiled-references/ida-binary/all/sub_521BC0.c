// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x521BC0
// Name:            sub_521BC0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x521BC0 jmp     sub_54E010
//
// Resolved target: sub_54E010
// Target address:  0x54E010
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_521BC0(/* see target signature */)
{
    // Tail-call to sub_54E010 via direct jump indirection
    return sub_54E010(/* forwarded args */);
}

