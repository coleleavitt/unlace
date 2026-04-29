// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2650
// Name:            sub_2650
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2650 endbr64
//   0x2654 jmp     sub_25D0
//
// Resolved target: sub_25D0
// Target address:  0x25D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2650(/* see target signature */)
{
    // Tail-call to sub_25D0 via direct jump indirection
    return sub_25D0(/* forwarded args */);
}

