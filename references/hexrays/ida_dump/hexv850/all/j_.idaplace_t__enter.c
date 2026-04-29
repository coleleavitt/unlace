// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37C890
// Name:            j_.idaplace_t__enter
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37C890 jmp     _idaplace_t__enter
//
// Resolved target: .idaplace_t__enter
// Target address:  0x2B960
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__enter(/* see target signature */)
{
    // Tail-call to .idaplace_t__enter via direct jump indirection
    return .idaplace_t__enter(/* forwarded args */);
}

