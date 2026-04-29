// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37E8B0
// Name:            j_.idaplace_t__print
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37E8B0 jmp     _idaplace_t__print
//
// Resolved target: .idaplace_t__print
// Target address:  0x2B7D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__print(/* see target signature */)
{
    // Tail-call to .idaplace_t__print via direct jump indirection
    return .idaplace_t__print(/* forwarded args */);
}

