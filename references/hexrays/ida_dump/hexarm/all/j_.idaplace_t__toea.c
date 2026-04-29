// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x382E70
// Name:            j_.idaplace_t__toea
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x382E70 jmp     _idaplace_t__toea
//
// Resolved target: .idaplace_t__toea
// Target address:  0x2D800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__toea(/* see target signature */)
{
    // Tail-call to .idaplace_t__toea via direct jump indirection
    return .idaplace_t__toea(/* forwarded args */);
}

