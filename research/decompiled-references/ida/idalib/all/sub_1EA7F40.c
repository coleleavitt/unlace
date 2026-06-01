// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1EA7F40
// Name:            sub_1EA7F40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1EA7F40 jmp     sub_2220490
//
// Resolved target: sub_2220490
// Target address:  0x2220490
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(void)
// ============================================================

/* see target sig */ sub_1EA7F40(/* see target signature */)
{
    // Tail-call to sub_2220490 via direct jump indirection
    return sub_2220490(/* forwarded args */);
}

