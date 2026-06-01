// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            sub_11D0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x11D0 endbr64
//   0x11D4 jmp     sub_1150
//
// Resolved target: sub_1150
// Target address:  0x1150
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_11D0(/* see target signature */)
{
    // Tail-call to sub_1150 via direct jump indirection
    return sub_1150(/* forwarded args */);
}

