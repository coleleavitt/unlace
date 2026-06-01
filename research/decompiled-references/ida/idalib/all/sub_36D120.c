// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36D120
// Name:            sub_36D120
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36D120 jmp     sub_789EE0
//
// Resolved target: sub_789EE0
// Target address:  0x789EE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_36D120(/* see target signature */)
{
    // Tail-call to sub_789EE0 via direct jump indirection
    return sub_789EE0(/* forwarded args */);
}

