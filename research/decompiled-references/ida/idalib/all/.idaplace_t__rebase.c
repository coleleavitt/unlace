// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8EC0
// Name:            .idaplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8EC0 jmp     cs:off_2C79F48
//
// Resolved target: idaplace_t__rebase
// Target address:  0x42ADD0
// GOT/IAT slot:    0x2C79F48
// Slot symbol:     off_2C79F48
// Target type:     <no type info>
// ============================================================

void .idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to idaplace_t__rebase via GOT/IAT indirection
    return idaplace_t__rebase(/* forwarded args */);
}

