// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F1A0
// Name:            .idaplace_t__rebase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F1A0 jmp     cs:off_4EA0B8
//
// Resolved target: idaplace_t__rebase
// Target address:  0x4ECB10
// GOT/IAT slot:    0x4EA0B8
// Slot symbol:     off_4EA0B8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__rebase(/* see target signature */)
{
    // Tail-call to idaplace_t__rebase via GOT/IAT indirection
    return idaplace_t__rebase(/* forwarded args */);
}

