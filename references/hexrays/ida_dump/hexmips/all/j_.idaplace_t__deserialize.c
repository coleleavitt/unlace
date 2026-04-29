// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37DA60
// Name:            j_.idaplace_t__deserialize
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37DA60 jmp     _idaplace_t__deserialize
//
// Resolved target: .idaplace_t__deserialize
// Target address:  0x2BE30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to .idaplace_t__deserialize via direct jump indirection
    return .idaplace_t__deserialize(/* forwarded args */);
}

