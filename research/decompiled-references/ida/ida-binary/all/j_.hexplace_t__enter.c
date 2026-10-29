// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8010
// Name:            j_.hexplace_t__enter
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8010 jmp     _hexplace_t__enter
//
// Resolved target: .hexplace_t__enter
// Target address:  0x116480
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__enter(/* see target signature */)
{
    // Tail-call to .hexplace_t__enter via direct jump indirection
    return .hexplace_t__enter(/* forwarded args */);
}

