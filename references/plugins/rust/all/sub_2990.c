// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2990
// Name:            sub_2990
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x2990 endbr64
//   0x2994 jmp     sub_2910
//
// Resolved target: sub_2910
// Target address:  0x2910
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2990(/* see target signature */)
{
    // Tail-call to sub_2910 via direct jump indirection
    return sub_2910(/* forwarded args */);
}

