// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x425020
// Name:            j_.hexplace_t__clone
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x425020 jmp     _hexplace_t__clone
//
// Resolved target: .hexplace_t__clone
// Target address:  0x2A7790
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__clone(/* see target signature */)
{
    // Tail-call to .hexplace_t__clone via direct jump indirection
    return .hexplace_t__clone(/* forwarded args */);
}

