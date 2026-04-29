// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x382ED0
// Name:            j_.idaplace_t__ending
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x382ED0 jmp     _idaplace_t__ending
//
// Resolved target: .idaplace_t__ending
// Target address:  0x2EAD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__ending(/* see target signature */)
{
    // Tail-call to .idaplace_t__ending via direct jump indirection
    return .idaplace_t__ending(/* forwarded args */);
}

