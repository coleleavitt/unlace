// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3828E0
// Name:            j_.idaplace_t__equals
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3828E0 jmp     _idaplace_t__equals
//
// Resolved target: .idaplace_t__equals
// Target address:  0x2B4D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__equals(/* see target signature */)
{
    // Tail-call to .idaplace_t__equals via direct jump indirection
    return .idaplace_t__equals(/* forwarded args */);
}

