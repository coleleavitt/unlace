// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8350
// Name:            j_.hexplace_t__name
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8350 jmp     _hexplace_t__name
//
// Resolved target: .hexplace_t__name
// Target address:  0x11B210
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__name(/* see target signature */)
{
    // Tail-call to .hexplace_t__name via direct jump indirection
    return .hexplace_t__name(/* forwarded args */);
}

