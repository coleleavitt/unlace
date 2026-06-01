// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55FF00
// Name:            j_.tiplace_t__adjust
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55FF00 jmp     _tiplace_t__adjust
//
// Resolved target: .tiplace_t__adjust
// Target address:  0x2A9AF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__adjust(/* see target signature */)
{
    // Tail-call to .tiplace_t__adjust via direct jump indirection
    return .tiplace_t__adjust(/* forwarded args */);
}

