// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3829E0
// Name:            j_.idaplace_t__compare
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3829E0 jmp     _idaplace_t__compare
//
// Resolved target: .idaplace_t__compare
// Target address:  0x2BFE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__compare(/* see target signature */)
{
    // Tail-call to .idaplace_t__compare via direct jump indirection
    return .idaplace_t__compare(/* forwarded args */);
}

