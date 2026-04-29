// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37B050
// Name:            j_.idaplace_t__id
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37B050 jmp     _idaplace_t__id
//
// Resolved target: .idaplace_t__id
// Target address:  0x29FC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ j_.idaplace_t__id(/* see target signature */)
{
    // Tail-call to .idaplace_t__id via direct jump indirection
    return .idaplace_t__id(/* forwarded args */);
}

