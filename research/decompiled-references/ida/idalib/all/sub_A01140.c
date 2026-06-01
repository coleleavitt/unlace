// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA01140
// Name:            sub_A01140
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xA01140 jmp     sub_B70A60
//
// Resolved target: sub_B70A60
// Target address:  0xB70A60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_A01140(/* see target signature */)
{
    // Tail-call to sub_B70A60 via direct jump indirection
    return sub_B70A60(/* forwarded args */);
}

