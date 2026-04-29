// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25B0
// Name:            sub_25B0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x25B0 endbr64
//   0x25B4 jmp     sub_2530
//
// Resolved target: sub_2530
// Target address:  0x2530
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_25B0(/* see target signature */)
{
    // Tail-call to sub_2530 via direct jump indirection
    return sub_2530(/* forwarded args */);
}

