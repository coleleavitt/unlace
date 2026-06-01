// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A0D30
// Name:            sub_4A0D30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4A0D30 jmp     sub_548010
//
// Resolved target: sub_548010
// Target address:  0x548010
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_4A0D30(/* see target signature */)
{
    // Tail-call to sub_548010 via direct jump indirection
    return sub_548010(/* forwarded args */);
}

