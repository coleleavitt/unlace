// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            sub_1180
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1180 endbr64
//   0x1184 jmp     sub_1100
//
// Resolved target: sub_1100
// Target address:  0x1100
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1180(/* see target signature */)
{
    // Tail-call to sub_1100 via direct jump indirection
    return sub_1100(/* forwarded args */);
}

