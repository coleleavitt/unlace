// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C80A0
// Name:            j_.hexplace_t__prev
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C80A0 jmp     _hexplace_t__prev
//
// Resolved target: .hexplace_t__prev
// Target address:  0x1138F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__prev(/* see target signature */)
{
    // Tail-call to .hexplace_t__prev via direct jump indirection
    return .hexplace_t__prev(/* forwarded args */);
}

