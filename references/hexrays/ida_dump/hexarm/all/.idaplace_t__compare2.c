// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E8E0
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E8E0 jmp     cs:off_4E9C58
//
// Resolved target: idaplace_t__compare2
// Target address:  0x4EC690
// GOT/IAT slot:    0x4E9C58
// Slot symbol:     off_4E9C58
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

