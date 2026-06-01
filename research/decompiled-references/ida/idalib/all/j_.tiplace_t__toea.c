// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55C040
// Name:            j_.tiplace_t__toea
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55C040 jmp     _tiplace_t__toea
//
// Resolved target: .tiplace_t__toea
// Target address:  0x2A9940
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__toea(/* see target signature */)
{
    // Tail-call to .tiplace_t__toea via direct jump indirection
    return .tiplace_t__toea(/* forwarded args */);
}

