// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5D840
// Name:            sub_5D840
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5D840 endbr64
//   0x5D844 jmp     sub_5D7C0
//
// Resolved target: sub_5D7C0
// Target address:  0x5D7C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5D840(/* see target signature */)
{
    // Tail-call to sub_5D7C0 via direct jump indirection
    return sub_5D7C0(/* forwarded args */);
}

