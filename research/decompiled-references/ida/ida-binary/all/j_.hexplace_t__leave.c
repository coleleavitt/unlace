// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8000
// Name:            j_.hexplace_t__leave
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8000 jmp     _hexplace_t__leave
//
// Resolved target: .hexplace_t__leave
// Target address:  0x111860
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__leave(/* see target signature */)
{
    // Tail-call to .hexplace_t__leave via direct jump indirection
    return .hexplace_t__leave(/* forwarded args */);
}

