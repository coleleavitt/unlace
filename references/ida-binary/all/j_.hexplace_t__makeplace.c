// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C80C0
// Name:            j_.hexplace_t__makeplace
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C80C0 jmp     _hexplace_t__makeplace
//
// Resolved target: .hexplace_t__makeplace
// Target address:  0x116110
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__makeplace(/* see target signature */)
{
    // Tail-call to .hexplace_t__makeplace via direct jump indirection
    return .hexplace_t__makeplace(/* forwarded args */);
}

