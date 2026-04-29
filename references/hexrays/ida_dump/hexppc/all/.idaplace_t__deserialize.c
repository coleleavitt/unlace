// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE20
// Name:            .idaplace_t__deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE20 jmp     cs:off_4DAEF8
//
// Resolved target: idaplace_t__deserialize
// Target address:  0x4DD928
// GOT/IAT slot:    0x4DAEF8
// Slot symbol:     off_4DAEF8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__deserialize(/* see target signature */)
{
    // Tail-call to idaplace_t__deserialize via GOT/IAT indirection
    return idaplace_t__deserialize(/* forwarded args */);
}

