// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x425230
// Name:            j_.hexplace_t__next
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x425230 jmp     _hexplace_t__next
//
// Resolved target: .hexplace_t__next
// Target address:  0x2AC550
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__next(/* see target signature */)
{
    // Tail-call to .hexplace_t__next via direct jump indirection
    return .hexplace_t__next(/* forwarded args */);
}

