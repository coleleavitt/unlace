// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            sub_2330
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2330 endbr64
//   0x2334 jmp     sub_22B0
//
// Resolved target: sub_22B0
// Target address:  0x22B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2330(/* see target signature */)
{
    // Tail-call to sub_22B0 via direct jump indirection
    return sub_22B0(/* forwarded args */);
}

