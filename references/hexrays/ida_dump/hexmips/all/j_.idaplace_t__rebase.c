// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x37DA20
// Name:            j_.idaplace_t__rebase
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x37DA20 jmp     _idaplace_t__rebase
//
// Resolved target: .idaplace_t__rebase
// Target address:  0x2C170
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to .idaplace_t__rebase via direct jump indirection
    return .idaplace_t__rebase(/* forwarded args */);
}

