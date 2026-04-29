// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37B030
// Name:            j_.idaplace_t__toea
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37B030 jmp     _idaplace_t__toea
//
// Resolved target: .idaplace_t__toea
// Target address:  0x297F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__toea(/* see target signature */)
{
    // Tail-call to .idaplace_t__toea via direct jump indirection
    return .idaplace_t__toea(/* forwarded args */);
}

