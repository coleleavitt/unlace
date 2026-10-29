// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55C080
// Name:            j_.tiplace_t__enter
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55C080 jmp     _tiplace_t__enter
//
// Resolved target: .tiplace_t__enter
// Target address:  0x2AA4E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__enter(/* see target signature */)
{
    // Tail-call to .tiplace_t__enter via direct jump indirection
    return .tiplace_t__enter(/* forwarded args */);
}

