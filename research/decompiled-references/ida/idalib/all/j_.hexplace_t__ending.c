// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4252C0
// Name:            j_.hexplace_t__ending
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4252C0 jmp     _hexplace_t__ending
//
// Resolved target: .hexplace_t__ending
// Target address:  0x2AB7B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__ending(/* see target signature */)
{
    // Tail-call to .hexplace_t__ending via direct jump indirection
    return .hexplace_t__ending(/* forwarded args */);
}

