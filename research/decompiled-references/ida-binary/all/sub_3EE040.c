// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3EE040
// Name:            sub_3EE040
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3EE040 jmp     sub_473400
//
// Resolved target: sub_473400
// Target address:  0x473400
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_3EE040(/* see target signature */)
{
    // Tail-call to sub_473400 via direct jump indirection
    return sub_473400(/* forwarded args */);
}

