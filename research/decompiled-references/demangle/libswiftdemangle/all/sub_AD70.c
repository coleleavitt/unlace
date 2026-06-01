// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD70
// Name:            sub_AD70
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0xAD70 endbr64
//   0xAD74 jmp     sub_ACF0
//
// Resolved target: sub_ACF0
// Target address:  0xACF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_AD70(/* see target signature */)
{
    // Tail-call to sub_ACF0 via direct jump indirection
    return sub_ACF0(/* forwarded args */);
}

