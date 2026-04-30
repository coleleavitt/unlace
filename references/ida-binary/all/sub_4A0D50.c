// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4A0D50
// Name:            sub_4A0D50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4A0D50 jmp     sub_548030
//
// Resolved target: sub_548030
// Target address:  0x548030
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_4A0D50(/* see target signature */)
{
    // Tail-call to sub_548030 via direct jump indirection
    return sub_548030(/* forwarded args */);
}

