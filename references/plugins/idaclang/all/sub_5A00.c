// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5A00
// Name:            sub_5A00
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x5A00 endbr64
//   0x5A04 jmp     sub_5980
//
// Resolved target: sub_5980
// Target address:  0x5980
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_5A00(/* see target signature */)
{
    // Tail-call to sub_5980 via direct jump indirection
    return sub_5980(/* forwarded args */);
}

