// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55C020
// Name:            j_.tiplace_t__name
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55C020 jmp     _tiplace_t__name
//
// Resolved target: .tiplace_t__name
// Target address:  0x2A7A40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__name(/* see target signature */)
{
    // Tail-call to .tiplace_t__name via direct jump indirection
    return .tiplace_t__name(/* forwarded args */);
}

