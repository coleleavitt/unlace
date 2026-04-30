// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3AAC70
// Name:            j_.tiplace_t__clone
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3AAC70 jmp     _tiplace_t__clone
//
// Resolved target: .tiplace_t__clone
// Target address:  0x114550
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__clone(/* see target signature */)
{
    // Tail-call to .tiplace_t__clone via direct jump indirection
    return .tiplace_t__clone(/* forwarded args */);
}

