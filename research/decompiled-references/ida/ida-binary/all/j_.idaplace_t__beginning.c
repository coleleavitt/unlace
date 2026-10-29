// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1919A0
// Name:            j_.idaplace_t__beginning
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1919A0 jmp     _idaplace_t__beginning
//
// Resolved target: .idaplace_t__beginning
// Target address:  0x11B1A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__beginning(/* see target signature */)
{
    // Tail-call to .idaplace_t__beginning via direct jump indirection
    return .idaplace_t__beginning(/* forwarded args */);
}

