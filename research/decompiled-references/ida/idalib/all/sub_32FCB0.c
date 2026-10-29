// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32FCB0
// Name:            sub_32FCB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x32FCB0 jmp     sub_3042B0
//
// Resolved target: sub_3042B0
// Target address:  0x3042B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_32FCB0(/* see target signature */)
{
    // Tail-call to sub_3042B0 via direct jump indirection
    return sub_3042B0(/* forwarded args */);
}

