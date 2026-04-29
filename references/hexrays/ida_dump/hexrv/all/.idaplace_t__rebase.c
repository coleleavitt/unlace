// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C160
// Name:            .idaplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C160 jmp     cs:off_4C0098
//
// Resolved target: idaplace_t__rebase
// Target address:  0x4C35C8
// GOT/IAT slot:    0x4C0098
// Slot symbol:     off_4C0098
// Target type:     <no type info>
// ============================================================

void .idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to idaplace_t__rebase via GOT/IAT indirection
    return idaplace_t__rebase(/* forwarded args */);
}

