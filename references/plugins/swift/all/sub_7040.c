// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7040
// Name:            sub_7040
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7040 jmp     sub_6A00
//
// Resolved target: sub_6A00
// Target address:  0x6A00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_7040(/* see target signature */)
{
    // Tail-call to sub_6A00 via direct jump indirection
    return sub_6A00(/* forwarded args */);
}

