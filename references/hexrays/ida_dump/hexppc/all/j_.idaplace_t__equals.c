// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37E760
// Name:            j_.idaplace_t__equals
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37E760 jmp     _idaplace_t__equals
//
// Resolved target: .idaplace_t__equals
// Target address:  0x2A4C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__equals(/* see target signature */)
{
    // Tail-call to .idaplace_t__equals via direct jump indirection
    return .idaplace_t__equals(/* forwarded args */);
}

