// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x346740
// Name:            sub_346740
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x346740 jmp     sub_345E40
//
// Resolved target: sub_345E40
// Target address:  0x345E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_346740(/* see target signature */)
{
    // Tail-call to sub_345E40 via direct jump indirection
    return sub_345E40(/* forwarded args */);
}

