// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2119E00
// Name:            sub_2119E00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2119E00 jmp     sub_227D790
//
// Resolved target: sub_227D790
// Target address:  0x227D790
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_2119E00(/* see target signature */)
{
    // Tail-call to sub_227D790 via direct jump indirection
    return sub_227D790(/* forwarded args */);
}

