// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B1B0
// Name:            j_.idaplace_t__makeplace
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B1B0 jmp     _idaplace_t__makeplace
//
// Resolved target: .idaplace_t__makeplace
// Target address:  0x2AD870
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__makeplace(/* see target signature */)
{
    // Tail-call to .idaplace_t__makeplace via direct jump indirection
    return .idaplace_t__makeplace(/* forwarded args */);
}

