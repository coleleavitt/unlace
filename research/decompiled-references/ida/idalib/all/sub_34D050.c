// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34D050
// Name:            sub_34D050
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x34D050 jmp     sub_34C040
//
// Resolved target: sub_34C040
// Target address:  0x34C040
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_34D050(/* see target signature */)
{
    // Tail-call to sub_34C040 via direct jump indirection
    return sub_34C040(/* forwarded args */);
}

