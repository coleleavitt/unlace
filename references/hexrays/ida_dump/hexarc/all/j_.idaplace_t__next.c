// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37B0B0
// Name:            j_.idaplace_t__next
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37B0B0 jmp     _idaplace_t__next
//
// Resolved target: .idaplace_t__next
// Target address:  0x29430
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__next(/* see target signature */)
{
    // Tail-call to .idaplace_t__next via direct jump indirection
    return .idaplace_t__next(/* forwarded args */);
}

