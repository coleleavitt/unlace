// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x747530
// Name:            sub_747530
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x747530 jmp     sub_7A0520
//
// Resolved target: sub_7A0520
// Target address:  0x7A0520
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_747530(/* see target signature */)
{
    // Tail-call to sub_7A0520 via direct jump indirection
    return sub_7A0520(/* forwarded args */);
}

