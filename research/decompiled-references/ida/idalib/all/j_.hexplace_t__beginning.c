// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x425270
// Name:            j_.hexplace_t__beginning
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x425270 jmp     _hexplace_t__beginning
//
// Resolved target: .hexplace_t__beginning
// Target address:  0x2AA7F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__beginning(/* see target signature */)
{
    // Tail-call to .hexplace_t__beginning via direct jump indirection
    return .hexplace_t__beginning(/* forwarded args */);
}

