// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55C0A0
// Name:            j_.tiplace_t__leave
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55C0A0 jmp     _tiplace_t__leave
//
// Resolved target: .tiplace_t__leave
// Target address:  0x2A8100
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__leave(/* see target signature */)
{
    // Tail-call to .tiplace_t__leave via direct jump indirection
    return .tiplace_t__leave(/* forwarded args */);
}

