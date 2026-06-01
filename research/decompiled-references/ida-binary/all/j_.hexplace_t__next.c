// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8090
// Name:            j_.hexplace_t__next
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8090 jmp     _hexplace_t__next
//
// Resolved target: .hexplace_t__next
// Target address:  0x119910
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__next(/* see target signature */)
{
    // Tail-call to .hexplace_t__next via direct jump indirection
    return .hexplace_t__next(/* forwarded args */);
}

