// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37DA40
// Name:            j_.idaplace_t__name
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37DA40 jmp     _idaplace_t__name
//
// Resolved target: .idaplace_t__name
// Target address:  0x2BBB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__name(/* see target signature */)
{
    // Tail-call to .idaplace_t__name via direct jump indirection
    return .idaplace_t__name(/* forwarded args */);
}

