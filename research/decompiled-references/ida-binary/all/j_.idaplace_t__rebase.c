// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191930
// Name:            j_.idaplace_t__rebase
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x191930 jmp     _idaplace_t__rebase
//
// Resolved target: .idaplace_t__rebase
// Target address:  0x113EB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to .idaplace_t__rebase via direct jump indirection
    return .idaplace_t__rebase(/* forwarded args */);
}

