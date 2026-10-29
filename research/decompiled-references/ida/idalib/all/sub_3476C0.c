// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3476C0
// Name:            sub_3476C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3476C0 jmp     sub_346750
//
// Resolved target: sub_346750
// Target address:  0x346750
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_3476C0(/* see target signature */)
{
    // Tail-call to sub_346750 via direct jump indirection
    return sub_346750(/* forwarded args */);
}

