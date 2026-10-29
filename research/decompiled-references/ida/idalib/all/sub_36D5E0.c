// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36D5E0
// Name:            sub_36D5E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36D5E0 jmp     sub_789E40
//
// Resolved target: sub_789E40
// Target address:  0x789E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_36D5E0(/* see target signature */)
{
    // Tail-call to sub_789E40 via direct jump indirection
    return sub_789E40(/* forwarded args */);
}

