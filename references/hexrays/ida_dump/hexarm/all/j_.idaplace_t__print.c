// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x382F70
// Name:            j_.idaplace_t__print
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x382F70 jmp     _idaplace_t__print
//
// Resolved target: .idaplace_t__print
// Target address:  0x2E810
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__print(/* see target signature */)
{
    // Tail-call to .idaplace_t__print via direct jump indirection
    return .idaplace_t__print(/* forwarded args */);
}

