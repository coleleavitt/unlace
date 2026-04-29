// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1A0E0
// Name:            sub_1A0E0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x1A0E0 endbr64
//   0x1A0E4 jmp     sub_1A060
//
// Resolved target: sub_1A060
// Target address:  0x1A060
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1A0E0(/* see target signature */)
{
    // Tail-call to sub_1A060 via direct jump indirection
    return sub_1A060(/* forwarded args */);
}

