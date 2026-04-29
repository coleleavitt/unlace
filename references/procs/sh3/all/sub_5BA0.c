// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5BA0
// Name:            sub_5BA0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5BA0 endbr64
//   0x5BA4 jmp     sub_5B20
//
// Resolved target: sub_5B20
// Target address:  0x5B20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5BA0(/* see target signature */)
{
    // Tail-call to sub_5B20 via direct jump indirection
    return sub_5B20(/* forwarded args */);
}

