// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x335D70
// Name:            sub_335D70
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x335D70 jmp     sub_334800
//
// Resolved target: sub_334800
// Target address:  0x334800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_335D70(/* see target signature */)
{
    // Tail-call to sub_334800 via direct jump indirection
    return sub_334800(/* forwarded args */);
}

