// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1CE3EE0
// Name:            sub_1CE3EE0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1CE3EE0 jmp     sub_1CE31F0
//
// Resolved target: sub_1CE31F0
// Target address:  0x1CE31F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_1CE3EE0(/* see target signature */)
{
    // Tail-call to sub_1CE31F0 via direct jump indirection
    return sub_1CE31F0(/* forwarded args */);
}

