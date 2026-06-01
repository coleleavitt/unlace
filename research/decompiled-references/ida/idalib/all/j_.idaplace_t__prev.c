// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B180
// Name:            j_.idaplace_t__prev
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B180 jmp     _idaplace_t__prev
//
// Resolved target: .idaplace_t__prev
// Target address:  0x2ACA30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__prev(/* see target signature */)
{
    // Tail-call to .idaplace_t__prev via direct jump indirection
    return .idaplace_t__prev(/* forwarded args */);
}

