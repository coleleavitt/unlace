// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1741020
// Name:            sub_1741020
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1741020 jmp     sub_19A3E40
//
// Resolved target: sub_19A3E40
// Target address:  0x19A3E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void sub_1741020(/* see target signature */)
{
    // Tail-call to sub_19A3E40 via direct jump indirection
    return sub_19A3E40(/* forwarded args */);
}

