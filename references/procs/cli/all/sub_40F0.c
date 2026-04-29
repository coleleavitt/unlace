// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40F0
// Name:            sub_40F0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x40F0 endbr64
//   0x40F4 jmp     sub_4070
//
// Resolved target: sub_4070
// Target address:  0x4070
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_40F0(/* see target signature */)
{
    // Tail-call to sub_4070 via direct jump indirection
    return sub_4070(/* forwarded args */);
}

