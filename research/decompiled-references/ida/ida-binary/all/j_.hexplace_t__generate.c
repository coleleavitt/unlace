// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8060
// Name:            j_.hexplace_t__generate
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8060 jmp     _hexplace_t__generate
//
// Resolved target: .hexplace_t__generate
// Target address:  0x11ACD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__generate(/* see target signature */)
{
    // Tail-call to .hexplace_t__generate via direct jump indirection
    return .hexplace_t__generate(/* forwarded args */);
}

