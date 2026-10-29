// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3B8050
// Name:            sub_3B8050
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3B8050 jmp     sub_59AA30
//
// Resolved target: sub_59AA30
// Target address:  0x59AA30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_3B8050(/* see target signature */)
{
    // Tail-call to sub_59AA30 via direct jump indirection
    return sub_59AA30(/* forwarded args */);
}

