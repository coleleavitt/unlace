// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8020
// Name:            j_.hexplace_t__rebase
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8020 jmp     _hexplace_t__rebase
//
// Resolved target: .hexplace_t__rebase
// Target address:  0x117B30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.hexplace_t__rebase(/* see target signature */)
{
    // Tail-call to .hexplace_t__rebase via direct jump indirection
    return .hexplace_t__rebase(/* forwarded args */);
}

