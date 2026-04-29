// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5FBA0
// Name:            sub_5FBA0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5FBA0 endbr64
//   0x5FBA4 jmp     sub_5FB20
//
// Resolved target: sub_5FB20
// Target address:  0x5FB20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5FBA0(/* see target signature */)
{
    // Tail-call to sub_5FB20 via direct jump indirection
    return sub_5FB20(/* forwarded args */);
}

