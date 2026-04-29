// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63DB0
// Name:            sub_63DB0
// Size:            9 bytes (2 instructions)
// Disassembly:
//   0x63DB0 endbr64
//   0x63DB4 jmp     sub_63D30
//
// Resolved target: sub_63D30
// Target address:  0x63D30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_63DB0(/* see target signature */)
{
    // Tail-call to sub_63D30 via direct jump indirection
    return sub_63D30(/* forwarded args */);
}

