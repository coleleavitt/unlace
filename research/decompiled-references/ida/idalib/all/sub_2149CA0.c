// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2149CA0
// Name:            sub_2149CA0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2149CA0 jmp     sub_21546A0
//
// Resolved target: sub_21546A0
// Target address:  0x21546A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(void)
// ============================================================

/* see target sig */ sub_2149CA0(/* see target signature */)
{
    // Tail-call to sub_21546A0 via direct jump indirection
    return sub_21546A0(/* forwarded args */);
}

