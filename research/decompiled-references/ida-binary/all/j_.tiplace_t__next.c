// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3B54E0
// Name:            j_.tiplace_t__next
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3B54E0 jmp     _tiplace_t__next
//
// Resolved target: .tiplace_t__next
// Target address:  0x113F40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__next(/* see target signature */)
{
    // Tail-call to .tiplace_t__next via direct jump indirection
    return .tiplace_t__next(/* forwarded args */);
}

