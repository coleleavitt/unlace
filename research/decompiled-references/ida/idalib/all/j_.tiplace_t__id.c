// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55C000
// Name:            j_.tiplace_t__id
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55C000 jmp     _tiplace_t__id
//
// Resolved target: .tiplace_t__id
// Target address:  0x2A9E30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ j_.tiplace_t__id(/* see target signature */)
{
    // Tail-call to .tiplace_t__id via direct jump indirection
    return .tiplace_t__id(/* forwarded args */);
}

