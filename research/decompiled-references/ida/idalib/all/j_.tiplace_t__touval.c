// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55A470
// Name:            j_.tiplace_t__touval
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x55A470 jmp     _tiplace_t__touval
//
// Resolved target: .tiplace_t__touval
// Target address:  0x2A9DA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.tiplace_t__touval(/* see target signature */)
{
    // Tail-call to .tiplace_t__touval via direct jump indirection
    return .tiplace_t__touval(/* forwarded args */);
}

