// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B1D0
// Name:            j_.idaplace_t__clone
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B1D0 jmp     _idaplace_t__clone
//
// Resolved target: .idaplace_t__clone
// Target address:  0x2A8470
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__clone(/* see target signature */)
{
    // Tail-call to .idaplace_t__clone via direct jump indirection
    return .idaplace_t__clone(/* forwarded args */);
}

