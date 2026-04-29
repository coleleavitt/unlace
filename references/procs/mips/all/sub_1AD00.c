// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1AD00
// Name:            sub_1AD00
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1AD00 endbr64
//   0x1AD04 jmp     sub_1AC80
//
// Resolved target: sub_1AC80
// Target address:  0x1AC80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1AD00(/* see target signature */)
{
    // Tail-call to sub_1AC80 via direct jump indirection
    return sub_1AC80(/* forwarded args */);
}

