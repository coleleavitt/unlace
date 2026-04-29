// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1250
// Name:            sub_1250
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1250 endbr64
//   0x1254 jmp     sub_11D0
//
// Resolved target: sub_11D0
// Target address:  0x11D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1250(/* see target signature */)
{
    // Tail-call to sub_11D0 via direct jump indirection
    return sub_11D0(/* forwarded args */);
}

