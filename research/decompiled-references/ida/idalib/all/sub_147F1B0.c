// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x147F1B0
// Name:            sub_147F1B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x147F1B0 jmp     sub_147F000
//
// Resolved target: sub_147F000
// Target address:  0x147F000
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _BOOL8 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_147F1B0(/* see target signature */)
{
    // Tail-call to sub_147F000 via direct jump indirection
    return sub_147F000(/* forwarded args */);
}

