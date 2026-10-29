// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x350F60
// Name:            sub_350F60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x350F60 jmp     sub_3506A0
//
// Resolved target: sub_3506A0
// Target address:  0x3506A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_350F60(/* see target signature */)
{
    // Tail-call to sub_3506A0 via direct jump indirection
    return sub_3506A0(/* forwarded args */);
}

