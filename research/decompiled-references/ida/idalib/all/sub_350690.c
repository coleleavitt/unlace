// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x350690
// Name:            sub_350690
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x350690 jmp     sub_34F6F0
//
// Resolved target: sub_34F6F0
// Target address:  0x34F6F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_350690(/* see target signature */)
{
    // Tail-call to sub_34F6F0 via direct jump indirection
    return sub_34F6F0(/* forwarded args */);
}

