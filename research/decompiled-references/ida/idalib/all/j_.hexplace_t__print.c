// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x425510
// Name:            j_.hexplace_t__print
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x425510 jmp     _hexplace_t__print
//
// Resolved target: .hexplace_t__print
// Target address:  0x2AD6F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__print(/* see target signature */)
{
    // Tail-call to .hexplace_t__print via direct jump indirection
    return .hexplace_t__print(/* forwarded args */);
}

