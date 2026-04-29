// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF50
// Name:            .idaplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF50 jmp     cs:off_4EDF90
//
// Resolved target: idaplace_t__deserialize
// Target address:  0x4F22E0
// GOT/IAT slot:    0x4EDF90
// Slot symbol:     off_4EDF90
// Target type:     <no type info>
// ============================================================

void .idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to idaplace_t__deserialize via GOT/IAT indirection
    return idaplace_t__deserialize(/* forwarded args */);
}

