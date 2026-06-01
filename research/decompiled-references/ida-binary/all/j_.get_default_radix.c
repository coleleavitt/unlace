// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCDD0
// Name:            j_.get_default_radix
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2DCDD0 jmp     _get_default_radix
//
// Resolved target: .get_default_radix
// Target address:  0x119460
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(void)
// ============================================================

/* see target sig */ j_.get_default_radix(/* see target signature */)
{
    // Tail-call to .get_default_radix via direct jump indirection
    return .get_default_radix(/* forwarded args */);
}

