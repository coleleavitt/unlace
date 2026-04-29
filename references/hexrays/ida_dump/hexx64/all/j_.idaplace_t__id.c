// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x382950
// Name:            j_.idaplace_t__id
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x382950 jmp     _idaplace_t__id
//
// Resolved target: .idaplace_t__id
// Target address:  0x2C040
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(int, double)
// ============================================================

/* see target sig */ j_.idaplace_t__id(/* see target signature */)
{
    // Tail-call to .idaplace_t__id via direct jump indirection
    return .idaplace_t__id(/* forwarded args */);
}

