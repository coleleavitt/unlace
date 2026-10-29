// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3B54D0
// Name:            j_.tiplace_t__ending
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3B54D0 jmp     _tiplace_t__ending
//
// Resolved target: .tiplace_t__ending
// Target address:  0x117000
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__ending(/* see target signature */)
{
    // Tail-call to .tiplace_t__ending via direct jump indirection
    return .tiplace_t__ending(/* forwarded args */);
}

