// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55A520
// Name:            j_.tiplace_t__makeplace
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55A520 jmp     _tiplace_t__makeplace
//
// Resolved target: .tiplace_t__makeplace
// Target address:  0x2AD6E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__makeplace(/* see target signature */)
{
    // Tail-call to .tiplace_t__makeplace via direct jump indirection
    return .tiplace_t__makeplace(/* forwarded args */);
}

