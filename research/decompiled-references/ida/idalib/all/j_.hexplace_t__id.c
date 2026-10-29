// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x425350
// Name:            j_.hexplace_t__id
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x425350 jmp     _hexplace_t__id
//
// Resolved target: .hexplace_t__id
// Target address:  0x2A93F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ j_.hexplace_t__id(/* see target signature */)
{
    // Tail-call to .hexplace_t__id via direct jump indirection
    return .hexplace_t__id(/* forwarded args */);
}

