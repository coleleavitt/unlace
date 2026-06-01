// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x303D40
// Name:            sub_303D40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x303D40 jmp     sub_302C80
//
// Resolved target: sub_302C80
// Target address:  0x302C80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_303D40(/* see target signature */)
{
    // Tail-call to sub_302C80 via direct jump indirection
    return sub_302C80(/* forwarded args */);
}

