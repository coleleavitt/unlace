// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D2E0
// Name:            .idaplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D2E0 jmp     cs:off_4EE158
//
// Resolved target: idaplace_t__rebase
// Target address:  0x4F24B0
// GOT/IAT slot:    0x4EE158
// Slot symbol:     off_4EE158
// Target type:     <no type info>
// ============================================================

void .idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to idaplace_t__rebase via GOT/IAT indirection
    return idaplace_t__rebase(/* forwarded args */);
}

