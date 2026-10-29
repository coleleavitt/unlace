// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x425490
// Name:            j_.hexplace_t__leave
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x425490 jmp     _hexplace_t__leave
//
// Resolved target: .hexplace_t__leave
// Target address:  0x2A7540
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__leave(/* see target signature */)
{
    // Tail-call to .hexplace_t__leave via direct jump indirection
    return .hexplace_t__leave(/* forwarded args */);
}

