// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B190
// Name:            j_.idaplace_t__adjust
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B190 jmp     _idaplace_t__adjust
//
// Resolved target: .idaplace_t__adjust
// Target address:  0x2A97D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to .idaplace_t__adjust via direct jump indirection
    return .idaplace_t__adjust(/* forwarded args */);
}

