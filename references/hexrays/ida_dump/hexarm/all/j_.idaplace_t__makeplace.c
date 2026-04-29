// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x382F30
// Name:            j_.idaplace_t__makeplace
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x382F30 jmp     _idaplace_t__makeplace
//
// Resolved target: .idaplace_t__makeplace
// Target address:  0x2D860
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__makeplace(/* see target signature */)
{
    // Tail-call to .idaplace_t__makeplace via direct jump indirection
    return .idaplace_t__makeplace(/* forwarded args */);
}

