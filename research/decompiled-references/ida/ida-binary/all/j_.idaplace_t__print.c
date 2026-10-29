// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191A20
// Name:            j_.idaplace_t__print
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x191A20 jmp     _idaplace_t__print
//
// Resolved target: .idaplace_t__print
// Target address:  0x118320
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__print(/* see target signature */)
{
    // Tail-call to .idaplace_t__print via direct jump indirection
    return .idaplace_t__print(/* forwarded args */);
}

