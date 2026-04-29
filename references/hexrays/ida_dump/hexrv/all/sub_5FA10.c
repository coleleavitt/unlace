// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5FA10
// Name:            sub_5FA10
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5FA10 endbr64
//   0x5FA14 jmp     sub_5F990
//
// Resolved target: sub_5F990
// Target address:  0x5F990
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5FA10(/* see target signature */)
{
    // Tail-call to sub_5F990 via direct jump indirection
    return sub_5F990(/* forwarded args */);
}

