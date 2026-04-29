// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x297F0
// Name:            .idaplace_t__toea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x297F0 jmp     cs:off_4B93E0
//
// Resolved target: idaplace_t__toea
// Target address:  0x4BBDB0
// GOT/IAT slot:    0x4B93E0
// Slot symbol:     off_4B93E0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__toea(/* see target signature */)
{
    // Tail-call to idaplace_t__toea via GOT/IAT indirection
    return idaplace_t__toea(/* forwarded args */);
}

