// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C80E0
// Name:            j_.hexplace_t__touval
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C80E0 jmp     _hexplace_t__touval
//
// Resolved target: .hexplace_t__touval
// Target address:  0x116000
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__touval(/* see target signature */)
{
    // Tail-call to .hexplace_t__touval via direct jump indirection
    return .hexplace_t__touval(/* forwarded args */);
}

