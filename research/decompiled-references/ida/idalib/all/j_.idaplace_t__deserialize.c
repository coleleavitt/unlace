// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36B120
// Name:            j_.idaplace_t__deserialize
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x36B120 jmp     _idaplace_t__deserialize
//
// Resolved target: .idaplace_t__deserialize
// Target address:  0x2A8BA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to .idaplace_t__deserialize via direct jump indirection
    return .idaplace_t__deserialize(/* forwarded args */);
}

