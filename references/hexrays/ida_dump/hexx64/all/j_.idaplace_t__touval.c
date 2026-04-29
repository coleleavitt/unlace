// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x382A20
// Name:            j_.idaplace_t__touval
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x382A20 jmp     _idaplace_t__touval
//
// Resolved target: .idaplace_t__touval
// Target address:  0x2B140
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__touval(/* see target signature */)
{
    // Tail-call to .idaplace_t__touval via direct jump indirection
    return .idaplace_t__touval(/* forwarded args */);
}

