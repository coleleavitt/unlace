// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37B100
// Name:            j_.idaplace_t__copyfrom
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37B100 jmp     _idaplace_t__copyfrom
//
// Resolved target: .idaplace_t__copyfrom
// Target address:  0x298B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to .idaplace_t__copyfrom via direct jump indirection
    return .idaplace_t__copyfrom(/* forwarded args */);
}

