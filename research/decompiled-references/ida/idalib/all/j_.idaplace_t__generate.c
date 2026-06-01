// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B140
// Name:            j_.idaplace_t__generate
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B140 jmp     _idaplace_t__generate
//
// Resolved target: .idaplace_t__generate
// Target address:  0x2A9F40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__generate(/* see target signature */)
{
    // Tail-call to .idaplace_t__generate via direct jump indirection
    return .idaplace_t__generate(/* forwarded args */);
}

