// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B0C0
// Name:            j_.idaplace_t__leave
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B0C0 jmp     _idaplace_t__leave
//
// Resolved target: .idaplace_t__leave
// Target address:  0x2A9B10
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__leave(/* see target signature */)
{
    // Tail-call to .idaplace_t__leave via direct jump indirection
    return .idaplace_t__leave(/* forwarded args */);
}

