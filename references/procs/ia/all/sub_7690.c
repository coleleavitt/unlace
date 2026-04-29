// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7690
// Name:            sub_7690
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x7690 endbr64
//   0x7694 jmp     sub_7610
//
// Resolved target: sub_7610
// Target address:  0x7610
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_7690(/* see target signature */)
{
    // Tail-call to sub_7610 via direct jump indirection
    return sub_7610(/* forwarded args */);
}

